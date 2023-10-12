/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/CountryCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Domains
  {
    namespace Model
    {
      namespace CountryCodeMapper
      {

        static constexpr uint32_t AC_HASH = ConstExprHashingUtils::HashString("AC");
        static constexpr uint32_t AD_HASH = ConstExprHashingUtils::HashString("AD");
        static constexpr uint32_t AE_HASH = ConstExprHashingUtils::HashString("AE");
        static constexpr uint32_t AF_HASH = ConstExprHashingUtils::HashString("AF");
        static constexpr uint32_t AG_HASH = ConstExprHashingUtils::HashString("AG");
        static constexpr uint32_t AI_HASH = ConstExprHashingUtils::HashString("AI");
        static constexpr uint32_t AL_HASH = ConstExprHashingUtils::HashString("AL");
        static constexpr uint32_t AM_HASH = ConstExprHashingUtils::HashString("AM");
        static constexpr uint32_t AN_HASH = ConstExprHashingUtils::HashString("AN");
        static constexpr uint32_t AO_HASH = ConstExprHashingUtils::HashString("AO");
        static constexpr uint32_t AQ_HASH = ConstExprHashingUtils::HashString("AQ");
        static constexpr uint32_t AR_HASH = ConstExprHashingUtils::HashString("AR");
        static constexpr uint32_t AS_HASH = ConstExprHashingUtils::HashString("AS");
        static constexpr uint32_t AT_HASH = ConstExprHashingUtils::HashString("AT");
        static constexpr uint32_t AU_HASH = ConstExprHashingUtils::HashString("AU");
        static constexpr uint32_t AW_HASH = ConstExprHashingUtils::HashString("AW");
        static constexpr uint32_t AX_HASH = ConstExprHashingUtils::HashString("AX");
        static constexpr uint32_t AZ_HASH = ConstExprHashingUtils::HashString("AZ");
        static constexpr uint32_t BA_HASH = ConstExprHashingUtils::HashString("BA");
        static constexpr uint32_t BB_HASH = ConstExprHashingUtils::HashString("BB");
        static constexpr uint32_t BD_HASH = ConstExprHashingUtils::HashString("BD");
        static constexpr uint32_t BE_HASH = ConstExprHashingUtils::HashString("BE");
        static constexpr uint32_t BF_HASH = ConstExprHashingUtils::HashString("BF");
        static constexpr uint32_t BG_HASH = ConstExprHashingUtils::HashString("BG");
        static constexpr uint32_t BH_HASH = ConstExprHashingUtils::HashString("BH");
        static constexpr uint32_t BI_HASH = ConstExprHashingUtils::HashString("BI");
        static constexpr uint32_t BJ_HASH = ConstExprHashingUtils::HashString("BJ");
        static constexpr uint32_t BL_HASH = ConstExprHashingUtils::HashString("BL");
        static constexpr uint32_t BM_HASH = ConstExprHashingUtils::HashString("BM");
        static constexpr uint32_t BN_HASH = ConstExprHashingUtils::HashString("BN");
        static constexpr uint32_t BO_HASH = ConstExprHashingUtils::HashString("BO");
        static constexpr uint32_t BQ_HASH = ConstExprHashingUtils::HashString("BQ");
        static constexpr uint32_t BR_HASH = ConstExprHashingUtils::HashString("BR");
        static constexpr uint32_t BS_HASH = ConstExprHashingUtils::HashString("BS");
        static constexpr uint32_t BT_HASH = ConstExprHashingUtils::HashString("BT");
        static constexpr uint32_t BV_HASH = ConstExprHashingUtils::HashString("BV");
        static constexpr uint32_t BW_HASH = ConstExprHashingUtils::HashString("BW");
        static constexpr uint32_t BY_HASH = ConstExprHashingUtils::HashString("BY");
        static constexpr uint32_t BZ_HASH = ConstExprHashingUtils::HashString("BZ");
        static constexpr uint32_t CA_HASH = ConstExprHashingUtils::HashString("CA");
        static constexpr uint32_t CC_HASH = ConstExprHashingUtils::HashString("CC");
        static constexpr uint32_t CD_HASH = ConstExprHashingUtils::HashString("CD");
        static constexpr uint32_t CF_HASH = ConstExprHashingUtils::HashString("CF");
        static constexpr uint32_t CG_HASH = ConstExprHashingUtils::HashString("CG");
        static constexpr uint32_t CH_HASH = ConstExprHashingUtils::HashString("CH");
        static constexpr uint32_t CI_HASH = ConstExprHashingUtils::HashString("CI");
        static constexpr uint32_t CK_HASH = ConstExprHashingUtils::HashString("CK");
        static constexpr uint32_t CL_HASH = ConstExprHashingUtils::HashString("CL");
        static constexpr uint32_t CM_HASH = ConstExprHashingUtils::HashString("CM");
        static constexpr uint32_t CN_HASH = ConstExprHashingUtils::HashString("CN");
        static constexpr uint32_t CO_HASH = ConstExprHashingUtils::HashString("CO");
        static constexpr uint32_t CR_HASH = ConstExprHashingUtils::HashString("CR");
        static constexpr uint32_t CU_HASH = ConstExprHashingUtils::HashString("CU");
        static constexpr uint32_t CV_HASH = ConstExprHashingUtils::HashString("CV");
        static constexpr uint32_t CW_HASH = ConstExprHashingUtils::HashString("CW");
        static constexpr uint32_t CX_HASH = ConstExprHashingUtils::HashString("CX");
        static constexpr uint32_t CY_HASH = ConstExprHashingUtils::HashString("CY");
        static constexpr uint32_t CZ_HASH = ConstExprHashingUtils::HashString("CZ");
        static constexpr uint32_t DE_HASH = ConstExprHashingUtils::HashString("DE");
        static constexpr uint32_t DJ_HASH = ConstExprHashingUtils::HashString("DJ");
        static constexpr uint32_t DK_HASH = ConstExprHashingUtils::HashString("DK");
        static constexpr uint32_t DM_HASH = ConstExprHashingUtils::HashString("DM");
        static constexpr uint32_t DO_HASH = ConstExprHashingUtils::HashString("DO");
        static constexpr uint32_t DZ_HASH = ConstExprHashingUtils::HashString("DZ");
        static constexpr uint32_t EC_HASH = ConstExprHashingUtils::HashString("EC");
        static constexpr uint32_t EE_HASH = ConstExprHashingUtils::HashString("EE");
        static constexpr uint32_t EG_HASH = ConstExprHashingUtils::HashString("EG");
        static constexpr uint32_t EH_HASH = ConstExprHashingUtils::HashString("EH");
        static constexpr uint32_t ER_HASH = ConstExprHashingUtils::HashString("ER");
        static constexpr uint32_t ES_HASH = ConstExprHashingUtils::HashString("ES");
        static constexpr uint32_t ET_HASH = ConstExprHashingUtils::HashString("ET");
        static constexpr uint32_t FI_HASH = ConstExprHashingUtils::HashString("FI");
        static constexpr uint32_t FJ_HASH = ConstExprHashingUtils::HashString("FJ");
        static constexpr uint32_t FK_HASH = ConstExprHashingUtils::HashString("FK");
        static constexpr uint32_t FM_HASH = ConstExprHashingUtils::HashString("FM");
        static constexpr uint32_t FO_HASH = ConstExprHashingUtils::HashString("FO");
        static constexpr uint32_t FR_HASH = ConstExprHashingUtils::HashString("FR");
        static constexpr uint32_t GA_HASH = ConstExprHashingUtils::HashString("GA");
        static constexpr uint32_t GB_HASH = ConstExprHashingUtils::HashString("GB");
        static constexpr uint32_t GD_HASH = ConstExprHashingUtils::HashString("GD");
        static constexpr uint32_t GE_HASH = ConstExprHashingUtils::HashString("GE");
        static constexpr uint32_t GF_HASH = ConstExprHashingUtils::HashString("GF");
        static constexpr uint32_t GG_HASH = ConstExprHashingUtils::HashString("GG");
        static constexpr uint32_t GH_HASH = ConstExprHashingUtils::HashString("GH");
        static constexpr uint32_t GI_HASH = ConstExprHashingUtils::HashString("GI");
        static constexpr uint32_t GL_HASH = ConstExprHashingUtils::HashString("GL");
        static constexpr uint32_t GM_HASH = ConstExprHashingUtils::HashString("GM");
        static constexpr uint32_t GN_HASH = ConstExprHashingUtils::HashString("GN");
        static constexpr uint32_t GP_HASH = ConstExprHashingUtils::HashString("GP");
        static constexpr uint32_t GQ_HASH = ConstExprHashingUtils::HashString("GQ");
        static constexpr uint32_t GR_HASH = ConstExprHashingUtils::HashString("GR");
        static constexpr uint32_t GS_HASH = ConstExprHashingUtils::HashString("GS");
        static constexpr uint32_t GT_HASH = ConstExprHashingUtils::HashString("GT");
        static constexpr uint32_t GU_HASH = ConstExprHashingUtils::HashString("GU");
        static constexpr uint32_t GW_HASH = ConstExprHashingUtils::HashString("GW");
        static constexpr uint32_t GY_HASH = ConstExprHashingUtils::HashString("GY");
        static constexpr uint32_t HK_HASH = ConstExprHashingUtils::HashString("HK");
        static constexpr uint32_t HM_HASH = ConstExprHashingUtils::HashString("HM");
        static constexpr uint32_t HN_HASH = ConstExprHashingUtils::HashString("HN");
        static constexpr uint32_t HR_HASH = ConstExprHashingUtils::HashString("HR");
        static constexpr uint32_t HT_HASH = ConstExprHashingUtils::HashString("HT");
        static constexpr uint32_t HU_HASH = ConstExprHashingUtils::HashString("HU");
        static constexpr uint32_t ID_HASH = ConstExprHashingUtils::HashString("ID");
        static constexpr uint32_t IE_HASH = ConstExprHashingUtils::HashString("IE");
        static constexpr uint32_t IL_HASH = ConstExprHashingUtils::HashString("IL");
        static constexpr uint32_t IM_HASH = ConstExprHashingUtils::HashString("IM");
        static constexpr uint32_t IN_HASH = ConstExprHashingUtils::HashString("IN");
        static constexpr uint32_t IO_HASH = ConstExprHashingUtils::HashString("IO");
        static constexpr uint32_t IQ_HASH = ConstExprHashingUtils::HashString("IQ");
        static constexpr uint32_t IR_HASH = ConstExprHashingUtils::HashString("IR");
        static constexpr uint32_t IS_HASH = ConstExprHashingUtils::HashString("IS");
        static constexpr uint32_t IT_HASH = ConstExprHashingUtils::HashString("IT");
        static constexpr uint32_t JE_HASH = ConstExprHashingUtils::HashString("JE");
        static constexpr uint32_t JM_HASH = ConstExprHashingUtils::HashString("JM");
        static constexpr uint32_t JO_HASH = ConstExprHashingUtils::HashString("JO");
        static constexpr uint32_t JP_HASH = ConstExprHashingUtils::HashString("JP");
        static constexpr uint32_t KE_HASH = ConstExprHashingUtils::HashString("KE");
        static constexpr uint32_t KG_HASH = ConstExprHashingUtils::HashString("KG");
        static constexpr uint32_t KH_HASH = ConstExprHashingUtils::HashString("KH");
        static constexpr uint32_t KI_HASH = ConstExprHashingUtils::HashString("KI");
        static constexpr uint32_t KM_HASH = ConstExprHashingUtils::HashString("KM");
        static constexpr uint32_t KN_HASH = ConstExprHashingUtils::HashString("KN");
        static constexpr uint32_t KP_HASH = ConstExprHashingUtils::HashString("KP");
        static constexpr uint32_t KR_HASH = ConstExprHashingUtils::HashString("KR");
        static constexpr uint32_t KW_HASH = ConstExprHashingUtils::HashString("KW");
        static constexpr uint32_t KY_HASH = ConstExprHashingUtils::HashString("KY");
        static constexpr uint32_t KZ_HASH = ConstExprHashingUtils::HashString("KZ");
        static constexpr uint32_t LA_HASH = ConstExprHashingUtils::HashString("LA");
        static constexpr uint32_t LB_HASH = ConstExprHashingUtils::HashString("LB");
        static constexpr uint32_t LC_HASH = ConstExprHashingUtils::HashString("LC");
        static constexpr uint32_t LI_HASH = ConstExprHashingUtils::HashString("LI");
        static constexpr uint32_t LK_HASH = ConstExprHashingUtils::HashString("LK");
        static constexpr uint32_t LR_HASH = ConstExprHashingUtils::HashString("LR");
        static constexpr uint32_t LS_HASH = ConstExprHashingUtils::HashString("LS");
        static constexpr uint32_t LT_HASH = ConstExprHashingUtils::HashString("LT");
        static constexpr uint32_t LU_HASH = ConstExprHashingUtils::HashString("LU");
        static constexpr uint32_t LV_HASH = ConstExprHashingUtils::HashString("LV");
        static constexpr uint32_t LY_HASH = ConstExprHashingUtils::HashString("LY");
        static constexpr uint32_t MA_HASH = ConstExprHashingUtils::HashString("MA");
        static constexpr uint32_t MC_HASH = ConstExprHashingUtils::HashString("MC");
        static constexpr uint32_t MD_HASH = ConstExprHashingUtils::HashString("MD");
        static constexpr uint32_t ME_HASH = ConstExprHashingUtils::HashString("ME");
        static constexpr uint32_t MF_HASH = ConstExprHashingUtils::HashString("MF");
        static constexpr uint32_t MG_HASH = ConstExprHashingUtils::HashString("MG");
        static constexpr uint32_t MH_HASH = ConstExprHashingUtils::HashString("MH");
        static constexpr uint32_t MK_HASH = ConstExprHashingUtils::HashString("MK");
        static constexpr uint32_t ML_HASH = ConstExprHashingUtils::HashString("ML");
        static constexpr uint32_t MM_HASH = ConstExprHashingUtils::HashString("MM");
        static constexpr uint32_t MN_HASH = ConstExprHashingUtils::HashString("MN");
        static constexpr uint32_t MO_HASH = ConstExprHashingUtils::HashString("MO");
        static constexpr uint32_t MP_HASH = ConstExprHashingUtils::HashString("MP");
        static constexpr uint32_t MQ_HASH = ConstExprHashingUtils::HashString("MQ");
        static constexpr uint32_t MR_HASH = ConstExprHashingUtils::HashString("MR");
        static constexpr uint32_t MS_HASH = ConstExprHashingUtils::HashString("MS");
        static constexpr uint32_t MT_HASH = ConstExprHashingUtils::HashString("MT");
        static constexpr uint32_t MU_HASH = ConstExprHashingUtils::HashString("MU");
        static constexpr uint32_t MV_HASH = ConstExprHashingUtils::HashString("MV");
        static constexpr uint32_t MW_HASH = ConstExprHashingUtils::HashString("MW");
        static constexpr uint32_t MX_HASH = ConstExprHashingUtils::HashString("MX");
        static constexpr uint32_t MY_HASH = ConstExprHashingUtils::HashString("MY");
        static constexpr uint32_t MZ_HASH = ConstExprHashingUtils::HashString("MZ");
        static constexpr uint32_t NA_HASH = ConstExprHashingUtils::HashString("NA");
        static constexpr uint32_t NC_HASH = ConstExprHashingUtils::HashString("NC");
        static constexpr uint32_t NE_HASH = ConstExprHashingUtils::HashString("NE");
        static constexpr uint32_t NF_HASH = ConstExprHashingUtils::HashString("NF");
        static constexpr uint32_t NG_HASH = ConstExprHashingUtils::HashString("NG");
        static constexpr uint32_t NI_HASH = ConstExprHashingUtils::HashString("NI");
        static constexpr uint32_t NL_HASH = ConstExprHashingUtils::HashString("NL");
        static constexpr uint32_t NO_HASH = ConstExprHashingUtils::HashString("NO");
        static constexpr uint32_t NP_HASH = ConstExprHashingUtils::HashString("NP");
        static constexpr uint32_t NR_HASH = ConstExprHashingUtils::HashString("NR");
        static constexpr uint32_t NU_HASH = ConstExprHashingUtils::HashString("NU");
        static constexpr uint32_t NZ_HASH = ConstExprHashingUtils::HashString("NZ");
        static constexpr uint32_t OM_HASH = ConstExprHashingUtils::HashString("OM");
        static constexpr uint32_t PA_HASH = ConstExprHashingUtils::HashString("PA");
        static constexpr uint32_t PE_HASH = ConstExprHashingUtils::HashString("PE");
        static constexpr uint32_t PF_HASH = ConstExprHashingUtils::HashString("PF");
        static constexpr uint32_t PG_HASH = ConstExprHashingUtils::HashString("PG");
        static constexpr uint32_t PH_HASH = ConstExprHashingUtils::HashString("PH");
        static constexpr uint32_t PK_HASH = ConstExprHashingUtils::HashString("PK");
        static constexpr uint32_t PL_HASH = ConstExprHashingUtils::HashString("PL");
        static constexpr uint32_t PM_HASH = ConstExprHashingUtils::HashString("PM");
        static constexpr uint32_t PN_HASH = ConstExprHashingUtils::HashString("PN");
        static constexpr uint32_t PR_HASH = ConstExprHashingUtils::HashString("PR");
        static constexpr uint32_t PS_HASH = ConstExprHashingUtils::HashString("PS");
        static constexpr uint32_t PT_HASH = ConstExprHashingUtils::HashString("PT");
        static constexpr uint32_t PW_HASH = ConstExprHashingUtils::HashString("PW");
        static constexpr uint32_t PY_HASH = ConstExprHashingUtils::HashString("PY");
        static constexpr uint32_t QA_HASH = ConstExprHashingUtils::HashString("QA");
        static constexpr uint32_t RE_HASH = ConstExprHashingUtils::HashString("RE");
        static constexpr uint32_t RO_HASH = ConstExprHashingUtils::HashString("RO");
        static constexpr uint32_t RS_HASH = ConstExprHashingUtils::HashString("RS");
        static constexpr uint32_t RU_HASH = ConstExprHashingUtils::HashString("RU");
        static constexpr uint32_t RW_HASH = ConstExprHashingUtils::HashString("RW");
        static constexpr uint32_t SA_HASH = ConstExprHashingUtils::HashString("SA");
        static constexpr uint32_t SB_HASH = ConstExprHashingUtils::HashString("SB");
        static constexpr uint32_t SC_HASH = ConstExprHashingUtils::HashString("SC");
        static constexpr uint32_t SD_HASH = ConstExprHashingUtils::HashString("SD");
        static constexpr uint32_t SE_HASH = ConstExprHashingUtils::HashString("SE");
        static constexpr uint32_t SG_HASH = ConstExprHashingUtils::HashString("SG");
        static constexpr uint32_t SH_HASH = ConstExprHashingUtils::HashString("SH");
        static constexpr uint32_t SI_HASH = ConstExprHashingUtils::HashString("SI");
        static constexpr uint32_t SJ_HASH = ConstExprHashingUtils::HashString("SJ");
        static constexpr uint32_t SK_HASH = ConstExprHashingUtils::HashString("SK");
        static constexpr uint32_t SL_HASH = ConstExprHashingUtils::HashString("SL");
        static constexpr uint32_t SM_HASH = ConstExprHashingUtils::HashString("SM");
        static constexpr uint32_t SN_HASH = ConstExprHashingUtils::HashString("SN");
        static constexpr uint32_t SO_HASH = ConstExprHashingUtils::HashString("SO");
        static constexpr uint32_t SR_HASH = ConstExprHashingUtils::HashString("SR");
        static constexpr uint32_t SS_HASH = ConstExprHashingUtils::HashString("SS");
        static constexpr uint32_t ST_HASH = ConstExprHashingUtils::HashString("ST");
        static constexpr uint32_t SV_HASH = ConstExprHashingUtils::HashString("SV");
        static constexpr uint32_t SX_HASH = ConstExprHashingUtils::HashString("SX");
        static constexpr uint32_t SY_HASH = ConstExprHashingUtils::HashString("SY");
        static constexpr uint32_t SZ_HASH = ConstExprHashingUtils::HashString("SZ");
        static constexpr uint32_t TC_HASH = ConstExprHashingUtils::HashString("TC");
        static constexpr uint32_t TD_HASH = ConstExprHashingUtils::HashString("TD");
        static constexpr uint32_t TF_HASH = ConstExprHashingUtils::HashString("TF");
        static constexpr uint32_t TG_HASH = ConstExprHashingUtils::HashString("TG");
        static constexpr uint32_t TH_HASH = ConstExprHashingUtils::HashString("TH");
        static constexpr uint32_t TJ_HASH = ConstExprHashingUtils::HashString("TJ");
        static constexpr uint32_t TK_HASH = ConstExprHashingUtils::HashString("TK");
        static constexpr uint32_t TL_HASH = ConstExprHashingUtils::HashString("TL");
        static constexpr uint32_t TM_HASH = ConstExprHashingUtils::HashString("TM");
        static constexpr uint32_t TN_HASH = ConstExprHashingUtils::HashString("TN");
        static constexpr uint32_t TO_HASH = ConstExprHashingUtils::HashString("TO");
        static constexpr uint32_t TP_HASH = ConstExprHashingUtils::HashString("TP");
        static constexpr uint32_t TR_HASH = ConstExprHashingUtils::HashString("TR");
        static constexpr uint32_t TT_HASH = ConstExprHashingUtils::HashString("TT");
        static constexpr uint32_t TV_HASH = ConstExprHashingUtils::HashString("TV");
        static constexpr uint32_t TW_HASH = ConstExprHashingUtils::HashString("TW");
        static constexpr uint32_t TZ_HASH = ConstExprHashingUtils::HashString("TZ");
        static constexpr uint32_t UA_HASH = ConstExprHashingUtils::HashString("UA");
        static constexpr uint32_t UG_HASH = ConstExprHashingUtils::HashString("UG");
        static constexpr uint32_t US_HASH = ConstExprHashingUtils::HashString("US");
        static constexpr uint32_t UY_HASH = ConstExprHashingUtils::HashString("UY");
        static constexpr uint32_t UZ_HASH = ConstExprHashingUtils::HashString("UZ");
        static constexpr uint32_t VA_HASH = ConstExprHashingUtils::HashString("VA");
        static constexpr uint32_t VC_HASH = ConstExprHashingUtils::HashString("VC");
        static constexpr uint32_t VE_HASH = ConstExprHashingUtils::HashString("VE");
        static constexpr uint32_t VG_HASH = ConstExprHashingUtils::HashString("VG");
        static constexpr uint32_t VI_HASH = ConstExprHashingUtils::HashString("VI");
        static constexpr uint32_t VN_HASH = ConstExprHashingUtils::HashString("VN");
        static constexpr uint32_t VU_HASH = ConstExprHashingUtils::HashString("VU");
        static constexpr uint32_t WF_HASH = ConstExprHashingUtils::HashString("WF");
        static constexpr uint32_t WS_HASH = ConstExprHashingUtils::HashString("WS");
        static constexpr uint32_t YE_HASH = ConstExprHashingUtils::HashString("YE");
        static constexpr uint32_t YT_HASH = ConstExprHashingUtils::HashString("YT");
        static constexpr uint32_t ZA_HASH = ConstExprHashingUtils::HashString("ZA");
        static constexpr uint32_t ZM_HASH = ConstExprHashingUtils::HashString("ZM");
        static constexpr uint32_t ZW_HASH = ConstExprHashingUtils::HashString("ZW");

        /*
        The if-else chains in this file are converted into a jump table by the compiler,
        which allows constant time lookup. The chain has been broken into helper functions
        because MSVC has a maximum of 122 chained if-else blocks.
        */
        static bool GetEnumForNameHelper0(uint32_t hashCode, CountryCode& enumValue)
        {
          if (hashCode == AC_HASH)
          {
            enumValue = CountryCode::AC;
            return true;
          }
          else if (hashCode == AD_HASH)
          {
            enumValue = CountryCode::AD;
            return true;
          }
          else if (hashCode == AE_HASH)
          {
            enumValue = CountryCode::AE;
            return true;
          }
          else if (hashCode == AF_HASH)
          {
            enumValue = CountryCode::AF;
            return true;
          }
          else if (hashCode == AG_HASH)
          {
            enumValue = CountryCode::AG;
            return true;
          }
          else if (hashCode == AI_HASH)
          {
            enumValue = CountryCode::AI;
            return true;
          }
          else if (hashCode == AL_HASH)
          {
            enumValue = CountryCode::AL;
            return true;
          }
          else if (hashCode == AM_HASH)
          {
            enumValue = CountryCode::AM;
            return true;
          }
          else if (hashCode == AN_HASH)
          {
            enumValue = CountryCode::AN;
            return true;
          }
          else if (hashCode == AO_HASH)
          {
            enumValue = CountryCode::AO;
            return true;
          }
          else if (hashCode == AQ_HASH)
          {
            enumValue = CountryCode::AQ;
            return true;
          }
          else if (hashCode == AR_HASH)
          {
            enumValue = CountryCode::AR;
            return true;
          }
          else if (hashCode == AS_HASH)
          {
            enumValue = CountryCode::AS;
            return true;
          }
          else if (hashCode == AT_HASH)
          {
            enumValue = CountryCode::AT;
            return true;
          }
          else if (hashCode == AU_HASH)
          {
            enumValue = CountryCode::AU;
            return true;
          }
          else if (hashCode == AW_HASH)
          {
            enumValue = CountryCode::AW;
            return true;
          }
          else if (hashCode == AX_HASH)
          {
            enumValue = CountryCode::AX;
            return true;
          }
          else if (hashCode == AZ_HASH)
          {
            enumValue = CountryCode::AZ;
            return true;
          }
          else if (hashCode == BA_HASH)
          {
            enumValue = CountryCode::BA;
            return true;
          }
          else if (hashCode == BB_HASH)
          {
            enumValue = CountryCode::BB;
            return true;
          }
          else if (hashCode == BD_HASH)
          {
            enumValue = CountryCode::BD;
            return true;
          }
          else if (hashCode == BE_HASH)
          {
            enumValue = CountryCode::BE;
            return true;
          }
          else if (hashCode == BF_HASH)
          {
            enumValue = CountryCode::BF;
            return true;
          }
          else if (hashCode == BG_HASH)
          {
            enumValue = CountryCode::BG;
            return true;
          }
          else if (hashCode == BH_HASH)
          {
            enumValue = CountryCode::BH;
            return true;
          }
          else if (hashCode == BI_HASH)
          {
            enumValue = CountryCode::BI;
            return true;
          }
          else if (hashCode == BJ_HASH)
          {
            enumValue = CountryCode::BJ;
            return true;
          }
          else if (hashCode == BL_HASH)
          {
            enumValue = CountryCode::BL;
            return true;
          }
          else if (hashCode == BM_HASH)
          {
            enumValue = CountryCode::BM;
            return true;
          }
          else if (hashCode == BN_HASH)
          {
            enumValue = CountryCode::BN;
            return true;
          }
          else if (hashCode == BO_HASH)
          {
            enumValue = CountryCode::BO;
            return true;
          }
          else if (hashCode == BQ_HASH)
          {
            enumValue = CountryCode::BQ;
            return true;
          }
          else if (hashCode == BR_HASH)
          {
            enumValue = CountryCode::BR;
            return true;
          }
          else if (hashCode == BS_HASH)
          {
            enumValue = CountryCode::BS;
            return true;
          }
          else if (hashCode == BT_HASH)
          {
            enumValue = CountryCode::BT;
            return true;
          }
          else if (hashCode == BV_HASH)
          {
            enumValue = CountryCode::BV;
            return true;
          }
          else if (hashCode == BW_HASH)
          {
            enumValue = CountryCode::BW;
            return true;
          }
          else if (hashCode == BY_HASH)
          {
            enumValue = CountryCode::BY;
            return true;
          }
          else if (hashCode == BZ_HASH)
          {
            enumValue = CountryCode::BZ;
            return true;
          }
          else if (hashCode == CA_HASH)
          {
            enumValue = CountryCode::CA;
            return true;
          }
          else if (hashCode == CC_HASH)
          {
            enumValue = CountryCode::CC;
            return true;
          }
          else if (hashCode == CD_HASH)
          {
            enumValue = CountryCode::CD;
            return true;
          }
          else if (hashCode == CF_HASH)
          {
            enumValue = CountryCode::CF;
            return true;
          }
          else if (hashCode == CG_HASH)
          {
            enumValue = CountryCode::CG;
            return true;
          }
          else if (hashCode == CH_HASH)
          {
            enumValue = CountryCode::CH;
            return true;
          }
          else if (hashCode == CI_HASH)
          {
            enumValue = CountryCode::CI;
            return true;
          }
          else if (hashCode == CK_HASH)
          {
            enumValue = CountryCode::CK;
            return true;
          }
          else if (hashCode == CL_HASH)
          {
            enumValue = CountryCode::CL;
            return true;
          }
          else if (hashCode == CM_HASH)
          {
            enumValue = CountryCode::CM;
            return true;
          }
          else if (hashCode == CN_HASH)
          {
            enumValue = CountryCode::CN;
            return true;
          }
          else if (hashCode == CO_HASH)
          {
            enumValue = CountryCode::CO;
            return true;
          }
          else if (hashCode == CR_HASH)
          {
            enumValue = CountryCode::CR;
            return true;
          }
          else if (hashCode == CU_HASH)
          {
            enumValue = CountryCode::CU;
            return true;
          }
          else if (hashCode == CV_HASH)
          {
            enumValue = CountryCode::CV;
            return true;
          }
          else if (hashCode == CW_HASH)
          {
            enumValue = CountryCode::CW;
            return true;
          }
          else if (hashCode == CX_HASH)
          {
            enumValue = CountryCode::CX;
            return true;
          }
          else if (hashCode == CY_HASH)
          {
            enumValue = CountryCode::CY;
            return true;
          }
          else if (hashCode == CZ_HASH)
          {
            enumValue = CountryCode::CZ;
            return true;
          }
          else if (hashCode == DE_HASH)
          {
            enumValue = CountryCode::DE;
            return true;
          }
          else if (hashCode == DJ_HASH)
          {
            enumValue = CountryCode::DJ;
            return true;
          }
          else if (hashCode == DK_HASH)
          {
            enumValue = CountryCode::DK;
            return true;
          }
          else if (hashCode == DM_HASH)
          {
            enumValue = CountryCode::DM;
            return true;
          }
          else if (hashCode == DO_HASH)
          {
            enumValue = CountryCode::DO;
            return true;
          }
          else if (hashCode == DZ_HASH)
          {
            enumValue = CountryCode::DZ;
            return true;
          }
          else if (hashCode == EC_HASH)
          {
            enumValue = CountryCode::EC;
            return true;
          }
          else if (hashCode == EE_HASH)
          {
            enumValue = CountryCode::EE;
            return true;
          }
          else if (hashCode == EG_HASH)
          {
            enumValue = CountryCode::EG;
            return true;
          }
          else if (hashCode == EH_HASH)
          {
            enumValue = CountryCode::EH;
            return true;
          }
          else if (hashCode == ER_HASH)
          {
            enumValue = CountryCode::ER;
            return true;
          }
          else if (hashCode == ES_HASH)
          {
            enumValue = CountryCode::ES;
            return true;
          }
          else if (hashCode == ET_HASH)
          {
            enumValue = CountryCode::ET;
            return true;
          }
          else if (hashCode == FI_HASH)
          {
            enumValue = CountryCode::FI;
            return true;
          }
          else if (hashCode == FJ_HASH)
          {
            enumValue = CountryCode::FJ;
            return true;
          }
          else if (hashCode == FK_HASH)
          {
            enumValue = CountryCode::FK;
            return true;
          }
          else if (hashCode == FM_HASH)
          {
            enumValue = CountryCode::FM;
            return true;
          }
          else if (hashCode == FO_HASH)
          {
            enumValue = CountryCode::FO;
            return true;
          }
          else if (hashCode == FR_HASH)
          {
            enumValue = CountryCode::FR;
            return true;
          }
          else if (hashCode == GA_HASH)
          {
            enumValue = CountryCode::GA;
            return true;
          }
          else if (hashCode == GB_HASH)
          {
            enumValue = CountryCode::GB;
            return true;
          }
          else if (hashCode == GD_HASH)
          {
            enumValue = CountryCode::GD;
            return true;
          }
          else if (hashCode == GE_HASH)
          {
            enumValue = CountryCode::GE;
            return true;
          }
          else if (hashCode == GF_HASH)
          {
            enumValue = CountryCode::GF;
            return true;
          }
          else if (hashCode == GG_HASH)
          {
            enumValue = CountryCode::GG;
            return true;
          }
          else if (hashCode == GH_HASH)
          {
            enumValue = CountryCode::GH;
            return true;
          }
          else if (hashCode == GI_HASH)
          {
            enumValue = CountryCode::GI;
            return true;
          }
          else if (hashCode == GL_HASH)
          {
            enumValue = CountryCode::GL;
            return true;
          }
          else if (hashCode == GM_HASH)
          {
            enumValue = CountryCode::GM;
            return true;
          }
          else if (hashCode == GN_HASH)
          {
            enumValue = CountryCode::GN;
            return true;
          }
          else if (hashCode == GP_HASH)
          {
            enumValue = CountryCode::GP;
            return true;
          }
          else if (hashCode == GQ_HASH)
          {
            enumValue = CountryCode::GQ;
            return true;
          }
          else if (hashCode == GR_HASH)
          {
            enumValue = CountryCode::GR;
            return true;
          }
          else if (hashCode == GS_HASH)
          {
            enumValue = CountryCode::GS;
            return true;
          }
          else if (hashCode == GT_HASH)
          {
            enumValue = CountryCode::GT;
            return true;
          }
          else if (hashCode == GU_HASH)
          {
            enumValue = CountryCode::GU;
            return true;
          }
          else if (hashCode == GW_HASH)
          {
            enumValue = CountryCode::GW;
            return true;
          }
          else if (hashCode == GY_HASH)
          {
            enumValue = CountryCode::GY;
            return true;
          }
          else if (hashCode == HK_HASH)
          {
            enumValue = CountryCode::HK;
            return true;
          }
          else if (hashCode == HM_HASH)
          {
            enumValue = CountryCode::HM;
            return true;
          }
          else if (hashCode == HN_HASH)
          {
            enumValue = CountryCode::HN;
            return true;
          }
          else if (hashCode == HR_HASH)
          {
            enumValue = CountryCode::HR;
            return true;
          }
          else if (hashCode == HT_HASH)
          {
            enumValue = CountryCode::HT;
            return true;
          }
          else if (hashCode == HU_HASH)
          {
            enumValue = CountryCode::HU;
            return true;
          }
          else if (hashCode == ID_HASH)
          {
            enumValue = CountryCode::ID;
            return true;
          }
          else if (hashCode == IE_HASH)
          {
            enumValue = CountryCode::IE;
            return true;
          }
          else if (hashCode == IL_HASH)
          {
            enumValue = CountryCode::IL;
            return true;
          }
          else if (hashCode == IM_HASH)
          {
            enumValue = CountryCode::IM;
            return true;
          }
          else if (hashCode == IN_HASH)
          {
            enumValue = CountryCode::IN;
            return true;
          }
          else if (hashCode == IO_HASH)
          {
            enumValue = CountryCode::IO;
            return true;
          }
          else if (hashCode == IQ_HASH)
          {
            enumValue = CountryCode::IQ;
            return true;
          }
          else if (hashCode == IR_HASH)
          {
            enumValue = CountryCode::IR;
            return true;
          }
          else if (hashCode == IS_HASH)
          {
            enumValue = CountryCode::IS;
            return true;
          }
          else if (hashCode == IT_HASH)
          {
            enumValue = CountryCode::IT;
            return true;
          }
          else if (hashCode == JE_HASH)
          {
            enumValue = CountryCode::JE;
            return true;
          }
          else if (hashCode == JM_HASH)
          {
            enumValue = CountryCode::JM;
            return true;
          }
          else if (hashCode == JO_HASH)
          {
            enumValue = CountryCode::JO;
            return true;
          }
          else if (hashCode == JP_HASH)
          {
            enumValue = CountryCode::JP;
            return true;
          }
          else if (hashCode == KE_HASH)
          {
            enumValue = CountryCode::KE;
            return true;
          }
          else if (hashCode == KG_HASH)
          {
            enumValue = CountryCode::KG;
            return true;
          }
          else if (hashCode == KH_HASH)
          {
            enumValue = CountryCode::KH;
            return true;
          }
          else if (hashCode == KI_HASH)
          {
            enumValue = CountryCode::KI;
            return true;
          }
          else if (hashCode == KM_HASH)
          {
            enumValue = CountryCode::KM;
            return true;
          }
          else if (hashCode == KN_HASH)
          {
            enumValue = CountryCode::KN;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper1(uint32_t hashCode, CountryCode& enumValue)
        {
          if (hashCode == KP_HASH)
          {
            enumValue = CountryCode::KP;
            return true;
          }
          else if (hashCode == KR_HASH)
          {
            enumValue = CountryCode::KR;
            return true;
          }
          else if (hashCode == KW_HASH)
          {
            enumValue = CountryCode::KW;
            return true;
          }
          else if (hashCode == KY_HASH)
          {
            enumValue = CountryCode::KY;
            return true;
          }
          else if (hashCode == KZ_HASH)
          {
            enumValue = CountryCode::KZ;
            return true;
          }
          else if (hashCode == LA_HASH)
          {
            enumValue = CountryCode::LA;
            return true;
          }
          else if (hashCode == LB_HASH)
          {
            enumValue = CountryCode::LB;
            return true;
          }
          else if (hashCode == LC_HASH)
          {
            enumValue = CountryCode::LC;
            return true;
          }
          else if (hashCode == LI_HASH)
          {
            enumValue = CountryCode::LI;
            return true;
          }
          else if (hashCode == LK_HASH)
          {
            enumValue = CountryCode::LK;
            return true;
          }
          else if (hashCode == LR_HASH)
          {
            enumValue = CountryCode::LR;
            return true;
          }
          else if (hashCode == LS_HASH)
          {
            enumValue = CountryCode::LS;
            return true;
          }
          else if (hashCode == LT_HASH)
          {
            enumValue = CountryCode::LT;
            return true;
          }
          else if (hashCode == LU_HASH)
          {
            enumValue = CountryCode::LU;
            return true;
          }
          else if (hashCode == LV_HASH)
          {
            enumValue = CountryCode::LV;
            return true;
          }
          else if (hashCode == LY_HASH)
          {
            enumValue = CountryCode::LY;
            return true;
          }
          else if (hashCode == MA_HASH)
          {
            enumValue = CountryCode::MA;
            return true;
          }
          else if (hashCode == MC_HASH)
          {
            enumValue = CountryCode::MC;
            return true;
          }
          else if (hashCode == MD_HASH)
          {
            enumValue = CountryCode::MD;
            return true;
          }
          else if (hashCode == ME_HASH)
          {
            enumValue = CountryCode::ME;
            return true;
          }
          else if (hashCode == MF_HASH)
          {
            enumValue = CountryCode::MF;
            return true;
          }
          else if (hashCode == MG_HASH)
          {
            enumValue = CountryCode::MG;
            return true;
          }
          else if (hashCode == MH_HASH)
          {
            enumValue = CountryCode::MH;
            return true;
          }
          else if (hashCode == MK_HASH)
          {
            enumValue = CountryCode::MK;
            return true;
          }
          else if (hashCode == ML_HASH)
          {
            enumValue = CountryCode::ML;
            return true;
          }
          else if (hashCode == MM_HASH)
          {
            enumValue = CountryCode::MM;
            return true;
          }
          else if (hashCode == MN_HASH)
          {
            enumValue = CountryCode::MN;
            return true;
          }
          else if (hashCode == MO_HASH)
          {
            enumValue = CountryCode::MO;
            return true;
          }
          else if (hashCode == MP_HASH)
          {
            enumValue = CountryCode::MP;
            return true;
          }
          else if (hashCode == MQ_HASH)
          {
            enumValue = CountryCode::MQ;
            return true;
          }
          else if (hashCode == MR_HASH)
          {
            enumValue = CountryCode::MR;
            return true;
          }
          else if (hashCode == MS_HASH)
          {
            enumValue = CountryCode::MS;
            return true;
          }
          else if (hashCode == MT_HASH)
          {
            enumValue = CountryCode::MT;
            return true;
          }
          else if (hashCode == MU_HASH)
          {
            enumValue = CountryCode::MU;
            return true;
          }
          else if (hashCode == MV_HASH)
          {
            enumValue = CountryCode::MV;
            return true;
          }
          else if (hashCode == MW_HASH)
          {
            enumValue = CountryCode::MW;
            return true;
          }
          else if (hashCode == MX_HASH)
          {
            enumValue = CountryCode::MX;
            return true;
          }
          else if (hashCode == MY_HASH)
          {
            enumValue = CountryCode::MY;
            return true;
          }
          else if (hashCode == MZ_HASH)
          {
            enumValue = CountryCode::MZ;
            return true;
          }
          else if (hashCode == NA_HASH)
          {
            enumValue = CountryCode::NA;
            return true;
          }
          else if (hashCode == NC_HASH)
          {
            enumValue = CountryCode::NC;
            return true;
          }
          else if (hashCode == NE_HASH)
          {
            enumValue = CountryCode::NE;
            return true;
          }
          else if (hashCode == NF_HASH)
          {
            enumValue = CountryCode::NF;
            return true;
          }
          else if (hashCode == NG_HASH)
          {
            enumValue = CountryCode::NG;
            return true;
          }
          else if (hashCode == NI_HASH)
          {
            enumValue = CountryCode::NI;
            return true;
          }
          else if (hashCode == NL_HASH)
          {
            enumValue = CountryCode::NL;
            return true;
          }
          else if (hashCode == NO_HASH)
          {
            enumValue = CountryCode::NO;
            return true;
          }
          else if (hashCode == NP_HASH)
          {
            enumValue = CountryCode::NP;
            return true;
          }
          else if (hashCode == NR_HASH)
          {
            enumValue = CountryCode::NR;
            return true;
          }
          else if (hashCode == NU_HASH)
          {
            enumValue = CountryCode::NU;
            return true;
          }
          else if (hashCode == NZ_HASH)
          {
            enumValue = CountryCode::NZ;
            return true;
          }
          else if (hashCode == OM_HASH)
          {
            enumValue = CountryCode::OM;
            return true;
          }
          else if (hashCode == PA_HASH)
          {
            enumValue = CountryCode::PA;
            return true;
          }
          else if (hashCode == PE_HASH)
          {
            enumValue = CountryCode::PE;
            return true;
          }
          else if (hashCode == PF_HASH)
          {
            enumValue = CountryCode::PF;
            return true;
          }
          else if (hashCode == PG_HASH)
          {
            enumValue = CountryCode::PG;
            return true;
          }
          else if (hashCode == PH_HASH)
          {
            enumValue = CountryCode::PH;
            return true;
          }
          else if (hashCode == PK_HASH)
          {
            enumValue = CountryCode::PK;
            return true;
          }
          else if (hashCode == PL_HASH)
          {
            enumValue = CountryCode::PL;
            return true;
          }
          else if (hashCode == PM_HASH)
          {
            enumValue = CountryCode::PM;
            return true;
          }
          else if (hashCode == PN_HASH)
          {
            enumValue = CountryCode::PN;
            return true;
          }
          else if (hashCode == PR_HASH)
          {
            enumValue = CountryCode::PR;
            return true;
          }
          else if (hashCode == PS_HASH)
          {
            enumValue = CountryCode::PS;
            return true;
          }
          else if (hashCode == PT_HASH)
          {
            enumValue = CountryCode::PT;
            return true;
          }
          else if (hashCode == PW_HASH)
          {
            enumValue = CountryCode::PW;
            return true;
          }
          else if (hashCode == PY_HASH)
          {
            enumValue = CountryCode::PY;
            return true;
          }
          else if (hashCode == QA_HASH)
          {
            enumValue = CountryCode::QA;
            return true;
          }
          else if (hashCode == RE_HASH)
          {
            enumValue = CountryCode::RE;
            return true;
          }
          else if (hashCode == RO_HASH)
          {
            enumValue = CountryCode::RO;
            return true;
          }
          else if (hashCode == RS_HASH)
          {
            enumValue = CountryCode::RS;
            return true;
          }
          else if (hashCode == RU_HASH)
          {
            enumValue = CountryCode::RU;
            return true;
          }
          else if (hashCode == RW_HASH)
          {
            enumValue = CountryCode::RW;
            return true;
          }
          else if (hashCode == SA_HASH)
          {
            enumValue = CountryCode::SA;
            return true;
          }
          else if (hashCode == SB_HASH)
          {
            enumValue = CountryCode::SB;
            return true;
          }
          else if (hashCode == SC_HASH)
          {
            enumValue = CountryCode::SC;
            return true;
          }
          else if (hashCode == SD_HASH)
          {
            enumValue = CountryCode::SD;
            return true;
          }
          else if (hashCode == SE_HASH)
          {
            enumValue = CountryCode::SE;
            return true;
          }
          else if (hashCode == SG_HASH)
          {
            enumValue = CountryCode::SG;
            return true;
          }
          else if (hashCode == SH_HASH)
          {
            enumValue = CountryCode::SH;
            return true;
          }
          else if (hashCode == SI_HASH)
          {
            enumValue = CountryCode::SI;
            return true;
          }
          else if (hashCode == SJ_HASH)
          {
            enumValue = CountryCode::SJ;
            return true;
          }
          else if (hashCode == SK_HASH)
          {
            enumValue = CountryCode::SK;
            return true;
          }
          else if (hashCode == SL_HASH)
          {
            enumValue = CountryCode::SL;
            return true;
          }
          else if (hashCode == SM_HASH)
          {
            enumValue = CountryCode::SM;
            return true;
          }
          else if (hashCode == SN_HASH)
          {
            enumValue = CountryCode::SN;
            return true;
          }
          else if (hashCode == SO_HASH)
          {
            enumValue = CountryCode::SO;
            return true;
          }
          else if (hashCode == SR_HASH)
          {
            enumValue = CountryCode::SR;
            return true;
          }
          else if (hashCode == SS_HASH)
          {
            enumValue = CountryCode::SS;
            return true;
          }
          else if (hashCode == ST_HASH)
          {
            enumValue = CountryCode::ST;
            return true;
          }
          else if (hashCode == SV_HASH)
          {
            enumValue = CountryCode::SV;
            return true;
          }
          else if (hashCode == SX_HASH)
          {
            enumValue = CountryCode::SX;
            return true;
          }
          else if (hashCode == SY_HASH)
          {
            enumValue = CountryCode::SY;
            return true;
          }
          else if (hashCode == SZ_HASH)
          {
            enumValue = CountryCode::SZ;
            return true;
          }
          else if (hashCode == TC_HASH)
          {
            enumValue = CountryCode::TC;
            return true;
          }
          else if (hashCode == TD_HASH)
          {
            enumValue = CountryCode::TD;
            return true;
          }
          else if (hashCode == TF_HASH)
          {
            enumValue = CountryCode::TF;
            return true;
          }
          else if (hashCode == TG_HASH)
          {
            enumValue = CountryCode::TG;
            return true;
          }
          else if (hashCode == TH_HASH)
          {
            enumValue = CountryCode::TH;
            return true;
          }
          else if (hashCode == TJ_HASH)
          {
            enumValue = CountryCode::TJ;
            return true;
          }
          else if (hashCode == TK_HASH)
          {
            enumValue = CountryCode::TK;
            return true;
          }
          else if (hashCode == TL_HASH)
          {
            enumValue = CountryCode::TL;
            return true;
          }
          else if (hashCode == TM_HASH)
          {
            enumValue = CountryCode::TM;
            return true;
          }
          else if (hashCode == TN_HASH)
          {
            enumValue = CountryCode::TN;
            return true;
          }
          else if (hashCode == TO_HASH)
          {
            enumValue = CountryCode::TO;
            return true;
          }
          else if (hashCode == TP_HASH)
          {
            enumValue = CountryCode::TP;
            return true;
          }
          else if (hashCode == TR_HASH)
          {
            enumValue = CountryCode::TR;
            return true;
          }
          else if (hashCode == TT_HASH)
          {
            enumValue = CountryCode::TT;
            return true;
          }
          else if (hashCode == TV_HASH)
          {
            enumValue = CountryCode::TV;
            return true;
          }
          else if (hashCode == TW_HASH)
          {
            enumValue = CountryCode::TW;
            return true;
          }
          else if (hashCode == TZ_HASH)
          {
            enumValue = CountryCode::TZ;
            return true;
          }
          else if (hashCode == UA_HASH)
          {
            enumValue = CountryCode::UA;
            return true;
          }
          else if (hashCode == UG_HASH)
          {
            enumValue = CountryCode::UG;
            return true;
          }
          else if (hashCode == US_HASH)
          {
            enumValue = CountryCode::US;
            return true;
          }
          else if (hashCode == UY_HASH)
          {
            enumValue = CountryCode::UY;
            return true;
          }
          else if (hashCode == UZ_HASH)
          {
            enumValue = CountryCode::UZ;
            return true;
          }
          else if (hashCode == VA_HASH)
          {
            enumValue = CountryCode::VA;
            return true;
          }
          else if (hashCode == VC_HASH)
          {
            enumValue = CountryCode::VC;
            return true;
          }
          else if (hashCode == VE_HASH)
          {
            enumValue = CountryCode::VE;
            return true;
          }
          else if (hashCode == VG_HASH)
          {
            enumValue = CountryCode::VG;
            return true;
          }
          else if (hashCode == VI_HASH)
          {
            enumValue = CountryCode::VI;
            return true;
          }
          else if (hashCode == VN_HASH)
          {
            enumValue = CountryCode::VN;
            return true;
          }
          else if (hashCode == VU_HASH)
          {
            enumValue = CountryCode::VU;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper2(uint32_t hashCode, CountryCode& enumValue)
        {
          if (hashCode == WF_HASH)
          {
            enumValue = CountryCode::WF;
            return true;
          }
          else if (hashCode == WS_HASH)
          {
            enumValue = CountryCode::WS;
            return true;
          }
          else if (hashCode == YE_HASH)
          {
            enumValue = CountryCode::YE;
            return true;
          }
          else if (hashCode == YT_HASH)
          {
            enumValue = CountryCode::YT;
            return true;
          }
          else if (hashCode == ZA_HASH)
          {
            enumValue = CountryCode::ZA;
            return true;
          }
          else if (hashCode == ZM_HASH)
          {
            enumValue = CountryCode::ZM;
            return true;
          }
          else if (hashCode == ZW_HASH)
          {
            enumValue = CountryCode::ZW;
            return true;
          }
          return false;
        }

        static bool GetNameForEnumHelper0(CountryCode enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case CountryCode::AC:
            value = "AC";
            return true;
          case CountryCode::AD:
            value = "AD";
            return true;
          case CountryCode::AE:
            value = "AE";
            return true;
          case CountryCode::AF:
            value = "AF";
            return true;
          case CountryCode::AG:
            value = "AG";
            return true;
          case CountryCode::AI:
            value = "AI";
            return true;
          case CountryCode::AL:
            value = "AL";
            return true;
          case CountryCode::AM:
            value = "AM";
            return true;
          case CountryCode::AN:
            value = "AN";
            return true;
          case CountryCode::AO:
            value = "AO";
            return true;
          case CountryCode::AQ:
            value = "AQ";
            return true;
          case CountryCode::AR:
            value = "AR";
            return true;
          case CountryCode::AS:
            value = "AS";
            return true;
          case CountryCode::AT:
            value = "AT";
            return true;
          case CountryCode::AU:
            value = "AU";
            return true;
          case CountryCode::AW:
            value = "AW";
            return true;
          case CountryCode::AX:
            value = "AX";
            return true;
          case CountryCode::AZ:
            value = "AZ";
            return true;
          case CountryCode::BA:
            value = "BA";
            return true;
          case CountryCode::BB:
            value = "BB";
            return true;
          case CountryCode::BD:
            value = "BD";
            return true;
          case CountryCode::BE:
            value = "BE";
            return true;
          case CountryCode::BF:
            value = "BF";
            return true;
          case CountryCode::BG:
            value = "BG";
            return true;
          case CountryCode::BH:
            value = "BH";
            return true;
          case CountryCode::BI:
            value = "BI";
            return true;
          case CountryCode::BJ:
            value = "BJ";
            return true;
          case CountryCode::BL:
            value = "BL";
            return true;
          case CountryCode::BM:
            value = "BM";
            return true;
          case CountryCode::BN:
            value = "BN";
            return true;
          case CountryCode::BO:
            value = "BO";
            return true;
          case CountryCode::BQ:
            value = "BQ";
            return true;
          case CountryCode::BR:
            value = "BR";
            return true;
          case CountryCode::BS:
            value = "BS";
            return true;
          case CountryCode::BT:
            value = "BT";
            return true;
          case CountryCode::BV:
            value = "BV";
            return true;
          case CountryCode::BW:
            value = "BW";
            return true;
          case CountryCode::BY:
            value = "BY";
            return true;
          case CountryCode::BZ:
            value = "BZ";
            return true;
          case CountryCode::CA:
            value = "CA";
            return true;
          case CountryCode::CC:
            value = "CC";
            return true;
          case CountryCode::CD:
            value = "CD";
            return true;
          case CountryCode::CF:
            value = "CF";
            return true;
          case CountryCode::CG:
            value = "CG";
            return true;
          case CountryCode::CH:
            value = "CH";
            return true;
          case CountryCode::CI:
            value = "CI";
            return true;
          case CountryCode::CK:
            value = "CK";
            return true;
          case CountryCode::CL:
            value = "CL";
            return true;
          case CountryCode::CM:
            value = "CM";
            return true;
          case CountryCode::CN:
            value = "CN";
            return true;
          case CountryCode::CO:
            value = "CO";
            return true;
          case CountryCode::CR:
            value = "CR";
            return true;
          case CountryCode::CU:
            value = "CU";
            return true;
          case CountryCode::CV:
            value = "CV";
            return true;
          case CountryCode::CW:
            value = "CW";
            return true;
          case CountryCode::CX:
            value = "CX";
            return true;
          case CountryCode::CY:
            value = "CY";
            return true;
          case CountryCode::CZ:
            value = "CZ";
            return true;
          case CountryCode::DE:
            value = "DE";
            return true;
          case CountryCode::DJ:
            value = "DJ";
            return true;
          case CountryCode::DK:
            value = "DK";
            return true;
          case CountryCode::DM:
            value = "DM";
            return true;
          case CountryCode::DO:
            value = "DO";
            return true;
          case CountryCode::DZ:
            value = "DZ";
            return true;
          case CountryCode::EC:
            value = "EC";
            return true;
          case CountryCode::EE:
            value = "EE";
            return true;
          case CountryCode::EG:
            value = "EG";
            return true;
          case CountryCode::EH:
            value = "EH";
            return true;
          case CountryCode::ER:
            value = "ER";
            return true;
          case CountryCode::ES:
            value = "ES";
            return true;
          case CountryCode::ET:
            value = "ET";
            return true;
          case CountryCode::FI:
            value = "FI";
            return true;
          case CountryCode::FJ:
            value = "FJ";
            return true;
          case CountryCode::FK:
            value = "FK";
            return true;
          case CountryCode::FM:
            value = "FM";
            return true;
          case CountryCode::FO:
            value = "FO";
            return true;
          case CountryCode::FR:
            value = "FR";
            return true;
          case CountryCode::GA:
            value = "GA";
            return true;
          case CountryCode::GB:
            value = "GB";
            return true;
          case CountryCode::GD:
            value = "GD";
            return true;
          case CountryCode::GE:
            value = "GE";
            return true;
          case CountryCode::GF:
            value = "GF";
            return true;
          case CountryCode::GG:
            value = "GG";
            return true;
          case CountryCode::GH:
            value = "GH";
            return true;
          case CountryCode::GI:
            value = "GI";
            return true;
          case CountryCode::GL:
            value = "GL";
            return true;
          case CountryCode::GM:
            value = "GM";
            return true;
          case CountryCode::GN:
            value = "GN";
            return true;
          case CountryCode::GP:
            value = "GP";
            return true;
          case CountryCode::GQ:
            value = "GQ";
            return true;
          case CountryCode::GR:
            value = "GR";
            return true;
          case CountryCode::GS:
            value = "GS";
            return true;
          case CountryCode::GT:
            value = "GT";
            return true;
          case CountryCode::GU:
            value = "GU";
            return true;
          case CountryCode::GW:
            value = "GW";
            return true;
          case CountryCode::GY:
            value = "GY";
            return true;
          case CountryCode::HK:
            value = "HK";
            return true;
          case CountryCode::HM:
            value = "HM";
            return true;
          case CountryCode::HN:
            value = "HN";
            return true;
          case CountryCode::HR:
            value = "HR";
            return true;
          case CountryCode::HT:
            value = "HT";
            return true;
          case CountryCode::HU:
            value = "HU";
            return true;
          case CountryCode::ID:
            value = "ID";
            return true;
          case CountryCode::IE:
            value = "IE";
            return true;
          case CountryCode::IL:
            value = "IL";
            return true;
          case CountryCode::IM:
            value = "IM";
            return true;
          case CountryCode::IN:
            value = "IN";
            return true;
          case CountryCode::IO:
            value = "IO";
            return true;
          case CountryCode::IQ:
            value = "IQ";
            return true;
          case CountryCode::IR:
            value = "IR";
            return true;
          case CountryCode::IS:
            value = "IS";
            return true;
          case CountryCode::IT:
            value = "IT";
            return true;
          case CountryCode::JE:
            value = "JE";
            return true;
          case CountryCode::JM:
            value = "JM";
            return true;
          case CountryCode::JO:
            value = "JO";
            return true;
          case CountryCode::JP:
            value = "JP";
            return true;
          case CountryCode::KE:
            value = "KE";
            return true;
          case CountryCode::KG:
            value = "KG";
            return true;
          case CountryCode::KH:
            value = "KH";
            return true;
          case CountryCode::KI:
            value = "KI";
            return true;
          case CountryCode::KM:
            value = "KM";
            return true;
          case CountryCode::KN:
            value = "KN";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper1(CountryCode enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case CountryCode::KP:
            value = "KP";
            return true;
          case CountryCode::KR:
            value = "KR";
            return true;
          case CountryCode::KW:
            value = "KW";
            return true;
          case CountryCode::KY:
            value = "KY";
            return true;
          case CountryCode::KZ:
            value = "KZ";
            return true;
          case CountryCode::LA:
            value = "LA";
            return true;
          case CountryCode::LB:
            value = "LB";
            return true;
          case CountryCode::LC:
            value = "LC";
            return true;
          case CountryCode::LI:
            value = "LI";
            return true;
          case CountryCode::LK:
            value = "LK";
            return true;
          case CountryCode::LR:
            value = "LR";
            return true;
          case CountryCode::LS:
            value = "LS";
            return true;
          case CountryCode::LT:
            value = "LT";
            return true;
          case CountryCode::LU:
            value = "LU";
            return true;
          case CountryCode::LV:
            value = "LV";
            return true;
          case CountryCode::LY:
            value = "LY";
            return true;
          case CountryCode::MA:
            value = "MA";
            return true;
          case CountryCode::MC:
            value = "MC";
            return true;
          case CountryCode::MD:
            value = "MD";
            return true;
          case CountryCode::ME:
            value = "ME";
            return true;
          case CountryCode::MF:
            value = "MF";
            return true;
          case CountryCode::MG:
            value = "MG";
            return true;
          case CountryCode::MH:
            value = "MH";
            return true;
          case CountryCode::MK:
            value = "MK";
            return true;
          case CountryCode::ML:
            value = "ML";
            return true;
          case CountryCode::MM:
            value = "MM";
            return true;
          case CountryCode::MN:
            value = "MN";
            return true;
          case CountryCode::MO:
            value = "MO";
            return true;
          case CountryCode::MP:
            value = "MP";
            return true;
          case CountryCode::MQ:
            value = "MQ";
            return true;
          case CountryCode::MR:
            value = "MR";
            return true;
          case CountryCode::MS:
            value = "MS";
            return true;
          case CountryCode::MT:
            value = "MT";
            return true;
          case CountryCode::MU:
            value = "MU";
            return true;
          case CountryCode::MV:
            value = "MV";
            return true;
          case CountryCode::MW:
            value = "MW";
            return true;
          case CountryCode::MX:
            value = "MX";
            return true;
          case CountryCode::MY:
            value = "MY";
            return true;
          case CountryCode::MZ:
            value = "MZ";
            return true;
          case CountryCode::NA:
            value = "NA";
            return true;
          case CountryCode::NC:
            value = "NC";
            return true;
          case CountryCode::NE:
            value = "NE";
            return true;
          case CountryCode::NF:
            value = "NF";
            return true;
          case CountryCode::NG:
            value = "NG";
            return true;
          case CountryCode::NI:
            value = "NI";
            return true;
          case CountryCode::NL:
            value = "NL";
            return true;
          case CountryCode::NO:
            value = "NO";
            return true;
          case CountryCode::NP:
            value = "NP";
            return true;
          case CountryCode::NR:
            value = "NR";
            return true;
          case CountryCode::NU:
            value = "NU";
            return true;
          case CountryCode::NZ:
            value = "NZ";
            return true;
          case CountryCode::OM:
            value = "OM";
            return true;
          case CountryCode::PA:
            value = "PA";
            return true;
          case CountryCode::PE:
            value = "PE";
            return true;
          case CountryCode::PF:
            value = "PF";
            return true;
          case CountryCode::PG:
            value = "PG";
            return true;
          case CountryCode::PH:
            value = "PH";
            return true;
          case CountryCode::PK:
            value = "PK";
            return true;
          case CountryCode::PL:
            value = "PL";
            return true;
          case CountryCode::PM:
            value = "PM";
            return true;
          case CountryCode::PN:
            value = "PN";
            return true;
          case CountryCode::PR:
            value = "PR";
            return true;
          case CountryCode::PS:
            value = "PS";
            return true;
          case CountryCode::PT:
            value = "PT";
            return true;
          case CountryCode::PW:
            value = "PW";
            return true;
          case CountryCode::PY:
            value = "PY";
            return true;
          case CountryCode::QA:
            value = "QA";
            return true;
          case CountryCode::RE:
            value = "RE";
            return true;
          case CountryCode::RO:
            value = "RO";
            return true;
          case CountryCode::RS:
            value = "RS";
            return true;
          case CountryCode::RU:
            value = "RU";
            return true;
          case CountryCode::RW:
            value = "RW";
            return true;
          case CountryCode::SA:
            value = "SA";
            return true;
          case CountryCode::SB:
            value = "SB";
            return true;
          case CountryCode::SC:
            value = "SC";
            return true;
          case CountryCode::SD:
            value = "SD";
            return true;
          case CountryCode::SE:
            value = "SE";
            return true;
          case CountryCode::SG:
            value = "SG";
            return true;
          case CountryCode::SH:
            value = "SH";
            return true;
          case CountryCode::SI:
            value = "SI";
            return true;
          case CountryCode::SJ:
            value = "SJ";
            return true;
          case CountryCode::SK:
            value = "SK";
            return true;
          case CountryCode::SL:
            value = "SL";
            return true;
          case CountryCode::SM:
            value = "SM";
            return true;
          case CountryCode::SN:
            value = "SN";
            return true;
          case CountryCode::SO:
            value = "SO";
            return true;
          case CountryCode::SR:
            value = "SR";
            return true;
          case CountryCode::SS:
            value = "SS";
            return true;
          case CountryCode::ST:
            value = "ST";
            return true;
          case CountryCode::SV:
            value = "SV";
            return true;
          case CountryCode::SX:
            value = "SX";
            return true;
          case CountryCode::SY:
            value = "SY";
            return true;
          case CountryCode::SZ:
            value = "SZ";
            return true;
          case CountryCode::TC:
            value = "TC";
            return true;
          case CountryCode::TD:
            value = "TD";
            return true;
          case CountryCode::TF:
            value = "TF";
            return true;
          case CountryCode::TG:
            value = "TG";
            return true;
          case CountryCode::TH:
            value = "TH";
            return true;
          case CountryCode::TJ:
            value = "TJ";
            return true;
          case CountryCode::TK:
            value = "TK";
            return true;
          case CountryCode::TL:
            value = "TL";
            return true;
          case CountryCode::TM:
            value = "TM";
            return true;
          case CountryCode::TN:
            value = "TN";
            return true;
          case CountryCode::TO:
            value = "TO";
            return true;
          case CountryCode::TP:
            value = "TP";
            return true;
          case CountryCode::TR:
            value = "TR";
            return true;
          case CountryCode::TT:
            value = "TT";
            return true;
          case CountryCode::TV:
            value = "TV";
            return true;
          case CountryCode::TW:
            value = "TW";
            return true;
          case CountryCode::TZ:
            value = "TZ";
            return true;
          case CountryCode::UA:
            value = "UA";
            return true;
          case CountryCode::UG:
            value = "UG";
            return true;
          case CountryCode::US:
            value = "US";
            return true;
          case CountryCode::UY:
            value = "UY";
            return true;
          case CountryCode::UZ:
            value = "UZ";
            return true;
          case CountryCode::VA:
            value = "VA";
            return true;
          case CountryCode::VC:
            value = "VC";
            return true;
          case CountryCode::VE:
            value = "VE";
            return true;
          case CountryCode::VG:
            value = "VG";
            return true;
          case CountryCode::VI:
            value = "VI";
            return true;
          case CountryCode::VN:
            value = "VN";
            return true;
          case CountryCode::VU:
            value = "VU";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper2(CountryCode enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case CountryCode::WF:
            value = "WF";
            return true;
          case CountryCode::WS:
            value = "WS";
            return true;
          case CountryCode::YE:
            value = "YE";
            return true;
          case CountryCode::YT:
            value = "YT";
            return true;
          case CountryCode::ZA:
            value = "ZA";
            return true;
          case CountryCode::ZM:
            value = "ZM";
            return true;
          case CountryCode::ZW:
            value = "ZW";
            return true;
          default:
            return false;
          }
        }

        CountryCode GetCountryCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          CountryCode enumValue;
          if (GetEnumForNameHelper0(hashCode, enumValue))
          {
             return enumValue;
          }
          else if (GetEnumForNameHelper1(hashCode, enumValue))
          {
             return enumValue;
          }
          else if (GetEnumForNameHelper2(hashCode, enumValue))
          {
             return enumValue;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CountryCode>(hashCode);
          }

          return CountryCode::NOT_SET;
        }

        Aws::String GetNameForCountryCode(CountryCode enumValue)
        {
          Aws::String value;
          if (GetNameForEnumHelper0(enumValue, value))
          {
            return value;
          }
          else if (GetNameForEnumHelper1(enumValue, value))
          {
            return value;
          }
          else if (GetNameForEnumHelper2(enumValue, value))
          {
            return value;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
          }

          return {};
        }

      } // namespace CountryCodeMapper
    } // namespace Model
  } // namespace Route53Domains
} // namespace Aws
