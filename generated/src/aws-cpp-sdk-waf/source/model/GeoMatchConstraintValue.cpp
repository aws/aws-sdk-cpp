/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/GeoMatchConstraintValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAF
  {
    namespace Model
    {
      namespace GeoMatchConstraintValueMapper
      {

        static constexpr uint32_t AF_HASH = ConstExprHashingUtils::HashString("AF");
        static constexpr uint32_t AX_HASH = ConstExprHashingUtils::HashString("AX");
        static constexpr uint32_t AL_HASH = ConstExprHashingUtils::HashString("AL");
        static constexpr uint32_t DZ_HASH = ConstExprHashingUtils::HashString("DZ");
        static constexpr uint32_t AS_HASH = ConstExprHashingUtils::HashString("AS");
        static constexpr uint32_t AD_HASH = ConstExprHashingUtils::HashString("AD");
        static constexpr uint32_t AO_HASH = ConstExprHashingUtils::HashString("AO");
        static constexpr uint32_t AI_HASH = ConstExprHashingUtils::HashString("AI");
        static constexpr uint32_t AQ_HASH = ConstExprHashingUtils::HashString("AQ");
        static constexpr uint32_t AG_HASH = ConstExprHashingUtils::HashString("AG");
        static constexpr uint32_t AR_HASH = ConstExprHashingUtils::HashString("AR");
        static constexpr uint32_t AM_HASH = ConstExprHashingUtils::HashString("AM");
        static constexpr uint32_t AW_HASH = ConstExprHashingUtils::HashString("AW");
        static constexpr uint32_t AU_HASH = ConstExprHashingUtils::HashString("AU");
        static constexpr uint32_t AT_HASH = ConstExprHashingUtils::HashString("AT");
        static constexpr uint32_t AZ_HASH = ConstExprHashingUtils::HashString("AZ");
        static constexpr uint32_t BS_HASH = ConstExprHashingUtils::HashString("BS");
        static constexpr uint32_t BH_HASH = ConstExprHashingUtils::HashString("BH");
        static constexpr uint32_t BD_HASH = ConstExprHashingUtils::HashString("BD");
        static constexpr uint32_t BB_HASH = ConstExprHashingUtils::HashString("BB");
        static constexpr uint32_t BY_HASH = ConstExprHashingUtils::HashString("BY");
        static constexpr uint32_t BE_HASH = ConstExprHashingUtils::HashString("BE");
        static constexpr uint32_t BZ_HASH = ConstExprHashingUtils::HashString("BZ");
        static constexpr uint32_t BJ_HASH = ConstExprHashingUtils::HashString("BJ");
        static constexpr uint32_t BM_HASH = ConstExprHashingUtils::HashString("BM");
        static constexpr uint32_t BT_HASH = ConstExprHashingUtils::HashString("BT");
        static constexpr uint32_t BO_HASH = ConstExprHashingUtils::HashString("BO");
        static constexpr uint32_t BQ_HASH = ConstExprHashingUtils::HashString("BQ");
        static constexpr uint32_t BA_HASH = ConstExprHashingUtils::HashString("BA");
        static constexpr uint32_t BW_HASH = ConstExprHashingUtils::HashString("BW");
        static constexpr uint32_t BV_HASH = ConstExprHashingUtils::HashString("BV");
        static constexpr uint32_t BR_HASH = ConstExprHashingUtils::HashString("BR");
        static constexpr uint32_t IO_HASH = ConstExprHashingUtils::HashString("IO");
        static constexpr uint32_t BN_HASH = ConstExprHashingUtils::HashString("BN");
        static constexpr uint32_t BG_HASH = ConstExprHashingUtils::HashString("BG");
        static constexpr uint32_t BF_HASH = ConstExprHashingUtils::HashString("BF");
        static constexpr uint32_t BI_HASH = ConstExprHashingUtils::HashString("BI");
        static constexpr uint32_t KH_HASH = ConstExprHashingUtils::HashString("KH");
        static constexpr uint32_t CM_HASH = ConstExprHashingUtils::HashString("CM");
        static constexpr uint32_t CA_HASH = ConstExprHashingUtils::HashString("CA");
        static constexpr uint32_t CV_HASH = ConstExprHashingUtils::HashString("CV");
        static constexpr uint32_t KY_HASH = ConstExprHashingUtils::HashString("KY");
        static constexpr uint32_t CF_HASH = ConstExprHashingUtils::HashString("CF");
        static constexpr uint32_t TD_HASH = ConstExprHashingUtils::HashString("TD");
        static constexpr uint32_t CL_HASH = ConstExprHashingUtils::HashString("CL");
        static constexpr uint32_t CN_HASH = ConstExprHashingUtils::HashString("CN");
        static constexpr uint32_t CX_HASH = ConstExprHashingUtils::HashString("CX");
        static constexpr uint32_t CC_HASH = ConstExprHashingUtils::HashString("CC");
        static constexpr uint32_t CO_HASH = ConstExprHashingUtils::HashString("CO");
        static constexpr uint32_t KM_HASH = ConstExprHashingUtils::HashString("KM");
        static constexpr uint32_t CG_HASH = ConstExprHashingUtils::HashString("CG");
        static constexpr uint32_t CD_HASH = ConstExprHashingUtils::HashString("CD");
        static constexpr uint32_t CK_HASH = ConstExprHashingUtils::HashString("CK");
        static constexpr uint32_t CR_HASH = ConstExprHashingUtils::HashString("CR");
        static constexpr uint32_t CI_HASH = ConstExprHashingUtils::HashString("CI");
        static constexpr uint32_t HR_HASH = ConstExprHashingUtils::HashString("HR");
        static constexpr uint32_t CU_HASH = ConstExprHashingUtils::HashString("CU");
        static constexpr uint32_t CW_HASH = ConstExprHashingUtils::HashString("CW");
        static constexpr uint32_t CY_HASH = ConstExprHashingUtils::HashString("CY");
        static constexpr uint32_t CZ_HASH = ConstExprHashingUtils::HashString("CZ");
        static constexpr uint32_t DK_HASH = ConstExprHashingUtils::HashString("DK");
        static constexpr uint32_t DJ_HASH = ConstExprHashingUtils::HashString("DJ");
        static constexpr uint32_t DM_HASH = ConstExprHashingUtils::HashString("DM");
        static constexpr uint32_t DO_HASH = ConstExprHashingUtils::HashString("DO");
        static constexpr uint32_t EC_HASH = ConstExprHashingUtils::HashString("EC");
        static constexpr uint32_t EG_HASH = ConstExprHashingUtils::HashString("EG");
        static constexpr uint32_t SV_HASH = ConstExprHashingUtils::HashString("SV");
        static constexpr uint32_t GQ_HASH = ConstExprHashingUtils::HashString("GQ");
        static constexpr uint32_t ER_HASH = ConstExprHashingUtils::HashString("ER");
        static constexpr uint32_t EE_HASH = ConstExprHashingUtils::HashString("EE");
        static constexpr uint32_t ET_HASH = ConstExprHashingUtils::HashString("ET");
        static constexpr uint32_t FK_HASH = ConstExprHashingUtils::HashString("FK");
        static constexpr uint32_t FO_HASH = ConstExprHashingUtils::HashString("FO");
        static constexpr uint32_t FJ_HASH = ConstExprHashingUtils::HashString("FJ");
        static constexpr uint32_t FI_HASH = ConstExprHashingUtils::HashString("FI");
        static constexpr uint32_t FR_HASH = ConstExprHashingUtils::HashString("FR");
        static constexpr uint32_t GF_HASH = ConstExprHashingUtils::HashString("GF");
        static constexpr uint32_t PF_HASH = ConstExprHashingUtils::HashString("PF");
        static constexpr uint32_t TF_HASH = ConstExprHashingUtils::HashString("TF");
        static constexpr uint32_t GA_HASH = ConstExprHashingUtils::HashString("GA");
        static constexpr uint32_t GM_HASH = ConstExprHashingUtils::HashString("GM");
        static constexpr uint32_t GE_HASH = ConstExprHashingUtils::HashString("GE");
        static constexpr uint32_t DE_HASH = ConstExprHashingUtils::HashString("DE");
        static constexpr uint32_t GH_HASH = ConstExprHashingUtils::HashString("GH");
        static constexpr uint32_t GI_HASH = ConstExprHashingUtils::HashString("GI");
        static constexpr uint32_t GR_HASH = ConstExprHashingUtils::HashString("GR");
        static constexpr uint32_t GL_HASH = ConstExprHashingUtils::HashString("GL");
        static constexpr uint32_t GD_HASH = ConstExprHashingUtils::HashString("GD");
        static constexpr uint32_t GP_HASH = ConstExprHashingUtils::HashString("GP");
        static constexpr uint32_t GU_HASH = ConstExprHashingUtils::HashString("GU");
        static constexpr uint32_t GT_HASH = ConstExprHashingUtils::HashString("GT");
        static constexpr uint32_t GG_HASH = ConstExprHashingUtils::HashString("GG");
        static constexpr uint32_t GN_HASH = ConstExprHashingUtils::HashString("GN");
        static constexpr uint32_t GW_HASH = ConstExprHashingUtils::HashString("GW");
        static constexpr uint32_t GY_HASH = ConstExprHashingUtils::HashString("GY");
        static constexpr uint32_t HT_HASH = ConstExprHashingUtils::HashString("HT");
        static constexpr uint32_t HM_HASH = ConstExprHashingUtils::HashString("HM");
        static constexpr uint32_t VA_HASH = ConstExprHashingUtils::HashString("VA");
        static constexpr uint32_t HN_HASH = ConstExprHashingUtils::HashString("HN");
        static constexpr uint32_t HK_HASH = ConstExprHashingUtils::HashString("HK");
        static constexpr uint32_t HU_HASH = ConstExprHashingUtils::HashString("HU");
        static constexpr uint32_t IS_HASH = ConstExprHashingUtils::HashString("IS");
        static constexpr uint32_t IN_HASH = ConstExprHashingUtils::HashString("IN");
        static constexpr uint32_t ID_HASH = ConstExprHashingUtils::HashString("ID");
        static constexpr uint32_t IR_HASH = ConstExprHashingUtils::HashString("IR");
        static constexpr uint32_t IQ_HASH = ConstExprHashingUtils::HashString("IQ");
        static constexpr uint32_t IE_HASH = ConstExprHashingUtils::HashString("IE");
        static constexpr uint32_t IM_HASH = ConstExprHashingUtils::HashString("IM");
        static constexpr uint32_t IL_HASH = ConstExprHashingUtils::HashString("IL");
        static constexpr uint32_t IT_HASH = ConstExprHashingUtils::HashString("IT");
        static constexpr uint32_t JM_HASH = ConstExprHashingUtils::HashString("JM");
        static constexpr uint32_t JP_HASH = ConstExprHashingUtils::HashString("JP");
        static constexpr uint32_t JE_HASH = ConstExprHashingUtils::HashString("JE");
        static constexpr uint32_t JO_HASH = ConstExprHashingUtils::HashString("JO");
        static constexpr uint32_t KZ_HASH = ConstExprHashingUtils::HashString("KZ");
        static constexpr uint32_t KE_HASH = ConstExprHashingUtils::HashString("KE");
        static constexpr uint32_t KI_HASH = ConstExprHashingUtils::HashString("KI");
        static constexpr uint32_t KP_HASH = ConstExprHashingUtils::HashString("KP");
        static constexpr uint32_t KR_HASH = ConstExprHashingUtils::HashString("KR");
        static constexpr uint32_t KW_HASH = ConstExprHashingUtils::HashString("KW");
        static constexpr uint32_t KG_HASH = ConstExprHashingUtils::HashString("KG");
        static constexpr uint32_t LA_HASH = ConstExprHashingUtils::HashString("LA");
        static constexpr uint32_t LV_HASH = ConstExprHashingUtils::HashString("LV");
        static constexpr uint32_t LB_HASH = ConstExprHashingUtils::HashString("LB");
        static constexpr uint32_t LS_HASH = ConstExprHashingUtils::HashString("LS");
        static constexpr uint32_t LR_HASH = ConstExprHashingUtils::HashString("LR");
        static constexpr uint32_t LY_HASH = ConstExprHashingUtils::HashString("LY");
        static constexpr uint32_t LI_HASH = ConstExprHashingUtils::HashString("LI");
        static constexpr uint32_t LT_HASH = ConstExprHashingUtils::HashString("LT");
        static constexpr uint32_t LU_HASH = ConstExprHashingUtils::HashString("LU");
        static constexpr uint32_t MO_HASH = ConstExprHashingUtils::HashString("MO");
        static constexpr uint32_t MK_HASH = ConstExprHashingUtils::HashString("MK");
        static constexpr uint32_t MG_HASH = ConstExprHashingUtils::HashString("MG");
        static constexpr uint32_t MW_HASH = ConstExprHashingUtils::HashString("MW");
        static constexpr uint32_t MY_HASH = ConstExprHashingUtils::HashString("MY");
        static constexpr uint32_t MV_HASH = ConstExprHashingUtils::HashString("MV");
        static constexpr uint32_t ML_HASH = ConstExprHashingUtils::HashString("ML");
        static constexpr uint32_t MT_HASH = ConstExprHashingUtils::HashString("MT");
        static constexpr uint32_t MH_HASH = ConstExprHashingUtils::HashString("MH");
        static constexpr uint32_t MQ_HASH = ConstExprHashingUtils::HashString("MQ");
        static constexpr uint32_t MR_HASH = ConstExprHashingUtils::HashString("MR");
        static constexpr uint32_t MU_HASH = ConstExprHashingUtils::HashString("MU");
        static constexpr uint32_t YT_HASH = ConstExprHashingUtils::HashString("YT");
        static constexpr uint32_t MX_HASH = ConstExprHashingUtils::HashString("MX");
        static constexpr uint32_t FM_HASH = ConstExprHashingUtils::HashString("FM");
        static constexpr uint32_t MD_HASH = ConstExprHashingUtils::HashString("MD");
        static constexpr uint32_t MC_HASH = ConstExprHashingUtils::HashString("MC");
        static constexpr uint32_t MN_HASH = ConstExprHashingUtils::HashString("MN");
        static constexpr uint32_t ME_HASH = ConstExprHashingUtils::HashString("ME");
        static constexpr uint32_t MS_HASH = ConstExprHashingUtils::HashString("MS");
        static constexpr uint32_t MA_HASH = ConstExprHashingUtils::HashString("MA");
        static constexpr uint32_t MZ_HASH = ConstExprHashingUtils::HashString("MZ");
        static constexpr uint32_t MM_HASH = ConstExprHashingUtils::HashString("MM");
        static constexpr uint32_t NA_HASH = ConstExprHashingUtils::HashString("NA");
        static constexpr uint32_t NR_HASH = ConstExprHashingUtils::HashString("NR");
        static constexpr uint32_t NP_HASH = ConstExprHashingUtils::HashString("NP");
        static constexpr uint32_t NL_HASH = ConstExprHashingUtils::HashString("NL");
        static constexpr uint32_t NC_HASH = ConstExprHashingUtils::HashString("NC");
        static constexpr uint32_t NZ_HASH = ConstExprHashingUtils::HashString("NZ");
        static constexpr uint32_t NI_HASH = ConstExprHashingUtils::HashString("NI");
        static constexpr uint32_t NE_HASH = ConstExprHashingUtils::HashString("NE");
        static constexpr uint32_t NG_HASH = ConstExprHashingUtils::HashString("NG");
        static constexpr uint32_t NU_HASH = ConstExprHashingUtils::HashString("NU");
        static constexpr uint32_t NF_HASH = ConstExprHashingUtils::HashString("NF");
        static constexpr uint32_t MP_HASH = ConstExprHashingUtils::HashString("MP");
        static constexpr uint32_t NO_HASH = ConstExprHashingUtils::HashString("NO");
        static constexpr uint32_t OM_HASH = ConstExprHashingUtils::HashString("OM");
        static constexpr uint32_t PK_HASH = ConstExprHashingUtils::HashString("PK");
        static constexpr uint32_t PW_HASH = ConstExprHashingUtils::HashString("PW");
        static constexpr uint32_t PS_HASH = ConstExprHashingUtils::HashString("PS");
        static constexpr uint32_t PA_HASH = ConstExprHashingUtils::HashString("PA");
        static constexpr uint32_t PG_HASH = ConstExprHashingUtils::HashString("PG");
        static constexpr uint32_t PY_HASH = ConstExprHashingUtils::HashString("PY");
        static constexpr uint32_t PE_HASH = ConstExprHashingUtils::HashString("PE");
        static constexpr uint32_t PH_HASH = ConstExprHashingUtils::HashString("PH");
        static constexpr uint32_t PN_HASH = ConstExprHashingUtils::HashString("PN");
        static constexpr uint32_t PL_HASH = ConstExprHashingUtils::HashString("PL");
        static constexpr uint32_t PT_HASH = ConstExprHashingUtils::HashString("PT");
        static constexpr uint32_t PR_HASH = ConstExprHashingUtils::HashString("PR");
        static constexpr uint32_t QA_HASH = ConstExprHashingUtils::HashString("QA");
        static constexpr uint32_t RE_HASH = ConstExprHashingUtils::HashString("RE");
        static constexpr uint32_t RO_HASH = ConstExprHashingUtils::HashString("RO");
        static constexpr uint32_t RU_HASH = ConstExprHashingUtils::HashString("RU");
        static constexpr uint32_t RW_HASH = ConstExprHashingUtils::HashString("RW");
        static constexpr uint32_t BL_HASH = ConstExprHashingUtils::HashString("BL");
        static constexpr uint32_t SH_HASH = ConstExprHashingUtils::HashString("SH");
        static constexpr uint32_t KN_HASH = ConstExprHashingUtils::HashString("KN");
        static constexpr uint32_t LC_HASH = ConstExprHashingUtils::HashString("LC");
        static constexpr uint32_t MF_HASH = ConstExprHashingUtils::HashString("MF");
        static constexpr uint32_t PM_HASH = ConstExprHashingUtils::HashString("PM");
        static constexpr uint32_t VC_HASH = ConstExprHashingUtils::HashString("VC");
        static constexpr uint32_t WS_HASH = ConstExprHashingUtils::HashString("WS");
        static constexpr uint32_t SM_HASH = ConstExprHashingUtils::HashString("SM");
        static constexpr uint32_t ST_HASH = ConstExprHashingUtils::HashString("ST");
        static constexpr uint32_t SA_HASH = ConstExprHashingUtils::HashString("SA");
        static constexpr uint32_t SN_HASH = ConstExprHashingUtils::HashString("SN");
        static constexpr uint32_t RS_HASH = ConstExprHashingUtils::HashString("RS");
        static constexpr uint32_t SC_HASH = ConstExprHashingUtils::HashString("SC");
        static constexpr uint32_t SL_HASH = ConstExprHashingUtils::HashString("SL");
        static constexpr uint32_t SG_HASH = ConstExprHashingUtils::HashString("SG");
        static constexpr uint32_t SX_HASH = ConstExprHashingUtils::HashString("SX");
        static constexpr uint32_t SK_HASH = ConstExprHashingUtils::HashString("SK");
        static constexpr uint32_t SI_HASH = ConstExprHashingUtils::HashString("SI");
        static constexpr uint32_t SB_HASH = ConstExprHashingUtils::HashString("SB");
        static constexpr uint32_t SO_HASH = ConstExprHashingUtils::HashString("SO");
        static constexpr uint32_t ZA_HASH = ConstExprHashingUtils::HashString("ZA");
        static constexpr uint32_t GS_HASH = ConstExprHashingUtils::HashString("GS");
        static constexpr uint32_t SS_HASH = ConstExprHashingUtils::HashString("SS");
        static constexpr uint32_t ES_HASH = ConstExprHashingUtils::HashString("ES");
        static constexpr uint32_t LK_HASH = ConstExprHashingUtils::HashString("LK");
        static constexpr uint32_t SD_HASH = ConstExprHashingUtils::HashString("SD");
        static constexpr uint32_t SR_HASH = ConstExprHashingUtils::HashString("SR");
        static constexpr uint32_t SJ_HASH = ConstExprHashingUtils::HashString("SJ");
        static constexpr uint32_t SZ_HASH = ConstExprHashingUtils::HashString("SZ");
        static constexpr uint32_t SE_HASH = ConstExprHashingUtils::HashString("SE");
        static constexpr uint32_t CH_HASH = ConstExprHashingUtils::HashString("CH");
        static constexpr uint32_t SY_HASH = ConstExprHashingUtils::HashString("SY");
        static constexpr uint32_t TW_HASH = ConstExprHashingUtils::HashString("TW");
        static constexpr uint32_t TJ_HASH = ConstExprHashingUtils::HashString("TJ");
        static constexpr uint32_t TZ_HASH = ConstExprHashingUtils::HashString("TZ");
        static constexpr uint32_t TH_HASH = ConstExprHashingUtils::HashString("TH");
        static constexpr uint32_t TL_HASH = ConstExprHashingUtils::HashString("TL");
        static constexpr uint32_t TG_HASH = ConstExprHashingUtils::HashString("TG");
        static constexpr uint32_t TK_HASH = ConstExprHashingUtils::HashString("TK");
        static constexpr uint32_t TO_HASH = ConstExprHashingUtils::HashString("TO");
        static constexpr uint32_t TT_HASH = ConstExprHashingUtils::HashString("TT");
        static constexpr uint32_t TN_HASH = ConstExprHashingUtils::HashString("TN");
        static constexpr uint32_t TR_HASH = ConstExprHashingUtils::HashString("TR");
        static constexpr uint32_t TM_HASH = ConstExprHashingUtils::HashString("TM");
        static constexpr uint32_t TC_HASH = ConstExprHashingUtils::HashString("TC");
        static constexpr uint32_t TV_HASH = ConstExprHashingUtils::HashString("TV");
        static constexpr uint32_t UG_HASH = ConstExprHashingUtils::HashString("UG");
        static constexpr uint32_t UA_HASH = ConstExprHashingUtils::HashString("UA");
        static constexpr uint32_t AE_HASH = ConstExprHashingUtils::HashString("AE");
        static constexpr uint32_t GB_HASH = ConstExprHashingUtils::HashString("GB");
        static constexpr uint32_t US_HASH = ConstExprHashingUtils::HashString("US");
        static constexpr uint32_t UM_HASH = ConstExprHashingUtils::HashString("UM");
        static constexpr uint32_t UY_HASH = ConstExprHashingUtils::HashString("UY");
        static constexpr uint32_t UZ_HASH = ConstExprHashingUtils::HashString("UZ");
        static constexpr uint32_t VU_HASH = ConstExprHashingUtils::HashString("VU");
        static constexpr uint32_t VE_HASH = ConstExprHashingUtils::HashString("VE");
        static constexpr uint32_t VN_HASH = ConstExprHashingUtils::HashString("VN");
        static constexpr uint32_t VG_HASH = ConstExprHashingUtils::HashString("VG");
        static constexpr uint32_t VI_HASH = ConstExprHashingUtils::HashString("VI");
        static constexpr uint32_t WF_HASH = ConstExprHashingUtils::HashString("WF");
        static constexpr uint32_t EH_HASH = ConstExprHashingUtils::HashString("EH");
        static constexpr uint32_t YE_HASH = ConstExprHashingUtils::HashString("YE");
        static constexpr uint32_t ZM_HASH = ConstExprHashingUtils::HashString("ZM");
        static constexpr uint32_t ZW_HASH = ConstExprHashingUtils::HashString("ZW");

        /*
        The if-else chains in this file are converted into a jump table by the compiler,
        which allows constant time lookup. The chain has been broken into helper functions
        because MSVC has a maximum of 122 chained if-else blocks.
        */
        static bool GetEnumForNameHelper0(uint32_t hashCode, GeoMatchConstraintValue& enumValue)
        {
          if (hashCode == AF_HASH)
          {
            enumValue = GeoMatchConstraintValue::AF;
            return true;
          }
          else if (hashCode == AX_HASH)
          {
            enumValue = GeoMatchConstraintValue::AX;
            return true;
          }
          else if (hashCode == AL_HASH)
          {
            enumValue = GeoMatchConstraintValue::AL;
            return true;
          }
          else if (hashCode == DZ_HASH)
          {
            enumValue = GeoMatchConstraintValue::DZ;
            return true;
          }
          else if (hashCode == AS_HASH)
          {
            enumValue = GeoMatchConstraintValue::AS;
            return true;
          }
          else if (hashCode == AD_HASH)
          {
            enumValue = GeoMatchConstraintValue::AD;
            return true;
          }
          else if (hashCode == AO_HASH)
          {
            enumValue = GeoMatchConstraintValue::AO;
            return true;
          }
          else if (hashCode == AI_HASH)
          {
            enumValue = GeoMatchConstraintValue::AI;
            return true;
          }
          else if (hashCode == AQ_HASH)
          {
            enumValue = GeoMatchConstraintValue::AQ;
            return true;
          }
          else if (hashCode == AG_HASH)
          {
            enumValue = GeoMatchConstraintValue::AG;
            return true;
          }
          else if (hashCode == AR_HASH)
          {
            enumValue = GeoMatchConstraintValue::AR;
            return true;
          }
          else if (hashCode == AM_HASH)
          {
            enumValue = GeoMatchConstraintValue::AM;
            return true;
          }
          else if (hashCode == AW_HASH)
          {
            enumValue = GeoMatchConstraintValue::AW;
            return true;
          }
          else if (hashCode == AU_HASH)
          {
            enumValue = GeoMatchConstraintValue::AU;
            return true;
          }
          else if (hashCode == AT_HASH)
          {
            enumValue = GeoMatchConstraintValue::AT;
            return true;
          }
          else if (hashCode == AZ_HASH)
          {
            enumValue = GeoMatchConstraintValue::AZ;
            return true;
          }
          else if (hashCode == BS_HASH)
          {
            enumValue = GeoMatchConstraintValue::BS;
            return true;
          }
          else if (hashCode == BH_HASH)
          {
            enumValue = GeoMatchConstraintValue::BH;
            return true;
          }
          else if (hashCode == BD_HASH)
          {
            enumValue = GeoMatchConstraintValue::BD;
            return true;
          }
          else if (hashCode == BB_HASH)
          {
            enumValue = GeoMatchConstraintValue::BB;
            return true;
          }
          else if (hashCode == BY_HASH)
          {
            enumValue = GeoMatchConstraintValue::BY;
            return true;
          }
          else if (hashCode == BE_HASH)
          {
            enumValue = GeoMatchConstraintValue::BE;
            return true;
          }
          else if (hashCode == BZ_HASH)
          {
            enumValue = GeoMatchConstraintValue::BZ;
            return true;
          }
          else if (hashCode == BJ_HASH)
          {
            enumValue = GeoMatchConstraintValue::BJ;
            return true;
          }
          else if (hashCode == BM_HASH)
          {
            enumValue = GeoMatchConstraintValue::BM;
            return true;
          }
          else if (hashCode == BT_HASH)
          {
            enumValue = GeoMatchConstraintValue::BT;
            return true;
          }
          else if (hashCode == BO_HASH)
          {
            enumValue = GeoMatchConstraintValue::BO;
            return true;
          }
          else if (hashCode == BQ_HASH)
          {
            enumValue = GeoMatchConstraintValue::BQ;
            return true;
          }
          else if (hashCode == BA_HASH)
          {
            enumValue = GeoMatchConstraintValue::BA;
            return true;
          }
          else if (hashCode == BW_HASH)
          {
            enumValue = GeoMatchConstraintValue::BW;
            return true;
          }
          else if (hashCode == BV_HASH)
          {
            enumValue = GeoMatchConstraintValue::BV;
            return true;
          }
          else if (hashCode == BR_HASH)
          {
            enumValue = GeoMatchConstraintValue::BR;
            return true;
          }
          else if (hashCode == IO_HASH)
          {
            enumValue = GeoMatchConstraintValue::IO;
            return true;
          }
          else if (hashCode == BN_HASH)
          {
            enumValue = GeoMatchConstraintValue::BN;
            return true;
          }
          else if (hashCode == BG_HASH)
          {
            enumValue = GeoMatchConstraintValue::BG;
            return true;
          }
          else if (hashCode == BF_HASH)
          {
            enumValue = GeoMatchConstraintValue::BF;
            return true;
          }
          else if (hashCode == BI_HASH)
          {
            enumValue = GeoMatchConstraintValue::BI;
            return true;
          }
          else if (hashCode == KH_HASH)
          {
            enumValue = GeoMatchConstraintValue::KH;
            return true;
          }
          else if (hashCode == CM_HASH)
          {
            enumValue = GeoMatchConstraintValue::CM;
            return true;
          }
          else if (hashCode == CA_HASH)
          {
            enumValue = GeoMatchConstraintValue::CA;
            return true;
          }
          else if (hashCode == CV_HASH)
          {
            enumValue = GeoMatchConstraintValue::CV;
            return true;
          }
          else if (hashCode == KY_HASH)
          {
            enumValue = GeoMatchConstraintValue::KY;
            return true;
          }
          else if (hashCode == CF_HASH)
          {
            enumValue = GeoMatchConstraintValue::CF;
            return true;
          }
          else if (hashCode == TD_HASH)
          {
            enumValue = GeoMatchConstraintValue::TD;
            return true;
          }
          else if (hashCode == CL_HASH)
          {
            enumValue = GeoMatchConstraintValue::CL;
            return true;
          }
          else if (hashCode == CN_HASH)
          {
            enumValue = GeoMatchConstraintValue::CN;
            return true;
          }
          else if (hashCode == CX_HASH)
          {
            enumValue = GeoMatchConstraintValue::CX;
            return true;
          }
          else if (hashCode == CC_HASH)
          {
            enumValue = GeoMatchConstraintValue::CC;
            return true;
          }
          else if (hashCode == CO_HASH)
          {
            enumValue = GeoMatchConstraintValue::CO;
            return true;
          }
          else if (hashCode == KM_HASH)
          {
            enumValue = GeoMatchConstraintValue::KM;
            return true;
          }
          else if (hashCode == CG_HASH)
          {
            enumValue = GeoMatchConstraintValue::CG;
            return true;
          }
          else if (hashCode == CD_HASH)
          {
            enumValue = GeoMatchConstraintValue::CD;
            return true;
          }
          else if (hashCode == CK_HASH)
          {
            enumValue = GeoMatchConstraintValue::CK;
            return true;
          }
          else if (hashCode == CR_HASH)
          {
            enumValue = GeoMatchConstraintValue::CR;
            return true;
          }
          else if (hashCode == CI_HASH)
          {
            enumValue = GeoMatchConstraintValue::CI;
            return true;
          }
          else if (hashCode == HR_HASH)
          {
            enumValue = GeoMatchConstraintValue::HR;
            return true;
          }
          else if (hashCode == CU_HASH)
          {
            enumValue = GeoMatchConstraintValue::CU;
            return true;
          }
          else if (hashCode == CW_HASH)
          {
            enumValue = GeoMatchConstraintValue::CW;
            return true;
          }
          else if (hashCode == CY_HASH)
          {
            enumValue = GeoMatchConstraintValue::CY;
            return true;
          }
          else if (hashCode == CZ_HASH)
          {
            enumValue = GeoMatchConstraintValue::CZ;
            return true;
          }
          else if (hashCode == DK_HASH)
          {
            enumValue = GeoMatchConstraintValue::DK;
            return true;
          }
          else if (hashCode == DJ_HASH)
          {
            enumValue = GeoMatchConstraintValue::DJ;
            return true;
          }
          else if (hashCode == DM_HASH)
          {
            enumValue = GeoMatchConstraintValue::DM;
            return true;
          }
          else if (hashCode == DO_HASH)
          {
            enumValue = GeoMatchConstraintValue::DO;
            return true;
          }
          else if (hashCode == EC_HASH)
          {
            enumValue = GeoMatchConstraintValue::EC;
            return true;
          }
          else if (hashCode == EG_HASH)
          {
            enumValue = GeoMatchConstraintValue::EG;
            return true;
          }
          else if (hashCode == SV_HASH)
          {
            enumValue = GeoMatchConstraintValue::SV;
            return true;
          }
          else if (hashCode == GQ_HASH)
          {
            enumValue = GeoMatchConstraintValue::GQ;
            return true;
          }
          else if (hashCode == ER_HASH)
          {
            enumValue = GeoMatchConstraintValue::ER;
            return true;
          }
          else if (hashCode == EE_HASH)
          {
            enumValue = GeoMatchConstraintValue::EE;
            return true;
          }
          else if (hashCode == ET_HASH)
          {
            enumValue = GeoMatchConstraintValue::ET;
            return true;
          }
          else if (hashCode == FK_HASH)
          {
            enumValue = GeoMatchConstraintValue::FK;
            return true;
          }
          else if (hashCode == FO_HASH)
          {
            enumValue = GeoMatchConstraintValue::FO;
            return true;
          }
          else if (hashCode == FJ_HASH)
          {
            enumValue = GeoMatchConstraintValue::FJ;
            return true;
          }
          else if (hashCode == FI_HASH)
          {
            enumValue = GeoMatchConstraintValue::FI;
            return true;
          }
          else if (hashCode == FR_HASH)
          {
            enumValue = GeoMatchConstraintValue::FR;
            return true;
          }
          else if (hashCode == GF_HASH)
          {
            enumValue = GeoMatchConstraintValue::GF;
            return true;
          }
          else if (hashCode == PF_HASH)
          {
            enumValue = GeoMatchConstraintValue::PF;
            return true;
          }
          else if (hashCode == TF_HASH)
          {
            enumValue = GeoMatchConstraintValue::TF;
            return true;
          }
          else if (hashCode == GA_HASH)
          {
            enumValue = GeoMatchConstraintValue::GA;
            return true;
          }
          else if (hashCode == GM_HASH)
          {
            enumValue = GeoMatchConstraintValue::GM;
            return true;
          }
          else if (hashCode == GE_HASH)
          {
            enumValue = GeoMatchConstraintValue::GE;
            return true;
          }
          else if (hashCode == DE_HASH)
          {
            enumValue = GeoMatchConstraintValue::DE;
            return true;
          }
          else if (hashCode == GH_HASH)
          {
            enumValue = GeoMatchConstraintValue::GH;
            return true;
          }
          else if (hashCode == GI_HASH)
          {
            enumValue = GeoMatchConstraintValue::GI;
            return true;
          }
          else if (hashCode == GR_HASH)
          {
            enumValue = GeoMatchConstraintValue::GR;
            return true;
          }
          else if (hashCode == GL_HASH)
          {
            enumValue = GeoMatchConstraintValue::GL;
            return true;
          }
          else if (hashCode == GD_HASH)
          {
            enumValue = GeoMatchConstraintValue::GD;
            return true;
          }
          else if (hashCode == GP_HASH)
          {
            enumValue = GeoMatchConstraintValue::GP;
            return true;
          }
          else if (hashCode == GU_HASH)
          {
            enumValue = GeoMatchConstraintValue::GU;
            return true;
          }
          else if (hashCode == GT_HASH)
          {
            enumValue = GeoMatchConstraintValue::GT;
            return true;
          }
          else if (hashCode == GG_HASH)
          {
            enumValue = GeoMatchConstraintValue::GG;
            return true;
          }
          else if (hashCode == GN_HASH)
          {
            enumValue = GeoMatchConstraintValue::GN;
            return true;
          }
          else if (hashCode == GW_HASH)
          {
            enumValue = GeoMatchConstraintValue::GW;
            return true;
          }
          else if (hashCode == GY_HASH)
          {
            enumValue = GeoMatchConstraintValue::GY;
            return true;
          }
          else if (hashCode == HT_HASH)
          {
            enumValue = GeoMatchConstraintValue::HT;
            return true;
          }
          else if (hashCode == HM_HASH)
          {
            enumValue = GeoMatchConstraintValue::HM;
            return true;
          }
          else if (hashCode == VA_HASH)
          {
            enumValue = GeoMatchConstraintValue::VA;
            return true;
          }
          else if (hashCode == HN_HASH)
          {
            enumValue = GeoMatchConstraintValue::HN;
            return true;
          }
          else if (hashCode == HK_HASH)
          {
            enumValue = GeoMatchConstraintValue::HK;
            return true;
          }
          else if (hashCode == HU_HASH)
          {
            enumValue = GeoMatchConstraintValue::HU;
            return true;
          }
          else if (hashCode == IS_HASH)
          {
            enumValue = GeoMatchConstraintValue::IS;
            return true;
          }
          else if (hashCode == IN_HASH)
          {
            enumValue = GeoMatchConstraintValue::IN;
            return true;
          }
          else if (hashCode == ID_HASH)
          {
            enumValue = GeoMatchConstraintValue::ID;
            return true;
          }
          else if (hashCode == IR_HASH)
          {
            enumValue = GeoMatchConstraintValue::IR;
            return true;
          }
          else if (hashCode == IQ_HASH)
          {
            enumValue = GeoMatchConstraintValue::IQ;
            return true;
          }
          else if (hashCode == IE_HASH)
          {
            enumValue = GeoMatchConstraintValue::IE;
            return true;
          }
          else if (hashCode == IM_HASH)
          {
            enumValue = GeoMatchConstraintValue::IM;
            return true;
          }
          else if (hashCode == IL_HASH)
          {
            enumValue = GeoMatchConstraintValue::IL;
            return true;
          }
          else if (hashCode == IT_HASH)
          {
            enumValue = GeoMatchConstraintValue::IT;
            return true;
          }
          else if (hashCode == JM_HASH)
          {
            enumValue = GeoMatchConstraintValue::JM;
            return true;
          }
          else if (hashCode == JP_HASH)
          {
            enumValue = GeoMatchConstraintValue::JP;
            return true;
          }
          else if (hashCode == JE_HASH)
          {
            enumValue = GeoMatchConstraintValue::JE;
            return true;
          }
          else if (hashCode == JO_HASH)
          {
            enumValue = GeoMatchConstraintValue::JO;
            return true;
          }
          else if (hashCode == KZ_HASH)
          {
            enumValue = GeoMatchConstraintValue::KZ;
            return true;
          }
          else if (hashCode == KE_HASH)
          {
            enumValue = GeoMatchConstraintValue::KE;
            return true;
          }
          else if (hashCode == KI_HASH)
          {
            enumValue = GeoMatchConstraintValue::KI;
            return true;
          }
          else if (hashCode == KP_HASH)
          {
            enumValue = GeoMatchConstraintValue::KP;
            return true;
          }
          else if (hashCode == KR_HASH)
          {
            enumValue = GeoMatchConstraintValue::KR;
            return true;
          }
          else if (hashCode == KW_HASH)
          {
            enumValue = GeoMatchConstraintValue::KW;
            return true;
          }
          else if (hashCode == KG_HASH)
          {
            enumValue = GeoMatchConstraintValue::KG;
            return true;
          }
          else if (hashCode == LA_HASH)
          {
            enumValue = GeoMatchConstraintValue::LA;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper1(uint32_t hashCode, GeoMatchConstraintValue& enumValue)
        {
          if (hashCode == LV_HASH)
          {
            enumValue = GeoMatchConstraintValue::LV;
            return true;
          }
          else if (hashCode == LB_HASH)
          {
            enumValue = GeoMatchConstraintValue::LB;
            return true;
          }
          else if (hashCode == LS_HASH)
          {
            enumValue = GeoMatchConstraintValue::LS;
            return true;
          }
          else if (hashCode == LR_HASH)
          {
            enumValue = GeoMatchConstraintValue::LR;
            return true;
          }
          else if (hashCode == LY_HASH)
          {
            enumValue = GeoMatchConstraintValue::LY;
            return true;
          }
          else if (hashCode == LI_HASH)
          {
            enumValue = GeoMatchConstraintValue::LI;
            return true;
          }
          else if (hashCode == LT_HASH)
          {
            enumValue = GeoMatchConstraintValue::LT;
            return true;
          }
          else if (hashCode == LU_HASH)
          {
            enumValue = GeoMatchConstraintValue::LU;
            return true;
          }
          else if (hashCode == MO_HASH)
          {
            enumValue = GeoMatchConstraintValue::MO;
            return true;
          }
          else if (hashCode == MK_HASH)
          {
            enumValue = GeoMatchConstraintValue::MK;
            return true;
          }
          else if (hashCode == MG_HASH)
          {
            enumValue = GeoMatchConstraintValue::MG;
            return true;
          }
          else if (hashCode == MW_HASH)
          {
            enumValue = GeoMatchConstraintValue::MW;
            return true;
          }
          else if (hashCode == MY_HASH)
          {
            enumValue = GeoMatchConstraintValue::MY;
            return true;
          }
          else if (hashCode == MV_HASH)
          {
            enumValue = GeoMatchConstraintValue::MV;
            return true;
          }
          else if (hashCode == ML_HASH)
          {
            enumValue = GeoMatchConstraintValue::ML;
            return true;
          }
          else if (hashCode == MT_HASH)
          {
            enumValue = GeoMatchConstraintValue::MT;
            return true;
          }
          else if (hashCode == MH_HASH)
          {
            enumValue = GeoMatchConstraintValue::MH;
            return true;
          }
          else if (hashCode == MQ_HASH)
          {
            enumValue = GeoMatchConstraintValue::MQ;
            return true;
          }
          else if (hashCode == MR_HASH)
          {
            enumValue = GeoMatchConstraintValue::MR;
            return true;
          }
          else if (hashCode == MU_HASH)
          {
            enumValue = GeoMatchConstraintValue::MU;
            return true;
          }
          else if (hashCode == YT_HASH)
          {
            enumValue = GeoMatchConstraintValue::YT;
            return true;
          }
          else if (hashCode == MX_HASH)
          {
            enumValue = GeoMatchConstraintValue::MX;
            return true;
          }
          else if (hashCode == FM_HASH)
          {
            enumValue = GeoMatchConstraintValue::FM;
            return true;
          }
          else if (hashCode == MD_HASH)
          {
            enumValue = GeoMatchConstraintValue::MD;
            return true;
          }
          else if (hashCode == MC_HASH)
          {
            enumValue = GeoMatchConstraintValue::MC;
            return true;
          }
          else if (hashCode == MN_HASH)
          {
            enumValue = GeoMatchConstraintValue::MN;
            return true;
          }
          else if (hashCode == ME_HASH)
          {
            enumValue = GeoMatchConstraintValue::ME;
            return true;
          }
          else if (hashCode == MS_HASH)
          {
            enumValue = GeoMatchConstraintValue::MS;
            return true;
          }
          else if (hashCode == MA_HASH)
          {
            enumValue = GeoMatchConstraintValue::MA;
            return true;
          }
          else if (hashCode == MZ_HASH)
          {
            enumValue = GeoMatchConstraintValue::MZ;
            return true;
          }
          else if (hashCode == MM_HASH)
          {
            enumValue = GeoMatchConstraintValue::MM;
            return true;
          }
          else if (hashCode == NA_HASH)
          {
            enumValue = GeoMatchConstraintValue::NA;
            return true;
          }
          else if (hashCode == NR_HASH)
          {
            enumValue = GeoMatchConstraintValue::NR;
            return true;
          }
          else if (hashCode == NP_HASH)
          {
            enumValue = GeoMatchConstraintValue::NP;
            return true;
          }
          else if (hashCode == NL_HASH)
          {
            enumValue = GeoMatchConstraintValue::NL;
            return true;
          }
          else if (hashCode == NC_HASH)
          {
            enumValue = GeoMatchConstraintValue::NC;
            return true;
          }
          else if (hashCode == NZ_HASH)
          {
            enumValue = GeoMatchConstraintValue::NZ;
            return true;
          }
          else if (hashCode == NI_HASH)
          {
            enumValue = GeoMatchConstraintValue::NI;
            return true;
          }
          else if (hashCode == NE_HASH)
          {
            enumValue = GeoMatchConstraintValue::NE;
            return true;
          }
          else if (hashCode == NG_HASH)
          {
            enumValue = GeoMatchConstraintValue::NG;
            return true;
          }
          else if (hashCode == NU_HASH)
          {
            enumValue = GeoMatchConstraintValue::NU;
            return true;
          }
          else if (hashCode == NF_HASH)
          {
            enumValue = GeoMatchConstraintValue::NF;
            return true;
          }
          else if (hashCode == MP_HASH)
          {
            enumValue = GeoMatchConstraintValue::MP;
            return true;
          }
          else if (hashCode == NO_HASH)
          {
            enumValue = GeoMatchConstraintValue::NO;
            return true;
          }
          else if (hashCode == OM_HASH)
          {
            enumValue = GeoMatchConstraintValue::OM;
            return true;
          }
          else if (hashCode == PK_HASH)
          {
            enumValue = GeoMatchConstraintValue::PK;
            return true;
          }
          else if (hashCode == PW_HASH)
          {
            enumValue = GeoMatchConstraintValue::PW;
            return true;
          }
          else if (hashCode == PS_HASH)
          {
            enumValue = GeoMatchConstraintValue::PS;
            return true;
          }
          else if (hashCode == PA_HASH)
          {
            enumValue = GeoMatchConstraintValue::PA;
            return true;
          }
          else if (hashCode == PG_HASH)
          {
            enumValue = GeoMatchConstraintValue::PG;
            return true;
          }
          else if (hashCode == PY_HASH)
          {
            enumValue = GeoMatchConstraintValue::PY;
            return true;
          }
          else if (hashCode == PE_HASH)
          {
            enumValue = GeoMatchConstraintValue::PE;
            return true;
          }
          else if (hashCode == PH_HASH)
          {
            enumValue = GeoMatchConstraintValue::PH;
            return true;
          }
          else if (hashCode == PN_HASH)
          {
            enumValue = GeoMatchConstraintValue::PN;
            return true;
          }
          else if (hashCode == PL_HASH)
          {
            enumValue = GeoMatchConstraintValue::PL;
            return true;
          }
          else if (hashCode == PT_HASH)
          {
            enumValue = GeoMatchConstraintValue::PT;
            return true;
          }
          else if (hashCode == PR_HASH)
          {
            enumValue = GeoMatchConstraintValue::PR;
            return true;
          }
          else if (hashCode == QA_HASH)
          {
            enumValue = GeoMatchConstraintValue::QA;
            return true;
          }
          else if (hashCode == RE_HASH)
          {
            enumValue = GeoMatchConstraintValue::RE;
            return true;
          }
          else if (hashCode == RO_HASH)
          {
            enumValue = GeoMatchConstraintValue::RO;
            return true;
          }
          else if (hashCode == RU_HASH)
          {
            enumValue = GeoMatchConstraintValue::RU;
            return true;
          }
          else if (hashCode == RW_HASH)
          {
            enumValue = GeoMatchConstraintValue::RW;
            return true;
          }
          else if (hashCode == BL_HASH)
          {
            enumValue = GeoMatchConstraintValue::BL;
            return true;
          }
          else if (hashCode == SH_HASH)
          {
            enumValue = GeoMatchConstraintValue::SH;
            return true;
          }
          else if (hashCode == KN_HASH)
          {
            enumValue = GeoMatchConstraintValue::KN;
            return true;
          }
          else if (hashCode == LC_HASH)
          {
            enumValue = GeoMatchConstraintValue::LC;
            return true;
          }
          else if (hashCode == MF_HASH)
          {
            enumValue = GeoMatchConstraintValue::MF;
            return true;
          }
          else if (hashCode == PM_HASH)
          {
            enumValue = GeoMatchConstraintValue::PM;
            return true;
          }
          else if (hashCode == VC_HASH)
          {
            enumValue = GeoMatchConstraintValue::VC;
            return true;
          }
          else if (hashCode == WS_HASH)
          {
            enumValue = GeoMatchConstraintValue::WS;
            return true;
          }
          else if (hashCode == SM_HASH)
          {
            enumValue = GeoMatchConstraintValue::SM;
            return true;
          }
          else if (hashCode == ST_HASH)
          {
            enumValue = GeoMatchConstraintValue::ST;
            return true;
          }
          else if (hashCode == SA_HASH)
          {
            enumValue = GeoMatchConstraintValue::SA;
            return true;
          }
          else if (hashCode == SN_HASH)
          {
            enumValue = GeoMatchConstraintValue::SN;
            return true;
          }
          else if (hashCode == RS_HASH)
          {
            enumValue = GeoMatchConstraintValue::RS;
            return true;
          }
          else if (hashCode == SC_HASH)
          {
            enumValue = GeoMatchConstraintValue::SC;
            return true;
          }
          else if (hashCode == SL_HASH)
          {
            enumValue = GeoMatchConstraintValue::SL;
            return true;
          }
          else if (hashCode == SG_HASH)
          {
            enumValue = GeoMatchConstraintValue::SG;
            return true;
          }
          else if (hashCode == SX_HASH)
          {
            enumValue = GeoMatchConstraintValue::SX;
            return true;
          }
          else if (hashCode == SK_HASH)
          {
            enumValue = GeoMatchConstraintValue::SK;
            return true;
          }
          else if (hashCode == SI_HASH)
          {
            enumValue = GeoMatchConstraintValue::SI;
            return true;
          }
          else if (hashCode == SB_HASH)
          {
            enumValue = GeoMatchConstraintValue::SB;
            return true;
          }
          else if (hashCode == SO_HASH)
          {
            enumValue = GeoMatchConstraintValue::SO;
            return true;
          }
          else if (hashCode == ZA_HASH)
          {
            enumValue = GeoMatchConstraintValue::ZA;
            return true;
          }
          else if (hashCode == GS_HASH)
          {
            enumValue = GeoMatchConstraintValue::GS;
            return true;
          }
          else if (hashCode == SS_HASH)
          {
            enumValue = GeoMatchConstraintValue::SS;
            return true;
          }
          else if (hashCode == ES_HASH)
          {
            enumValue = GeoMatchConstraintValue::ES;
            return true;
          }
          else if (hashCode == LK_HASH)
          {
            enumValue = GeoMatchConstraintValue::LK;
            return true;
          }
          else if (hashCode == SD_HASH)
          {
            enumValue = GeoMatchConstraintValue::SD;
            return true;
          }
          else if (hashCode == SR_HASH)
          {
            enumValue = GeoMatchConstraintValue::SR;
            return true;
          }
          else if (hashCode == SJ_HASH)
          {
            enumValue = GeoMatchConstraintValue::SJ;
            return true;
          }
          else if (hashCode == SZ_HASH)
          {
            enumValue = GeoMatchConstraintValue::SZ;
            return true;
          }
          else if (hashCode == SE_HASH)
          {
            enumValue = GeoMatchConstraintValue::SE;
            return true;
          }
          else if (hashCode == CH_HASH)
          {
            enumValue = GeoMatchConstraintValue::CH;
            return true;
          }
          else if (hashCode == SY_HASH)
          {
            enumValue = GeoMatchConstraintValue::SY;
            return true;
          }
          else if (hashCode == TW_HASH)
          {
            enumValue = GeoMatchConstraintValue::TW;
            return true;
          }
          else if (hashCode == TJ_HASH)
          {
            enumValue = GeoMatchConstraintValue::TJ;
            return true;
          }
          else if (hashCode == TZ_HASH)
          {
            enumValue = GeoMatchConstraintValue::TZ;
            return true;
          }
          else if (hashCode == TH_HASH)
          {
            enumValue = GeoMatchConstraintValue::TH;
            return true;
          }
          else if (hashCode == TL_HASH)
          {
            enumValue = GeoMatchConstraintValue::TL;
            return true;
          }
          else if (hashCode == TG_HASH)
          {
            enumValue = GeoMatchConstraintValue::TG;
            return true;
          }
          else if (hashCode == TK_HASH)
          {
            enumValue = GeoMatchConstraintValue::TK;
            return true;
          }
          else if (hashCode == TO_HASH)
          {
            enumValue = GeoMatchConstraintValue::TO;
            return true;
          }
          else if (hashCode == TT_HASH)
          {
            enumValue = GeoMatchConstraintValue::TT;
            return true;
          }
          else if (hashCode == TN_HASH)
          {
            enumValue = GeoMatchConstraintValue::TN;
            return true;
          }
          else if (hashCode == TR_HASH)
          {
            enumValue = GeoMatchConstraintValue::TR;
            return true;
          }
          else if (hashCode == TM_HASH)
          {
            enumValue = GeoMatchConstraintValue::TM;
            return true;
          }
          else if (hashCode == TC_HASH)
          {
            enumValue = GeoMatchConstraintValue::TC;
            return true;
          }
          else if (hashCode == TV_HASH)
          {
            enumValue = GeoMatchConstraintValue::TV;
            return true;
          }
          else if (hashCode == UG_HASH)
          {
            enumValue = GeoMatchConstraintValue::UG;
            return true;
          }
          else if (hashCode == UA_HASH)
          {
            enumValue = GeoMatchConstraintValue::UA;
            return true;
          }
          else if (hashCode == AE_HASH)
          {
            enumValue = GeoMatchConstraintValue::AE;
            return true;
          }
          else if (hashCode == GB_HASH)
          {
            enumValue = GeoMatchConstraintValue::GB;
            return true;
          }
          else if (hashCode == US_HASH)
          {
            enumValue = GeoMatchConstraintValue::US;
            return true;
          }
          else if (hashCode == UM_HASH)
          {
            enumValue = GeoMatchConstraintValue::UM;
            return true;
          }
          else if (hashCode == UY_HASH)
          {
            enumValue = GeoMatchConstraintValue::UY;
            return true;
          }
          else if (hashCode == UZ_HASH)
          {
            enumValue = GeoMatchConstraintValue::UZ;
            return true;
          }
          else if (hashCode == VU_HASH)
          {
            enumValue = GeoMatchConstraintValue::VU;
            return true;
          }
          else if (hashCode == VE_HASH)
          {
            enumValue = GeoMatchConstraintValue::VE;
            return true;
          }
          else if (hashCode == VN_HASH)
          {
            enumValue = GeoMatchConstraintValue::VN;
            return true;
          }
          else if (hashCode == VG_HASH)
          {
            enumValue = GeoMatchConstraintValue::VG;
            return true;
          }
          else if (hashCode == VI_HASH)
          {
            enumValue = GeoMatchConstraintValue::VI;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper2(uint32_t hashCode, GeoMatchConstraintValue& enumValue)
        {
          if (hashCode == WF_HASH)
          {
            enumValue = GeoMatchConstraintValue::WF;
            return true;
          }
          else if (hashCode == EH_HASH)
          {
            enumValue = GeoMatchConstraintValue::EH;
            return true;
          }
          else if (hashCode == YE_HASH)
          {
            enumValue = GeoMatchConstraintValue::YE;
            return true;
          }
          else if (hashCode == ZM_HASH)
          {
            enumValue = GeoMatchConstraintValue::ZM;
            return true;
          }
          else if (hashCode == ZW_HASH)
          {
            enumValue = GeoMatchConstraintValue::ZW;
            return true;
          }
          return false;
        }

        static bool GetNameForEnumHelper0(GeoMatchConstraintValue enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case GeoMatchConstraintValue::AF:
            value = "AF";
            return true;
          case GeoMatchConstraintValue::AX:
            value = "AX";
            return true;
          case GeoMatchConstraintValue::AL:
            value = "AL";
            return true;
          case GeoMatchConstraintValue::DZ:
            value = "DZ";
            return true;
          case GeoMatchConstraintValue::AS:
            value = "AS";
            return true;
          case GeoMatchConstraintValue::AD:
            value = "AD";
            return true;
          case GeoMatchConstraintValue::AO:
            value = "AO";
            return true;
          case GeoMatchConstraintValue::AI:
            value = "AI";
            return true;
          case GeoMatchConstraintValue::AQ:
            value = "AQ";
            return true;
          case GeoMatchConstraintValue::AG:
            value = "AG";
            return true;
          case GeoMatchConstraintValue::AR:
            value = "AR";
            return true;
          case GeoMatchConstraintValue::AM:
            value = "AM";
            return true;
          case GeoMatchConstraintValue::AW:
            value = "AW";
            return true;
          case GeoMatchConstraintValue::AU:
            value = "AU";
            return true;
          case GeoMatchConstraintValue::AT:
            value = "AT";
            return true;
          case GeoMatchConstraintValue::AZ:
            value = "AZ";
            return true;
          case GeoMatchConstraintValue::BS:
            value = "BS";
            return true;
          case GeoMatchConstraintValue::BH:
            value = "BH";
            return true;
          case GeoMatchConstraintValue::BD:
            value = "BD";
            return true;
          case GeoMatchConstraintValue::BB:
            value = "BB";
            return true;
          case GeoMatchConstraintValue::BY:
            value = "BY";
            return true;
          case GeoMatchConstraintValue::BE:
            value = "BE";
            return true;
          case GeoMatchConstraintValue::BZ:
            value = "BZ";
            return true;
          case GeoMatchConstraintValue::BJ:
            value = "BJ";
            return true;
          case GeoMatchConstraintValue::BM:
            value = "BM";
            return true;
          case GeoMatchConstraintValue::BT:
            value = "BT";
            return true;
          case GeoMatchConstraintValue::BO:
            value = "BO";
            return true;
          case GeoMatchConstraintValue::BQ:
            value = "BQ";
            return true;
          case GeoMatchConstraintValue::BA:
            value = "BA";
            return true;
          case GeoMatchConstraintValue::BW:
            value = "BW";
            return true;
          case GeoMatchConstraintValue::BV:
            value = "BV";
            return true;
          case GeoMatchConstraintValue::BR:
            value = "BR";
            return true;
          case GeoMatchConstraintValue::IO:
            value = "IO";
            return true;
          case GeoMatchConstraintValue::BN:
            value = "BN";
            return true;
          case GeoMatchConstraintValue::BG:
            value = "BG";
            return true;
          case GeoMatchConstraintValue::BF:
            value = "BF";
            return true;
          case GeoMatchConstraintValue::BI:
            value = "BI";
            return true;
          case GeoMatchConstraintValue::KH:
            value = "KH";
            return true;
          case GeoMatchConstraintValue::CM:
            value = "CM";
            return true;
          case GeoMatchConstraintValue::CA:
            value = "CA";
            return true;
          case GeoMatchConstraintValue::CV:
            value = "CV";
            return true;
          case GeoMatchConstraintValue::KY:
            value = "KY";
            return true;
          case GeoMatchConstraintValue::CF:
            value = "CF";
            return true;
          case GeoMatchConstraintValue::TD:
            value = "TD";
            return true;
          case GeoMatchConstraintValue::CL:
            value = "CL";
            return true;
          case GeoMatchConstraintValue::CN:
            value = "CN";
            return true;
          case GeoMatchConstraintValue::CX:
            value = "CX";
            return true;
          case GeoMatchConstraintValue::CC:
            value = "CC";
            return true;
          case GeoMatchConstraintValue::CO:
            value = "CO";
            return true;
          case GeoMatchConstraintValue::KM:
            value = "KM";
            return true;
          case GeoMatchConstraintValue::CG:
            value = "CG";
            return true;
          case GeoMatchConstraintValue::CD:
            value = "CD";
            return true;
          case GeoMatchConstraintValue::CK:
            value = "CK";
            return true;
          case GeoMatchConstraintValue::CR:
            value = "CR";
            return true;
          case GeoMatchConstraintValue::CI:
            value = "CI";
            return true;
          case GeoMatchConstraintValue::HR:
            value = "HR";
            return true;
          case GeoMatchConstraintValue::CU:
            value = "CU";
            return true;
          case GeoMatchConstraintValue::CW:
            value = "CW";
            return true;
          case GeoMatchConstraintValue::CY:
            value = "CY";
            return true;
          case GeoMatchConstraintValue::CZ:
            value = "CZ";
            return true;
          case GeoMatchConstraintValue::DK:
            value = "DK";
            return true;
          case GeoMatchConstraintValue::DJ:
            value = "DJ";
            return true;
          case GeoMatchConstraintValue::DM:
            value = "DM";
            return true;
          case GeoMatchConstraintValue::DO:
            value = "DO";
            return true;
          case GeoMatchConstraintValue::EC:
            value = "EC";
            return true;
          case GeoMatchConstraintValue::EG:
            value = "EG";
            return true;
          case GeoMatchConstraintValue::SV:
            value = "SV";
            return true;
          case GeoMatchConstraintValue::GQ:
            value = "GQ";
            return true;
          case GeoMatchConstraintValue::ER:
            value = "ER";
            return true;
          case GeoMatchConstraintValue::EE:
            value = "EE";
            return true;
          case GeoMatchConstraintValue::ET:
            value = "ET";
            return true;
          case GeoMatchConstraintValue::FK:
            value = "FK";
            return true;
          case GeoMatchConstraintValue::FO:
            value = "FO";
            return true;
          case GeoMatchConstraintValue::FJ:
            value = "FJ";
            return true;
          case GeoMatchConstraintValue::FI:
            value = "FI";
            return true;
          case GeoMatchConstraintValue::FR:
            value = "FR";
            return true;
          case GeoMatchConstraintValue::GF:
            value = "GF";
            return true;
          case GeoMatchConstraintValue::PF:
            value = "PF";
            return true;
          case GeoMatchConstraintValue::TF:
            value = "TF";
            return true;
          case GeoMatchConstraintValue::GA:
            value = "GA";
            return true;
          case GeoMatchConstraintValue::GM:
            value = "GM";
            return true;
          case GeoMatchConstraintValue::GE:
            value = "GE";
            return true;
          case GeoMatchConstraintValue::DE:
            value = "DE";
            return true;
          case GeoMatchConstraintValue::GH:
            value = "GH";
            return true;
          case GeoMatchConstraintValue::GI:
            value = "GI";
            return true;
          case GeoMatchConstraintValue::GR:
            value = "GR";
            return true;
          case GeoMatchConstraintValue::GL:
            value = "GL";
            return true;
          case GeoMatchConstraintValue::GD:
            value = "GD";
            return true;
          case GeoMatchConstraintValue::GP:
            value = "GP";
            return true;
          case GeoMatchConstraintValue::GU:
            value = "GU";
            return true;
          case GeoMatchConstraintValue::GT:
            value = "GT";
            return true;
          case GeoMatchConstraintValue::GG:
            value = "GG";
            return true;
          case GeoMatchConstraintValue::GN:
            value = "GN";
            return true;
          case GeoMatchConstraintValue::GW:
            value = "GW";
            return true;
          case GeoMatchConstraintValue::GY:
            value = "GY";
            return true;
          case GeoMatchConstraintValue::HT:
            value = "HT";
            return true;
          case GeoMatchConstraintValue::HM:
            value = "HM";
            return true;
          case GeoMatchConstraintValue::VA:
            value = "VA";
            return true;
          case GeoMatchConstraintValue::HN:
            value = "HN";
            return true;
          case GeoMatchConstraintValue::HK:
            value = "HK";
            return true;
          case GeoMatchConstraintValue::HU:
            value = "HU";
            return true;
          case GeoMatchConstraintValue::IS:
            value = "IS";
            return true;
          case GeoMatchConstraintValue::IN:
            value = "IN";
            return true;
          case GeoMatchConstraintValue::ID:
            value = "ID";
            return true;
          case GeoMatchConstraintValue::IR:
            value = "IR";
            return true;
          case GeoMatchConstraintValue::IQ:
            value = "IQ";
            return true;
          case GeoMatchConstraintValue::IE:
            value = "IE";
            return true;
          case GeoMatchConstraintValue::IM:
            value = "IM";
            return true;
          case GeoMatchConstraintValue::IL:
            value = "IL";
            return true;
          case GeoMatchConstraintValue::IT:
            value = "IT";
            return true;
          case GeoMatchConstraintValue::JM:
            value = "JM";
            return true;
          case GeoMatchConstraintValue::JP:
            value = "JP";
            return true;
          case GeoMatchConstraintValue::JE:
            value = "JE";
            return true;
          case GeoMatchConstraintValue::JO:
            value = "JO";
            return true;
          case GeoMatchConstraintValue::KZ:
            value = "KZ";
            return true;
          case GeoMatchConstraintValue::KE:
            value = "KE";
            return true;
          case GeoMatchConstraintValue::KI:
            value = "KI";
            return true;
          case GeoMatchConstraintValue::KP:
            value = "KP";
            return true;
          case GeoMatchConstraintValue::KR:
            value = "KR";
            return true;
          case GeoMatchConstraintValue::KW:
            value = "KW";
            return true;
          case GeoMatchConstraintValue::KG:
            value = "KG";
            return true;
          case GeoMatchConstraintValue::LA:
            value = "LA";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper1(GeoMatchConstraintValue enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case GeoMatchConstraintValue::LV:
            value = "LV";
            return true;
          case GeoMatchConstraintValue::LB:
            value = "LB";
            return true;
          case GeoMatchConstraintValue::LS:
            value = "LS";
            return true;
          case GeoMatchConstraintValue::LR:
            value = "LR";
            return true;
          case GeoMatchConstraintValue::LY:
            value = "LY";
            return true;
          case GeoMatchConstraintValue::LI:
            value = "LI";
            return true;
          case GeoMatchConstraintValue::LT:
            value = "LT";
            return true;
          case GeoMatchConstraintValue::LU:
            value = "LU";
            return true;
          case GeoMatchConstraintValue::MO:
            value = "MO";
            return true;
          case GeoMatchConstraintValue::MK:
            value = "MK";
            return true;
          case GeoMatchConstraintValue::MG:
            value = "MG";
            return true;
          case GeoMatchConstraintValue::MW:
            value = "MW";
            return true;
          case GeoMatchConstraintValue::MY:
            value = "MY";
            return true;
          case GeoMatchConstraintValue::MV:
            value = "MV";
            return true;
          case GeoMatchConstraintValue::ML:
            value = "ML";
            return true;
          case GeoMatchConstraintValue::MT:
            value = "MT";
            return true;
          case GeoMatchConstraintValue::MH:
            value = "MH";
            return true;
          case GeoMatchConstraintValue::MQ:
            value = "MQ";
            return true;
          case GeoMatchConstraintValue::MR:
            value = "MR";
            return true;
          case GeoMatchConstraintValue::MU:
            value = "MU";
            return true;
          case GeoMatchConstraintValue::YT:
            value = "YT";
            return true;
          case GeoMatchConstraintValue::MX:
            value = "MX";
            return true;
          case GeoMatchConstraintValue::FM:
            value = "FM";
            return true;
          case GeoMatchConstraintValue::MD:
            value = "MD";
            return true;
          case GeoMatchConstraintValue::MC:
            value = "MC";
            return true;
          case GeoMatchConstraintValue::MN:
            value = "MN";
            return true;
          case GeoMatchConstraintValue::ME:
            value = "ME";
            return true;
          case GeoMatchConstraintValue::MS:
            value = "MS";
            return true;
          case GeoMatchConstraintValue::MA:
            value = "MA";
            return true;
          case GeoMatchConstraintValue::MZ:
            value = "MZ";
            return true;
          case GeoMatchConstraintValue::MM:
            value = "MM";
            return true;
          case GeoMatchConstraintValue::NA:
            value = "NA";
            return true;
          case GeoMatchConstraintValue::NR:
            value = "NR";
            return true;
          case GeoMatchConstraintValue::NP:
            value = "NP";
            return true;
          case GeoMatchConstraintValue::NL:
            value = "NL";
            return true;
          case GeoMatchConstraintValue::NC:
            value = "NC";
            return true;
          case GeoMatchConstraintValue::NZ:
            value = "NZ";
            return true;
          case GeoMatchConstraintValue::NI:
            value = "NI";
            return true;
          case GeoMatchConstraintValue::NE:
            value = "NE";
            return true;
          case GeoMatchConstraintValue::NG:
            value = "NG";
            return true;
          case GeoMatchConstraintValue::NU:
            value = "NU";
            return true;
          case GeoMatchConstraintValue::NF:
            value = "NF";
            return true;
          case GeoMatchConstraintValue::MP:
            value = "MP";
            return true;
          case GeoMatchConstraintValue::NO:
            value = "NO";
            return true;
          case GeoMatchConstraintValue::OM:
            value = "OM";
            return true;
          case GeoMatchConstraintValue::PK:
            value = "PK";
            return true;
          case GeoMatchConstraintValue::PW:
            value = "PW";
            return true;
          case GeoMatchConstraintValue::PS:
            value = "PS";
            return true;
          case GeoMatchConstraintValue::PA:
            value = "PA";
            return true;
          case GeoMatchConstraintValue::PG:
            value = "PG";
            return true;
          case GeoMatchConstraintValue::PY:
            value = "PY";
            return true;
          case GeoMatchConstraintValue::PE:
            value = "PE";
            return true;
          case GeoMatchConstraintValue::PH:
            value = "PH";
            return true;
          case GeoMatchConstraintValue::PN:
            value = "PN";
            return true;
          case GeoMatchConstraintValue::PL:
            value = "PL";
            return true;
          case GeoMatchConstraintValue::PT:
            value = "PT";
            return true;
          case GeoMatchConstraintValue::PR:
            value = "PR";
            return true;
          case GeoMatchConstraintValue::QA:
            value = "QA";
            return true;
          case GeoMatchConstraintValue::RE:
            value = "RE";
            return true;
          case GeoMatchConstraintValue::RO:
            value = "RO";
            return true;
          case GeoMatchConstraintValue::RU:
            value = "RU";
            return true;
          case GeoMatchConstraintValue::RW:
            value = "RW";
            return true;
          case GeoMatchConstraintValue::BL:
            value = "BL";
            return true;
          case GeoMatchConstraintValue::SH:
            value = "SH";
            return true;
          case GeoMatchConstraintValue::KN:
            value = "KN";
            return true;
          case GeoMatchConstraintValue::LC:
            value = "LC";
            return true;
          case GeoMatchConstraintValue::MF:
            value = "MF";
            return true;
          case GeoMatchConstraintValue::PM:
            value = "PM";
            return true;
          case GeoMatchConstraintValue::VC:
            value = "VC";
            return true;
          case GeoMatchConstraintValue::WS:
            value = "WS";
            return true;
          case GeoMatchConstraintValue::SM:
            value = "SM";
            return true;
          case GeoMatchConstraintValue::ST:
            value = "ST";
            return true;
          case GeoMatchConstraintValue::SA:
            value = "SA";
            return true;
          case GeoMatchConstraintValue::SN:
            value = "SN";
            return true;
          case GeoMatchConstraintValue::RS:
            value = "RS";
            return true;
          case GeoMatchConstraintValue::SC:
            value = "SC";
            return true;
          case GeoMatchConstraintValue::SL:
            value = "SL";
            return true;
          case GeoMatchConstraintValue::SG:
            value = "SG";
            return true;
          case GeoMatchConstraintValue::SX:
            value = "SX";
            return true;
          case GeoMatchConstraintValue::SK:
            value = "SK";
            return true;
          case GeoMatchConstraintValue::SI:
            value = "SI";
            return true;
          case GeoMatchConstraintValue::SB:
            value = "SB";
            return true;
          case GeoMatchConstraintValue::SO:
            value = "SO";
            return true;
          case GeoMatchConstraintValue::ZA:
            value = "ZA";
            return true;
          case GeoMatchConstraintValue::GS:
            value = "GS";
            return true;
          case GeoMatchConstraintValue::SS:
            value = "SS";
            return true;
          case GeoMatchConstraintValue::ES:
            value = "ES";
            return true;
          case GeoMatchConstraintValue::LK:
            value = "LK";
            return true;
          case GeoMatchConstraintValue::SD:
            value = "SD";
            return true;
          case GeoMatchConstraintValue::SR:
            value = "SR";
            return true;
          case GeoMatchConstraintValue::SJ:
            value = "SJ";
            return true;
          case GeoMatchConstraintValue::SZ:
            value = "SZ";
            return true;
          case GeoMatchConstraintValue::SE:
            value = "SE";
            return true;
          case GeoMatchConstraintValue::CH:
            value = "CH";
            return true;
          case GeoMatchConstraintValue::SY:
            value = "SY";
            return true;
          case GeoMatchConstraintValue::TW:
            value = "TW";
            return true;
          case GeoMatchConstraintValue::TJ:
            value = "TJ";
            return true;
          case GeoMatchConstraintValue::TZ:
            value = "TZ";
            return true;
          case GeoMatchConstraintValue::TH:
            value = "TH";
            return true;
          case GeoMatchConstraintValue::TL:
            value = "TL";
            return true;
          case GeoMatchConstraintValue::TG:
            value = "TG";
            return true;
          case GeoMatchConstraintValue::TK:
            value = "TK";
            return true;
          case GeoMatchConstraintValue::TO:
            value = "TO";
            return true;
          case GeoMatchConstraintValue::TT:
            value = "TT";
            return true;
          case GeoMatchConstraintValue::TN:
            value = "TN";
            return true;
          case GeoMatchConstraintValue::TR:
            value = "TR";
            return true;
          case GeoMatchConstraintValue::TM:
            value = "TM";
            return true;
          case GeoMatchConstraintValue::TC:
            value = "TC";
            return true;
          case GeoMatchConstraintValue::TV:
            value = "TV";
            return true;
          case GeoMatchConstraintValue::UG:
            value = "UG";
            return true;
          case GeoMatchConstraintValue::UA:
            value = "UA";
            return true;
          case GeoMatchConstraintValue::AE:
            value = "AE";
            return true;
          case GeoMatchConstraintValue::GB:
            value = "GB";
            return true;
          case GeoMatchConstraintValue::US:
            value = "US";
            return true;
          case GeoMatchConstraintValue::UM:
            value = "UM";
            return true;
          case GeoMatchConstraintValue::UY:
            value = "UY";
            return true;
          case GeoMatchConstraintValue::UZ:
            value = "UZ";
            return true;
          case GeoMatchConstraintValue::VU:
            value = "VU";
            return true;
          case GeoMatchConstraintValue::VE:
            value = "VE";
            return true;
          case GeoMatchConstraintValue::VN:
            value = "VN";
            return true;
          case GeoMatchConstraintValue::VG:
            value = "VG";
            return true;
          case GeoMatchConstraintValue::VI:
            value = "VI";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper2(GeoMatchConstraintValue enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case GeoMatchConstraintValue::WF:
            value = "WF";
            return true;
          case GeoMatchConstraintValue::EH:
            value = "EH";
            return true;
          case GeoMatchConstraintValue::YE:
            value = "YE";
            return true;
          case GeoMatchConstraintValue::ZM:
            value = "ZM";
            return true;
          case GeoMatchConstraintValue::ZW:
            value = "ZW";
            return true;
          default:
            return false;
          }
        }

        GeoMatchConstraintValue GetGeoMatchConstraintValueForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          GeoMatchConstraintValue enumValue;
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
            return static_cast<GeoMatchConstraintValue>(hashCode);
          }

          return GeoMatchConstraintValue::NOT_SET;
        }

        Aws::String GetNameForGeoMatchConstraintValue(GeoMatchConstraintValue enumValue)
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

      } // namespace GeoMatchConstraintValueMapper
    } // namespace Model
  } // namespace WAF
} // namespace Aws
