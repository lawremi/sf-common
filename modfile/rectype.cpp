#include "rectype.h"

namespace sfwiki {

/*===========================================================================
 *
 * Begin Standard Record Names
 *
 *=========================================================================*/

		/* Special names */
	const rectype_t NAME_NULL = "\0\0\0\0";
	const rectype_t NAME_all = "all\0";
	const rectype_t NAME_SCRI = "SCRI";

		/* Special group name */
	const rectype_t NAME_GRUP = "GRUP";  
  
		/* Known record names */
	const rectype_t NAME_AACT = "AACT";
	const rectype_t NAME_ACHR = "ACHR";
	const rectype_t NAME_ACTI = "ACTI";
	const rectype_t NAME_ADDN = "ADDN";
	const rectype_t NAME_ALCH = "ALCH";
	const rectype_t NAME_AMMO = "AMMO";
	const rectype_t NAME_ANIO = "ANIO";
	const rectype_t NAME_APPA = "APPA";
	const rectype_t NAME_ARMA = "ARMA";
	const rectype_t NAME_ARMO = "ARMO";
	const rectype_t NAME_ARTO = "ARTO";
	const rectype_t NAME_ASPC = "ASPC";
	const rectype_t NAME_ASTP = "ASTP";
	const rectype_t NAME_AVIF = "AVIF";
	const rectype_t NAME_BOOK = "BOOK";
	const rectype_t NAME_BPTD = "BPTD";
	const rectype_t NAME_CAMS = "CAMS";
	const rectype_t NAME_CELL = "CELL";
	const rectype_t NAME_CLAS = "CLAS";
	const rectype_t NAME_CLFM = "CLFM";
	const rectype_t NAME_CLMT = "CLMT";
	const rectype_t NAME_COBJ = "COBJ";
	const rectype_t NAME_COLL = "COLL";
	const rectype_t NAME_CONT = "CONT";
	const rectype_t NAME_CPTH = "CPTH";
	const rectype_t NAME_CSTY = "CSTY";
	const rectype_t NAME_DEBR = "DEBR";
	const rectype_t NAME_DIAL = "DIAL";
	const rectype_t NAME_DLBR = "DLBR";
	const rectype_t NAME_DLVW = "DLVW";
	const rectype_t NAME_DOBJ = "DOBJ";
	const rectype_t NAME_DOOR = "DOOR";
	const rectype_t NAME_DUAL = "DUAL";
	const rectype_t NAME_ECZN = "ECZN";
	const rectype_t NAME_EFSH = "EFSH";
	const rectype_t NAME_ENCH = "ENCH";
	const rectype_t NAME_EQUP = "EQUP";
	const rectype_t NAME_EXPL = "EXPL";
	const rectype_t NAME_EYES = "EYES";
	const rectype_t NAME_FACT = "FACT";
	const rectype_t NAME_FLOR = "FLOR";
	const rectype_t NAME_FLST = "FLST";
	const rectype_t NAME_FSTP = "FSTP";
	const rectype_t NAME_FSTS = "FSTS";
	const rectype_t NAME_FURN = "FURN";
	const rectype_t NAME_GLOB = "GLOB";
	const rectype_t NAME_GMST = "GMST";
	const rectype_t NAME_GRAS = "GRAS";
	const rectype_t NAME_HAZD = "HAZD";
	const rectype_t NAME_HDPT = "HDPT";
	const rectype_t NAME_IAD = "IAD";
	const rectype_t NAME_IDLE = "IDLE";
	const rectype_t NAME_IDLM = "IDLM";
	const rectype_t NAME_IMAD = "IMAD";
	const rectype_t NAME_IMGS = "IMGS";
	const rectype_t NAME_INFO = "INFO";
	const rectype_t NAME_INGR = "INGR";
	const rectype_t NAME_IPCT = "IPCT";
	const rectype_t NAME_IPDS = "IPDS";
	const rectype_t NAME_KEYM = "KEYM";
	const rectype_t NAME_KYWD = "KYWD";
	const rectype_t NAME_LAND = "LAND";
	const rectype_t NAME_LCRT = "LCRT";
	const rectype_t NAME_LCTN = "LCTN";
	const rectype_t NAME_LGTM = "LGTM";
	const rectype_t NAME_LIGH = "LIGH";
	const rectype_t NAME_LSCR = "LSCR";
	const rectype_t NAME_LTEX = "LTEX";
	const rectype_t NAME_LVLI = "LVLI";
	const rectype_t NAME_LVLN = "LVLN";
	const rectype_t NAME_LVSP = "LVSP";
	const rectype_t NAME_MATO = "MATO";
	const rectype_t NAME_MATT = "MATT";
	const rectype_t NAME_MESG = "MESG";
	const rectype_t NAME_MGEF = "MGEF";
	const rectype_t NAME_MISC = "MISC";
	const rectype_t NAME_MOVT = "MOVT";
	const rectype_t NAME_MSTT = "MSTT";
	const rectype_t NAME_MUSC = "MUSC";
	const rectype_t NAME_MUST = "MUST";
	const rectype_t NAME_NAVI = "NAVI";
	const rectype_t NAME_NAVM = "NAVM";
	const rectype_t NAME_NPC_ = "NPC_";
	const rectype_t NAME_OTFT = "OTFT";
	const rectype_t NAME_PACK = "PACK";
	const rectype_t NAME_PERK = "PERK";
	const rectype_t NAME_PGRE = "PGRE";
	const rectype_t NAME_PHZD = "PHZD";
	const rectype_t NAME_PROJ = "PROJ";
	const rectype_t NAME_QUST = "QUST";
	const rectype_t NAME_RACE = "RACE";
	const rectype_t NAME_REFR = "REFR";
	const rectype_t NAME_REGN = "REGN";
	const rectype_t NAME_RELA = "RELA";
	const rectype_t NAME_REVB = "REVB";
	const rectype_t NAME_RFCT = "RFCT";
	const rectype_t NAME_SCEN = "SCEN";
	const rectype_t NAME_SCRL = "SCRL";
	const rectype_t NAME_SHOU = "SHOU";
	const rectype_t NAME_SLGM = "SLGM";
	const rectype_t NAME_SMBN = "SMBN";
	const rectype_t NAME_SMEN = "SMEN";
	const rectype_t NAME_SMQN = "SMQN";
	const rectype_t NAME_SNCT = "SNCT";
	const rectype_t NAME_SNDR = "SNDR";
	const rectype_t NAME_SOPM = "SOPM";
	const rectype_t NAME_SOUN = "SOUN";
	const rectype_t NAME_SPEL = "SPEL";
	const rectype_t NAME_SPGD = "SPGD";
	const rectype_t NAME_STAT = "STAT";
	const rectype_t NAME_TACT = "TACT";
	const rectype_t NAME_TES4 = "TES4";
	const rectype_t NAME_TREE = "TREE";
	const rectype_t NAME_TXST = "TXST";
	const rectype_t NAME_VTYP = "VTYP";
	const rectype_t NAME_WATR = "WATR";
	const rectype_t NAME_WEAP = "WEAP";
	const rectype_t NAME_WOOP = "WOOP";
	const rectype_t NAME_WRLD = "WRLD";
	const rectype_t NAME_WTHR = "WTHR";
/*===========================================================================
 *		End of Standard Record Names
 *=========================================================================*/


/*===========================================================================
 *
 * Begin Standard Subrecord Names
 *
 *=========================================================================*/
	const rectype_t NAME_00TX = "00TX";
	const rectype_t NAME_10TX = "10TX";
	const rectype_t NAME_20TX = "20TX";
	const rectype_t NAME_30TX = "30TX";
	const rectype_t NAME_40TX = "40TX";
	const rectype_t NAME_50TX = "50TX";
	const rectype_t NAME_60TX = "60TX";
	const rectype_t NAME_70TX = "70TX";
	const rectype_t NAME_80TX = "80TX";
	const rectype_t NAME_90TX = "90TX";
	const rectype_t NAME_A0TX = "A0TX";
	const rectype_t NAME_ACBS = "ACBS";
	const rectype_t NAME_AHCF = "AHCF";
	const rectype_t NAME_AHCM = "AHCM";
	const rectype_t NAME_AIAD = "AIAD";
	const rectype_t NAME_AIDT = "AIDT";
	const rectype_t NAME_ALCA = "ALCA";
	const rectype_t NAME_ALCL = "ALCL";
	const rectype_t NAME_ALCO = "ALCO";
	const rectype_t NAME_ALDN = "ALDN";
	const rectype_t NAME_ALEA = "ALEA";
	const rectype_t NAME_ALED = "ALED";
	const rectype_t NAME_ALEQ = "ALEQ";
	const rectype_t NAME_ALFA = "ALFA";
	const rectype_t NAME_ALFC = "ALFC";
	const rectype_t NAME_ALFD = "ALFD";
	const rectype_t NAME_ALFE = "ALFE";
	const rectype_t NAME_ALFI = "ALFI";
	const rectype_t NAME_ALFL = "ALFL";
	const rectype_t NAME_ALFR = "ALFR";
	const rectype_t NAME_ALID = "ALID";
	const rectype_t NAME_ALLS = "ALLS";
	const rectype_t NAME_ALNA = "ALNA";
	const rectype_t NAME_ALNT = "ALNT";
	const rectype_t NAME_ALPC = "ALPC";
	const rectype_t NAME_ALRT = "ALRT";
	const rectype_t NAME_ALSP = "ALSP";
	const rectype_t NAME_ALST = "ALST";
	const rectype_t NAME_ALUA = "ALUA";
	const rectype_t NAME_ANAM = "ANAM";
	const rectype_t NAME_ATKD = "ATKD";
	const rectype_t NAME_ATKE = "ATKE";
	const rectype_t NAME_ATKR = "ATKR";
	const rectype_t NAME_ATXT = "ATXT";
	const rectype_t NAME_AVSK = "AVSK";
	const rectype_t NAME_B0TX = "B0TX";
	const rectype_t NAME_BAMT = "BAMT";
	const rectype_t NAME_BIAD = "BIAD";
	const rectype_t NAME_BIDS = "BIDS";
	const rectype_t NAME_BNAM = "BNAM";
	const rectype_t NAME_BODT = "BODT";
	const rectype_t NAME_BPND = "BPND";
	const rectype_t NAME_BPNI = "BPNI";
	const rectype_t NAME_BPNN = "BPNN";
	const rectype_t NAME_BPNT = "BPNT";
	const rectype_t NAME_BPTN = "BPTN";
	const rectype_t NAME_BTXT = "BTXT";
	const rectype_t NAME_C0TX = "C0TX";
	const rectype_t NAME_CIAD = "CIAD";
	const rectype_t NAME_CIS1 = "CIS1";
	const rectype_t NAME_CIS2 = "CIS2";
	const rectype_t NAME_CITC = "CITC";
	const rectype_t NAME_CNAM = "CNAM";
	const rectype_t NAME_CNTO = "CNTO";
	const rectype_t NAME_COCT = "COCT";
	const rectype_t NAME_COED = "COED";
	const rectype_t NAME_CRDT = "CRDT";
	const rectype_t NAME_CRGR = "CRGR";
	const rectype_t NAME_CRIF = "CRIF";
	const rectype_t NAME_CRVA = "CRVA";
	const rectype_t NAME_CSCR = "CSCR";
	const rectype_t NAME_CSDC = "CSDC";
	const rectype_t NAME_CSDI = "CSDI";
	const rectype_t NAME_CSDT = "CSDT";
	const rectype_t NAME_CSFL = "CSFL";
	const rectype_t NAME_CSGD = "CSGD";
	const rectype_t NAME_CSLR = "CSLR";
	const rectype_t NAME_CSMD = "CSMD";
	const rectype_t NAME_CSME = "CSME";
	const rectype_t NAME_CTDA = "CTDA";
	const rectype_t NAME_D0TX = "D0TX";
	const rectype_t NAME_DALC = "DALC";
	const rectype_t NAME_DATA = "DATA";
	const rectype_t NAME_DEMO = "DEMO";
	const rectype_t NAME_DESC = "DESC";
	const rectype_t NAME_DEST = "DEST";
	const rectype_t NAME_DEVA = "DEVA";
	const rectype_t NAME_DFTF = "DFTF";
	const rectype_t NAME_DFTM = "DFTM";
	const rectype_t NAME_DIAD = "DIAD";
	const rectype_t NAME_DMAX = "DMAX";
	const rectype_t NAME_DMDL = "DMDL";
	const rectype_t NAME_DMDS = "DMDS";
	const rectype_t NAME_DMDT = "DMDT";
	const rectype_t NAME_DMIN = "DMIN";
	const rectype_t NAME_DNAM = "DNAM";
	const rectype_t NAME_DODT = "DODT";
	const rectype_t NAME_DOFT = "DOFT";
	const rectype_t NAME_DPLT = "DPLT";
	const rectype_t NAME_DSTD = "DSTD";
	const rectype_t NAME_DSTF = "DSTF";
	const rectype_t NAME_E0TX = "E0TX";
	const rectype_t NAME_EAMT = "EAMT";
	const rectype_t NAME_ECOR = "ECOR";
	const rectype_t NAME_EDID = "EDID";
	const rectype_t NAME_EFID = "EFID";
	const rectype_t NAME_EFIT = "EFIT";
	const rectype_t NAME_EIAD = "EIAD";
	const rectype_t NAME_EITM = "EITM";
	const rectype_t NAME_ENAM = "ENAM";
	const rectype_t NAME_ENIT = "ENIT";
	const rectype_t NAME_EPF2 = "EPF2";
	const rectype_t NAME_EPF3 = "EPF3";
	const rectype_t NAME_EPFD = "EPFD";
	const rectype_t NAME_EPFT = "EPFT";
	const rectype_t NAME_ESCE = "ESCE";	
	const rectype_t NAME_ETYP = "ETYP";
	const rectype_t NAME_F0TX = "F0TX";
	const rectype_t NAME_FCHT = "FCHT";
	const rectype_t NAME_FIAD = "FIAD";
	const rectype_t NAME_FLMV = "FLMV";
	const rectype_t NAME_FLTR = "FLTR";
	const rectype_t NAME_FLTV = "FLTV";
	const rectype_t NAME_FNAM = "FNAM";
	const rectype_t NAME_FNMK = "FNMK";
	const rectype_t NAME_FNPR = "FNPR";
	const rectype_t NAME_FPRT = "FPRT";
	const rectype_t NAME_FTSF = "FTSF";
	const rectype_t NAME_FTSM = "FTSM";
	const rectype_t NAME_FTST = "FTST";
	const rectype_t NAME_FULL = "FULL";
	const rectype_t NAME_G0TX = "G0TX";
	const rectype_t NAME_GIAD = "GIAD";
	const rectype_t NAME_GNAM = "GNAM";
	const rectype_t NAME_H0TX = "H0TX";
	const rectype_t NAME_HCLF = "HCLF";
	const rectype_t NAME_HEAD = "HEAD";
	const rectype_t NAME_HEDR = "HEDR";
	const rectype_t NAME_HIAD = "HIAD";
	const rectype_t NAME_HNAM = "HNAM";
	const rectype_t NAME_HTID = "HTID";
	const rectype_t NAME_I0TX = "I0TX";
	const rectype_t NAME_ICO2 = "ICO2";
	const rectype_t NAME_ICON = "ICON";
	const rectype_t NAME_IDLA = "IDLA";
	const rectype_t NAME_IDLC = "IDLC";
	const rectype_t NAME_IDLF = "IDLF";
	const rectype_t NAME_IDLT = "IDLT";
	const rectype_t NAME_IIAD = "IIAD";
	const rectype_t NAME_IMSP = "IMSP";
	const rectype_t NAME_INAM = "INAM";
	const rectype_t NAME_INDX = "INDX";
	const rectype_t NAME_INTV = "INTV";
	const rectype_t NAME_ITXT = "ITXT";
	const rectype_t NAME_J0TX = "J0TX";
	const rectype_t NAME_JAIL = "JAIL";
	const rectype_t NAME_JIAD = "JIAD";
	const rectype_t NAME_JNAM = "JNAM";
	const rectype_t NAME_JOUT = "JOUT";
	const rectype_t NAME_K0TX = "K0TX";
	const rectype_t NAME_KIAD = "KIAD";
	const rectype_t NAME_KNAM = "KNAM";
	const rectype_t NAME_KSIZ = "KSIZ";
	const rectype_t NAME_KWDA = "KWDA";
	const rectype_t NAME_L0TX = "L0TX";
	const rectype_t NAME_LCEC = "LCEC";
	const rectype_t NAME_LCEP = "LCEP";
	const rectype_t NAME_LCID = "LCID";
	const rectype_t NAME_LCPR = "LCPR";
	const rectype_t NAME_LCSR = "LCSR";
	const rectype_t NAME_LCUN = "LCUN";
	const rectype_t NAME_LIAD = "LIAD";
	const rectype_t NAME_LLCT = "LLCT";
	const rectype_t NAME_LNAM = "LNAM";
	const rectype_t NAME_LTMP = "LTMP";
	const rectype_t NAME_LVLD = "LVLD";
	const rectype_t NAME_LVLF = "LVLF";
	const rectype_t NAME_LVLG = "LVLG";
	const rectype_t NAME_LVLO = "LVLO";
	const rectype_t NAME_MAST = "MAST";
	const rectype_t NAME_MCHT = "MCHT";
	const rectype_t NAME_MDOB = "MDOB";
	const rectype_t NAME_MHDT = "MHDT";
	const rectype_t NAME_MIAD = "MIAD";
	const rectype_t NAME_MICO = "MICO";	
	const rectype_t NAME_MNAM = "MNAM";
	const rectype_t NAME_MO2S = "MO2S";
	const rectype_t NAME_MO2T = "MO2T";
	const rectype_t NAME_MO3S = "MO3S";
	const rectype_t NAME_MO3T = "MO3T";
	const rectype_t NAME_MO4S = "MO4S";
	const rectype_t NAME_MO4T = "MO4T";
	const rectype_t NAME_MO5T = "MO5T";
	const rectype_t NAME_MOD2 = "MOD2";
	const rectype_t NAME_MOD3 = "MOD3";
	const rectype_t NAME_MOD4 = "MOD4";
	const rectype_t NAME_MOD5 = "MOD5";
	const rectype_t NAME_MODL = "MODL";
	const rectype_t NAME_MODS = "MODS";
	const rectype_t NAME_MODT = "MODT";
	const rectype_t NAME_MPAI = "MPAI";
	const rectype_t NAME_MPAV = "MPAV";
	const rectype_t NAME_MPRT = "MPRT";
	const rectype_t NAME_MTNM = "MTNM";
	const rectype_t NAME_MTYP = "MTYP";
	const rectype_t NAME_NAM0 = "NAM0";
	const rectype_t NAME_NAM1 = "NAM1";
	const rectype_t NAME_NAM2 = "NAM2";
	const rectype_t NAME_NAM3 = "NAM3";
	const rectype_t NAME_NAM4 = "NAM4";
	const rectype_t NAME_NAM5 = "NAM5";
	const rectype_t NAME_NAM6 = "NAM6";
	const rectype_t NAME_NAM7 = "NAM7";
	const rectype_t NAME_NAM8 = "NAM8";
	const rectype_t NAME_NAM9 = "NAM9";
	const rectype_t NAME_NAMA = "NAMA";
	const rectype_t NAME_NAME = "NAME";
	const rectype_t NAME_NEXT = "NEXT";
	const rectype_t NAME_NIAD = "NIAD";
	const rectype_t NAME_NNAM = "NNAM";
	const rectype_t NAME_NVER = "NVER";
	const rectype_t NAME_NVMI = "NVMI";
	const rectype_t NAME_NVNM = "NVNM";
	const rectype_t NAME_NVPP = "NVPP";
	const rectype_t NAME_OBND = "OBND";
	const rectype_t NAME_OFST = "OFST";
	const rectype_t NAME_OIAD = "OIAD";
	const rectype_t NAME_ONAM = "ONAM";
	const rectype_t NAME_PDTO = "PDTO";
	const rectype_t NAME_PFIG = "PFIG";
	const rectype_t NAME_PFO2 = "PFO2";
	const rectype_t NAME_PFOR = "PFOR";
	const rectype_t NAME_PFPC = "PFPC";
	const rectype_t NAME_PHTN = "PHTN";
	const rectype_t NAME_PHWT = "PHWT";
	const rectype_t NAME_PIAD = "PIAD";
	const rectype_t NAME_PKC2 = "PKC2";
	const rectype_t NAME_PKCU = "PKCU";
	const rectype_t NAME_PKDT = "PKDT";
	const rectype_t NAME_PKID = "PKID";
	const rectype_t NAME_PLCN = "PLCN";
	const rectype_t NAME_PLDT = "PLDT";
	const rectype_t NAME_PLVD = "PLVD";
	const rectype_t NAME_PNAM = "PNAM";
	const rectype_t NAME_POBA = "POBA";
	const rectype_t NAME_POCA = "POCA";
	const rectype_t NAME_POEA = "POEA";
	const rectype_t NAME_PRCB = "PRCB";
	const rectype_t NAME_PRKC = "PRKC";
	const rectype_t NAME_PRKE = "PRKE";
	const rectype_t NAME_PRKF = "PRKF";
	const rectype_t NAME_PRKR = "PRKR";
	const rectype_t NAME_PRKZ = "PRKZ";
	const rectype_t NAME_PSDT = "PSDT";
	const rectype_t NAME_PTDA = "PTDA";
	const rectype_t NAME_QIAD = "QIAD";
	const rectype_t NAME_QNAM = "QNAM";
	const rectype_t NAME_QOBJ = "QOBJ";
	const rectype_t NAME_QSDT = "QSDT";
	const rectype_t NAME_QSTA = "QSTA";
	const rectype_t NAME_QTGL = "QTGL";
	const rectype_t NAME_QUAL = "QUAL";
	const rectype_t NAME_RCLR = "RCLR";
	const rectype_t NAME_RDAT = "RDAT";
	const rectype_t NAME_RDMO = "RDMO";
	const rectype_t NAME_RDMP = "RDMP";
	const rectype_t NAME_RDOT = "RDOT";
	const rectype_t NAME_RDSA = "RDSA";
	const rectype_t NAME_RDWT = "RDWT";
	const rectype_t NAME_RIAD = "RIAD";
	const rectype_t NAME_RNAM = "RNAM";
	const rectype_t NAME_RNMV = "RNMV";
	const rectype_t NAME_RPLD = "RPLD";
	const rectype_t NAME_RPLI = "RPLI";
	const rectype_t NAME_RPRF = "RPRF";
	const rectype_t NAME_RPRM = "RPRM";
	const rectype_t NAME_SCDA = "SCDA";
	const rectype_t NAME_SCHR = "SCHR";
	const rectype_t NAME_SCRO = "SCRO";
	const rectype_t NAME_SCTX = "SCTX";
	const rectype_t NAME_SDSC = "SDSC";
	const rectype_t NAME_SHRT = "SHRT";
	const rectype_t NAME_SIAD = "SIAD";
	const rectype_t NAME_SLCP = "SLCP";
	const rectype_t NAME_SNAM = "SNAM";
	const rectype_t NAME_SNDD = "SNDD";
	const rectype_t NAME_SNMV = "SNMV";
	const rectype_t NAME_SOFT = "SOFT";
	const rectype_t NAME_SOUL = "SOUL";
	const rectype_t NAME_SPCT = "SPCT";
	const rectype_t NAME_SPED = "SPED";
	const rectype_t NAME_SPIT = "SPIT";
	const rectype_t NAME_SPLO = "SPLO";
	const rectype_t NAME_SPOR = "SPOR";
	const rectype_t NAME_STOL = "STOL";
	const rectype_t NAME_SWMV = "SWMV";
	const rectype_t NAME_TCLT = "TCLT";
	const rectype_t NAME_TIAD = "TIAD";
	const rectype_t NAME_TIAS = "TIAS";
	const rectype_t NAME_TIFC = "TIFC";
	const rectype_t NAME_TINC = "TINC";
	const rectype_t NAME_TIND = "TIND";
	const rectype_t NAME_TINI = "TINI";
	const rectype_t NAME_TINL = "TINL";
	const rectype_t NAME_TINP = "TINP";
	const rectype_t NAME_TINT = "TINT";
	const rectype_t NAME_TINV = "TINV";
	const rectype_t NAME_TIRS = "TIRS";
	const rectype_t NAME_TNAM = "TNAM";
	const rectype_t NAME_TPIC = "TPIC";
	const rectype_t NAME_TPLT = "TPLT";
	const rectype_t NAME_TRDT = "TRDT";
	const rectype_t NAME_TVDT = "TVDT";
	const rectype_t NAME_TWAT = "TWAT";
	const rectype_t NAME_TX00 = "TX00";
	const rectype_t NAME_TX01 = "TX01";
	const rectype_t NAME_TX02 = "TX02";
	const rectype_t NAME_TX03 = "TX03";
	const rectype_t NAME_TX04 = "TX04";
	const rectype_t NAME_TX05 = "TX05";
	const rectype_t NAME_TX07 = "TX07";
	const rectype_t NAME_UNAM = "UNAM";
	const rectype_t NAME_UNES = "UNES";
	const rectype_t NAME_VCLR = "VCLR";
	const rectype_t NAME_VENC = "VENC";
	const rectype_t NAME_VEND = "VEND";
	const rectype_t NAME_VENV = "VENV";
	const rectype_t NAME_VHGT = "VHGT";
	const rectype_t NAME_VMAD = "VMAD";
	const rectype_t NAME_VNAM = "VNAM";
	const rectype_t NAME_VNML = "VNML";
	const rectype_t NAME_VTCK = "VTCK";
	const rectype_t NAME_VTXT = "VTXT";
	const rectype_t NAME_WAIT = "WAIT";
	const rectype_t NAME_WBDT = "WBDT";
	const rectype_t NAME_WCTR = "WCTR";
	const rectype_t NAME_WKMV = "WKMV";
	const rectype_t NAME_WLST = "WLST";
	const rectype_t NAME_WNAM = "WNAM";
	const rectype_t NAME_XACT = "XACT";
	const rectype_t NAME_XALP = "XALP";
	const rectype_t NAME_XAPD = "XAPD";
	const rectype_t NAME_XAPR = "XAPR";
	const rectype_t NAME_XCAS = "XCAS";
	const rectype_t NAME_XCCM = "XCCM";
	const rectype_t NAME_XCIM = "XCIM";
	const rectype_t NAME_XCLC = "XCLC";
	const rectype_t NAME_XCLL = "XCLL";
	const rectype_t NAME_XCLR = "XCLR";
	const rectype_t NAME_XCLW = "XCLW";
	const rectype_t NAME_XCMO = "XCMO";
	const rectype_t NAME_XCNT = "XCNT";
	const rectype_t NAME_XCVL = "XCVL";
	const rectype_t NAME_XCWT = "XCWT";
	const rectype_t NAME_XCZA = "XCZA";
	const rectype_t NAME_XCZC = "XCZC";
	const rectype_t NAME_XEMI = "XEMI";
	const rectype_t NAME_XESP = "XESP";
	const rectype_t NAME_XEZN = "XEZN";
	const rectype_t NAME_XFVC = "XFVC";
	const rectype_t NAME_XHOR = "XHOR";
	const rectype_t NAME_XHTW = "XHTW";
	const rectype_t NAME_XILL = "XILL";
	const rectype_t NAME_XIS2 = "XIS2";
	const rectype_t NAME_XLCM = "XLCM";
	const rectype_t NAME_XLCN = "XLCN";
	const rectype_t NAME_XLIB = "XLIB";
	const rectype_t NAME_XLIG = "XLIG";
	const rectype_t NAME_XLKR = "XLKR";
	const rectype_t NAME_XLOC = "XLOC";
	const rectype_t NAME_XLRM = "XLRM";
	const rectype_t NAME_XLRT = "XLRT";
	const rectype_t NAME_XLTW = "XLTW";
	const rectype_t NAME_XMBO = "XMBO";
	const rectype_t NAME_XMBP = "XMBP";
	const rectype_t NAME_XMBR = "XMBR";
	const rectype_t NAME_XMRK = "XMRK";
	const rectype_t NAME_XNAM = "XNAM";
	const rectype_t NAME_XNDP = "XNDP";
	const rectype_t NAME_XOCP = "XOCP";
	const rectype_t NAME_XOWN = "XOWN";
	const rectype_t NAME_XPOD = "XPOD";
	const rectype_t NAME_XPPA = "XPPA";
	const rectype_t NAME_XPRD = "XPRD";
	const rectype_t NAME_XPRM = "XPRM";
	const rectype_t NAME_XPWR = "XPWR";
	const rectype_t NAME_XRDS = "XRDS";
	const rectype_t NAME_XRGB = "XRGB";
	const rectype_t NAME_XRGD = "XRGD";
	const rectype_t NAME_XRMR = "XRMR";
	const rectype_t NAME_XRNK = "XRNK";
	const rectype_t NAME_XSCL = "XSCL";
	const rectype_t NAME_XSPC = "XSPC";
	const rectype_t NAME_XTEL = "XTEL";
	const rectype_t NAME_XTNM = "XTNM";
	const rectype_t NAME_XTRI = "XTRI";
	const rectype_t NAME_XWCN = "XWCN";
	const rectype_t NAME_XWCS = "XWCS";
	const rectype_t NAME_XWCU = "XWCU";
	const rectype_t NAME_XWEM = "XWEM";
	const rectype_t NAME_XXXX = "XXXX";
	const rectype_t NAME_YNAM = "YNAM";
	const rectype_t NAME_ZNAM = "ZNAM";


		/* Custom names for internal use */
	const rectype_t NAME_psec = "psec";
	const rectype_t NAME_pssc = "pssc";

/*===========================================================================
 *		End of Standard Subrecord Names
 *=========================================================================*/


		bool ReadRecType(CFile& File, rectype_t& Name)
		{
			return File.Read((void *)&Name, RECTYPE_SIZE);
		}


		bool WriteRecType(CFile& File, const rectype_t Name)
		{
			return File.Write((void *)&Name, RECTYPE_SIZE);
		}


	}


