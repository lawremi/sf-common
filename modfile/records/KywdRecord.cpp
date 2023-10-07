#include "kywdrecord.h"

namespace sfwiki {


	BEGIN_SUBRECCREATE(CKywdRecord, CRecord)
		DEFINE_SUBRECCREATE(NAME_EDID, CStringSubrecord::Create)
	END_SUBRECCREATE()


	CKywdRecord::CKywdRecord()
	{
	}

	void CKywdRecord::Destroy(void)
	{
		CRecord::Destroy();
	}


	void CKywdRecord::InitializeNew(void)
	{
		CRecord::InitializeNew();
	}

}