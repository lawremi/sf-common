#ifndef __SFWIKI_KWDASUBRECORD_H
#define __SFWIKI_KWDASUBRECORD_H


#include "subrecord.h"


namespace sfwiki {

	class CKwdaSubrecord : public CSubrecord {
		DECLARE_ALLOCATOR(CKwdaSubrecord, CSubrecord)

		/*---------- Begin Protected Class Members --------------------*/
	protected:
		formid_t*		m_pData;


		/*---------- Begin Protected Class Methods --------------------*/
	protected:

		/* Output the raw subrecord data */
		virtual bool ReadData(CFile& File);
		virtual bool WriteData(CFile& File);


		/*---------- Begin Public Class Methods -----------------------*/
	public:

		/* Class Constructors/Destructors */
		CKwdaSubrecord();
		virtual ~CKwdaSubrecord();
		virtual void Destroy(void);

		/* Allocate a raw buffer */
		void AllocateNew(const dword Size);

		/* Copy the content from an existing subrecord */
		virtual bool Copy(CSubrecord* pSubrecord);

		//virtual CSubrecord* CreateV(void) { return new CKwdaSubrecord; }

		/* Get class members */

		virtual byte*	GetData(void) { return ((byte *)m_pData); }
        virtual formid_t*	GetKwdaData(void) { return (m_pData); }
		virtual dword	GetKwdaDataLength(void) { return (m_RecordSize / sizeof(formid_t)); }

        void CKwdaSubrecord::SetData(const formid_t* pData, const word Size);

		virtual void InitializeNew(void) { m_RecordSize = 0; delete m_pData; m_pData = NULL; }

	};
	
}
#endif