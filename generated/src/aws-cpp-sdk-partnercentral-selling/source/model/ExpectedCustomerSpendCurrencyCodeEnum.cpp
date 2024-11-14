/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/partnercentral-selling/model/ExpectedCustomerSpendCurrencyCodeEnum.h>
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
      namespace ExpectedCustomerSpendCurrencyCodeEnumMapper
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
        static bool GetEnumForNameHelper0(int hashCode, ExpectedCustomerSpendCurrencyCodeEnum& enumValue)
        {
          if (hashCode == USD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::USD;
            return true;
          }
          else if (hashCode == EUR_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::EUR;
            return true;
          }
          else if (hashCode == GBP_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::GBP;
            return true;
          }
          else if (hashCode == AUD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::AUD;
            return true;
          }
          else if (hashCode == CAD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::CAD;
            return true;
          }
          else if (hashCode == CNY_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::CNY;
            return true;
          }
          else if (hashCode == NZD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::NZD;
            return true;
          }
          else if (hashCode == INR_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::INR;
            return true;
          }
          else if (hashCode == JPY_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::JPY;
            return true;
          }
          else if (hashCode == CHF_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::CHF;
            return true;
          }
          else if (hashCode == SEK_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::SEK;
            return true;
          }
          else if (hashCode == AED_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::AED;
            return true;
          }
          else if (hashCode == AFN_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::AFN;
            return true;
          }
          else if (hashCode == ALL_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::ALL;
            return true;
          }
          else if (hashCode == AMD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::AMD;
            return true;
          }
          else if (hashCode == ANG_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::ANG;
            return true;
          }
          else if (hashCode == AOA_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::AOA;
            return true;
          }
          else if (hashCode == ARS_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::ARS;
            return true;
          }
          else if (hashCode == AWG_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::AWG;
            return true;
          }
          else if (hashCode == AZN_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::AZN;
            return true;
          }
          else if (hashCode == BAM_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::BAM;
            return true;
          }
          else if (hashCode == BBD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::BBD;
            return true;
          }
          else if (hashCode == BDT_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::BDT;
            return true;
          }
          else if (hashCode == BGN_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::BGN;
            return true;
          }
          else if (hashCode == BHD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::BHD;
            return true;
          }
          else if (hashCode == BIF_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::BIF;
            return true;
          }
          else if (hashCode == BMD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::BMD;
            return true;
          }
          else if (hashCode == BND_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::BND;
            return true;
          }
          else if (hashCode == BOB_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::BOB;
            return true;
          }
          else if (hashCode == BOV_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::BOV;
            return true;
          }
          else if (hashCode == BRL_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::BRL;
            return true;
          }
          else if (hashCode == BSD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::BSD;
            return true;
          }
          else if (hashCode == BTN_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::BTN;
            return true;
          }
          else if (hashCode == BWP_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::BWP;
            return true;
          }
          else if (hashCode == BYN_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::BYN;
            return true;
          }
          else if (hashCode == BZD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::BZD;
            return true;
          }
          else if (hashCode == CDF_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::CDF;
            return true;
          }
          else if (hashCode == CHE_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::CHE;
            return true;
          }
          else if (hashCode == CHW_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::CHW;
            return true;
          }
          else if (hashCode == CLF_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::CLF;
            return true;
          }
          else if (hashCode == CLP_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::CLP;
            return true;
          }
          else if (hashCode == COP_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::COP;
            return true;
          }
          else if (hashCode == COU_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::COU;
            return true;
          }
          else if (hashCode == CRC_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::CRC;
            return true;
          }
          else if (hashCode == CUC_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::CUC;
            return true;
          }
          else if (hashCode == CUP_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::CUP;
            return true;
          }
          else if (hashCode == CVE_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::CVE;
            return true;
          }
          else if (hashCode == CZK_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::CZK;
            return true;
          }
          else if (hashCode == DJF_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::DJF;
            return true;
          }
          else if (hashCode == DKK_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::DKK;
            return true;
          }
          else if (hashCode == DOP_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::DOP;
            return true;
          }
          else if (hashCode == DZD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::DZD;
            return true;
          }
          else if (hashCode == EGP_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::EGP;
            return true;
          }
          else if (hashCode == ERN_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::ERN;
            return true;
          }
          else if (hashCode == ETB_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::ETB;
            return true;
          }
          else if (hashCode == FJD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::FJD;
            return true;
          }
          else if (hashCode == FKP_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::FKP;
            return true;
          }
          else if (hashCode == GEL_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::GEL;
            return true;
          }
          else if (hashCode == GHS_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::GHS;
            return true;
          }
          else if (hashCode == GIP_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::GIP;
            return true;
          }
          else if (hashCode == GMD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::GMD;
            return true;
          }
          else if (hashCode == GNF_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::GNF;
            return true;
          }
          else if (hashCode == GTQ_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::GTQ;
            return true;
          }
          else if (hashCode == GYD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::GYD;
            return true;
          }
          else if (hashCode == HKD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::HKD;
            return true;
          }
          else if (hashCode == HNL_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::HNL;
            return true;
          }
          else if (hashCode == HRK_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::HRK;
            return true;
          }
          else if (hashCode == HTG_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::HTG;
            return true;
          }
          else if (hashCode == HUF_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::HUF;
            return true;
          }
          else if (hashCode == IDR_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::IDR;
            return true;
          }
          else if (hashCode == ILS_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::ILS;
            return true;
          }
          else if (hashCode == IQD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::IQD;
            return true;
          }
          else if (hashCode == IRR_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::IRR;
            return true;
          }
          else if (hashCode == ISK_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::ISK;
            return true;
          }
          else if (hashCode == JMD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::JMD;
            return true;
          }
          else if (hashCode == JOD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::JOD;
            return true;
          }
          else if (hashCode == KES_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::KES;
            return true;
          }
          else if (hashCode == KGS_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::KGS;
            return true;
          }
          else if (hashCode == KHR_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::KHR;
            return true;
          }
          else if (hashCode == KMF_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::KMF;
            return true;
          }
          else if (hashCode == KPW_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::KPW;
            return true;
          }
          else if (hashCode == KRW_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::KRW;
            return true;
          }
          else if (hashCode == KWD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::KWD;
            return true;
          }
          else if (hashCode == KYD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::KYD;
            return true;
          }
          else if (hashCode == KZT_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::KZT;
            return true;
          }
          else if (hashCode == LAK_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::LAK;
            return true;
          }
          else if (hashCode == LBP_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::LBP;
            return true;
          }
          else if (hashCode == LKR_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::LKR;
            return true;
          }
          else if (hashCode == LRD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::LRD;
            return true;
          }
          else if (hashCode == LSL_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::LSL;
            return true;
          }
          else if (hashCode == LYD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::LYD;
            return true;
          }
          else if (hashCode == MAD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::MAD;
            return true;
          }
          else if (hashCode == MDL_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::MDL;
            return true;
          }
          else if (hashCode == MGA_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::MGA;
            return true;
          }
          else if (hashCode == MKD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::MKD;
            return true;
          }
          else if (hashCode == MMK_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::MMK;
            return true;
          }
          else if (hashCode == MNT_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::MNT;
            return true;
          }
          else if (hashCode == MOP_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::MOP;
            return true;
          }
          else if (hashCode == MRU_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::MRU;
            return true;
          }
          else if (hashCode == MUR_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::MUR;
            return true;
          }
          else if (hashCode == MVR_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::MVR;
            return true;
          }
          else if (hashCode == MWK_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::MWK;
            return true;
          }
          else if (hashCode == MXN_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::MXN;
            return true;
          }
          else if (hashCode == MXV_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::MXV;
            return true;
          }
          else if (hashCode == MYR_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::MYR;
            return true;
          }
          else if (hashCode == MZN_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::MZN;
            return true;
          }
          else if (hashCode == NAD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::NAD;
            return true;
          }
          else if (hashCode == NGN_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::NGN;
            return true;
          }
          else if (hashCode == NIO_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::NIO;
            return true;
          }
          else if (hashCode == NOK_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::NOK;
            return true;
          }
          else if (hashCode == NPR_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::NPR;
            return true;
          }
          else if (hashCode == OMR_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::OMR;
            return true;
          }
          else if (hashCode == PAB_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::PAB;
            return true;
          }
          else if (hashCode == PEN_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::PEN;
            return true;
          }
          else if (hashCode == PGK_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::PGK;
            return true;
          }
          else if (hashCode == PHP_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::PHP;
            return true;
          }
          else if (hashCode == PKR_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::PKR;
            return true;
          }
          else if (hashCode == PLN_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::PLN;
            return true;
          }
          else if (hashCode == PYG_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::PYG;
            return true;
          }
          else if (hashCode == QAR_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::QAR;
            return true;
          }
          else if (hashCode == RON_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::RON;
            return true;
          }
          else if (hashCode == RSD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::RSD;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper1(int hashCode, ExpectedCustomerSpendCurrencyCodeEnum& enumValue)
        {
          if (hashCode == RUB_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::RUB;
            return true;
          }
          else if (hashCode == RWF_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::RWF;
            return true;
          }
          else if (hashCode == SAR_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::SAR;
            return true;
          }
          else if (hashCode == SBD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::SBD;
            return true;
          }
          else if (hashCode == SCR_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::SCR;
            return true;
          }
          else if (hashCode == SDG_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::SDG;
            return true;
          }
          else if (hashCode == SGD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::SGD;
            return true;
          }
          else if (hashCode == SHP_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::SHP;
            return true;
          }
          else if (hashCode == SLL_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::SLL;
            return true;
          }
          else if (hashCode == SOS_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::SOS;
            return true;
          }
          else if (hashCode == SRD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::SRD;
            return true;
          }
          else if (hashCode == SSP_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::SSP;
            return true;
          }
          else if (hashCode == STN_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::STN;
            return true;
          }
          else if (hashCode == SVC_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::SVC;
            return true;
          }
          else if (hashCode == SYP_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::SYP;
            return true;
          }
          else if (hashCode == SZL_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::SZL;
            return true;
          }
          else if (hashCode == THB_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::THB;
            return true;
          }
          else if (hashCode == TJS_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::TJS;
            return true;
          }
          else if (hashCode == TMT_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::TMT;
            return true;
          }
          else if (hashCode == TND_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::TND;
            return true;
          }
          else if (hashCode == TOP_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::TOP;
            return true;
          }
          else if (hashCode == TRY_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::TRY;
            return true;
          }
          else if (hashCode == TTD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::TTD;
            return true;
          }
          else if (hashCode == TWD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::TWD;
            return true;
          }
          else if (hashCode == TZS_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::TZS;
            return true;
          }
          else if (hashCode == UAH_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::UAH;
            return true;
          }
          else if (hashCode == UGX_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::UGX;
            return true;
          }
          else if (hashCode == USN_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::USN;
            return true;
          }
          else if (hashCode == UYI_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::UYI;
            return true;
          }
          else if (hashCode == UYU_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::UYU;
            return true;
          }
          else if (hashCode == UZS_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::UZS;
            return true;
          }
          else if (hashCode == VEF_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::VEF;
            return true;
          }
          else if (hashCode == VND_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::VND;
            return true;
          }
          else if (hashCode == VUV_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::VUV;
            return true;
          }
          else if (hashCode == WST_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::WST;
            return true;
          }
          else if (hashCode == XAF_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::XAF;
            return true;
          }
          else if (hashCode == XCD_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::XCD;
            return true;
          }
          else if (hashCode == XDR_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::XDR;
            return true;
          }
          else if (hashCode == XOF_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::XOF;
            return true;
          }
          else if (hashCode == XPF_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::XPF;
            return true;
          }
          else if (hashCode == XSU_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::XSU;
            return true;
          }
          else if (hashCode == XUA_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::XUA;
            return true;
          }
          else if (hashCode == YER_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::YER;
            return true;
          }
          else if (hashCode == ZAR_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::ZAR;
            return true;
          }
          else if (hashCode == ZMW_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::ZMW;
            return true;
          }
          else if (hashCode == ZWL_HASH)
          {
            enumValue = ExpectedCustomerSpendCurrencyCodeEnum::ZWL;
            return true;
          }
          return false;
        }

        static bool GetNameForEnumHelper0(ExpectedCustomerSpendCurrencyCodeEnum enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case ExpectedCustomerSpendCurrencyCodeEnum::USD:
            value = "USD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::EUR:
            value = "EUR";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::GBP:
            value = "GBP";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::AUD:
            value = "AUD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::CAD:
            value = "CAD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::CNY:
            value = "CNY";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::NZD:
            value = "NZD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::INR:
            value = "INR";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::JPY:
            value = "JPY";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::CHF:
            value = "CHF";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::SEK:
            value = "SEK";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::AED:
            value = "AED";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::AFN:
            value = "AFN";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::ALL:
            value = "ALL";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::AMD:
            value = "AMD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::ANG:
            value = "ANG";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::AOA:
            value = "AOA";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::ARS:
            value = "ARS";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::AWG:
            value = "AWG";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::AZN:
            value = "AZN";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::BAM:
            value = "BAM";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::BBD:
            value = "BBD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::BDT:
            value = "BDT";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::BGN:
            value = "BGN";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::BHD:
            value = "BHD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::BIF:
            value = "BIF";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::BMD:
            value = "BMD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::BND:
            value = "BND";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::BOB:
            value = "BOB";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::BOV:
            value = "BOV";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::BRL:
            value = "BRL";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::BSD:
            value = "BSD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::BTN:
            value = "BTN";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::BWP:
            value = "BWP";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::BYN:
            value = "BYN";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::BZD:
            value = "BZD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::CDF:
            value = "CDF";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::CHE:
            value = "CHE";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::CHW:
            value = "CHW";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::CLF:
            value = "CLF";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::CLP:
            value = "CLP";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::COP:
            value = "COP";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::COU:
            value = "COU";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::CRC:
            value = "CRC";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::CUC:
            value = "CUC";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::CUP:
            value = "CUP";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::CVE:
            value = "CVE";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::CZK:
            value = "CZK";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::DJF:
            value = "DJF";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::DKK:
            value = "DKK";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::DOP:
            value = "DOP";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::DZD:
            value = "DZD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::EGP:
            value = "EGP";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::ERN:
            value = "ERN";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::ETB:
            value = "ETB";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::FJD:
            value = "FJD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::FKP:
            value = "FKP";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::GEL:
            value = "GEL";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::GHS:
            value = "GHS";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::GIP:
            value = "GIP";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::GMD:
            value = "GMD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::GNF:
            value = "GNF";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::GTQ:
            value = "GTQ";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::GYD:
            value = "GYD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::HKD:
            value = "HKD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::HNL:
            value = "HNL";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::HRK:
            value = "HRK";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::HTG:
            value = "HTG";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::HUF:
            value = "HUF";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::IDR:
            value = "IDR";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::ILS:
            value = "ILS";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::IQD:
            value = "IQD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::IRR:
            value = "IRR";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::ISK:
            value = "ISK";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::JMD:
            value = "JMD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::JOD:
            value = "JOD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::KES:
            value = "KES";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::KGS:
            value = "KGS";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::KHR:
            value = "KHR";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::KMF:
            value = "KMF";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::KPW:
            value = "KPW";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::KRW:
            value = "KRW";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::KWD:
            value = "KWD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::KYD:
            value = "KYD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::KZT:
            value = "KZT";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::LAK:
            value = "LAK";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::LBP:
            value = "LBP";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::LKR:
            value = "LKR";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::LRD:
            value = "LRD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::LSL:
            value = "LSL";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::LYD:
            value = "LYD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::MAD:
            value = "MAD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::MDL:
            value = "MDL";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::MGA:
            value = "MGA";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::MKD:
            value = "MKD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::MMK:
            value = "MMK";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::MNT:
            value = "MNT";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::MOP:
            value = "MOP";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::MRU:
            value = "MRU";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::MUR:
            value = "MUR";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::MVR:
            value = "MVR";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::MWK:
            value = "MWK";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::MXN:
            value = "MXN";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::MXV:
            value = "MXV";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::MYR:
            value = "MYR";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::MZN:
            value = "MZN";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::NAD:
            value = "NAD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::NGN:
            value = "NGN";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::NIO:
            value = "NIO";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::NOK:
            value = "NOK";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::NPR:
            value = "NPR";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::OMR:
            value = "OMR";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::PAB:
            value = "PAB";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::PEN:
            value = "PEN";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::PGK:
            value = "PGK";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::PHP:
            value = "PHP";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::PKR:
            value = "PKR";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::PLN:
            value = "PLN";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::PYG:
            value = "PYG";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::QAR:
            value = "QAR";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::RON:
            value = "RON";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::RSD:
            value = "RSD";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper1(ExpectedCustomerSpendCurrencyCodeEnum enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case ExpectedCustomerSpendCurrencyCodeEnum::RUB:
            value = "RUB";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::RWF:
            value = "RWF";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::SAR:
            value = "SAR";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::SBD:
            value = "SBD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::SCR:
            value = "SCR";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::SDG:
            value = "SDG";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::SGD:
            value = "SGD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::SHP:
            value = "SHP";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::SLL:
            value = "SLL";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::SOS:
            value = "SOS";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::SRD:
            value = "SRD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::SSP:
            value = "SSP";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::STN:
            value = "STN";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::SVC:
            value = "SVC";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::SYP:
            value = "SYP";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::SZL:
            value = "SZL";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::THB:
            value = "THB";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::TJS:
            value = "TJS";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::TMT:
            value = "TMT";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::TND:
            value = "TND";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::TOP:
            value = "TOP";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::TRY:
            value = "TRY";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::TTD:
            value = "TTD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::TWD:
            value = "TWD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::TZS:
            value = "TZS";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::UAH:
            value = "UAH";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::UGX:
            value = "UGX";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::USN:
            value = "USN";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::UYI:
            value = "UYI";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::UYU:
            value = "UYU";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::UZS:
            value = "UZS";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::VEF:
            value = "VEF";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::VND:
            value = "VND";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::VUV:
            value = "VUV";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::WST:
            value = "WST";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::XAF:
            value = "XAF";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::XCD:
            value = "XCD";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::XDR:
            value = "XDR";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::XOF:
            value = "XOF";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::XPF:
            value = "XPF";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::XSU:
            value = "XSU";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::XUA:
            value = "XUA";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::YER:
            value = "YER";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::ZAR:
            value = "ZAR";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::ZMW:
            value = "ZMW";
            return true;
          case ExpectedCustomerSpendCurrencyCodeEnum::ZWL:
            value = "ZWL";
            return true;
          default:
            return false;
          }
        }

        ExpectedCustomerSpendCurrencyCodeEnum GetExpectedCustomerSpendCurrencyCodeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          ExpectedCustomerSpendCurrencyCodeEnum enumValue;
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
            return static_cast<ExpectedCustomerSpendCurrencyCodeEnum>(hashCode);
          }

          return ExpectedCustomerSpendCurrencyCodeEnum::NOT_SET;
        }

        Aws::String GetNameForExpectedCustomerSpendCurrencyCodeEnum(ExpectedCustomerSpendCurrencyCodeEnum enumValue)
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

      } // namespace ExpectedCustomerSpendCurrencyCodeEnumMapper
    } // namespace Model
  } // namespace PartnerCentralSelling
} // namespace Aws
