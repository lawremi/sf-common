#include "KwdaSubrecord.h"


namespace sfwiki {

	CKwdaSubrecord::CKwdaSubrecord() :
		m_pData(NULL)
	{

	}


	CKwdaSubrecord::~CKwdaSubrecord()
	{

		if (m_pData != NULL) {
			delete[] m_pData;
		}

	}


	void CKwdaSubrecord::Destroy(void)
	{

		if (m_pData != NULL) {
			delete[] m_pData;
			m_pData = NULL;
		}

	}


	void CKwdaSubrecord::AllocateNew(const dword Size) {

		if (m_pData != NULL) {
			delete[] m_pData;
			m_pData = NULL;
		}

		m_RecordSize = Size;

		m_pData = new formid_t[Size / sizeof(formid_t)];
	}


	bool CKwdaSubrecord::Copy(CSubrecord* pSubrecord) {
		CKwdaSubrecord* pData;

		if (pSubrecord == NULL) return (false);

		pData = dynamic_cast<CKwdaSubrecord *>(pSubrecord);
		if (pData == NULL) return (false);

		m_RecordSize = pData->GetRecordSize();
		if (m_RecordSize == 0) return (true);

		m_pData = new formid_t[m_RecordSize / sizeof(formid_t)];

		memcpy(m_pData, pData->GetData(), m_RecordSize);
		return (true);
	}


	bool CKwdaSubrecord::ReadData(CFile& File) {
		bool Result;

		/* Delete any existing raw data */
		if (m_pData != NULL) {
			delete[] m_pData;
			m_pData = NULL;
		}

		/* Ignore if no data to load */
		if (m_RecordSize == 0) return (true);

		/* Allocate the raw data buffer */
		m_pData = new formid_t[m_RecordSize / sizeof(formid_t)];

		/* Read in the raw data */
		Result = File.Read(m_pData, m_RecordSize);
		return (Result);
	}


	void CKwdaSubrecord::SetData(const formid_t* pData, const word Size) {

		if (m_pData != NULL) {
			delete[] m_pData;
			m_pData = NULL;
			m_RecordSize = 0;
		}

		if (Size == 0) return;

		m_pData = new formid_t[Size / sizeof(formid_t)];
		m_RecordSize = Size;
		memcpy(m_pData, pData, Size);
	}


	bool CKwdaSubrecord::WriteData(CFile& File) {

		if (m_RecordSize > 0 && m_pData != NULL) {
			return File.Write(m_pData, m_RecordSize);
		}

		return (true);
	}

}