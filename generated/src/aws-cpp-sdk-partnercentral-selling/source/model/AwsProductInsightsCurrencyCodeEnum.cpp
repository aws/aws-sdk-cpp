/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-selling/model/AwsProductInsightsCurrencyCodeEnum.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {
namespace AwsProductInsightsCurrencyCodeEnumMapper {

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
static bool GetEnumForNameHelper0(int hashCode, AwsProductInsightsCurrencyCodeEnum& enumValue) {
  if (hashCode == USD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::USD;
    return true;
  } else if (hashCode == EUR_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::EUR;
    return true;
  } else if (hashCode == GBP_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::GBP;
    return true;
  } else if (hashCode == AUD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::AUD;
    return true;
  } else if (hashCode == CAD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::CAD;
    return true;
  } else if (hashCode == CNY_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::CNY;
    return true;
  } else if (hashCode == NZD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::NZD;
    return true;
  } else if (hashCode == INR_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::INR;
    return true;
  } else if (hashCode == JPY_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::JPY;
    return true;
  } else if (hashCode == CHF_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::CHF;
    return true;
  } else if (hashCode == SEK_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::SEK;
    return true;
  } else if (hashCode == AED_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::AED;
    return true;
  } else if (hashCode == AFN_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::AFN;
    return true;
  } else if (hashCode == ALL_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::ALL;
    return true;
  } else if (hashCode == AMD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::AMD;
    return true;
  } else if (hashCode == ANG_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::ANG;
    return true;
  } else if (hashCode == AOA_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::AOA;
    return true;
  } else if (hashCode == ARS_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::ARS;
    return true;
  } else if (hashCode == AWG_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::AWG;
    return true;
  } else if (hashCode == AZN_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::AZN;
    return true;
  } else if (hashCode == BAM_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::BAM;
    return true;
  } else if (hashCode == BBD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::BBD;
    return true;
  } else if (hashCode == BDT_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::BDT;
    return true;
  } else if (hashCode == BGN_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::BGN;
    return true;
  } else if (hashCode == BHD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::BHD;
    return true;
  } else if (hashCode == BIF_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::BIF;
    return true;
  } else if (hashCode == BMD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::BMD;
    return true;
  } else if (hashCode == BND_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::BND;
    return true;
  } else if (hashCode == BOB_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::BOB;
    return true;
  } else if (hashCode == BOV_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::BOV;
    return true;
  } else if (hashCode == BRL_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::BRL;
    return true;
  } else if (hashCode == BSD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::BSD;
    return true;
  } else if (hashCode == BTN_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::BTN;
    return true;
  } else if (hashCode == BWP_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::BWP;
    return true;
  } else if (hashCode == BYN_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::BYN;
    return true;
  } else if (hashCode == BZD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::BZD;
    return true;
  } else if (hashCode == CDF_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::CDF;
    return true;
  } else if (hashCode == CHE_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::CHE;
    return true;
  } else if (hashCode == CHW_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::CHW;
    return true;
  } else if (hashCode == CLF_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::CLF;
    return true;
  } else if (hashCode == CLP_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::CLP;
    return true;
  } else if (hashCode == COP_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::COP;
    return true;
  } else if (hashCode == COU_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::COU;
    return true;
  } else if (hashCode == CRC_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::CRC;
    return true;
  } else if (hashCode == CUC_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::CUC;
    return true;
  } else if (hashCode == CUP_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::CUP;
    return true;
  } else if (hashCode == CVE_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::CVE;
    return true;
  } else if (hashCode == CZK_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::CZK;
    return true;
  } else if (hashCode == DJF_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::DJF;
    return true;
  } else if (hashCode == DKK_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::DKK;
    return true;
  } else if (hashCode == DOP_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::DOP;
    return true;
  } else if (hashCode == DZD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::DZD;
    return true;
  } else if (hashCode == EGP_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::EGP;
    return true;
  } else if (hashCode == ERN_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::ERN;
    return true;
  } else if (hashCode == ETB_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::ETB;
    return true;
  } else if (hashCode == FJD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::FJD;
    return true;
  } else if (hashCode == FKP_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::FKP;
    return true;
  } else if (hashCode == GEL_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::GEL;
    return true;
  } else if (hashCode == GHS_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::GHS;
    return true;
  } else if (hashCode == GIP_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::GIP;
    return true;
  } else if (hashCode == GMD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::GMD;
    return true;
  } else if (hashCode == GNF_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::GNF;
    return true;
  } else if (hashCode == GTQ_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::GTQ;
    return true;
  } else if (hashCode == GYD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::GYD;
    return true;
  } else if (hashCode == HKD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::HKD;
    return true;
  } else if (hashCode == HNL_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::HNL;
    return true;
  } else if (hashCode == HRK_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::HRK;
    return true;
  } else if (hashCode == HTG_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::HTG;
    return true;
  } else if (hashCode == HUF_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::HUF;
    return true;
  } else if (hashCode == IDR_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::IDR;
    return true;
  } else if (hashCode == ILS_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::ILS;
    return true;
  } else if (hashCode == IQD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::IQD;
    return true;
  } else if (hashCode == IRR_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::IRR;
    return true;
  } else if (hashCode == ISK_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::ISK;
    return true;
  } else if (hashCode == JMD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::JMD;
    return true;
  } else if (hashCode == JOD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::JOD;
    return true;
  } else if (hashCode == KES_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::KES;
    return true;
  } else if (hashCode == KGS_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::KGS;
    return true;
  } else if (hashCode == KHR_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::KHR;
    return true;
  } else if (hashCode == KMF_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::KMF;
    return true;
  } else if (hashCode == KPW_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::KPW;
    return true;
  } else if (hashCode == KRW_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::KRW;
    return true;
  } else if (hashCode == KWD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::KWD;
    return true;
  } else if (hashCode == KYD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::KYD;
    return true;
  } else if (hashCode == KZT_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::KZT;
    return true;
  } else if (hashCode == LAK_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::LAK;
    return true;
  } else if (hashCode == LBP_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::LBP;
    return true;
  } else if (hashCode == LKR_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::LKR;
    return true;
  } else if (hashCode == LRD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::LRD;
    return true;
  } else if (hashCode == LSL_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::LSL;
    return true;
  } else if (hashCode == LYD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::LYD;
    return true;
  } else if (hashCode == MAD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::MAD;
    return true;
  } else if (hashCode == MDL_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::MDL;
    return true;
  } else if (hashCode == MGA_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::MGA;
    return true;
  } else if (hashCode == MKD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::MKD;
    return true;
  } else if (hashCode == MMK_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::MMK;
    return true;
  } else if (hashCode == MNT_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::MNT;
    return true;
  } else if (hashCode == MOP_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::MOP;
    return true;
  } else if (hashCode == MRU_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::MRU;
    return true;
  } else if (hashCode == MUR_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::MUR;
    return true;
  } else if (hashCode == MVR_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::MVR;
    return true;
  } else if (hashCode == MWK_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::MWK;
    return true;
  } else if (hashCode == MXN_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::MXN;
    return true;
  } else if (hashCode == MXV_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::MXV;
    return true;
  } else if (hashCode == MYR_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::MYR;
    return true;
  } else if (hashCode == MZN_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::MZN;
    return true;
  } else if (hashCode == NAD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::NAD;
    return true;
  } else if (hashCode == NGN_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::NGN;
    return true;
  } else if (hashCode == NIO_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::NIO;
    return true;
  } else if (hashCode == NOK_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::NOK;
    return true;
  } else if (hashCode == NPR_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::NPR;
    return true;
  } else if (hashCode == OMR_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::OMR;
    return true;
  } else if (hashCode == PAB_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::PAB;
    return true;
  } else if (hashCode == PEN_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::PEN;
    return true;
  } else if (hashCode == PGK_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::PGK;
    return true;
  } else if (hashCode == PHP_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::PHP;
    return true;
  } else if (hashCode == PKR_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::PKR;
    return true;
  } else if (hashCode == PLN_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::PLN;
    return true;
  } else if (hashCode == PYG_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::PYG;
    return true;
  } else if (hashCode == QAR_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::QAR;
    return true;
  } else if (hashCode == RON_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::RON;
    return true;
  } else if (hashCode == RSD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::RSD;
    return true;
  }
  return false;
}
static bool GetEnumForNameHelper1(int hashCode, AwsProductInsightsCurrencyCodeEnum& enumValue) {
  if (hashCode == RUB_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::RUB;
    return true;
  } else if (hashCode == RWF_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::RWF;
    return true;
  } else if (hashCode == SAR_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::SAR;
    return true;
  } else if (hashCode == SBD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::SBD;
    return true;
  } else if (hashCode == SCR_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::SCR;
    return true;
  } else if (hashCode == SDG_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::SDG;
    return true;
  } else if (hashCode == SGD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::SGD;
    return true;
  } else if (hashCode == SHP_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::SHP;
    return true;
  } else if (hashCode == SLL_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::SLL;
    return true;
  } else if (hashCode == SOS_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::SOS;
    return true;
  } else if (hashCode == SRD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::SRD;
    return true;
  } else if (hashCode == SSP_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::SSP;
    return true;
  } else if (hashCode == STN_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::STN;
    return true;
  } else if (hashCode == SVC_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::SVC;
    return true;
  } else if (hashCode == SYP_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::SYP;
    return true;
  } else if (hashCode == SZL_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::SZL;
    return true;
  } else if (hashCode == THB_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::THB;
    return true;
  } else if (hashCode == TJS_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::TJS;
    return true;
  } else if (hashCode == TMT_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::TMT;
    return true;
  } else if (hashCode == TND_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::TND;
    return true;
  } else if (hashCode == TOP_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::TOP;
    return true;
  } else if (hashCode == TRY_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::TRY;
    return true;
  } else if (hashCode == TTD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::TTD;
    return true;
  } else if (hashCode == TWD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::TWD;
    return true;
  } else if (hashCode == TZS_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::TZS;
    return true;
  } else if (hashCode == UAH_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::UAH;
    return true;
  } else if (hashCode == UGX_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::UGX;
    return true;
  } else if (hashCode == USN_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::USN;
    return true;
  } else if (hashCode == UYI_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::UYI;
    return true;
  } else if (hashCode == UYU_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::UYU;
    return true;
  } else if (hashCode == UZS_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::UZS;
    return true;
  } else if (hashCode == VEF_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::VEF;
    return true;
  } else if (hashCode == VND_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::VND;
    return true;
  } else if (hashCode == VUV_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::VUV;
    return true;
  } else if (hashCode == WST_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::WST;
    return true;
  } else if (hashCode == XAF_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::XAF;
    return true;
  } else if (hashCode == XCD_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::XCD;
    return true;
  } else if (hashCode == XDR_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::XDR;
    return true;
  } else if (hashCode == XOF_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::XOF;
    return true;
  } else if (hashCode == XPF_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::XPF;
    return true;
  } else if (hashCode == XSU_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::XSU;
    return true;
  } else if (hashCode == XUA_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::XUA;
    return true;
  } else if (hashCode == YER_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::YER;
    return true;
  } else if (hashCode == ZAR_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::ZAR;
    return true;
  } else if (hashCode == ZMW_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::ZMW;
    return true;
  } else if (hashCode == ZWL_HASH) {
    enumValue = AwsProductInsightsCurrencyCodeEnum::ZWL;
    return true;
  }
  return false;
}

static bool GetNameForEnumHelper0(AwsProductInsightsCurrencyCodeEnum enumValue, Aws::String& value) {
  switch (enumValue) {
    case AwsProductInsightsCurrencyCodeEnum::USD:
      value = "USD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::EUR:
      value = "EUR";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::GBP:
      value = "GBP";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::AUD:
      value = "AUD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::CAD:
      value = "CAD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::CNY:
      value = "CNY";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::NZD:
      value = "NZD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::INR:
      value = "INR";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::JPY:
      value = "JPY";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::CHF:
      value = "CHF";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::SEK:
      value = "SEK";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::AED:
      value = "AED";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::AFN:
      value = "AFN";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::ALL:
      value = "ALL";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::AMD:
      value = "AMD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::ANG:
      value = "ANG";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::AOA:
      value = "AOA";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::ARS:
      value = "ARS";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::AWG:
      value = "AWG";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::AZN:
      value = "AZN";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::BAM:
      value = "BAM";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::BBD:
      value = "BBD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::BDT:
      value = "BDT";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::BGN:
      value = "BGN";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::BHD:
      value = "BHD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::BIF:
      value = "BIF";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::BMD:
      value = "BMD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::BND:
      value = "BND";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::BOB:
      value = "BOB";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::BOV:
      value = "BOV";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::BRL:
      value = "BRL";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::BSD:
      value = "BSD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::BTN:
      value = "BTN";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::BWP:
      value = "BWP";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::BYN:
      value = "BYN";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::BZD:
      value = "BZD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::CDF:
      value = "CDF";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::CHE:
      value = "CHE";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::CHW:
      value = "CHW";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::CLF:
      value = "CLF";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::CLP:
      value = "CLP";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::COP:
      value = "COP";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::COU:
      value = "COU";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::CRC:
      value = "CRC";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::CUC:
      value = "CUC";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::CUP:
      value = "CUP";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::CVE:
      value = "CVE";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::CZK:
      value = "CZK";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::DJF:
      value = "DJF";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::DKK:
      value = "DKK";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::DOP:
      value = "DOP";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::DZD:
      value = "DZD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::EGP:
      value = "EGP";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::ERN:
      value = "ERN";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::ETB:
      value = "ETB";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::FJD:
      value = "FJD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::FKP:
      value = "FKP";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::GEL:
      value = "GEL";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::GHS:
      value = "GHS";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::GIP:
      value = "GIP";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::GMD:
      value = "GMD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::GNF:
      value = "GNF";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::GTQ:
      value = "GTQ";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::GYD:
      value = "GYD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::HKD:
      value = "HKD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::HNL:
      value = "HNL";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::HRK:
      value = "HRK";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::HTG:
      value = "HTG";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::HUF:
      value = "HUF";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::IDR:
      value = "IDR";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::ILS:
      value = "ILS";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::IQD:
      value = "IQD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::IRR:
      value = "IRR";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::ISK:
      value = "ISK";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::JMD:
      value = "JMD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::JOD:
      value = "JOD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::KES:
      value = "KES";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::KGS:
      value = "KGS";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::KHR:
      value = "KHR";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::KMF:
      value = "KMF";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::KPW:
      value = "KPW";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::KRW:
      value = "KRW";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::KWD:
      value = "KWD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::KYD:
      value = "KYD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::KZT:
      value = "KZT";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::LAK:
      value = "LAK";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::LBP:
      value = "LBP";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::LKR:
      value = "LKR";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::LRD:
      value = "LRD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::LSL:
      value = "LSL";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::LYD:
      value = "LYD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::MAD:
      value = "MAD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::MDL:
      value = "MDL";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::MGA:
      value = "MGA";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::MKD:
      value = "MKD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::MMK:
      value = "MMK";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::MNT:
      value = "MNT";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::MOP:
      value = "MOP";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::MRU:
      value = "MRU";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::MUR:
      value = "MUR";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::MVR:
      value = "MVR";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::MWK:
      value = "MWK";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::MXN:
      value = "MXN";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::MXV:
      value = "MXV";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::MYR:
      value = "MYR";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::MZN:
      value = "MZN";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::NAD:
      value = "NAD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::NGN:
      value = "NGN";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::NIO:
      value = "NIO";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::NOK:
      value = "NOK";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::NPR:
      value = "NPR";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::OMR:
      value = "OMR";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::PAB:
      value = "PAB";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::PEN:
      value = "PEN";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::PGK:
      value = "PGK";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::PHP:
      value = "PHP";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::PKR:
      value = "PKR";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::PLN:
      value = "PLN";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::PYG:
      value = "PYG";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::QAR:
      value = "QAR";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::RON:
      value = "RON";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::RSD:
      value = "RSD";
      return true;
    default:
      return false;
  }
}
static bool GetNameForEnumHelper1(AwsProductInsightsCurrencyCodeEnum enumValue, Aws::String& value) {
  switch (enumValue) {
    case AwsProductInsightsCurrencyCodeEnum::RUB:
      value = "RUB";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::RWF:
      value = "RWF";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::SAR:
      value = "SAR";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::SBD:
      value = "SBD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::SCR:
      value = "SCR";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::SDG:
      value = "SDG";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::SGD:
      value = "SGD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::SHP:
      value = "SHP";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::SLL:
      value = "SLL";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::SOS:
      value = "SOS";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::SRD:
      value = "SRD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::SSP:
      value = "SSP";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::STN:
      value = "STN";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::SVC:
      value = "SVC";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::SYP:
      value = "SYP";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::SZL:
      value = "SZL";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::THB:
      value = "THB";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::TJS:
      value = "TJS";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::TMT:
      value = "TMT";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::TND:
      value = "TND";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::TOP:
      value = "TOP";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::TRY:
      value = "TRY";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::TTD:
      value = "TTD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::TWD:
      value = "TWD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::TZS:
      value = "TZS";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::UAH:
      value = "UAH";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::UGX:
      value = "UGX";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::USN:
      value = "USN";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::UYI:
      value = "UYI";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::UYU:
      value = "UYU";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::UZS:
      value = "UZS";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::VEF:
      value = "VEF";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::VND:
      value = "VND";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::VUV:
      value = "VUV";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::WST:
      value = "WST";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::XAF:
      value = "XAF";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::XCD:
      value = "XCD";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::XDR:
      value = "XDR";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::XOF:
      value = "XOF";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::XPF:
      value = "XPF";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::XSU:
      value = "XSU";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::XUA:
      value = "XUA";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::YER:
      value = "YER";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::ZAR:
      value = "ZAR";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::ZMW:
      value = "ZMW";
      return true;
    case AwsProductInsightsCurrencyCodeEnum::ZWL:
      value = "ZWL";
      return true;
    default:
      return false;
  }
}

AwsProductInsightsCurrencyCodeEnum GetAwsProductInsightsCurrencyCodeEnumForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  AwsProductInsightsCurrencyCodeEnum enumValue;
  if (GetEnumForNameHelper0(hashCode, enumValue)) {
    return enumValue;
  } else if (GetEnumForNameHelper1(hashCode, enumValue)) {
    return enumValue;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AwsProductInsightsCurrencyCodeEnum>(hashCode);
  }

  return AwsProductInsightsCurrencyCodeEnum::NOT_SET;
}

Aws::String GetNameForAwsProductInsightsCurrencyCodeEnum(AwsProductInsightsCurrencyCodeEnum enumValue) {
  Aws::String value;
  if (GetNameForEnumHelper0(enumValue, value)) {
    return value;
  } else if (GetNameForEnumHelper1(enumValue, value)) {
    return value;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
  }

  return {};
}

}  // namespace AwsProductInsightsCurrencyCodeEnumMapper
}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
