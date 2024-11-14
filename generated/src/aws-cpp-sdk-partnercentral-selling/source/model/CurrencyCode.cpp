/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/CurrencyCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PartnerCentralSelling
  {
    namespace Model
    {
      namespace CurrencyCodeMapper
      {

        static const int USD_HASH = HashingUtils::HashString("USD");
        static const int EUR_HASH = HashingUtils::HashString("EUR");
        static const int GBP_HASH = HashingUtils::HashString("GBP");
        static const int AUD_HASH = HashingUtils::HashString("AUD");
        static const int CAD_HASH = HashingUtils::HashString("CAD");
        static const int CNY_HASH = HashingUtils::HashString("CNY");
        static const int NZD_HASH = HashingUtils::HashString("NZD");
        static const int INR_HASH = HashingUtils::HashString("INR");
        static const int JPY_HASH = HashingUtils::HashString("JPY");
        static const int CHF_HASH = HashingUtils::HashString("CHF");
        static const int SEK_HASH = HashingUtils::HashString("SEK");
        static const int AED_HASH = HashingUtils::HashString("AED");
        static const int AFN_HASH = HashingUtils::HashString("AFN");
        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int AMD_HASH = HashingUtils::HashString("AMD");
        static const int ANG_HASH = HashingUtils::HashString("ANG");
        static const int AOA_HASH = HashingUtils::HashString("AOA");
        static const int ARS_HASH = HashingUtils::HashString("ARS");
        static const int AWG_HASH = HashingUtils::HashString("AWG");
        static const int AZN_HASH = HashingUtils::HashString("AZN");
        static const int BAM_HASH = HashingUtils::HashString("BAM");
        static const int BBD_HASH = HashingUtils::HashString("BBD");
        static const int BDT_HASH = HashingUtils::HashString("BDT");
        static const int BGN_HASH = HashingUtils::HashString("BGN");
        static const int BHD_HASH = HashingUtils::HashString("BHD");
        static const int BIF_HASH = HashingUtils::HashString("BIF");
        static const int BMD_HASH = HashingUtils::HashString("BMD");
        static const int BND_HASH = HashingUtils::HashString("BND");
        static const int BOB_HASH = HashingUtils::HashString("BOB");
        static const int BOV_HASH = HashingUtils::HashString("BOV");
        static const int BRL_HASH = HashingUtils::HashString("BRL");
        static const int BSD_HASH = HashingUtils::HashString("BSD");
        static const int BTN_HASH = HashingUtils::HashString("BTN");
        static const int BWP_HASH = HashingUtils::HashString("BWP");
        static const int BYN_HASH = HashingUtils::HashString("BYN");
        static const int BZD_HASH = HashingUtils::HashString("BZD");
        static const int CDF_HASH = HashingUtils::HashString("CDF");
        static const int CHE_HASH = HashingUtils::HashString("CHE");
        static const int CHW_HASH = HashingUtils::HashString("CHW");
        static const int CLF_HASH = HashingUtils::HashString("CLF");
        static const int CLP_HASH = HashingUtils::HashString("CLP");
        static const int COP_HASH = HashingUtils::HashString("COP");
        static const int COU_HASH = HashingUtils::HashString("COU");
        static const int CRC_HASH = HashingUtils::HashString("CRC");
        static const int CUC_HASH = HashingUtils::HashString("CUC");
        static const int CUP_HASH = HashingUtils::HashString("CUP");
        static const int CVE_HASH = HashingUtils::HashString("CVE");
        static const int CZK_HASH = HashingUtils::HashString("CZK");
        static const int DJF_HASH = HashingUtils::HashString("DJF");
        static const int DKK_HASH = HashingUtils::HashString("DKK");
        static const int DOP_HASH = HashingUtils::HashString("DOP");
        static const int DZD_HASH = HashingUtils::HashString("DZD");
        static const int EGP_HASH = HashingUtils::HashString("EGP");
        static const int ERN_HASH = HashingUtils::HashString("ERN");
        static const int ETB_HASH = HashingUtils::HashString("ETB");
        static const int FJD_HASH = HashingUtils::HashString("FJD");
        static const int FKP_HASH = HashingUtils::HashString("FKP");
        static const int GEL_HASH = HashingUtils::HashString("GEL");
        static const int GHS_HASH = HashingUtils::HashString("GHS");
        static const int GIP_HASH = HashingUtils::HashString("GIP");
        static const int GMD_HASH = HashingUtils::HashString("GMD");
        static const int GNF_HASH = HashingUtils::HashString("GNF");
        static const int GTQ_HASH = HashingUtils::HashString("GTQ");
        static const int GYD_HASH = HashingUtils::HashString("GYD");
        static const int HKD_HASH = HashingUtils::HashString("HKD");
        static const int HNL_HASH = HashingUtils::HashString("HNL");
        static const int HRK_HASH = HashingUtils::HashString("HRK");
        static const int HTG_HASH = HashingUtils::HashString("HTG");
        static const int HUF_HASH = HashingUtils::HashString("HUF");
        static const int IDR_HASH = HashingUtils::HashString("IDR");
        static const int ILS_HASH = HashingUtils::HashString("ILS");
        static const int IQD_HASH = HashingUtils::HashString("IQD");
        static const int IRR_HASH = HashingUtils::HashString("IRR");
        static const int ISK_HASH = HashingUtils::HashString("ISK");
        static const int JMD_HASH = HashingUtils::HashString("JMD");
        static const int JOD_HASH = HashingUtils::HashString("JOD");
        static const int KES_HASH = HashingUtils::HashString("KES");
        static const int KGS_HASH = HashingUtils::HashString("KGS");
        static const int KHR_HASH = HashingUtils::HashString("KHR");
        static const int KMF_HASH = HashingUtils::HashString("KMF");
        static const int KPW_HASH = HashingUtils::HashString("KPW");
        static const int KRW_HASH = HashingUtils::HashString("KRW");
        static const int KWD_HASH = HashingUtils::HashString("KWD");
        static const int KYD_HASH = HashingUtils::HashString("KYD");
        static const int KZT_HASH = HashingUtils::HashString("KZT");
        static const int LAK_HASH = HashingUtils::HashString("LAK");
        static const int LBP_HASH = HashingUtils::HashString("LBP");
        static const int LKR_HASH = HashingUtils::HashString("LKR");
        static const int LRD_HASH = HashingUtils::HashString("LRD");
        static const int LSL_HASH = HashingUtils::HashString("LSL");
        static const int LYD_HASH = HashingUtils::HashString("LYD");
        static const int MAD_HASH = HashingUtils::HashString("MAD");
        static const int MDL_HASH = HashingUtils::HashString("MDL");
        static const int MGA_HASH = HashingUtils::HashString("MGA");
        static const int MKD_HASH = HashingUtils::HashString("MKD");
        static const int MMK_HASH = HashingUtils::HashString("MMK");
        static const int MNT_HASH = HashingUtils::HashString("MNT");
        static const int MOP_HASH = HashingUtils::HashString("MOP");
        static const int MRU_HASH = HashingUtils::HashString("MRU");
        static const int MUR_HASH = HashingUtils::HashString("MUR");
        static const int MVR_HASH = HashingUtils::HashString("MVR");
        static const int MWK_HASH = HashingUtils::HashString("MWK");
        static const int MXN_HASH = HashingUtils::HashString("MXN");
        static const int MXV_HASH = HashingUtils::HashString("MXV");
        static const int MYR_HASH = HashingUtils::HashString("MYR");
        static const int MZN_HASH = HashingUtils::HashString("MZN");
        static const int NAD_HASH = HashingUtils::HashString("NAD");
        static const int NGN_HASH = HashingUtils::HashString("NGN");
        static const int NIO_HASH = HashingUtils::HashString("NIO");
        static const int NOK_HASH = HashingUtils::HashString("NOK");
        static const int NPR_HASH = HashingUtils::HashString("NPR");
        static const int OMR_HASH = HashingUtils::HashString("OMR");
        static const int PAB_HASH = HashingUtils::HashString("PAB");
        static const int PEN_HASH = HashingUtils::HashString("PEN");
        static const int PGK_HASH = HashingUtils::HashString("PGK");
        static const int PHP_HASH = HashingUtils::HashString("PHP");
        static const int PKR_HASH = HashingUtils::HashString("PKR");
        static const int PLN_HASH = HashingUtils::HashString("PLN");
        static const int PYG_HASH = HashingUtils::HashString("PYG");
        static const int QAR_HASH = HashingUtils::HashString("QAR");
        static const int RON_HASH = HashingUtils::HashString("RON");
        static const int RSD_HASH = HashingUtils::HashString("RSD");
        static const int RUB_HASH = HashingUtils::HashString("RUB");
        static const int RWF_HASH = HashingUtils::HashString("RWF");
        static const int SAR_HASH = HashingUtils::HashString("SAR");
        static const int SBD_HASH = HashingUtils::HashString("SBD");
        static const int SCR_HASH = HashingUtils::HashString("SCR");
        static const int SDG_HASH = HashingUtils::HashString("SDG");
        static const int SGD_HASH = HashingUtils::HashString("SGD");
        static const int SHP_HASH = HashingUtils::HashString("SHP");
        static const int SLL_HASH = HashingUtils::HashString("SLL");
        static const int SOS_HASH = HashingUtils::HashString("SOS");
        static const int SRD_HASH = HashingUtils::HashString("SRD");
        static const int SSP_HASH = HashingUtils::HashString("SSP");
        static const int STN_HASH = HashingUtils::HashString("STN");
        static const int SVC_HASH = HashingUtils::HashString("SVC");
        static const int SYP_HASH = HashingUtils::HashString("SYP");
        static const int SZL_HASH = HashingUtils::HashString("SZL");
        static const int THB_HASH = HashingUtils::HashString("THB");
        static const int TJS_HASH = HashingUtils::HashString("TJS");
        static const int TMT_HASH = HashingUtils::HashString("TMT");
        static const int TND_HASH = HashingUtils::HashString("TND");
        static const int TOP_HASH = HashingUtils::HashString("TOP");
        static const int TRY_HASH = HashingUtils::HashString("TRY");
        static const int TTD_HASH = HashingUtils::HashString("TTD");
        static const int TWD_HASH = HashingUtils::HashString("TWD");
        static const int TZS_HASH = HashingUtils::HashString("TZS");
        static const int UAH_HASH = HashingUtils::HashString("UAH");
        static const int UGX_HASH = HashingUtils::HashString("UGX");
        static const int USN_HASH = HashingUtils::HashString("USN");
        static const int UYI_HASH = HashingUtils::HashString("UYI");
        static const int UYU_HASH = HashingUtils::HashString("UYU");
        static const int UZS_HASH = HashingUtils::HashString("UZS");
        static const int VEF_HASH = HashingUtils::HashString("VEF");
        static const int VND_HASH = HashingUtils::HashString("VND");
        static const int VUV_HASH = HashingUtils::HashString("VUV");
        static const int WST_HASH = HashingUtils::HashString("WST");
        static const int XAF_HASH = HashingUtils::HashString("XAF");
        static const int XCD_HASH = HashingUtils::HashString("XCD");
        static const int XDR_HASH = HashingUtils::HashString("XDR");
        static const int XOF_HASH = HashingUtils::HashString("XOF");
        static const int XPF_HASH = HashingUtils::HashString("XPF");
        static const int XSU_HASH = HashingUtils::HashString("XSU");
        static const int XUA_HASH = HashingUtils::HashString("XUA");
        static const int YER_HASH = HashingUtils::HashString("YER");
        static const int ZAR_HASH = HashingUtils::HashString("ZAR");
        static const int ZMW_HASH = HashingUtils::HashString("ZMW");
        static const int ZWL_HASH = HashingUtils::HashString("ZWL");

        /*
        The if-else chains in this file are converted into a jump table by the compiler,
        which allows constant time lookup. The chain has been broken into helper functions
        because MSVC has a maximum of 122 chained if-else blocks.
        */
        static bool GetEnumForNameHelper0(int hashCode, CurrencyCode& enumValue)
        {
          if (hashCode == USD_HASH)
          {
            enumValue = CurrencyCode::USD;
            return true;
          }
          else if (hashCode == EUR_HASH)
          {
            enumValue = CurrencyCode::EUR;
            return true;
          }
          else if (hashCode == GBP_HASH)
          {
            enumValue = CurrencyCode::GBP;
            return true;
          }
          else if (hashCode == AUD_HASH)
          {
            enumValue = CurrencyCode::AUD;
            return true;
          }
          else if (hashCode == CAD_HASH)
          {
            enumValue = CurrencyCode::CAD;
            return true;
          }
          else if (hashCode == CNY_HASH)
          {
            enumValue = CurrencyCode::CNY;
            return true;
          }
          else if (hashCode == NZD_HASH)
          {
            enumValue = CurrencyCode::NZD;
            return true;
          }
          else if (hashCode == INR_HASH)
          {
            enumValue = CurrencyCode::INR;
            return true;
          }
          else if (hashCode == JPY_HASH)
          {
            enumValue = CurrencyCode::JPY;
            return true;
          }
          else if (hashCode == CHF_HASH)
          {
            enumValue = CurrencyCode::CHF;
            return true;
          }
          else if (hashCode == SEK_HASH)
          {
            enumValue = CurrencyCode::SEK;
            return true;
          }
          else if (hashCode == AED_HASH)
          {
            enumValue = CurrencyCode::AED;
            return true;
          }
          else if (hashCode == AFN_HASH)
          {
            enumValue = CurrencyCode::AFN;
            return true;
          }
          else if (hashCode == ALL_HASH)
          {
            enumValue = CurrencyCode::ALL;
            return true;
          }
          else if (hashCode == AMD_HASH)
          {
            enumValue = CurrencyCode::AMD;
            return true;
          }
          else if (hashCode == ANG_HASH)
          {
            enumValue = CurrencyCode::ANG;
            return true;
          }
          else if (hashCode == AOA_HASH)
          {
            enumValue = CurrencyCode::AOA;
            return true;
          }
          else if (hashCode == ARS_HASH)
          {
            enumValue = CurrencyCode::ARS;
            return true;
          }
          else if (hashCode == AWG_HASH)
          {
            enumValue = CurrencyCode::AWG;
            return true;
          }
          else if (hashCode == AZN_HASH)
          {
            enumValue = CurrencyCode::AZN;
            return true;
          }
          else if (hashCode == BAM_HASH)
          {
            enumValue = CurrencyCode::BAM;
            return true;
          }
          else if (hashCode == BBD_HASH)
          {
            enumValue = CurrencyCode::BBD;
            return true;
          }
          else if (hashCode == BDT_HASH)
          {
            enumValue = CurrencyCode::BDT;
            return true;
          }
          else if (hashCode == BGN_HASH)
          {
            enumValue = CurrencyCode::BGN;
            return true;
          }
          else if (hashCode == BHD_HASH)
          {
            enumValue = CurrencyCode::BHD;
            return true;
          }
          else if (hashCode == BIF_HASH)
          {
            enumValue = CurrencyCode::BIF;
            return true;
          }
          else if (hashCode == BMD_HASH)
          {
            enumValue = CurrencyCode::BMD;
            return true;
          }
          else if (hashCode == BND_HASH)
          {
            enumValue = CurrencyCode::BND;
            return true;
          }
          else if (hashCode == BOB_HASH)
          {
            enumValue = CurrencyCode::BOB;
            return true;
          }
          else if (hashCode == BOV_HASH)
          {
            enumValue = CurrencyCode::BOV;
            return true;
          }
          else if (hashCode == BRL_HASH)
          {
            enumValue = CurrencyCode::BRL;
            return true;
          }
          else if (hashCode == BSD_HASH)
          {
            enumValue = CurrencyCode::BSD;
            return true;
          }
          else if (hashCode == BTN_HASH)
          {
            enumValue = CurrencyCode::BTN;
            return true;
          }
          else if (hashCode == BWP_HASH)
          {
            enumValue = CurrencyCode::BWP;
            return true;
          }
          else if (hashCode == BYN_HASH)
          {
            enumValue = CurrencyCode::BYN;
            return true;
          }
          else if (hashCode == BZD_HASH)
          {
            enumValue = CurrencyCode::BZD;
            return true;
          }
          else if (hashCode == CDF_HASH)
          {
            enumValue = CurrencyCode::CDF;
            return true;
          }
          else if (hashCode == CHE_HASH)
          {
            enumValue = CurrencyCode::CHE;
            return true;
          }
          else if (hashCode == CHW_HASH)
          {
            enumValue = CurrencyCode::CHW;
            return true;
          }
          else if (hashCode == CLF_HASH)
          {
            enumValue = CurrencyCode::CLF;
            return true;
          }
          else if (hashCode == CLP_HASH)
          {
            enumValue = CurrencyCode::CLP;
            return true;
          }
          else if (hashCode == COP_HASH)
          {
            enumValue = CurrencyCode::COP;
            return true;
          }
          else if (hashCode == COU_HASH)
          {
            enumValue = CurrencyCode::COU;
            return true;
          }
          else if (hashCode == CRC_HASH)
          {
            enumValue = CurrencyCode::CRC;
            return true;
          }
          else if (hashCode == CUC_HASH)
          {
            enumValue = CurrencyCode::CUC;
            return true;
          }
          else if (hashCode == CUP_HASH)
          {
            enumValue = CurrencyCode::CUP;
            return true;
          }
          else if (hashCode == CVE_HASH)
          {
            enumValue = CurrencyCode::CVE;
            return true;
          }
          else if (hashCode == CZK_HASH)
          {
            enumValue = CurrencyCode::CZK;
            return true;
          }
          else if (hashCode == DJF_HASH)
          {
            enumValue = CurrencyCode::DJF;
            return true;
          }
          else if (hashCode == DKK_HASH)
          {
            enumValue = CurrencyCode::DKK;
            return true;
          }
          else if (hashCode == DOP_HASH)
          {
            enumValue = CurrencyCode::DOP;
            return true;
          }
          else if (hashCode == DZD_HASH)
          {
            enumValue = CurrencyCode::DZD;
            return true;
          }
          else if (hashCode == EGP_HASH)
          {
            enumValue = CurrencyCode::EGP;
            return true;
          }
          else if (hashCode == ERN_HASH)
          {
            enumValue = CurrencyCode::ERN;
            return true;
          }
          else if (hashCode == ETB_HASH)
          {
            enumValue = CurrencyCode::ETB;
            return true;
          }
          else if (hashCode == FJD_HASH)
          {
            enumValue = CurrencyCode::FJD;
            return true;
          }
          else if (hashCode == FKP_HASH)
          {
            enumValue = CurrencyCode::FKP;
            return true;
          }
          else if (hashCode == GEL_HASH)
          {
            enumValue = CurrencyCode::GEL;
            return true;
          }
          else if (hashCode == GHS_HASH)
          {
            enumValue = CurrencyCode::GHS;
            return true;
          }
          else if (hashCode == GIP_HASH)
          {
            enumValue = CurrencyCode::GIP;
            return true;
          }
          else if (hashCode == GMD_HASH)
          {
            enumValue = CurrencyCode::GMD;
            return true;
          }
          else if (hashCode == GNF_HASH)
          {
            enumValue = CurrencyCode::GNF;
            return true;
          }
          else if (hashCode == GTQ_HASH)
          {
            enumValue = CurrencyCode::GTQ;
            return true;
          }
          else if (hashCode == GYD_HASH)
          {
            enumValue = CurrencyCode::GYD;
            return true;
          }
          else if (hashCode == HKD_HASH)
          {
            enumValue = CurrencyCode::HKD;
            return true;
          }
          else if (hashCode == HNL_HASH)
          {
            enumValue = CurrencyCode::HNL;
            return true;
          }
          else if (hashCode == HRK_HASH)
          {
            enumValue = CurrencyCode::HRK;
            return true;
          }
          else if (hashCode == HTG_HASH)
          {
            enumValue = CurrencyCode::HTG;
            return true;
          }
          else if (hashCode == HUF_HASH)
          {
            enumValue = CurrencyCode::HUF;
            return true;
          }
          else if (hashCode == IDR_HASH)
          {
            enumValue = CurrencyCode::IDR;
            return true;
          }
          else if (hashCode == ILS_HASH)
          {
            enumValue = CurrencyCode::ILS;
            return true;
          }
          else if (hashCode == IQD_HASH)
          {
            enumValue = CurrencyCode::IQD;
            return true;
          }
          else if (hashCode == IRR_HASH)
          {
            enumValue = CurrencyCode::IRR;
            return true;
          }
          else if (hashCode == ISK_HASH)
          {
            enumValue = CurrencyCode::ISK;
            return true;
          }
          else if (hashCode == JMD_HASH)
          {
            enumValue = CurrencyCode::JMD;
            return true;
          }
          else if (hashCode == JOD_HASH)
          {
            enumValue = CurrencyCode::JOD;
            return true;
          }
          else if (hashCode == KES_HASH)
          {
            enumValue = CurrencyCode::KES;
            return true;
          }
          else if (hashCode == KGS_HASH)
          {
            enumValue = CurrencyCode::KGS;
            return true;
          }
          else if (hashCode == KHR_HASH)
          {
            enumValue = CurrencyCode::KHR;
            return true;
          }
          else if (hashCode == KMF_HASH)
          {
            enumValue = CurrencyCode::KMF;
            return true;
          }
          else if (hashCode == KPW_HASH)
          {
            enumValue = CurrencyCode::KPW;
            return true;
          }
          else if (hashCode == KRW_HASH)
          {
            enumValue = CurrencyCode::KRW;
            return true;
          }
          else if (hashCode == KWD_HASH)
          {
            enumValue = CurrencyCode::KWD;
            return true;
          }
          else if (hashCode == KYD_HASH)
          {
            enumValue = CurrencyCode::KYD;
            return true;
          }
          else if (hashCode == KZT_HASH)
          {
            enumValue = CurrencyCode::KZT;
            return true;
          }
          else if (hashCode == LAK_HASH)
          {
            enumValue = CurrencyCode::LAK;
            return true;
          }
          else if (hashCode == LBP_HASH)
          {
            enumValue = CurrencyCode::LBP;
            return true;
          }
          else if (hashCode == LKR_HASH)
          {
            enumValue = CurrencyCode::LKR;
            return true;
          }
          else if (hashCode == LRD_HASH)
          {
            enumValue = CurrencyCode::LRD;
            return true;
          }
          else if (hashCode == LSL_HASH)
          {
            enumValue = CurrencyCode::LSL;
            return true;
          }
          else if (hashCode == LYD_HASH)
          {
            enumValue = CurrencyCode::LYD;
            return true;
          }
          else if (hashCode == MAD_HASH)
          {
            enumValue = CurrencyCode::MAD;
            return true;
          }
          else if (hashCode == MDL_HASH)
          {
            enumValue = CurrencyCode::MDL;
            return true;
          }
          else if (hashCode == MGA_HASH)
          {
            enumValue = CurrencyCode::MGA;
            return true;
          }
          else if (hashCode == MKD_HASH)
          {
            enumValue = CurrencyCode::MKD;
            return true;
          }
          else if (hashCode == MMK_HASH)
          {
            enumValue = CurrencyCode::MMK;
            return true;
          }
          else if (hashCode == MNT_HASH)
          {
            enumValue = CurrencyCode::MNT;
            return true;
          }
          else if (hashCode == MOP_HASH)
          {
            enumValue = CurrencyCode::MOP;
            return true;
          }
          else if (hashCode == MRU_HASH)
          {
            enumValue = CurrencyCode::MRU;
            return true;
          }
          else if (hashCode == MUR_HASH)
          {
            enumValue = CurrencyCode::MUR;
            return true;
          }
          else if (hashCode == MVR_HASH)
          {
            enumValue = CurrencyCode::MVR;
            return true;
          }
          else if (hashCode == MWK_HASH)
          {
            enumValue = CurrencyCode::MWK;
            return true;
          }
          else if (hashCode == MXN_HASH)
          {
            enumValue = CurrencyCode::MXN;
            return true;
          }
          else if (hashCode == MXV_HASH)
          {
            enumValue = CurrencyCode::MXV;
            return true;
          }
          else if (hashCode == MYR_HASH)
          {
            enumValue = CurrencyCode::MYR;
            return true;
          }
          else if (hashCode == MZN_HASH)
          {
            enumValue = CurrencyCode::MZN;
            return true;
          }
          else if (hashCode == NAD_HASH)
          {
            enumValue = CurrencyCode::NAD;
            return true;
          }
          else if (hashCode == NGN_HASH)
          {
            enumValue = CurrencyCode::NGN;
            return true;
          }
          else if (hashCode == NIO_HASH)
          {
            enumValue = CurrencyCode::NIO;
            return true;
          }
          else if (hashCode == NOK_HASH)
          {
            enumValue = CurrencyCode::NOK;
            return true;
          }
          else if (hashCode == NPR_HASH)
          {
            enumValue = CurrencyCode::NPR;
            return true;
          }
          else if (hashCode == OMR_HASH)
          {
            enumValue = CurrencyCode::OMR;
            return true;
          }
          else if (hashCode == PAB_HASH)
          {
            enumValue = CurrencyCode::PAB;
            return true;
          }
          else if (hashCode == PEN_HASH)
          {
            enumValue = CurrencyCode::PEN;
            return true;
          }
          else if (hashCode == PGK_HASH)
          {
            enumValue = CurrencyCode::PGK;
            return true;
          }
          else if (hashCode == PHP_HASH)
          {
            enumValue = CurrencyCode::PHP;
            return true;
          }
          else if (hashCode == PKR_HASH)
          {
            enumValue = CurrencyCode::PKR;
            return true;
          }
          else if (hashCode == PLN_HASH)
          {
            enumValue = CurrencyCode::PLN;
            return true;
          }
          else if (hashCode == PYG_HASH)
          {
            enumValue = CurrencyCode::PYG;
            return true;
          }
          else if (hashCode == QAR_HASH)
          {
            enumValue = CurrencyCode::QAR;
            return true;
          }
          else if (hashCode == RON_HASH)
          {
            enumValue = CurrencyCode::RON;
            return true;
          }
          else if (hashCode == RSD_HASH)
          {
            enumValue = CurrencyCode::RSD;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper1(int hashCode, CurrencyCode& enumValue)
        {
          if (hashCode == RUB_HASH)
          {
            enumValue = CurrencyCode::RUB;
            return true;
          }
          else if (hashCode == RWF_HASH)
          {
            enumValue = CurrencyCode::RWF;
            return true;
          }
          else if (hashCode == SAR_HASH)
          {
            enumValue = CurrencyCode::SAR;
            return true;
          }
          else if (hashCode == SBD_HASH)
          {
            enumValue = CurrencyCode::SBD;
            return true;
          }
          else if (hashCode == SCR_HASH)
          {
            enumValue = CurrencyCode::SCR;
            return true;
          }
          else if (hashCode == SDG_HASH)
          {
            enumValue = CurrencyCode::SDG;
            return true;
          }
          else if (hashCode == SGD_HASH)
          {
            enumValue = CurrencyCode::SGD;
            return true;
          }
          else if (hashCode == SHP_HASH)
          {
            enumValue = CurrencyCode::SHP;
            return true;
          }
          else if (hashCode == SLL_HASH)
          {
            enumValue = CurrencyCode::SLL;
            return true;
          }
          else if (hashCode == SOS_HASH)
          {
            enumValue = CurrencyCode::SOS;
            return true;
          }
          else if (hashCode == SRD_HASH)
          {
            enumValue = CurrencyCode::SRD;
            return true;
          }
          else if (hashCode == SSP_HASH)
          {
            enumValue = CurrencyCode::SSP;
            return true;
          }
          else if (hashCode == STN_HASH)
          {
            enumValue = CurrencyCode::STN;
            return true;
          }
          else if (hashCode == SVC_HASH)
          {
            enumValue = CurrencyCode::SVC;
            return true;
          }
          else if (hashCode == SYP_HASH)
          {
            enumValue = CurrencyCode::SYP;
            return true;
          }
          else if (hashCode == SZL_HASH)
          {
            enumValue = CurrencyCode::SZL;
            return true;
          }
          else if (hashCode == THB_HASH)
          {
            enumValue = CurrencyCode::THB;
            return true;
          }
          else if (hashCode == TJS_HASH)
          {
            enumValue = CurrencyCode::TJS;
            return true;
          }
          else if (hashCode == TMT_HASH)
          {
            enumValue = CurrencyCode::TMT;
            return true;
          }
          else if (hashCode == TND_HASH)
          {
            enumValue = CurrencyCode::TND;
            return true;
          }
          else if (hashCode == TOP_HASH)
          {
            enumValue = CurrencyCode::TOP;
            return true;
          }
          else if (hashCode == TRY_HASH)
          {
            enumValue = CurrencyCode::TRY;
            return true;
          }
          else if (hashCode == TTD_HASH)
          {
            enumValue = CurrencyCode::TTD;
            return true;
          }
          else if (hashCode == TWD_HASH)
          {
            enumValue = CurrencyCode::TWD;
            return true;
          }
          else if (hashCode == TZS_HASH)
          {
            enumValue = CurrencyCode::TZS;
            return true;
          }
          else if (hashCode == UAH_HASH)
          {
            enumValue = CurrencyCode::UAH;
            return true;
          }
          else if (hashCode == UGX_HASH)
          {
            enumValue = CurrencyCode::UGX;
            return true;
          }
          else if (hashCode == USN_HASH)
          {
            enumValue = CurrencyCode::USN;
            return true;
          }
          else if (hashCode == UYI_HASH)
          {
            enumValue = CurrencyCode::UYI;
            return true;
          }
          else if (hashCode == UYU_HASH)
          {
            enumValue = CurrencyCode::UYU;
            return true;
          }
          else if (hashCode == UZS_HASH)
          {
            enumValue = CurrencyCode::UZS;
            return true;
          }
          else if (hashCode == VEF_HASH)
          {
            enumValue = CurrencyCode::VEF;
            return true;
          }
          else if (hashCode == VND_HASH)
          {
            enumValue = CurrencyCode::VND;
            return true;
          }
          else if (hashCode == VUV_HASH)
          {
            enumValue = CurrencyCode::VUV;
            return true;
          }
          else if (hashCode == WST_HASH)
          {
            enumValue = CurrencyCode::WST;
            return true;
          }
          else if (hashCode == XAF_HASH)
          {
            enumValue = CurrencyCode::XAF;
            return true;
          }
          else if (hashCode == XCD_HASH)
          {
            enumValue = CurrencyCode::XCD;
            return true;
          }
          else if (hashCode == XDR_HASH)
          {
            enumValue = CurrencyCode::XDR;
            return true;
          }
          else if (hashCode == XOF_HASH)
          {
            enumValue = CurrencyCode::XOF;
            return true;
          }
          else if (hashCode == XPF_HASH)
          {
            enumValue = CurrencyCode::XPF;
            return true;
          }
          else if (hashCode == XSU_HASH)
          {
            enumValue = CurrencyCode::XSU;
            return true;
          }
          else if (hashCode == XUA_HASH)
          {
            enumValue = CurrencyCode::XUA;
            return true;
          }
          else if (hashCode == YER_HASH)
          {
            enumValue = CurrencyCode::YER;
            return true;
          }
          else if (hashCode == ZAR_HASH)
          {
            enumValue = CurrencyCode::ZAR;
            return true;
          }
          else if (hashCode == ZMW_HASH)
          {
            enumValue = CurrencyCode::ZMW;
            return true;
          }
          else if (hashCode == ZWL_HASH)
          {
            enumValue = CurrencyCode::ZWL;
            return true;
          }
          return false;
        }

        static bool GetNameForEnumHelper0(CurrencyCode enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case CurrencyCode::USD:
            value = "USD";
            return true;
          case CurrencyCode::EUR:
            value = "EUR";
            return true;
          case CurrencyCode::GBP:
            value = "GBP";
            return true;
          case CurrencyCode::AUD:
            value = "AUD";
            return true;
          case CurrencyCode::CAD:
            value = "CAD";
            return true;
          case CurrencyCode::CNY:
            value = "CNY";
            return true;
          case CurrencyCode::NZD:
            value = "NZD";
            return true;
          case CurrencyCode::INR:
            value = "INR";
            return true;
          case CurrencyCode::JPY:
            value = "JPY";
            return true;
          case CurrencyCode::CHF:
            value = "CHF";
            return true;
          case CurrencyCode::SEK:
            value = "SEK";
            return true;
          case CurrencyCode::AED:
            value = "AED";
            return true;
          case CurrencyCode::AFN:
            value = "AFN";
            return true;
          case CurrencyCode::ALL:
            value = "ALL";
            return true;
          case CurrencyCode::AMD:
            value = "AMD";
            return true;
          case CurrencyCode::ANG:
            value = "ANG";
            return true;
          case CurrencyCode::AOA:
            value = "AOA";
            return true;
          case CurrencyCode::ARS:
            value = "ARS";
            return true;
          case CurrencyCode::AWG:
            value = "AWG";
            return true;
          case CurrencyCode::AZN:
            value = "AZN";
            return true;
          case CurrencyCode::BAM:
            value = "BAM";
            return true;
          case CurrencyCode::BBD:
            value = "BBD";
            return true;
          case CurrencyCode::BDT:
            value = "BDT";
            return true;
          case CurrencyCode::BGN:
            value = "BGN";
            return true;
          case CurrencyCode::BHD:
            value = "BHD";
            return true;
          case CurrencyCode::BIF:
            value = "BIF";
            return true;
          case CurrencyCode::BMD:
            value = "BMD";
            return true;
          case CurrencyCode::BND:
            value = "BND";
            return true;
          case CurrencyCode::BOB:
            value = "BOB";
            return true;
          case CurrencyCode::BOV:
            value = "BOV";
            return true;
          case CurrencyCode::BRL:
            value = "BRL";
            return true;
          case CurrencyCode::BSD:
            value = "BSD";
            return true;
          case CurrencyCode::BTN:
            value = "BTN";
            return true;
          case CurrencyCode::BWP:
            value = "BWP";
            return true;
          case CurrencyCode::BYN:
            value = "BYN";
            return true;
          case CurrencyCode::BZD:
            value = "BZD";
            return true;
          case CurrencyCode::CDF:
            value = "CDF";
            return true;
          case CurrencyCode::CHE:
            value = "CHE";
            return true;
          case CurrencyCode::CHW:
            value = "CHW";
            return true;
          case CurrencyCode::CLF:
            value = "CLF";
            return true;
          case CurrencyCode::CLP:
            value = "CLP";
            return true;
          case CurrencyCode::COP:
            value = "COP";
            return true;
          case CurrencyCode::COU:
            value = "COU";
            return true;
          case CurrencyCode::CRC:
            value = "CRC";
            return true;
          case CurrencyCode::CUC:
            value = "CUC";
            return true;
          case CurrencyCode::CUP:
            value = "CUP";
            return true;
          case CurrencyCode::CVE:
            value = "CVE";
            return true;
          case CurrencyCode::CZK:
            value = "CZK";
            return true;
          case CurrencyCode::DJF:
            value = "DJF";
            return true;
          case CurrencyCode::DKK:
            value = "DKK";
            return true;
          case CurrencyCode::DOP:
            value = "DOP";
            return true;
          case CurrencyCode::DZD:
            value = "DZD";
            return true;
          case CurrencyCode::EGP:
            value = "EGP";
            return true;
          case CurrencyCode::ERN:
            value = "ERN";
            return true;
          case CurrencyCode::ETB:
            value = "ETB";
            return true;
          case CurrencyCode::FJD:
            value = "FJD";
            return true;
          case CurrencyCode::FKP:
            value = "FKP";
            return true;
          case CurrencyCode::GEL:
            value = "GEL";
            return true;
          case CurrencyCode::GHS:
            value = "GHS";
            return true;
          case CurrencyCode::GIP:
            value = "GIP";
            return true;
          case CurrencyCode::GMD:
            value = "GMD";
            return true;
          case CurrencyCode::GNF:
            value = "GNF";
            return true;
          case CurrencyCode::GTQ:
            value = "GTQ";
            return true;
          case CurrencyCode::GYD:
            value = "GYD";
            return true;
          case CurrencyCode::HKD:
            value = "HKD";
            return true;
          case CurrencyCode::HNL:
            value = "HNL";
            return true;
          case CurrencyCode::HRK:
            value = "HRK";
            return true;
          case CurrencyCode::HTG:
            value = "HTG";
            return true;
          case CurrencyCode::HUF:
            value = "HUF";
            return true;
          case CurrencyCode::IDR:
            value = "IDR";
            return true;
          case CurrencyCode::ILS:
            value = "ILS";
            return true;
          case CurrencyCode::IQD:
            value = "IQD";
            return true;
          case CurrencyCode::IRR:
            value = "IRR";
            return true;
          case CurrencyCode::ISK:
            value = "ISK";
            return true;
          case CurrencyCode::JMD:
            value = "JMD";
            return true;
          case CurrencyCode::JOD:
            value = "JOD";
            return true;
          case CurrencyCode::KES:
            value = "KES";
            return true;
          case CurrencyCode::KGS:
            value = "KGS";
            return true;
          case CurrencyCode::KHR:
            value = "KHR";
            return true;
          case CurrencyCode::KMF:
            value = "KMF";
            return true;
          case CurrencyCode::KPW:
            value = "KPW";
            return true;
          case CurrencyCode::KRW:
            value = "KRW";
            return true;
          case CurrencyCode::KWD:
            value = "KWD";
            return true;
          case CurrencyCode::KYD:
            value = "KYD";
            return true;
          case CurrencyCode::KZT:
            value = "KZT";
            return true;
          case CurrencyCode::LAK:
            value = "LAK";
            return true;
          case CurrencyCode::LBP:
            value = "LBP";
            return true;
          case CurrencyCode::LKR:
            value = "LKR";
            return true;
          case CurrencyCode::LRD:
            value = "LRD";
            return true;
          case CurrencyCode::LSL:
            value = "LSL";
            return true;
          case CurrencyCode::LYD:
            value = "LYD";
            return true;
          case CurrencyCode::MAD:
            value = "MAD";
            return true;
          case CurrencyCode::MDL:
            value = "MDL";
            return true;
          case CurrencyCode::MGA:
            value = "MGA";
            return true;
          case CurrencyCode::MKD:
            value = "MKD";
            return true;
          case CurrencyCode::MMK:
            value = "MMK";
            return true;
          case CurrencyCode::MNT:
            value = "MNT";
            return true;
          case CurrencyCode::MOP:
            value = "MOP";
            return true;
          case CurrencyCode::MRU:
            value = "MRU";
            return true;
          case CurrencyCode::MUR:
            value = "MUR";
            return true;
          case CurrencyCode::MVR:
            value = "MVR";
            return true;
          case CurrencyCode::MWK:
            value = "MWK";
            return true;
          case CurrencyCode::MXN:
            value = "MXN";
            return true;
          case CurrencyCode::MXV:
            value = "MXV";
            return true;
          case CurrencyCode::MYR:
            value = "MYR";
            return true;
          case CurrencyCode::MZN:
            value = "MZN";
            return true;
          case CurrencyCode::NAD:
            value = "NAD";
            return true;
          case CurrencyCode::NGN:
            value = "NGN";
            return true;
          case CurrencyCode::NIO:
            value = "NIO";
            return true;
          case CurrencyCode::NOK:
            value = "NOK";
            return true;
          case CurrencyCode::NPR:
            value = "NPR";
            return true;
          case CurrencyCode::OMR:
            value = "OMR";
            return true;
          case CurrencyCode::PAB:
            value = "PAB";
            return true;
          case CurrencyCode::PEN:
            value = "PEN";
            return true;
          case CurrencyCode::PGK:
            value = "PGK";
            return true;
          case CurrencyCode::PHP:
            value = "PHP";
            return true;
          case CurrencyCode::PKR:
            value = "PKR";
            return true;
          case CurrencyCode::PLN:
            value = "PLN";
            return true;
          case CurrencyCode::PYG:
            value = "PYG";
            return true;
          case CurrencyCode::QAR:
            value = "QAR";
            return true;
          case CurrencyCode::RON:
            value = "RON";
            return true;
          case CurrencyCode::RSD:
            value = "RSD";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper1(CurrencyCode enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case CurrencyCode::RUB:
            value = "RUB";
            return true;
          case CurrencyCode::RWF:
            value = "RWF";
            return true;
          case CurrencyCode::SAR:
            value = "SAR";
            return true;
          case CurrencyCode::SBD:
            value = "SBD";
            return true;
          case CurrencyCode::SCR:
            value = "SCR";
            return true;
          case CurrencyCode::SDG:
            value = "SDG";
            return true;
          case CurrencyCode::SGD:
            value = "SGD";
            return true;
          case CurrencyCode::SHP:
            value = "SHP";
            return true;
          case CurrencyCode::SLL:
            value = "SLL";
            return true;
          case CurrencyCode::SOS:
            value = "SOS";
            return true;
          case CurrencyCode::SRD:
            value = "SRD";
            return true;
          case CurrencyCode::SSP:
            value = "SSP";
            return true;
          case CurrencyCode::STN:
            value = "STN";
            return true;
          case CurrencyCode::SVC:
            value = "SVC";
            return true;
          case CurrencyCode::SYP:
            value = "SYP";
            return true;
          case CurrencyCode::SZL:
            value = "SZL";
            return true;
          case CurrencyCode::THB:
            value = "THB";
            return true;
          case CurrencyCode::TJS:
            value = "TJS";
            return true;
          case CurrencyCode::TMT:
            value = "TMT";
            return true;
          case CurrencyCode::TND:
            value = "TND";
            return true;
          case CurrencyCode::TOP:
            value = "TOP";
            return true;
          case CurrencyCode::TRY:
            value = "TRY";
            return true;
          case CurrencyCode::TTD:
            value = "TTD";
            return true;
          case CurrencyCode::TWD:
            value = "TWD";
            return true;
          case CurrencyCode::TZS:
            value = "TZS";
            return true;
          case CurrencyCode::UAH:
            value = "UAH";
            return true;
          case CurrencyCode::UGX:
            value = "UGX";
            return true;
          case CurrencyCode::USN:
            value = "USN";
            return true;
          case CurrencyCode::UYI:
            value = "UYI";
            return true;
          case CurrencyCode::UYU:
            value = "UYU";
            return true;
          case CurrencyCode::UZS:
            value = "UZS";
            return true;
          case CurrencyCode::VEF:
            value = "VEF";
            return true;
          case CurrencyCode::VND:
            value = "VND";
            return true;
          case CurrencyCode::VUV:
            value = "VUV";
            return true;
          case CurrencyCode::WST:
            value = "WST";
            return true;
          case CurrencyCode::XAF:
            value = "XAF";
            return true;
          case CurrencyCode::XCD:
            value = "XCD";
            return true;
          case CurrencyCode::XDR:
            value = "XDR";
            return true;
          case CurrencyCode::XOF:
            value = "XOF";
            return true;
          case CurrencyCode::XPF:
            value = "XPF";
            return true;
          case CurrencyCode::XSU:
            value = "XSU";
            return true;
          case CurrencyCode::XUA:
            value = "XUA";
            return true;
          case CurrencyCode::YER:
            value = "YER";
            return true;
          case CurrencyCode::ZAR:
            value = "ZAR";
            return true;
          case CurrencyCode::ZMW:
            value = "ZMW";
            return true;
          case CurrencyCode::ZWL:
            value = "ZWL";
            return true;
          default:
            return false;
          }
        }

        CurrencyCode GetCurrencyCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          CurrencyCode enumValue;
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
            return static_cast<CurrencyCode>(hashCode);
          }

          return CurrencyCode::NOT_SET;
        }

        Aws::String GetNameForCurrencyCode(CurrencyCode enumValue)
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

      } // namespace CurrencyCodeMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
