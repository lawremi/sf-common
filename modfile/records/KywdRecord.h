#pragma once
#ifndef __SFWIKI_KYWD_RECORD_H
#define __SFWIKI_KYWD_RECORD_H


#include "record.h"
#include "../subrecords/stringSubrecord.h"


namespace sfwiki {

	class CKywdRecord : public CRecord
	{
		DECLARE_SUBRECCREATE()
		DECLARE_ALLOCATOR(CKywdRecord, CRecord)

		/*---------- Begin Protected Class Members --------------------*/
	protected:


		/*---------- Begin Protected Class Methods --------------------*/
	protected:


		/*---------- Begin Public Class Methods -----------------------*/
	public:

		/* Class Constructors/Destructors */
		CKywdRecord();
		virtual void Destroy(void);

		/* Initialize a new record */
		void InitializeNew(void);
	};

}
#endif