#ifndef __SFWIKI_FILE_H
#define __SFWIKI_FILE_H

//#include "errorhandler.h"
#include "types.h"

namespace sfwiki {

	class CFile {

		/*---------- Begin Protected Class Members --------------------*/
	protected:
		FILE*		m_pFile;		/* File handle for file operations */
		string		m_Filename;		/* The currently open file */
		dword		m_LineCount;	/* Used with ReadLine() */


		/*---------- Begin Protected Class Methods --------------------*/
	protected:


		/*---------- Begin Public Class Methods -----------------------*/
	public:

		/* Class Constructors/Destructors */
		CFile();
		virtual ~CFile();
		virtual void Destroy(void);

		/* Clear file errors */
		virtual void ClearErrors(void) { clearerr(m_pFile); }

		/* Close a currently open file */
		virtual void Close(void);

		/* Get class members */
		virtual string GetFilename(void) const { return (m_Filename); }

		/* Get the file size */
		virtual bool  GetFileSize(int& Size);
		virtual bool  GetFileSize64(int64& Size);
		virtual int   GetFileSize(void);
		virtual int64 GetFileSize64(void);

		/* Get class members */
		virtual dword GetLineCount(void) { return (m_LineCount); }

		/* Check class states */
		virtual bool IsOpen(void) const;
		virtual bool IsEOF(void) const { return (feof(m_pFile) != 0); }
		virtual bool HasError(void) const { return (ferror(m_pFile) != 0); }

		/* Attempt to open a file for input or output */
		virtual bool Open(const string Filename, const string FileMode) { return Open(Filename.c_str(), FileMode.c_str()); }
		virtual bool Open(const char_t* pFilename, const char_t* pFileMode);

		virtual bool Printf(const char_t* pString, ...);
		virtual bool VPrintf(const char_t* pString, va_list Args);

		/* Read a raw buffer of bytes */
		virtual bool Read(void* pBuffer, const int Size);
		virtual bool Read(void* pBuffer, const int Size, dword& InputBytes);

		/* Input a line of text from a text file */
		virtual bool ReadLine(string& Buffer);

		/* Shortcut to reading basic types */
		virtual bool ReadByte(byte&    Value) { return Read(&Value, sizeof(byte)); }
		virtual bool ReadWord(word&    Value) { return Read(&Value, sizeof(word)); }
		virtual bool ReadDWord(dword&   Value) { return Read(&Value, sizeof(dword)); }
		virtual bool ReadDWord64(dword64& Value) { return Read(&Value, sizeof(dword64)); }
		virtual bool ReadFloat(float&   Value) { return Read(&Value, sizeof(float)); }
		virtual bool ReadDouble(double&  Value) { return Read(&Value, sizeof(double)); }

		/* Set the file position from start of file */
		virtual bool Seek(const int   Offset);
		virtual bool SeekCur(const int   Offset);
		virtual bool Seek64(const int64 Offset);

		/* Get the current file position */
		virtual bool  Tell(int&   Offset);
		virtual bool  Tell64(int64& Offset);
		virtual int   Tell(void) { return ftell(m_pFile); }
		virtual int64 Tell64(void);

		/* Write a raw buffer of bytes */
		virtual bool Write(const void* pBuffer, const int Size);

		/* Shortcut to writing basic types */
		virtual bool WriteByte(const byte    Value) { return Write(&Value, sizeof(byte)); }
		virtual bool WriteWord(const word    Value) { return Write(&Value, sizeof(word)); }
		virtual bool WriteDWord(const dword   Value) { return Write(&Value, sizeof(dword)); }
		virtual bool WriteDWord64(const dword64 Value) { return Write(&Value, sizeof(dword64)); }
		virtual bool WriteFloat(const float   Value) { return Write(&Value, sizeof(float)); }
		virtual bool WriteDouble(const double  Value) { return Write(&Value, sizeof(double)); }

	};


	  /* Checks is a file exists */
	bool FileExists(const char_t* pFilename);

	/* Checks a file extension */
	bool CheckExtension(const char_t* pFilename, const char_t* pExt);

	bool          MakePathEx(const char_t* pPath);
	char_t*       TerminatePath(char_t* pPath);
	const char_t* TerminatePath(string& Path);
	bool          FileExists(const char_t* pFilename);

	int64 GetFileSize(const char_t* pFilename);
	bool  GetFileSize(int64& FileSize, const char_t* pFilename);

	bool GetFileInfo(const char_t* pFilename, int64& Filesize, dword64& Filetime);
}

#endif
