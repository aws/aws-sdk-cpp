/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/LanguageCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace LanguageCodeMapper
      {

        static constexpr uint32_t ENG_HASH = ConstExprHashingUtils::HashString("ENG");
        static constexpr uint32_t SPA_HASH = ConstExprHashingUtils::HashString("SPA");
        static constexpr uint32_t FRA_HASH = ConstExprHashingUtils::HashString("FRA");
        static constexpr uint32_t DEU_HASH = ConstExprHashingUtils::HashString("DEU");
        static constexpr uint32_t GER_HASH = ConstExprHashingUtils::HashString("GER");
        static constexpr uint32_t ZHO_HASH = ConstExprHashingUtils::HashString("ZHO");
        static constexpr uint32_t ARA_HASH = ConstExprHashingUtils::HashString("ARA");
        static constexpr uint32_t HIN_HASH = ConstExprHashingUtils::HashString("HIN");
        static constexpr uint32_t JPN_HASH = ConstExprHashingUtils::HashString("JPN");
        static constexpr uint32_t RUS_HASH = ConstExprHashingUtils::HashString("RUS");
        static constexpr uint32_t POR_HASH = ConstExprHashingUtils::HashString("POR");
        static constexpr uint32_t ITA_HASH = ConstExprHashingUtils::HashString("ITA");
        static constexpr uint32_t URD_HASH = ConstExprHashingUtils::HashString("URD");
        static constexpr uint32_t VIE_HASH = ConstExprHashingUtils::HashString("VIE");
        static constexpr uint32_t KOR_HASH = ConstExprHashingUtils::HashString("KOR");
        static constexpr uint32_t PAN_HASH = ConstExprHashingUtils::HashString("PAN");
        static constexpr uint32_t ABK_HASH = ConstExprHashingUtils::HashString("ABK");
        static constexpr uint32_t AAR_HASH = ConstExprHashingUtils::HashString("AAR");
        static constexpr uint32_t AFR_HASH = ConstExprHashingUtils::HashString("AFR");
        static constexpr uint32_t AKA_HASH = ConstExprHashingUtils::HashString("AKA");
        static constexpr uint32_t SQI_HASH = ConstExprHashingUtils::HashString("SQI");
        static constexpr uint32_t AMH_HASH = ConstExprHashingUtils::HashString("AMH");
        static constexpr uint32_t ARG_HASH = ConstExprHashingUtils::HashString("ARG");
        static constexpr uint32_t HYE_HASH = ConstExprHashingUtils::HashString("HYE");
        static constexpr uint32_t ASM_HASH = ConstExprHashingUtils::HashString("ASM");
        static constexpr uint32_t AVA_HASH = ConstExprHashingUtils::HashString("AVA");
        static constexpr uint32_t AVE_HASH = ConstExprHashingUtils::HashString("AVE");
        static constexpr uint32_t AYM_HASH = ConstExprHashingUtils::HashString("AYM");
        static constexpr uint32_t AZE_HASH = ConstExprHashingUtils::HashString("AZE");
        static constexpr uint32_t BAM_HASH = ConstExprHashingUtils::HashString("BAM");
        static constexpr uint32_t BAK_HASH = ConstExprHashingUtils::HashString("BAK");
        static constexpr uint32_t EUS_HASH = ConstExprHashingUtils::HashString("EUS");
        static constexpr uint32_t BEL_HASH = ConstExprHashingUtils::HashString("BEL");
        static constexpr uint32_t BEN_HASH = ConstExprHashingUtils::HashString("BEN");
        static constexpr uint32_t BIH_HASH = ConstExprHashingUtils::HashString("BIH");
        static constexpr uint32_t BIS_HASH = ConstExprHashingUtils::HashString("BIS");
        static constexpr uint32_t BOS_HASH = ConstExprHashingUtils::HashString("BOS");
        static constexpr uint32_t BRE_HASH = ConstExprHashingUtils::HashString("BRE");
        static constexpr uint32_t BUL_HASH = ConstExprHashingUtils::HashString("BUL");
        static constexpr uint32_t MYA_HASH = ConstExprHashingUtils::HashString("MYA");
        static constexpr uint32_t CAT_HASH = ConstExprHashingUtils::HashString("CAT");
        static constexpr uint32_t KHM_HASH = ConstExprHashingUtils::HashString("KHM");
        static constexpr uint32_t CHA_HASH = ConstExprHashingUtils::HashString("CHA");
        static constexpr uint32_t CHE_HASH = ConstExprHashingUtils::HashString("CHE");
        static constexpr uint32_t NYA_HASH = ConstExprHashingUtils::HashString("NYA");
        static constexpr uint32_t CHU_HASH = ConstExprHashingUtils::HashString("CHU");
        static constexpr uint32_t CHV_HASH = ConstExprHashingUtils::HashString("CHV");
        static constexpr uint32_t COR_HASH = ConstExprHashingUtils::HashString("COR");
        static constexpr uint32_t COS_HASH = ConstExprHashingUtils::HashString("COS");
        static constexpr uint32_t CRE_HASH = ConstExprHashingUtils::HashString("CRE");
        static constexpr uint32_t HRV_HASH = ConstExprHashingUtils::HashString("HRV");
        static constexpr uint32_t CES_HASH = ConstExprHashingUtils::HashString("CES");
        static constexpr uint32_t DAN_HASH = ConstExprHashingUtils::HashString("DAN");
        static constexpr uint32_t DIV_HASH = ConstExprHashingUtils::HashString("DIV");
        static constexpr uint32_t NLD_HASH = ConstExprHashingUtils::HashString("NLD");
        static constexpr uint32_t DZO_HASH = ConstExprHashingUtils::HashString("DZO");
        static constexpr uint32_t ENM_HASH = ConstExprHashingUtils::HashString("ENM");
        static constexpr uint32_t EPO_HASH = ConstExprHashingUtils::HashString("EPO");
        static constexpr uint32_t EST_HASH = ConstExprHashingUtils::HashString("EST");
        static constexpr uint32_t EWE_HASH = ConstExprHashingUtils::HashString("EWE");
        static constexpr uint32_t FAO_HASH = ConstExprHashingUtils::HashString("FAO");
        static constexpr uint32_t FIJ_HASH = ConstExprHashingUtils::HashString("FIJ");
        static constexpr uint32_t FIN_HASH = ConstExprHashingUtils::HashString("FIN");
        static constexpr uint32_t FRM_HASH = ConstExprHashingUtils::HashString("FRM");
        static constexpr uint32_t FUL_HASH = ConstExprHashingUtils::HashString("FUL");
        static constexpr uint32_t GLA_HASH = ConstExprHashingUtils::HashString("GLA");
        static constexpr uint32_t GLG_HASH = ConstExprHashingUtils::HashString("GLG");
        static constexpr uint32_t LUG_HASH = ConstExprHashingUtils::HashString("LUG");
        static constexpr uint32_t KAT_HASH = ConstExprHashingUtils::HashString("KAT");
        static constexpr uint32_t ELL_HASH = ConstExprHashingUtils::HashString("ELL");
        static constexpr uint32_t GRN_HASH = ConstExprHashingUtils::HashString("GRN");
        static constexpr uint32_t GUJ_HASH = ConstExprHashingUtils::HashString("GUJ");
        static constexpr uint32_t HAT_HASH = ConstExprHashingUtils::HashString("HAT");
        static constexpr uint32_t HAU_HASH = ConstExprHashingUtils::HashString("HAU");
        static constexpr uint32_t HEB_HASH = ConstExprHashingUtils::HashString("HEB");
        static constexpr uint32_t HER_HASH = ConstExprHashingUtils::HashString("HER");
        static constexpr uint32_t HMO_HASH = ConstExprHashingUtils::HashString("HMO");
        static constexpr uint32_t HUN_HASH = ConstExprHashingUtils::HashString("HUN");
        static constexpr uint32_t ISL_HASH = ConstExprHashingUtils::HashString("ISL");
        static constexpr uint32_t IDO_HASH = ConstExprHashingUtils::HashString("IDO");
        static constexpr uint32_t IBO_HASH = ConstExprHashingUtils::HashString("IBO");
        static constexpr uint32_t IND_HASH = ConstExprHashingUtils::HashString("IND");
        static constexpr uint32_t INA_HASH = ConstExprHashingUtils::HashString("INA");
        static constexpr uint32_t ILE_HASH = ConstExprHashingUtils::HashString("ILE");
        static constexpr uint32_t IKU_HASH = ConstExprHashingUtils::HashString("IKU");
        static constexpr uint32_t IPK_HASH = ConstExprHashingUtils::HashString("IPK");
        static constexpr uint32_t GLE_HASH = ConstExprHashingUtils::HashString("GLE");
        static constexpr uint32_t JAV_HASH = ConstExprHashingUtils::HashString("JAV");
        static constexpr uint32_t KAL_HASH = ConstExprHashingUtils::HashString("KAL");
        static constexpr uint32_t KAN_HASH = ConstExprHashingUtils::HashString("KAN");
        static constexpr uint32_t KAU_HASH = ConstExprHashingUtils::HashString("KAU");
        static constexpr uint32_t KAS_HASH = ConstExprHashingUtils::HashString("KAS");
        static constexpr uint32_t KAZ_HASH = ConstExprHashingUtils::HashString("KAZ");
        static constexpr uint32_t KIK_HASH = ConstExprHashingUtils::HashString("KIK");
        static constexpr uint32_t KIN_HASH = ConstExprHashingUtils::HashString("KIN");
        static constexpr uint32_t KIR_HASH = ConstExprHashingUtils::HashString("KIR");
        static constexpr uint32_t KOM_HASH = ConstExprHashingUtils::HashString("KOM");
        static constexpr uint32_t KON_HASH = ConstExprHashingUtils::HashString("KON");
        static constexpr uint32_t KUA_HASH = ConstExprHashingUtils::HashString("KUA");
        static constexpr uint32_t KUR_HASH = ConstExprHashingUtils::HashString("KUR");
        static constexpr uint32_t LAO_HASH = ConstExprHashingUtils::HashString("LAO");
        static constexpr uint32_t LAT_HASH = ConstExprHashingUtils::HashString("LAT");
        static constexpr uint32_t LAV_HASH = ConstExprHashingUtils::HashString("LAV");
        static constexpr uint32_t LIM_HASH = ConstExprHashingUtils::HashString("LIM");
        static constexpr uint32_t LIN_HASH = ConstExprHashingUtils::HashString("LIN");
        static constexpr uint32_t LIT_HASH = ConstExprHashingUtils::HashString("LIT");
        static constexpr uint32_t LUB_HASH = ConstExprHashingUtils::HashString("LUB");
        static constexpr uint32_t LTZ_HASH = ConstExprHashingUtils::HashString("LTZ");
        static constexpr uint32_t MKD_HASH = ConstExprHashingUtils::HashString("MKD");
        static constexpr uint32_t MLG_HASH = ConstExprHashingUtils::HashString("MLG");
        static constexpr uint32_t MSA_HASH = ConstExprHashingUtils::HashString("MSA");
        static constexpr uint32_t MAL_HASH = ConstExprHashingUtils::HashString("MAL");
        static constexpr uint32_t MLT_HASH = ConstExprHashingUtils::HashString("MLT");
        static constexpr uint32_t GLV_HASH = ConstExprHashingUtils::HashString("GLV");
        static constexpr uint32_t MRI_HASH = ConstExprHashingUtils::HashString("MRI");
        static constexpr uint32_t MAR_HASH = ConstExprHashingUtils::HashString("MAR");
        static constexpr uint32_t MAH_HASH = ConstExprHashingUtils::HashString("MAH");
        static constexpr uint32_t MON_HASH = ConstExprHashingUtils::HashString("MON");
        static constexpr uint32_t NAU_HASH = ConstExprHashingUtils::HashString("NAU");
        static constexpr uint32_t NAV_HASH = ConstExprHashingUtils::HashString("NAV");
        static constexpr uint32_t NDE_HASH = ConstExprHashingUtils::HashString("NDE");
        static constexpr uint32_t NBL_HASH = ConstExprHashingUtils::HashString("NBL");
        static constexpr uint32_t NDO_HASH = ConstExprHashingUtils::HashString("NDO");
        static constexpr uint32_t NEP_HASH = ConstExprHashingUtils::HashString("NEP");
        static constexpr uint32_t SME_HASH = ConstExprHashingUtils::HashString("SME");
        static constexpr uint32_t NOR_HASH = ConstExprHashingUtils::HashString("NOR");
        static constexpr uint32_t NOB_HASH = ConstExprHashingUtils::HashString("NOB");
        static constexpr uint32_t NNO_HASH = ConstExprHashingUtils::HashString("NNO");
        static constexpr uint32_t OCI_HASH = ConstExprHashingUtils::HashString("OCI");
        static constexpr uint32_t OJI_HASH = ConstExprHashingUtils::HashString("OJI");
        static constexpr uint32_t ORI_HASH = ConstExprHashingUtils::HashString("ORI");
        static constexpr uint32_t ORM_HASH = ConstExprHashingUtils::HashString("ORM");
        static constexpr uint32_t OSS_HASH = ConstExprHashingUtils::HashString("OSS");
        static constexpr uint32_t PLI_HASH = ConstExprHashingUtils::HashString("PLI");
        static constexpr uint32_t FAS_HASH = ConstExprHashingUtils::HashString("FAS");
        static constexpr uint32_t POL_HASH = ConstExprHashingUtils::HashString("POL");
        static constexpr uint32_t PUS_HASH = ConstExprHashingUtils::HashString("PUS");
        static constexpr uint32_t QUE_HASH = ConstExprHashingUtils::HashString("QUE");
        static constexpr uint32_t QAA_HASH = ConstExprHashingUtils::HashString("QAA");
        static constexpr uint32_t RON_HASH = ConstExprHashingUtils::HashString("RON");
        static constexpr uint32_t ROH_HASH = ConstExprHashingUtils::HashString("ROH");
        static constexpr uint32_t RUN_HASH = ConstExprHashingUtils::HashString("RUN");
        static constexpr uint32_t SMO_HASH = ConstExprHashingUtils::HashString("SMO");
        static constexpr uint32_t SAG_HASH = ConstExprHashingUtils::HashString("SAG");
        static constexpr uint32_t SAN_HASH = ConstExprHashingUtils::HashString("SAN");
        static constexpr uint32_t SRD_HASH = ConstExprHashingUtils::HashString("SRD");
        static constexpr uint32_t SRB_HASH = ConstExprHashingUtils::HashString("SRB");
        static constexpr uint32_t SNA_HASH = ConstExprHashingUtils::HashString("SNA");
        static constexpr uint32_t III_HASH = ConstExprHashingUtils::HashString("III");
        static constexpr uint32_t SND_HASH = ConstExprHashingUtils::HashString("SND");
        static constexpr uint32_t SIN_HASH = ConstExprHashingUtils::HashString("SIN");
        static constexpr uint32_t SLK_HASH = ConstExprHashingUtils::HashString("SLK");
        static constexpr uint32_t SLV_HASH = ConstExprHashingUtils::HashString("SLV");
        static constexpr uint32_t SOM_HASH = ConstExprHashingUtils::HashString("SOM");
        static constexpr uint32_t SOT_HASH = ConstExprHashingUtils::HashString("SOT");
        static constexpr uint32_t SUN_HASH = ConstExprHashingUtils::HashString("SUN");
        static constexpr uint32_t SWA_HASH = ConstExprHashingUtils::HashString("SWA");
        static constexpr uint32_t SSW_HASH = ConstExprHashingUtils::HashString("SSW");
        static constexpr uint32_t SWE_HASH = ConstExprHashingUtils::HashString("SWE");
        static constexpr uint32_t TGL_HASH = ConstExprHashingUtils::HashString("TGL");
        static constexpr uint32_t TAH_HASH = ConstExprHashingUtils::HashString("TAH");
        static constexpr uint32_t TGK_HASH = ConstExprHashingUtils::HashString("TGK");
        static constexpr uint32_t TAM_HASH = ConstExprHashingUtils::HashString("TAM");
        static constexpr uint32_t TAT_HASH = ConstExprHashingUtils::HashString("TAT");
        static constexpr uint32_t TEL_HASH = ConstExprHashingUtils::HashString("TEL");
        static constexpr uint32_t THA_HASH = ConstExprHashingUtils::HashString("THA");
        static constexpr uint32_t BOD_HASH = ConstExprHashingUtils::HashString("BOD");
        static constexpr uint32_t TIR_HASH = ConstExprHashingUtils::HashString("TIR");
        static constexpr uint32_t TON_HASH = ConstExprHashingUtils::HashString("TON");
        static constexpr uint32_t TSO_HASH = ConstExprHashingUtils::HashString("TSO");
        static constexpr uint32_t TSN_HASH = ConstExprHashingUtils::HashString("TSN");
        static constexpr uint32_t TUR_HASH = ConstExprHashingUtils::HashString("TUR");
        static constexpr uint32_t TUK_HASH = ConstExprHashingUtils::HashString("TUK");
        static constexpr uint32_t TWI_HASH = ConstExprHashingUtils::HashString("TWI");
        static constexpr uint32_t UIG_HASH = ConstExprHashingUtils::HashString("UIG");
        static constexpr uint32_t UKR_HASH = ConstExprHashingUtils::HashString("UKR");
        static constexpr uint32_t UZB_HASH = ConstExprHashingUtils::HashString("UZB");
        static constexpr uint32_t VEN_HASH = ConstExprHashingUtils::HashString("VEN");
        static constexpr uint32_t VOL_HASH = ConstExprHashingUtils::HashString("VOL");
        static constexpr uint32_t WLN_HASH = ConstExprHashingUtils::HashString("WLN");
        static constexpr uint32_t CYM_HASH = ConstExprHashingUtils::HashString("CYM");
        static constexpr uint32_t FRY_HASH = ConstExprHashingUtils::HashString("FRY");
        static constexpr uint32_t WOL_HASH = ConstExprHashingUtils::HashString("WOL");
        static constexpr uint32_t XHO_HASH = ConstExprHashingUtils::HashString("XHO");
        static constexpr uint32_t YID_HASH = ConstExprHashingUtils::HashString("YID");
        static constexpr uint32_t YOR_HASH = ConstExprHashingUtils::HashString("YOR");
        static constexpr uint32_t ZHA_HASH = ConstExprHashingUtils::HashString("ZHA");
        static constexpr uint32_t ZUL_HASH = ConstExprHashingUtils::HashString("ZUL");
        static constexpr uint32_t ORJ_HASH = ConstExprHashingUtils::HashString("ORJ");
        static constexpr uint32_t QPC_HASH = ConstExprHashingUtils::HashString("QPC");
        static constexpr uint32_t TNG_HASH = ConstExprHashingUtils::HashString("TNG");
        static constexpr uint32_t SRP_HASH = ConstExprHashingUtils::HashString("SRP");

        /*
        The if-else chains in this file are converted into a jump table by the compiler,
        which allows constant time lookup. The chain has been broken into helper functions
        because MSVC has a maximum of 122 chained if-else blocks.
        */
        static bool GetEnumForNameHelper0(uint32_t hashCode, LanguageCode& enumValue)
        {
          if (hashCode == ENG_HASH)
          {
            enumValue = LanguageCode::ENG;
            return true;
          }
          else if (hashCode == SPA_HASH)
          {
            enumValue = LanguageCode::SPA;
            return true;
          }
          else if (hashCode == FRA_HASH)
          {
            enumValue = LanguageCode::FRA;
            return true;
          }
          else if (hashCode == DEU_HASH)
          {
            enumValue = LanguageCode::DEU;
            return true;
          }
          else if (hashCode == GER_HASH)
          {
            enumValue = LanguageCode::GER;
            return true;
          }
          else if (hashCode == ZHO_HASH)
          {
            enumValue = LanguageCode::ZHO;
            return true;
          }
          else if (hashCode == ARA_HASH)
          {
            enumValue = LanguageCode::ARA;
            return true;
          }
          else if (hashCode == HIN_HASH)
          {
            enumValue = LanguageCode::HIN;
            return true;
          }
          else if (hashCode == JPN_HASH)
          {
            enumValue = LanguageCode::JPN;
            return true;
          }
          else if (hashCode == RUS_HASH)
          {
            enumValue = LanguageCode::RUS;
            return true;
          }
          else if (hashCode == POR_HASH)
          {
            enumValue = LanguageCode::POR;
            return true;
          }
          else if (hashCode == ITA_HASH)
          {
            enumValue = LanguageCode::ITA;
            return true;
          }
          else if (hashCode == URD_HASH)
          {
            enumValue = LanguageCode::URD;
            return true;
          }
          else if (hashCode == VIE_HASH)
          {
            enumValue = LanguageCode::VIE;
            return true;
          }
          else if (hashCode == KOR_HASH)
          {
            enumValue = LanguageCode::KOR;
            return true;
          }
          else if (hashCode == PAN_HASH)
          {
            enumValue = LanguageCode::PAN;
            return true;
          }
          else if (hashCode == ABK_HASH)
          {
            enumValue = LanguageCode::ABK;
            return true;
          }
          else if (hashCode == AAR_HASH)
          {
            enumValue = LanguageCode::AAR;
            return true;
          }
          else if (hashCode == AFR_HASH)
          {
            enumValue = LanguageCode::AFR;
            return true;
          }
          else if (hashCode == AKA_HASH)
          {
            enumValue = LanguageCode::AKA;
            return true;
          }
          else if (hashCode == SQI_HASH)
          {
            enumValue = LanguageCode::SQI;
            return true;
          }
          else if (hashCode == AMH_HASH)
          {
            enumValue = LanguageCode::AMH;
            return true;
          }
          else if (hashCode == ARG_HASH)
          {
            enumValue = LanguageCode::ARG;
            return true;
          }
          else if (hashCode == HYE_HASH)
          {
            enumValue = LanguageCode::HYE;
            return true;
          }
          else if (hashCode == ASM_HASH)
          {
            enumValue = LanguageCode::ASM;
            return true;
          }
          else if (hashCode == AVA_HASH)
          {
            enumValue = LanguageCode::AVA;
            return true;
          }
          else if (hashCode == AVE_HASH)
          {
            enumValue = LanguageCode::AVE;
            return true;
          }
          else if (hashCode == AYM_HASH)
          {
            enumValue = LanguageCode::AYM;
            return true;
          }
          else if (hashCode == AZE_HASH)
          {
            enumValue = LanguageCode::AZE;
            return true;
          }
          else if (hashCode == BAM_HASH)
          {
            enumValue = LanguageCode::BAM;
            return true;
          }
          else if (hashCode == BAK_HASH)
          {
            enumValue = LanguageCode::BAK;
            return true;
          }
          else if (hashCode == EUS_HASH)
          {
            enumValue = LanguageCode::EUS;
            return true;
          }
          else if (hashCode == BEL_HASH)
          {
            enumValue = LanguageCode::BEL;
            return true;
          }
          else if (hashCode == BEN_HASH)
          {
            enumValue = LanguageCode::BEN;
            return true;
          }
          else if (hashCode == BIH_HASH)
          {
            enumValue = LanguageCode::BIH;
            return true;
          }
          else if (hashCode == BIS_HASH)
          {
            enumValue = LanguageCode::BIS;
            return true;
          }
          else if (hashCode == BOS_HASH)
          {
            enumValue = LanguageCode::BOS;
            return true;
          }
          else if (hashCode == BRE_HASH)
          {
            enumValue = LanguageCode::BRE;
            return true;
          }
          else if (hashCode == BUL_HASH)
          {
            enumValue = LanguageCode::BUL;
            return true;
          }
          else if (hashCode == MYA_HASH)
          {
            enumValue = LanguageCode::MYA;
            return true;
          }
          else if (hashCode == CAT_HASH)
          {
            enumValue = LanguageCode::CAT;
            return true;
          }
          else if (hashCode == KHM_HASH)
          {
            enumValue = LanguageCode::KHM;
            return true;
          }
          else if (hashCode == CHA_HASH)
          {
            enumValue = LanguageCode::CHA;
            return true;
          }
          else if (hashCode == CHE_HASH)
          {
            enumValue = LanguageCode::CHE;
            return true;
          }
          else if (hashCode == NYA_HASH)
          {
            enumValue = LanguageCode::NYA;
            return true;
          }
          else if (hashCode == CHU_HASH)
          {
            enumValue = LanguageCode::CHU;
            return true;
          }
          else if (hashCode == CHV_HASH)
          {
            enumValue = LanguageCode::CHV;
            return true;
          }
          else if (hashCode == COR_HASH)
          {
            enumValue = LanguageCode::COR;
            return true;
          }
          else if (hashCode == COS_HASH)
          {
            enumValue = LanguageCode::COS;
            return true;
          }
          else if (hashCode == CRE_HASH)
          {
            enumValue = LanguageCode::CRE;
            return true;
          }
          else if (hashCode == HRV_HASH)
          {
            enumValue = LanguageCode::HRV;
            return true;
          }
          else if (hashCode == CES_HASH)
          {
            enumValue = LanguageCode::CES;
            return true;
          }
          else if (hashCode == DAN_HASH)
          {
            enumValue = LanguageCode::DAN;
            return true;
          }
          else if (hashCode == DIV_HASH)
          {
            enumValue = LanguageCode::DIV;
            return true;
          }
          else if (hashCode == NLD_HASH)
          {
            enumValue = LanguageCode::NLD;
            return true;
          }
          else if (hashCode == DZO_HASH)
          {
            enumValue = LanguageCode::DZO;
            return true;
          }
          else if (hashCode == ENM_HASH)
          {
            enumValue = LanguageCode::ENM;
            return true;
          }
          else if (hashCode == EPO_HASH)
          {
            enumValue = LanguageCode::EPO;
            return true;
          }
          else if (hashCode == EST_HASH)
          {
            enumValue = LanguageCode::EST;
            return true;
          }
          else if (hashCode == EWE_HASH)
          {
            enumValue = LanguageCode::EWE;
            return true;
          }
          else if (hashCode == FAO_HASH)
          {
            enumValue = LanguageCode::FAO;
            return true;
          }
          else if (hashCode == FIJ_HASH)
          {
            enumValue = LanguageCode::FIJ;
            return true;
          }
          else if (hashCode == FIN_HASH)
          {
            enumValue = LanguageCode::FIN;
            return true;
          }
          else if (hashCode == FRM_HASH)
          {
            enumValue = LanguageCode::FRM;
            return true;
          }
          else if (hashCode == FUL_HASH)
          {
            enumValue = LanguageCode::FUL;
            return true;
          }
          else if (hashCode == GLA_HASH)
          {
            enumValue = LanguageCode::GLA;
            return true;
          }
          else if (hashCode == GLG_HASH)
          {
            enumValue = LanguageCode::GLG;
            return true;
          }
          else if (hashCode == LUG_HASH)
          {
            enumValue = LanguageCode::LUG;
            return true;
          }
          else if (hashCode == KAT_HASH)
          {
            enumValue = LanguageCode::KAT;
            return true;
          }
          else if (hashCode == ELL_HASH)
          {
            enumValue = LanguageCode::ELL;
            return true;
          }
          else if (hashCode == GRN_HASH)
          {
            enumValue = LanguageCode::GRN;
            return true;
          }
          else if (hashCode == GUJ_HASH)
          {
            enumValue = LanguageCode::GUJ;
            return true;
          }
          else if (hashCode == HAT_HASH)
          {
            enumValue = LanguageCode::HAT;
            return true;
          }
          else if (hashCode == HAU_HASH)
          {
            enumValue = LanguageCode::HAU;
            return true;
          }
          else if (hashCode == HEB_HASH)
          {
            enumValue = LanguageCode::HEB;
            return true;
          }
          else if (hashCode == HER_HASH)
          {
            enumValue = LanguageCode::HER;
            return true;
          }
          else if (hashCode == HMO_HASH)
          {
            enumValue = LanguageCode::HMO;
            return true;
          }
          else if (hashCode == HUN_HASH)
          {
            enumValue = LanguageCode::HUN;
            return true;
          }
          else if (hashCode == ISL_HASH)
          {
            enumValue = LanguageCode::ISL;
            return true;
          }
          else if (hashCode == IDO_HASH)
          {
            enumValue = LanguageCode::IDO;
            return true;
          }
          else if (hashCode == IBO_HASH)
          {
            enumValue = LanguageCode::IBO;
            return true;
          }
          else if (hashCode == IND_HASH)
          {
            enumValue = LanguageCode::IND;
            return true;
          }
          else if (hashCode == INA_HASH)
          {
            enumValue = LanguageCode::INA;
            return true;
          }
          else if (hashCode == ILE_HASH)
          {
            enumValue = LanguageCode::ILE;
            return true;
          }
          else if (hashCode == IKU_HASH)
          {
            enumValue = LanguageCode::IKU;
            return true;
          }
          else if (hashCode == IPK_HASH)
          {
            enumValue = LanguageCode::IPK;
            return true;
          }
          else if (hashCode == GLE_HASH)
          {
            enumValue = LanguageCode::GLE;
            return true;
          }
          else if (hashCode == JAV_HASH)
          {
            enumValue = LanguageCode::JAV;
            return true;
          }
          else if (hashCode == KAL_HASH)
          {
            enumValue = LanguageCode::KAL;
            return true;
          }
          else if (hashCode == KAN_HASH)
          {
            enumValue = LanguageCode::KAN;
            return true;
          }
          else if (hashCode == KAU_HASH)
          {
            enumValue = LanguageCode::KAU;
            return true;
          }
          else if (hashCode == KAS_HASH)
          {
            enumValue = LanguageCode::KAS;
            return true;
          }
          else if (hashCode == KAZ_HASH)
          {
            enumValue = LanguageCode::KAZ;
            return true;
          }
          else if (hashCode == KIK_HASH)
          {
            enumValue = LanguageCode::KIK;
            return true;
          }
          else if (hashCode == KIN_HASH)
          {
            enumValue = LanguageCode::KIN;
            return true;
          }
          else if (hashCode == KIR_HASH)
          {
            enumValue = LanguageCode::KIR;
            return true;
          }
          else if (hashCode == KOM_HASH)
          {
            enumValue = LanguageCode::KOM;
            return true;
          }
          else if (hashCode == KON_HASH)
          {
            enumValue = LanguageCode::KON;
            return true;
          }
          else if (hashCode == KUA_HASH)
          {
            enumValue = LanguageCode::KUA;
            return true;
          }
          else if (hashCode == KUR_HASH)
          {
            enumValue = LanguageCode::KUR;
            return true;
          }
          else if (hashCode == LAO_HASH)
          {
            enumValue = LanguageCode::LAO;
            return true;
          }
          else if (hashCode == LAT_HASH)
          {
            enumValue = LanguageCode::LAT;
            return true;
          }
          else if (hashCode == LAV_HASH)
          {
            enumValue = LanguageCode::LAV;
            return true;
          }
          else if (hashCode == LIM_HASH)
          {
            enumValue = LanguageCode::LIM;
            return true;
          }
          else if (hashCode == LIN_HASH)
          {
            enumValue = LanguageCode::LIN;
            return true;
          }
          else if (hashCode == LIT_HASH)
          {
            enumValue = LanguageCode::LIT;
            return true;
          }
          else if (hashCode == LUB_HASH)
          {
            enumValue = LanguageCode::LUB;
            return true;
          }
          else if (hashCode == LTZ_HASH)
          {
            enumValue = LanguageCode::LTZ;
            return true;
          }
          else if (hashCode == MKD_HASH)
          {
            enumValue = LanguageCode::MKD;
            return true;
          }
          else if (hashCode == MLG_HASH)
          {
            enumValue = LanguageCode::MLG;
            return true;
          }
          else if (hashCode == MSA_HASH)
          {
            enumValue = LanguageCode::MSA;
            return true;
          }
          else if (hashCode == MAL_HASH)
          {
            enumValue = LanguageCode::MAL;
            return true;
          }
          else if (hashCode == MLT_HASH)
          {
            enumValue = LanguageCode::MLT;
            return true;
          }
          else if (hashCode == GLV_HASH)
          {
            enumValue = LanguageCode::GLV;
            return true;
          }
          else if (hashCode == MRI_HASH)
          {
            enumValue = LanguageCode::MRI;
            return true;
          }
          else if (hashCode == MAR_HASH)
          {
            enumValue = LanguageCode::MAR;
            return true;
          }
          else if (hashCode == MAH_HASH)
          {
            enumValue = LanguageCode::MAH;
            return true;
          }
          else if (hashCode == MON_HASH)
          {
            enumValue = LanguageCode::MON;
            return true;
          }
          else if (hashCode == NAU_HASH)
          {
            enumValue = LanguageCode::NAU;
            return true;
          }
          else if (hashCode == NAV_HASH)
          {
            enumValue = LanguageCode::NAV;
            return true;
          }
          else if (hashCode == NDE_HASH)
          {
            enumValue = LanguageCode::NDE;
            return true;
          }
          else if (hashCode == NBL_HASH)
          {
            enumValue = LanguageCode::NBL;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper1(uint32_t hashCode, LanguageCode& enumValue)
        {
          if (hashCode == NDO_HASH)
          {
            enumValue = LanguageCode::NDO;
            return true;
          }
          else if (hashCode == NEP_HASH)
          {
            enumValue = LanguageCode::NEP;
            return true;
          }
          else if (hashCode == SME_HASH)
          {
            enumValue = LanguageCode::SME;
            return true;
          }
          else if (hashCode == NOR_HASH)
          {
            enumValue = LanguageCode::NOR;
            return true;
          }
          else if (hashCode == NOB_HASH)
          {
            enumValue = LanguageCode::NOB;
            return true;
          }
          else if (hashCode == NNO_HASH)
          {
            enumValue = LanguageCode::NNO;
            return true;
          }
          else if (hashCode == OCI_HASH)
          {
            enumValue = LanguageCode::OCI;
            return true;
          }
          else if (hashCode == OJI_HASH)
          {
            enumValue = LanguageCode::OJI;
            return true;
          }
          else if (hashCode == ORI_HASH)
          {
            enumValue = LanguageCode::ORI;
            return true;
          }
          else if (hashCode == ORM_HASH)
          {
            enumValue = LanguageCode::ORM;
            return true;
          }
          else if (hashCode == OSS_HASH)
          {
            enumValue = LanguageCode::OSS;
            return true;
          }
          else if (hashCode == PLI_HASH)
          {
            enumValue = LanguageCode::PLI;
            return true;
          }
          else if (hashCode == FAS_HASH)
          {
            enumValue = LanguageCode::FAS;
            return true;
          }
          else if (hashCode == POL_HASH)
          {
            enumValue = LanguageCode::POL;
            return true;
          }
          else if (hashCode == PUS_HASH)
          {
            enumValue = LanguageCode::PUS;
            return true;
          }
          else if (hashCode == QUE_HASH)
          {
            enumValue = LanguageCode::QUE;
            return true;
          }
          else if (hashCode == QAA_HASH)
          {
            enumValue = LanguageCode::QAA;
            return true;
          }
          else if (hashCode == RON_HASH)
          {
            enumValue = LanguageCode::RON;
            return true;
          }
          else if (hashCode == ROH_HASH)
          {
            enumValue = LanguageCode::ROH;
            return true;
          }
          else if (hashCode == RUN_HASH)
          {
            enumValue = LanguageCode::RUN;
            return true;
          }
          else if (hashCode == SMO_HASH)
          {
            enumValue = LanguageCode::SMO;
            return true;
          }
          else if (hashCode == SAG_HASH)
          {
            enumValue = LanguageCode::SAG;
            return true;
          }
          else if (hashCode == SAN_HASH)
          {
            enumValue = LanguageCode::SAN;
            return true;
          }
          else if (hashCode == SRD_HASH)
          {
            enumValue = LanguageCode::SRD;
            return true;
          }
          else if (hashCode == SRB_HASH)
          {
            enumValue = LanguageCode::SRB;
            return true;
          }
          else if (hashCode == SNA_HASH)
          {
            enumValue = LanguageCode::SNA;
            return true;
          }
          else if (hashCode == III_HASH)
          {
            enumValue = LanguageCode::III;
            return true;
          }
          else if (hashCode == SND_HASH)
          {
            enumValue = LanguageCode::SND;
            return true;
          }
          else if (hashCode == SIN_HASH)
          {
            enumValue = LanguageCode::SIN;
            return true;
          }
          else if (hashCode == SLK_HASH)
          {
            enumValue = LanguageCode::SLK;
            return true;
          }
          else if (hashCode == SLV_HASH)
          {
            enumValue = LanguageCode::SLV;
            return true;
          }
          else if (hashCode == SOM_HASH)
          {
            enumValue = LanguageCode::SOM;
            return true;
          }
          else if (hashCode == SOT_HASH)
          {
            enumValue = LanguageCode::SOT;
            return true;
          }
          else if (hashCode == SUN_HASH)
          {
            enumValue = LanguageCode::SUN;
            return true;
          }
          else if (hashCode == SWA_HASH)
          {
            enumValue = LanguageCode::SWA;
            return true;
          }
          else if (hashCode == SSW_HASH)
          {
            enumValue = LanguageCode::SSW;
            return true;
          }
          else if (hashCode == SWE_HASH)
          {
            enumValue = LanguageCode::SWE;
            return true;
          }
          else if (hashCode == TGL_HASH)
          {
            enumValue = LanguageCode::TGL;
            return true;
          }
          else if (hashCode == TAH_HASH)
          {
            enumValue = LanguageCode::TAH;
            return true;
          }
          else if (hashCode == TGK_HASH)
          {
            enumValue = LanguageCode::TGK;
            return true;
          }
          else if (hashCode == TAM_HASH)
          {
            enumValue = LanguageCode::TAM;
            return true;
          }
          else if (hashCode == TAT_HASH)
          {
            enumValue = LanguageCode::TAT;
            return true;
          }
          else if (hashCode == TEL_HASH)
          {
            enumValue = LanguageCode::TEL;
            return true;
          }
          else if (hashCode == THA_HASH)
          {
            enumValue = LanguageCode::THA;
            return true;
          }
          else if (hashCode == BOD_HASH)
          {
            enumValue = LanguageCode::BOD;
            return true;
          }
          else if (hashCode == TIR_HASH)
          {
            enumValue = LanguageCode::TIR;
            return true;
          }
          else if (hashCode == TON_HASH)
          {
            enumValue = LanguageCode::TON;
            return true;
          }
          else if (hashCode == TSO_HASH)
          {
            enumValue = LanguageCode::TSO;
            return true;
          }
          else if (hashCode == TSN_HASH)
          {
            enumValue = LanguageCode::TSN;
            return true;
          }
          else if (hashCode == TUR_HASH)
          {
            enumValue = LanguageCode::TUR;
            return true;
          }
          else if (hashCode == TUK_HASH)
          {
            enumValue = LanguageCode::TUK;
            return true;
          }
          else if (hashCode == TWI_HASH)
          {
            enumValue = LanguageCode::TWI;
            return true;
          }
          else if (hashCode == UIG_HASH)
          {
            enumValue = LanguageCode::UIG;
            return true;
          }
          else if (hashCode == UKR_HASH)
          {
            enumValue = LanguageCode::UKR;
            return true;
          }
          else if (hashCode == UZB_HASH)
          {
            enumValue = LanguageCode::UZB;
            return true;
          }
          else if (hashCode == VEN_HASH)
          {
            enumValue = LanguageCode::VEN;
            return true;
          }
          else if (hashCode == VOL_HASH)
          {
            enumValue = LanguageCode::VOL;
            return true;
          }
          else if (hashCode == WLN_HASH)
          {
            enumValue = LanguageCode::WLN;
            return true;
          }
          else if (hashCode == CYM_HASH)
          {
            enumValue = LanguageCode::CYM;
            return true;
          }
          else if (hashCode == FRY_HASH)
          {
            enumValue = LanguageCode::FRY;
            return true;
          }
          else if (hashCode == WOL_HASH)
          {
            enumValue = LanguageCode::WOL;
            return true;
          }
          else if (hashCode == XHO_HASH)
          {
            enumValue = LanguageCode::XHO;
            return true;
          }
          else if (hashCode == YID_HASH)
          {
            enumValue = LanguageCode::YID;
            return true;
          }
          else if (hashCode == YOR_HASH)
          {
            enumValue = LanguageCode::YOR;
            return true;
          }
          else if (hashCode == ZHA_HASH)
          {
            enumValue = LanguageCode::ZHA;
            return true;
          }
          else if (hashCode == ZUL_HASH)
          {
            enumValue = LanguageCode::ZUL;
            return true;
          }
          else if (hashCode == ORJ_HASH)
          {
            enumValue = LanguageCode::ORJ;
            return true;
          }
          else if (hashCode == QPC_HASH)
          {
            enumValue = LanguageCode::QPC;
            return true;
          }
          else if (hashCode == TNG_HASH)
          {
            enumValue = LanguageCode::TNG;
            return true;
          }
          else if (hashCode == SRP_HASH)
          {
            enumValue = LanguageCode::SRP;
            return true;
          }
          return false;
        }

        static bool GetNameForEnumHelper0(LanguageCode enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case LanguageCode::ENG:
            value = "ENG";
            return true;
          case LanguageCode::SPA:
            value = "SPA";
            return true;
          case LanguageCode::FRA:
            value = "FRA";
            return true;
          case LanguageCode::DEU:
            value = "DEU";
            return true;
          case LanguageCode::GER:
            value = "GER";
            return true;
          case LanguageCode::ZHO:
            value = "ZHO";
            return true;
          case LanguageCode::ARA:
            value = "ARA";
            return true;
          case LanguageCode::HIN:
            value = "HIN";
            return true;
          case LanguageCode::JPN:
            value = "JPN";
            return true;
          case LanguageCode::RUS:
            value = "RUS";
            return true;
          case LanguageCode::POR:
            value = "POR";
            return true;
          case LanguageCode::ITA:
            value = "ITA";
            return true;
          case LanguageCode::URD:
            value = "URD";
            return true;
          case LanguageCode::VIE:
            value = "VIE";
            return true;
          case LanguageCode::KOR:
            value = "KOR";
            return true;
          case LanguageCode::PAN:
            value = "PAN";
            return true;
          case LanguageCode::ABK:
            value = "ABK";
            return true;
          case LanguageCode::AAR:
            value = "AAR";
            return true;
          case LanguageCode::AFR:
            value = "AFR";
            return true;
          case LanguageCode::AKA:
            value = "AKA";
            return true;
          case LanguageCode::SQI:
            value = "SQI";
            return true;
          case LanguageCode::AMH:
            value = "AMH";
            return true;
          case LanguageCode::ARG:
            value = "ARG";
            return true;
          case LanguageCode::HYE:
            value = "HYE";
            return true;
          case LanguageCode::ASM:
            value = "ASM";
            return true;
          case LanguageCode::AVA:
            value = "AVA";
            return true;
          case LanguageCode::AVE:
            value = "AVE";
            return true;
          case LanguageCode::AYM:
            value = "AYM";
            return true;
          case LanguageCode::AZE:
            value = "AZE";
            return true;
          case LanguageCode::BAM:
            value = "BAM";
            return true;
          case LanguageCode::BAK:
            value = "BAK";
            return true;
          case LanguageCode::EUS:
            value = "EUS";
            return true;
          case LanguageCode::BEL:
            value = "BEL";
            return true;
          case LanguageCode::BEN:
            value = "BEN";
            return true;
          case LanguageCode::BIH:
            value = "BIH";
            return true;
          case LanguageCode::BIS:
            value = "BIS";
            return true;
          case LanguageCode::BOS:
            value = "BOS";
            return true;
          case LanguageCode::BRE:
            value = "BRE";
            return true;
          case LanguageCode::BUL:
            value = "BUL";
            return true;
          case LanguageCode::MYA:
            value = "MYA";
            return true;
          case LanguageCode::CAT:
            value = "CAT";
            return true;
          case LanguageCode::KHM:
            value = "KHM";
            return true;
          case LanguageCode::CHA:
            value = "CHA";
            return true;
          case LanguageCode::CHE:
            value = "CHE";
            return true;
          case LanguageCode::NYA:
            value = "NYA";
            return true;
          case LanguageCode::CHU:
            value = "CHU";
            return true;
          case LanguageCode::CHV:
            value = "CHV";
            return true;
          case LanguageCode::COR:
            value = "COR";
            return true;
          case LanguageCode::COS:
            value = "COS";
            return true;
          case LanguageCode::CRE:
            value = "CRE";
            return true;
          case LanguageCode::HRV:
            value = "HRV";
            return true;
          case LanguageCode::CES:
            value = "CES";
            return true;
          case LanguageCode::DAN:
            value = "DAN";
            return true;
          case LanguageCode::DIV:
            value = "DIV";
            return true;
          case LanguageCode::NLD:
            value = "NLD";
            return true;
          case LanguageCode::DZO:
            value = "DZO";
            return true;
          case LanguageCode::ENM:
            value = "ENM";
            return true;
          case LanguageCode::EPO:
            value = "EPO";
            return true;
          case LanguageCode::EST:
            value = "EST";
            return true;
          case LanguageCode::EWE:
            value = "EWE";
            return true;
          case LanguageCode::FAO:
            value = "FAO";
            return true;
          case LanguageCode::FIJ:
            value = "FIJ";
            return true;
          case LanguageCode::FIN:
            value = "FIN";
            return true;
          case LanguageCode::FRM:
            value = "FRM";
            return true;
          case LanguageCode::FUL:
            value = "FUL";
            return true;
          case LanguageCode::GLA:
            value = "GLA";
            return true;
          case LanguageCode::GLG:
            value = "GLG";
            return true;
          case LanguageCode::LUG:
            value = "LUG";
            return true;
          case LanguageCode::KAT:
            value = "KAT";
            return true;
          case LanguageCode::ELL:
            value = "ELL";
            return true;
          case LanguageCode::GRN:
            value = "GRN";
            return true;
          case LanguageCode::GUJ:
            value = "GUJ";
            return true;
          case LanguageCode::HAT:
            value = "HAT";
            return true;
          case LanguageCode::HAU:
            value = "HAU";
            return true;
          case LanguageCode::HEB:
            value = "HEB";
            return true;
          case LanguageCode::HER:
            value = "HER";
            return true;
          case LanguageCode::HMO:
            value = "HMO";
            return true;
          case LanguageCode::HUN:
            value = "HUN";
            return true;
          case LanguageCode::ISL:
            value = "ISL";
            return true;
          case LanguageCode::IDO:
            value = "IDO";
            return true;
          case LanguageCode::IBO:
            value = "IBO";
            return true;
          case LanguageCode::IND:
            value = "IND";
            return true;
          case LanguageCode::INA:
            value = "INA";
            return true;
          case LanguageCode::ILE:
            value = "ILE";
            return true;
          case LanguageCode::IKU:
            value = "IKU";
            return true;
          case LanguageCode::IPK:
            value = "IPK";
            return true;
          case LanguageCode::GLE:
            value = "GLE";
            return true;
          case LanguageCode::JAV:
            value = "JAV";
            return true;
          case LanguageCode::KAL:
            value = "KAL";
            return true;
          case LanguageCode::KAN:
            value = "KAN";
            return true;
          case LanguageCode::KAU:
            value = "KAU";
            return true;
          case LanguageCode::KAS:
            value = "KAS";
            return true;
          case LanguageCode::KAZ:
            value = "KAZ";
            return true;
          case LanguageCode::KIK:
            value = "KIK";
            return true;
          case LanguageCode::KIN:
            value = "KIN";
            return true;
          case LanguageCode::KIR:
            value = "KIR";
            return true;
          case LanguageCode::KOM:
            value = "KOM";
            return true;
          case LanguageCode::KON:
            value = "KON";
            return true;
          case LanguageCode::KUA:
            value = "KUA";
            return true;
          case LanguageCode::KUR:
            value = "KUR";
            return true;
          case LanguageCode::LAO:
            value = "LAO";
            return true;
          case LanguageCode::LAT:
            value = "LAT";
            return true;
          case LanguageCode::LAV:
            value = "LAV";
            return true;
          case LanguageCode::LIM:
            value = "LIM";
            return true;
          case LanguageCode::LIN:
            value = "LIN";
            return true;
          case LanguageCode::LIT:
            value = "LIT";
            return true;
          case LanguageCode::LUB:
            value = "LUB";
            return true;
          case LanguageCode::LTZ:
            value = "LTZ";
            return true;
          case LanguageCode::MKD:
            value = "MKD";
            return true;
          case LanguageCode::MLG:
            value = "MLG";
            return true;
          case LanguageCode::MSA:
            value = "MSA";
            return true;
          case LanguageCode::MAL:
            value = "MAL";
            return true;
          case LanguageCode::MLT:
            value = "MLT";
            return true;
          case LanguageCode::GLV:
            value = "GLV";
            return true;
          case LanguageCode::MRI:
            value = "MRI";
            return true;
          case LanguageCode::MAR:
            value = "MAR";
            return true;
          case LanguageCode::MAH:
            value = "MAH";
            return true;
          case LanguageCode::MON:
            value = "MON";
            return true;
          case LanguageCode::NAU:
            value = "NAU";
            return true;
          case LanguageCode::NAV:
            value = "NAV";
            return true;
          case LanguageCode::NDE:
            value = "NDE";
            return true;
          case LanguageCode::NBL:
            value = "NBL";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper1(LanguageCode enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case LanguageCode::NDO:
            value = "NDO";
            return true;
          case LanguageCode::NEP:
            value = "NEP";
            return true;
          case LanguageCode::SME:
            value = "SME";
            return true;
          case LanguageCode::NOR:
            value = "NOR";
            return true;
          case LanguageCode::NOB:
            value = "NOB";
            return true;
          case LanguageCode::NNO:
            value = "NNO";
            return true;
          case LanguageCode::OCI:
            value = "OCI";
            return true;
          case LanguageCode::OJI:
            value = "OJI";
            return true;
          case LanguageCode::ORI:
            value = "ORI";
            return true;
          case LanguageCode::ORM:
            value = "ORM";
            return true;
          case LanguageCode::OSS:
            value = "OSS";
            return true;
          case LanguageCode::PLI:
            value = "PLI";
            return true;
          case LanguageCode::FAS:
            value = "FAS";
            return true;
          case LanguageCode::POL:
            value = "POL";
            return true;
          case LanguageCode::PUS:
            value = "PUS";
            return true;
          case LanguageCode::QUE:
            value = "QUE";
            return true;
          case LanguageCode::QAA:
            value = "QAA";
            return true;
          case LanguageCode::RON:
            value = "RON";
            return true;
          case LanguageCode::ROH:
            value = "ROH";
            return true;
          case LanguageCode::RUN:
            value = "RUN";
            return true;
          case LanguageCode::SMO:
            value = "SMO";
            return true;
          case LanguageCode::SAG:
            value = "SAG";
            return true;
          case LanguageCode::SAN:
            value = "SAN";
            return true;
          case LanguageCode::SRD:
            value = "SRD";
            return true;
          case LanguageCode::SRB:
            value = "SRB";
            return true;
          case LanguageCode::SNA:
            value = "SNA";
            return true;
          case LanguageCode::III:
            value = "III";
            return true;
          case LanguageCode::SND:
            value = "SND";
            return true;
          case LanguageCode::SIN:
            value = "SIN";
            return true;
          case LanguageCode::SLK:
            value = "SLK";
            return true;
          case LanguageCode::SLV:
            value = "SLV";
            return true;
          case LanguageCode::SOM:
            value = "SOM";
            return true;
          case LanguageCode::SOT:
            value = "SOT";
            return true;
          case LanguageCode::SUN:
            value = "SUN";
            return true;
          case LanguageCode::SWA:
            value = "SWA";
            return true;
          case LanguageCode::SSW:
            value = "SSW";
            return true;
          case LanguageCode::SWE:
            value = "SWE";
            return true;
          case LanguageCode::TGL:
            value = "TGL";
            return true;
          case LanguageCode::TAH:
            value = "TAH";
            return true;
          case LanguageCode::TGK:
            value = "TGK";
            return true;
          case LanguageCode::TAM:
            value = "TAM";
            return true;
          case LanguageCode::TAT:
            value = "TAT";
            return true;
          case LanguageCode::TEL:
            value = "TEL";
            return true;
          case LanguageCode::THA:
            value = "THA";
            return true;
          case LanguageCode::BOD:
            value = "BOD";
            return true;
          case LanguageCode::TIR:
            value = "TIR";
            return true;
          case LanguageCode::TON:
            value = "TON";
            return true;
          case LanguageCode::TSO:
            value = "TSO";
            return true;
          case LanguageCode::TSN:
            value = "TSN";
            return true;
          case LanguageCode::TUR:
            value = "TUR";
            return true;
          case LanguageCode::TUK:
            value = "TUK";
            return true;
          case LanguageCode::TWI:
            value = "TWI";
            return true;
          case LanguageCode::UIG:
            value = "UIG";
            return true;
          case LanguageCode::UKR:
            value = "UKR";
            return true;
          case LanguageCode::UZB:
            value = "UZB";
            return true;
          case LanguageCode::VEN:
            value = "VEN";
            return true;
          case LanguageCode::VOL:
            value = "VOL";
            return true;
          case LanguageCode::WLN:
            value = "WLN";
            return true;
          case LanguageCode::CYM:
            value = "CYM";
            return true;
          case LanguageCode::FRY:
            value = "FRY";
            return true;
          case LanguageCode::WOL:
            value = "WOL";
            return true;
          case LanguageCode::XHO:
            value = "XHO";
            return true;
          case LanguageCode::YID:
            value = "YID";
            return true;
          case LanguageCode::YOR:
            value = "YOR";
            return true;
          case LanguageCode::ZHA:
            value = "ZHA";
            return true;
          case LanguageCode::ZUL:
            value = "ZUL";
            return true;
          case LanguageCode::ORJ:
            value = "ORJ";
            return true;
          case LanguageCode::QPC:
            value = "QPC";
            return true;
          case LanguageCode::TNG:
            value = "TNG";
            return true;
          case LanguageCode::SRP:
            value = "SRP";
            return true;
          default:
            return false;
          }
        }

        LanguageCode GetLanguageCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          LanguageCode enumValue;
          if (GetEnumForNameHelper0(hashCode, enumValue))
          {
             return enumValue;
          }
          else if (GetEnumForNameHelper1(hashCode, enumValue))
          {
             return enumValue;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LanguageCode>(hashCode);
          }

          return LanguageCode::NOT_SET;
        }

        Aws::String GetNameForLanguageCode(LanguageCode enumValue)
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
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
          }

          return {};
        }

      } // namespace LanguageCodeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
