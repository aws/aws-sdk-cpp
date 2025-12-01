/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-benefits/model/CurrencyCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralBenefits {
namespace Model {
namespace CurrencyCodeMapper {

static const int AED_HASH = HashingUtils::HashString("AED");
static const int AMD_HASH = HashingUtils::HashString("AMD");
static const int ARS_HASH = HashingUtils::HashString("ARS");
static const int AUD_HASH = HashingUtils::HashString("AUD");
static const int AWG_HASH = HashingUtils::HashString("AWG");
static const int AZN_HASH = HashingUtils::HashString("AZN");
static const int BBD_HASH = HashingUtils::HashString("BBD");
static const int BDT_HASH = HashingUtils::HashString("BDT");
static const int BGN_HASH = HashingUtils::HashString("BGN");
static const int BMD_HASH = HashingUtils::HashString("BMD");
static const int BND_HASH = HashingUtils::HashString("BND");
static const int BOB_HASH = HashingUtils::HashString("BOB");
static const int BRL_HASH = HashingUtils::HashString("BRL");
static const int BSD_HASH = HashingUtils::HashString("BSD");
static const int BYR_HASH = HashingUtils::HashString("BYR");
static const int BZD_HASH = HashingUtils::HashString("BZD");
static const int CAD_HASH = HashingUtils::HashString("CAD");
static const int CHF_HASH = HashingUtils::HashString("CHF");
static const int CLP_HASH = HashingUtils::HashString("CLP");
static const int CNY_HASH = HashingUtils::HashString("CNY");
static const int COP_HASH = HashingUtils::HashString("COP");
static const int CRC_HASH = HashingUtils::HashString("CRC");
static const int CZK_HASH = HashingUtils::HashString("CZK");
static const int DKK_HASH = HashingUtils::HashString("DKK");
static const int DOP_HASH = HashingUtils::HashString("DOP");
static const int EEK_HASH = HashingUtils::HashString("EEK");
static const int EGP_HASH = HashingUtils::HashString("EGP");
static const int EUR_HASH = HashingUtils::HashString("EUR");
static const int GBP_HASH = HashingUtils::HashString("GBP");
static const int GEL_HASH = HashingUtils::HashString("GEL");
static const int GHS_HASH = HashingUtils::HashString("GHS");
static const int GTQ_HASH = HashingUtils::HashString("GTQ");
static const int GYD_HASH = HashingUtils::HashString("GYD");
static const int HKD_HASH = HashingUtils::HashString("HKD");
static const int HNL_HASH = HashingUtils::HashString("HNL");
static const int HRK_HASH = HashingUtils::HashString("HRK");
static const int HTG_HASH = HashingUtils::HashString("HTG");
static const int HUF_HASH = HashingUtils::HashString("HUF");
static const int IDR_HASH = HashingUtils::HashString("IDR");
static const int ILS_HASH = HashingUtils::HashString("ILS");
static const int INR_HASH = HashingUtils::HashString("INR");
static const int ISK_HASH = HashingUtils::HashString("ISK");
static const int JMD_HASH = HashingUtils::HashString("JMD");
static const int JPY_HASH = HashingUtils::HashString("JPY");
static const int KES_HASH = HashingUtils::HashString("KES");
static const int KHR_HASH = HashingUtils::HashString("KHR");
static const int KRW_HASH = HashingUtils::HashString("KRW");
static const int KYD_HASH = HashingUtils::HashString("KYD");
static const int KZT_HASH = HashingUtils::HashString("KZT");
static const int LBP_HASH = HashingUtils::HashString("LBP");
static const int LKR_HASH = HashingUtils::HashString("LKR");
static const int LTL_HASH = HashingUtils::HashString("LTL");
static const int LVL_HASH = HashingUtils::HashString("LVL");
static const int MAD_HASH = HashingUtils::HashString("MAD");
static const int MNT_HASH = HashingUtils::HashString("MNT");
static const int MOP_HASH = HashingUtils::HashString("MOP");
static const int MUR_HASH = HashingUtils::HashString("MUR");
static const int MVR_HASH = HashingUtils::HashString("MVR");
static const int MXN_HASH = HashingUtils::HashString("MXN");
static const int MYR_HASH = HashingUtils::HashString("MYR");
static const int NAD_HASH = HashingUtils::HashString("NAD");
static const int NGN_HASH = HashingUtils::HashString("NGN");
static const int NIO_HASH = HashingUtils::HashString("NIO");
static const int NOK_HASH = HashingUtils::HashString("NOK");
static const int NZD_HASH = HashingUtils::HashString("NZD");
static const int PAB_HASH = HashingUtils::HashString("PAB");
static const int PEN_HASH = HashingUtils::HashString("PEN");
static const int PHP_HASH = HashingUtils::HashString("PHP");
static const int PKR_HASH = HashingUtils::HashString("PKR");
static const int PLN_HASH = HashingUtils::HashString("PLN");
static const int PYG_HASH = HashingUtils::HashString("PYG");
static const int QAR_HASH = HashingUtils::HashString("QAR");
static const int RON_HASH = HashingUtils::HashString("RON");
static const int RUB_HASH = HashingUtils::HashString("RUB");
static const int SAR_HASH = HashingUtils::HashString("SAR");
static const int SEK_HASH = HashingUtils::HashString("SEK");
static const int SGD_HASH = HashingUtils::HashString("SGD");
static const int SIT_HASH = HashingUtils::HashString("SIT");
static const int SKK_HASH = HashingUtils::HashString("SKK");
static const int THB_HASH = HashingUtils::HashString("THB");
static const int TND_HASH = HashingUtils::HashString("TND");
static const int TRY_HASH = HashingUtils::HashString("TRY");
static const int TTD_HASH = HashingUtils::HashString("TTD");
static const int TWD_HASH = HashingUtils::HashString("TWD");
static const int TZS_HASH = HashingUtils::HashString("TZS");
static const int UAH_HASH = HashingUtils::HashString("UAH");
static const int USD_HASH = HashingUtils::HashString("USD");
static const int UYU_HASH = HashingUtils::HashString("UYU");
static const int UZS_HASH = HashingUtils::HashString("UZS");
static const int VND_HASH = HashingUtils::HashString("VND");
static const int XAF_HASH = HashingUtils::HashString("XAF");
static const int XCD_HASH = HashingUtils::HashString("XCD");
static const int XOF_HASH = HashingUtils::HashString("XOF");
static const int XPF_HASH = HashingUtils::HashString("XPF");
static const int ZAR_HASH = HashingUtils::HashString("ZAR");

CurrencyCode GetCurrencyCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AED_HASH) {
    return CurrencyCode::AED;
  } else if (hashCode == AMD_HASH) {
    return CurrencyCode::AMD;
  } else if (hashCode == ARS_HASH) {
    return CurrencyCode::ARS;
  } else if (hashCode == AUD_HASH) {
    return CurrencyCode::AUD;
  } else if (hashCode == AWG_HASH) {
    return CurrencyCode::AWG;
  } else if (hashCode == AZN_HASH) {
    return CurrencyCode::AZN;
  } else if (hashCode == BBD_HASH) {
    return CurrencyCode::BBD;
  } else if (hashCode == BDT_HASH) {
    return CurrencyCode::BDT;
  } else if (hashCode == BGN_HASH) {
    return CurrencyCode::BGN;
  } else if (hashCode == BMD_HASH) {
    return CurrencyCode::BMD;
  } else if (hashCode == BND_HASH) {
    return CurrencyCode::BND;
  } else if (hashCode == BOB_HASH) {
    return CurrencyCode::BOB;
  } else if (hashCode == BRL_HASH) {
    return CurrencyCode::BRL;
  } else if (hashCode == BSD_HASH) {
    return CurrencyCode::BSD;
  } else if (hashCode == BYR_HASH) {
    return CurrencyCode::BYR;
  } else if (hashCode == BZD_HASH) {
    return CurrencyCode::BZD;
  } else if (hashCode == CAD_HASH) {
    return CurrencyCode::CAD;
  } else if (hashCode == CHF_HASH) {
    return CurrencyCode::CHF;
  } else if (hashCode == CLP_HASH) {
    return CurrencyCode::CLP;
  } else if (hashCode == CNY_HASH) {
    return CurrencyCode::CNY;
  } else if (hashCode == COP_HASH) {
    return CurrencyCode::COP;
  } else if (hashCode == CRC_HASH) {
    return CurrencyCode::CRC;
  } else if (hashCode == CZK_HASH) {
    return CurrencyCode::CZK;
  } else if (hashCode == DKK_HASH) {
    return CurrencyCode::DKK;
  } else if (hashCode == DOP_HASH) {
    return CurrencyCode::DOP;
  } else if (hashCode == EEK_HASH) {
    return CurrencyCode::EEK;
  } else if (hashCode == EGP_HASH) {
    return CurrencyCode::EGP;
  } else if (hashCode == EUR_HASH) {
    return CurrencyCode::EUR;
  } else if (hashCode == GBP_HASH) {
    return CurrencyCode::GBP;
  } else if (hashCode == GEL_HASH) {
    return CurrencyCode::GEL;
  } else if (hashCode == GHS_HASH) {
    return CurrencyCode::GHS;
  } else if (hashCode == GTQ_HASH) {
    return CurrencyCode::GTQ;
  } else if (hashCode == GYD_HASH) {
    return CurrencyCode::GYD;
  } else if (hashCode == HKD_HASH) {
    return CurrencyCode::HKD;
  } else if (hashCode == HNL_HASH) {
    return CurrencyCode::HNL;
  } else if (hashCode == HRK_HASH) {
    return CurrencyCode::HRK;
  } else if (hashCode == HTG_HASH) {
    return CurrencyCode::HTG;
  } else if (hashCode == HUF_HASH) {
    return CurrencyCode::HUF;
  } else if (hashCode == IDR_HASH) {
    return CurrencyCode::IDR;
  } else if (hashCode == ILS_HASH) {
    return CurrencyCode::ILS;
  } else if (hashCode == INR_HASH) {
    return CurrencyCode::INR;
  } else if (hashCode == ISK_HASH) {
    return CurrencyCode::ISK;
  } else if (hashCode == JMD_HASH) {
    return CurrencyCode::JMD;
  } else if (hashCode == JPY_HASH) {
    return CurrencyCode::JPY;
  } else if (hashCode == KES_HASH) {
    return CurrencyCode::KES;
  } else if (hashCode == KHR_HASH) {
    return CurrencyCode::KHR;
  } else if (hashCode == KRW_HASH) {
    return CurrencyCode::KRW;
  } else if (hashCode == KYD_HASH) {
    return CurrencyCode::KYD;
  } else if (hashCode == KZT_HASH) {
    return CurrencyCode::KZT;
  } else if (hashCode == LBP_HASH) {
    return CurrencyCode::LBP;
  } else if (hashCode == LKR_HASH) {
    return CurrencyCode::LKR;
  } else if (hashCode == LTL_HASH) {
    return CurrencyCode::LTL;
  } else if (hashCode == LVL_HASH) {
    return CurrencyCode::LVL;
  } else if (hashCode == MAD_HASH) {
    return CurrencyCode::MAD;
  } else if (hashCode == MNT_HASH) {
    return CurrencyCode::MNT;
  } else if (hashCode == MOP_HASH) {
    return CurrencyCode::MOP;
  } else if (hashCode == MUR_HASH) {
    return CurrencyCode::MUR;
  } else if (hashCode == MVR_HASH) {
    return CurrencyCode::MVR;
  } else if (hashCode == MXN_HASH) {
    return CurrencyCode::MXN;
  } else if (hashCode == MYR_HASH) {
    return CurrencyCode::MYR;
  } else if (hashCode == NAD_HASH) {
    return CurrencyCode::NAD;
  } else if (hashCode == NGN_HASH) {
    return CurrencyCode::NGN;
  } else if (hashCode == NIO_HASH) {
    return CurrencyCode::NIO;
  } else if (hashCode == NOK_HASH) {
    return CurrencyCode::NOK;
  } else if (hashCode == NZD_HASH) {
    return CurrencyCode::NZD;
  } else if (hashCode == PAB_HASH) {
    return CurrencyCode::PAB;
  } else if (hashCode == PEN_HASH) {
    return CurrencyCode::PEN;
  } else if (hashCode == PHP_HASH) {
    return CurrencyCode::PHP;
  } else if (hashCode == PKR_HASH) {
    return CurrencyCode::PKR;
  } else if (hashCode == PLN_HASH) {
    return CurrencyCode::PLN;
  } else if (hashCode == PYG_HASH) {
    return CurrencyCode::PYG;
  } else if (hashCode == QAR_HASH) {
    return CurrencyCode::QAR;
  } else if (hashCode == RON_HASH) {
    return CurrencyCode::RON;
  } else if (hashCode == RUB_HASH) {
    return CurrencyCode::RUB;
  } else if (hashCode == SAR_HASH) {
    return CurrencyCode::SAR;
  } else if (hashCode == SEK_HASH) {
    return CurrencyCode::SEK;
  } else if (hashCode == SGD_HASH) {
    return CurrencyCode::SGD;
  } else if (hashCode == SIT_HASH) {
    return CurrencyCode::SIT;
  } else if (hashCode == SKK_HASH) {
    return CurrencyCode::SKK;
  } else if (hashCode == THB_HASH) {
    return CurrencyCode::THB;
  } else if (hashCode == TND_HASH) {
    return CurrencyCode::TND;
  } else if (hashCode == TRY_HASH) {
    return CurrencyCode::TRY;
  } else if (hashCode == TTD_HASH) {
    return CurrencyCode::TTD;
  } else if (hashCode == TWD_HASH) {
    return CurrencyCode::TWD;
  } else if (hashCode == TZS_HASH) {
    return CurrencyCode::TZS;
  } else if (hashCode == UAH_HASH) {
    return CurrencyCode::UAH;
  } else if (hashCode == USD_HASH) {
    return CurrencyCode::USD;
  } else if (hashCode == UYU_HASH) {
    return CurrencyCode::UYU;
  } else if (hashCode == UZS_HASH) {
    return CurrencyCode::UZS;
  } else if (hashCode == VND_HASH) {
    return CurrencyCode::VND;
  } else if (hashCode == XAF_HASH) {
    return CurrencyCode::XAF;
  } else if (hashCode == XCD_HASH) {
    return CurrencyCode::XCD;
  } else if (hashCode == XOF_HASH) {
    return CurrencyCode::XOF;
  } else if (hashCode == XPF_HASH) {
    return CurrencyCode::XPF;
  } else if (hashCode == ZAR_HASH) {
    return CurrencyCode::ZAR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CurrencyCode>(hashCode);
  }

  return CurrencyCode::NOT_SET;
}

Aws::String GetNameForCurrencyCode(CurrencyCode enumValue) {
  switch (enumValue) {
    case CurrencyCode::NOT_SET:
      return {};
    case CurrencyCode::AED:
      return "AED";
    case CurrencyCode::AMD:
      return "AMD";
    case CurrencyCode::ARS:
      return "ARS";
    case CurrencyCode::AUD:
      return "AUD";
    case CurrencyCode::AWG:
      return "AWG";
    case CurrencyCode::AZN:
      return "AZN";
    case CurrencyCode::BBD:
      return "BBD";
    case CurrencyCode::BDT:
      return "BDT";
    case CurrencyCode::BGN:
      return "BGN";
    case CurrencyCode::BMD:
      return "BMD";
    case CurrencyCode::BND:
      return "BND";
    case CurrencyCode::BOB:
      return "BOB";
    case CurrencyCode::BRL:
      return "BRL";
    case CurrencyCode::BSD:
      return "BSD";
    case CurrencyCode::BYR:
      return "BYR";
    case CurrencyCode::BZD:
      return "BZD";
    case CurrencyCode::CAD:
      return "CAD";
    case CurrencyCode::CHF:
      return "CHF";
    case CurrencyCode::CLP:
      return "CLP";
    case CurrencyCode::CNY:
      return "CNY";
    case CurrencyCode::COP:
      return "COP";
    case CurrencyCode::CRC:
      return "CRC";
    case CurrencyCode::CZK:
      return "CZK";
    case CurrencyCode::DKK:
      return "DKK";
    case CurrencyCode::DOP:
      return "DOP";
    case CurrencyCode::EEK:
      return "EEK";
    case CurrencyCode::EGP:
      return "EGP";
    case CurrencyCode::EUR:
      return "EUR";
    case CurrencyCode::GBP:
      return "GBP";
    case CurrencyCode::GEL:
      return "GEL";
    case CurrencyCode::GHS:
      return "GHS";
    case CurrencyCode::GTQ:
      return "GTQ";
    case CurrencyCode::GYD:
      return "GYD";
    case CurrencyCode::HKD:
      return "HKD";
    case CurrencyCode::HNL:
      return "HNL";
    case CurrencyCode::HRK:
      return "HRK";
    case CurrencyCode::HTG:
      return "HTG";
    case CurrencyCode::HUF:
      return "HUF";
    case CurrencyCode::IDR:
      return "IDR";
    case CurrencyCode::ILS:
      return "ILS";
    case CurrencyCode::INR:
      return "INR";
    case CurrencyCode::ISK:
      return "ISK";
    case CurrencyCode::JMD:
      return "JMD";
    case CurrencyCode::JPY:
      return "JPY";
    case CurrencyCode::KES:
      return "KES";
    case CurrencyCode::KHR:
      return "KHR";
    case CurrencyCode::KRW:
      return "KRW";
    case CurrencyCode::KYD:
      return "KYD";
    case CurrencyCode::KZT:
      return "KZT";
    case CurrencyCode::LBP:
      return "LBP";
    case CurrencyCode::LKR:
      return "LKR";
    case CurrencyCode::LTL:
      return "LTL";
    case CurrencyCode::LVL:
      return "LVL";
    case CurrencyCode::MAD:
      return "MAD";
    case CurrencyCode::MNT:
      return "MNT";
    case CurrencyCode::MOP:
      return "MOP";
    case CurrencyCode::MUR:
      return "MUR";
    case CurrencyCode::MVR:
      return "MVR";
    case CurrencyCode::MXN:
      return "MXN";
    case CurrencyCode::MYR:
      return "MYR";
    case CurrencyCode::NAD:
      return "NAD";
    case CurrencyCode::NGN:
      return "NGN";
    case CurrencyCode::NIO:
      return "NIO";
    case CurrencyCode::NOK:
      return "NOK";
    case CurrencyCode::NZD:
      return "NZD";
    case CurrencyCode::PAB:
      return "PAB";
    case CurrencyCode::PEN:
      return "PEN";
    case CurrencyCode::PHP:
      return "PHP";
    case CurrencyCode::PKR:
      return "PKR";
    case CurrencyCode::PLN:
      return "PLN";
    case CurrencyCode::PYG:
      return "PYG";
    case CurrencyCode::QAR:
      return "QAR";
    case CurrencyCode::RON:
      return "RON";
    case CurrencyCode::RUB:
      return "RUB";
    case CurrencyCode::SAR:
      return "SAR";
    case CurrencyCode::SEK:
      return "SEK";
    case CurrencyCode::SGD:
      return "SGD";
    case CurrencyCode::SIT:
      return "SIT";
    case CurrencyCode::SKK:
      return "SKK";
    case CurrencyCode::THB:
      return "THB";
    case CurrencyCode::TND:
      return "TND";
    case CurrencyCode::TRY:
      return "TRY";
    case CurrencyCode::TTD:
      return "TTD";
    case CurrencyCode::TWD:
      return "TWD";
    case CurrencyCode::TZS:
      return "TZS";
    case CurrencyCode::UAH:
      return "UAH";
    case CurrencyCode::USD:
      return "USD";
    case CurrencyCode::UYU:
      return "UYU";
    case CurrencyCode::UZS:
      return "UZS";
    case CurrencyCode::VND:
      return "VND";
    case CurrencyCode::XAF:
      return "XAF";
    case CurrencyCode::XCD:
      return "XCD";
    case CurrencyCode::XOF:
      return "XOF";
    case CurrencyCode::XPF:
      return "XPF";
    case CurrencyCode::ZAR:
      return "ZAR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CurrencyCodeMapper
}  // namespace Model
}  // namespace PartnerCentralBenefits
}  // namespace Aws
