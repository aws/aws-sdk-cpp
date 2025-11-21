/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/transcribestreaming/model/LanguageCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace TranscribeStreamingService {
namespace Model {
namespace LanguageCodeMapper {

static const int en_US_HASH = HashingUtils::HashString("en-US");
static const int en_GB_HASH = HashingUtils::HashString("en-GB");
static const int es_US_HASH = HashingUtils::HashString("es-US");
static const int fr_CA_HASH = HashingUtils::HashString("fr-CA");
static const int fr_FR_HASH = HashingUtils::HashString("fr-FR");
static const int en_AU_HASH = HashingUtils::HashString("en-AU");
static const int it_IT_HASH = HashingUtils::HashString("it-IT");
static const int de_DE_HASH = HashingUtils::HashString("de-DE");
static const int pt_BR_HASH = HashingUtils::HashString("pt-BR");
static const int ja_JP_HASH = HashingUtils::HashString("ja-JP");
static const int ko_KR_HASH = HashingUtils::HashString("ko-KR");
static const int zh_CN_HASH = HashingUtils::HashString("zh-CN");
static const int th_TH_HASH = HashingUtils::HashString("th-TH");
static const int es_ES_HASH = HashingUtils::HashString("es-ES");
static const int ar_SA_HASH = HashingUtils::HashString("ar-SA");
static const int pt_PT_HASH = HashingUtils::HashString("pt-PT");
static const int ca_ES_HASH = HashingUtils::HashString("ca-ES");
static const int ar_AE_HASH = HashingUtils::HashString("ar-AE");
static const int hi_IN_HASH = HashingUtils::HashString("hi-IN");
static const int zh_HK_HASH = HashingUtils::HashString("zh-HK");
static const int nl_NL_HASH = HashingUtils::HashString("nl-NL");
static const int no_NO_HASH = HashingUtils::HashString("no-NO");
static const int sv_SE_HASH = HashingUtils::HashString("sv-SE");
static const int pl_PL_HASH = HashingUtils::HashString("pl-PL");
static const int fi_FI_HASH = HashingUtils::HashString("fi-FI");
static const int zh_TW_HASH = HashingUtils::HashString("zh-TW");
static const int en_IN_HASH = HashingUtils::HashString("en-IN");
static const int en_IE_HASH = HashingUtils::HashString("en-IE");
static const int en_NZ_HASH = HashingUtils::HashString("en-NZ");
static const int en_AB_HASH = HashingUtils::HashString("en-AB");
static const int en_ZA_HASH = HashingUtils::HashString("en-ZA");
static const int en_WL_HASH = HashingUtils::HashString("en-WL");
static const int de_CH_HASH = HashingUtils::HashString("de-CH");
static const int af_ZA_HASH = HashingUtils::HashString("af-ZA");
static const int eu_ES_HASH = HashingUtils::HashString("eu-ES");
static const int hr_HR_HASH = HashingUtils::HashString("hr-HR");
static const int cs_CZ_HASH = HashingUtils::HashString("cs-CZ");
static const int da_DK_HASH = HashingUtils::HashString("da-DK");
static const int fa_IR_HASH = HashingUtils::HashString("fa-IR");
static const int gl_ES_HASH = HashingUtils::HashString("gl-ES");
static const int el_GR_HASH = HashingUtils::HashString("el-GR");
static const int he_IL_HASH = HashingUtils::HashString("he-IL");
static const int id_ID_HASH = HashingUtils::HashString("id-ID");
static const int lv_LV_HASH = HashingUtils::HashString("lv-LV");
static const int ms_MY_HASH = HashingUtils::HashString("ms-MY");
static const int ro_RO_HASH = HashingUtils::HashString("ro-RO");
static const int ru_RU_HASH = HashingUtils::HashString("ru-RU");
static const int sr_RS_HASH = HashingUtils::HashString("sr-RS");
static const int sk_SK_HASH = HashingUtils::HashString("sk-SK");
static const int so_SO_HASH = HashingUtils::HashString("so-SO");
static const int tl_PH_HASH = HashingUtils::HashString("tl-PH");
static const int uk_UA_HASH = HashingUtils::HashString("uk-UA");
static const int vi_VN_HASH = HashingUtils::HashString("vi-VN");
static const int zu_ZA_HASH = HashingUtils::HashString("zu-ZA");
static const int am_ET_HASH = HashingUtils::HashString("am-ET");
static const int be_BY_HASH = HashingUtils::HashString("be-BY");
static const int bg_BG_HASH = HashingUtils::HashString("bg-BG");
static const int bn_IN_HASH = HashingUtils::HashString("bn-IN");
static const int bs_BA_HASH = HashingUtils::HashString("bs-BA");
static const int ckb_IQ_HASH = HashingUtils::HashString("ckb-IQ");
static const int ckb_IR_HASH = HashingUtils::HashString("ckb-IR");
static const int cy_WL_HASH = HashingUtils::HashString("cy-WL");
static const int es_MX_HASH = HashingUtils::HashString("es-MX");
static const int et_ET_HASH = HashingUtils::HashString("et-ET");
static const int fa_AF_HASH = HashingUtils::HashString("fa-AF");
static const int gu_IN_HASH = HashingUtils::HashString("gu-IN");
static const int ht_HT_HASH = HashingUtils::HashString("ht-HT");
static const int hu_HU_HASH = HashingUtils::HashString("hu-HU");
static const int hy_AM_HASH = HashingUtils::HashString("hy-AM");
static const int is_IS_HASH = HashingUtils::HashString("is-IS");
static const int jv_ID_HASH = HashingUtils::HashString("jv-ID");
static const int ka_GE_HASH = HashingUtils::HashString("ka-GE");
static const int kab_DZ_HASH = HashingUtils::HashString("kab-DZ");
static const int kk_KZ_HASH = HashingUtils::HashString("kk-KZ");
static const int km_KH_HASH = HashingUtils::HashString("km-KH");
static const int kn_IN_HASH = HashingUtils::HashString("kn-IN");
static const int lg_IN_HASH = HashingUtils::HashString("lg-IN");
static const int lt_LT_HASH = HashingUtils::HashString("lt-LT");
static const int mk_MK_HASH = HashingUtils::HashString("mk-MK");
static const int ml_IN_HASH = HashingUtils::HashString("ml-IN");
static const int mr_IN_HASH = HashingUtils::HashString("mr-IN");
static const int my_MM_HASH = HashingUtils::HashString("my-MM");
static const int ne_NP_HASH = HashingUtils::HashString("ne-NP");
static const int or_IN_HASH = HashingUtils::HashString("or-IN");
static const int pa_IN_HASH = HashingUtils::HashString("pa-IN");
static const int ps_AF_HASH = HashingUtils::HashString("ps-AF");
static const int si_LK_HASH = HashingUtils::HashString("si-LK");
static const int sl_SI_HASH = HashingUtils::HashString("sl-SI");
static const int sq_AL_HASH = HashingUtils::HashString("sq-AL");
static const int su_ID_HASH = HashingUtils::HashString("su-ID");
static const int sw_BI_HASH = HashingUtils::HashString("sw-BI");
static const int sw_KE_HASH = HashingUtils::HashString("sw-KE");
static const int sw_RW_HASH = HashingUtils::HashString("sw-RW");
static const int sw_TZ_HASH = HashingUtils::HashString("sw-TZ");
static const int sw_UG_HASH = HashingUtils::HashString("sw-UG");
static const int ta_IN_HASH = HashingUtils::HashString("ta-IN");
static const int te_IN_HASH = HashingUtils::HashString("te-IN");
static const int tr_TR_HASH = HashingUtils::HashString("tr-TR");
static const int uz_UZ_HASH = HashingUtils::HashString("uz-UZ");

LanguageCode GetLanguageCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == en_US_HASH) {
    return LanguageCode::en_US;
  } else if (hashCode == en_GB_HASH) {
    return LanguageCode::en_GB;
  } else if (hashCode == es_US_HASH) {
    return LanguageCode::es_US;
  } else if (hashCode == fr_CA_HASH) {
    return LanguageCode::fr_CA;
  } else if (hashCode == fr_FR_HASH) {
    return LanguageCode::fr_FR;
  } else if (hashCode == en_AU_HASH) {
    return LanguageCode::en_AU;
  } else if (hashCode == it_IT_HASH) {
    return LanguageCode::it_IT;
  } else if (hashCode == de_DE_HASH) {
    return LanguageCode::de_DE;
  } else if (hashCode == pt_BR_HASH) {
    return LanguageCode::pt_BR;
  } else if (hashCode == ja_JP_HASH) {
    return LanguageCode::ja_JP;
  } else if (hashCode == ko_KR_HASH) {
    return LanguageCode::ko_KR;
  } else if (hashCode == zh_CN_HASH) {
    return LanguageCode::zh_CN;
  } else if (hashCode == th_TH_HASH) {
    return LanguageCode::th_TH;
  } else if (hashCode == es_ES_HASH) {
    return LanguageCode::es_ES;
  } else if (hashCode == ar_SA_HASH) {
    return LanguageCode::ar_SA;
  } else if (hashCode == pt_PT_HASH) {
    return LanguageCode::pt_PT;
  } else if (hashCode == ca_ES_HASH) {
    return LanguageCode::ca_ES;
  } else if (hashCode == ar_AE_HASH) {
    return LanguageCode::ar_AE;
  } else if (hashCode == hi_IN_HASH) {
    return LanguageCode::hi_IN;
  } else if (hashCode == zh_HK_HASH) {
    return LanguageCode::zh_HK;
  } else if (hashCode == nl_NL_HASH) {
    return LanguageCode::nl_NL;
  } else if (hashCode == no_NO_HASH) {
    return LanguageCode::no_NO;
  } else if (hashCode == sv_SE_HASH) {
    return LanguageCode::sv_SE;
  } else if (hashCode == pl_PL_HASH) {
    return LanguageCode::pl_PL;
  } else if (hashCode == fi_FI_HASH) {
    return LanguageCode::fi_FI;
  } else if (hashCode == zh_TW_HASH) {
    return LanguageCode::zh_TW;
  } else if (hashCode == en_IN_HASH) {
    return LanguageCode::en_IN;
  } else if (hashCode == en_IE_HASH) {
    return LanguageCode::en_IE;
  } else if (hashCode == en_NZ_HASH) {
    return LanguageCode::en_NZ;
  } else if (hashCode == en_AB_HASH) {
    return LanguageCode::en_AB;
  } else if (hashCode == en_ZA_HASH) {
    return LanguageCode::en_ZA;
  } else if (hashCode == en_WL_HASH) {
    return LanguageCode::en_WL;
  } else if (hashCode == de_CH_HASH) {
    return LanguageCode::de_CH;
  } else if (hashCode == af_ZA_HASH) {
    return LanguageCode::af_ZA;
  } else if (hashCode == eu_ES_HASH) {
    return LanguageCode::eu_ES;
  } else if (hashCode == hr_HR_HASH) {
    return LanguageCode::hr_HR;
  } else if (hashCode == cs_CZ_HASH) {
    return LanguageCode::cs_CZ;
  } else if (hashCode == da_DK_HASH) {
    return LanguageCode::da_DK;
  } else if (hashCode == fa_IR_HASH) {
    return LanguageCode::fa_IR;
  } else if (hashCode == gl_ES_HASH) {
    return LanguageCode::gl_ES;
  } else if (hashCode == el_GR_HASH) {
    return LanguageCode::el_GR;
  } else if (hashCode == he_IL_HASH) {
    return LanguageCode::he_IL;
  } else if (hashCode == id_ID_HASH) {
    return LanguageCode::id_ID;
  } else if (hashCode == lv_LV_HASH) {
    return LanguageCode::lv_LV;
  } else if (hashCode == ms_MY_HASH) {
    return LanguageCode::ms_MY;
  } else if (hashCode == ro_RO_HASH) {
    return LanguageCode::ro_RO;
  } else if (hashCode == ru_RU_HASH) {
    return LanguageCode::ru_RU;
  } else if (hashCode == sr_RS_HASH) {
    return LanguageCode::sr_RS;
  } else if (hashCode == sk_SK_HASH) {
    return LanguageCode::sk_SK;
  } else if (hashCode == so_SO_HASH) {
    return LanguageCode::so_SO;
  } else if (hashCode == tl_PH_HASH) {
    return LanguageCode::tl_PH;
  } else if (hashCode == uk_UA_HASH) {
    return LanguageCode::uk_UA;
  } else if (hashCode == vi_VN_HASH) {
    return LanguageCode::vi_VN;
  } else if (hashCode == zu_ZA_HASH) {
    return LanguageCode::zu_ZA;
  } else if (hashCode == am_ET_HASH) {
    return LanguageCode::am_ET;
  } else if (hashCode == be_BY_HASH) {
    return LanguageCode::be_BY;
  } else if (hashCode == bg_BG_HASH) {
    return LanguageCode::bg_BG;
  } else if (hashCode == bn_IN_HASH) {
    return LanguageCode::bn_IN;
  } else if (hashCode == bs_BA_HASH) {
    return LanguageCode::bs_BA;
  } else if (hashCode == ckb_IQ_HASH) {
    return LanguageCode::ckb_IQ;
  } else if (hashCode == ckb_IR_HASH) {
    return LanguageCode::ckb_IR;
  } else if (hashCode == cy_WL_HASH) {
    return LanguageCode::cy_WL;
  } else if (hashCode == es_MX_HASH) {
    return LanguageCode::es_MX;
  } else if (hashCode == et_ET_HASH) {
    return LanguageCode::et_ET;
  } else if (hashCode == fa_AF_HASH) {
    return LanguageCode::fa_AF;
  } else if (hashCode == gu_IN_HASH) {
    return LanguageCode::gu_IN;
  } else if (hashCode == ht_HT_HASH) {
    return LanguageCode::ht_HT;
  } else if (hashCode == hu_HU_HASH) {
    return LanguageCode::hu_HU;
  } else if (hashCode == hy_AM_HASH) {
    return LanguageCode::hy_AM;
  } else if (hashCode == is_IS_HASH) {
    return LanguageCode::is_IS;
  } else if (hashCode == jv_ID_HASH) {
    return LanguageCode::jv_ID;
  } else if (hashCode == ka_GE_HASH) {
    return LanguageCode::ka_GE;
  } else if (hashCode == kab_DZ_HASH) {
    return LanguageCode::kab_DZ;
  } else if (hashCode == kk_KZ_HASH) {
    return LanguageCode::kk_KZ;
  } else if (hashCode == km_KH_HASH) {
    return LanguageCode::km_KH;
  } else if (hashCode == kn_IN_HASH) {
    return LanguageCode::kn_IN;
  } else if (hashCode == lg_IN_HASH) {
    return LanguageCode::lg_IN;
  } else if (hashCode == lt_LT_HASH) {
    return LanguageCode::lt_LT;
  } else if (hashCode == mk_MK_HASH) {
    return LanguageCode::mk_MK;
  } else if (hashCode == ml_IN_HASH) {
    return LanguageCode::ml_IN;
  } else if (hashCode == mr_IN_HASH) {
    return LanguageCode::mr_IN;
  } else if (hashCode == my_MM_HASH) {
    return LanguageCode::my_MM;
  } else if (hashCode == ne_NP_HASH) {
    return LanguageCode::ne_NP;
  } else if (hashCode == or_IN_HASH) {
    return LanguageCode::or_IN;
  } else if (hashCode == pa_IN_HASH) {
    return LanguageCode::pa_IN;
  } else if (hashCode == ps_AF_HASH) {
    return LanguageCode::ps_AF;
  } else if (hashCode == si_LK_HASH) {
    return LanguageCode::si_LK;
  } else if (hashCode == sl_SI_HASH) {
    return LanguageCode::sl_SI;
  } else if (hashCode == sq_AL_HASH) {
    return LanguageCode::sq_AL;
  } else if (hashCode == su_ID_HASH) {
    return LanguageCode::su_ID;
  } else if (hashCode == sw_BI_HASH) {
    return LanguageCode::sw_BI;
  } else if (hashCode == sw_KE_HASH) {
    return LanguageCode::sw_KE;
  } else if (hashCode == sw_RW_HASH) {
    return LanguageCode::sw_RW;
  } else if (hashCode == sw_TZ_HASH) {
    return LanguageCode::sw_TZ;
  } else if (hashCode == sw_UG_HASH) {
    return LanguageCode::sw_UG;
  } else if (hashCode == ta_IN_HASH) {
    return LanguageCode::ta_IN;
  } else if (hashCode == te_IN_HASH) {
    return LanguageCode::te_IN;
  } else if (hashCode == tr_TR_HASH) {
    return LanguageCode::tr_TR;
  } else if (hashCode == uz_UZ_HASH) {
    return LanguageCode::uz_UZ;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LanguageCode>(hashCode);
  }

  return LanguageCode::NOT_SET;
}

Aws::String GetNameForLanguageCode(LanguageCode enumValue) {
  switch (enumValue) {
    case LanguageCode::NOT_SET:
      return {};
    case LanguageCode::en_US:
      return "en-US";
    case LanguageCode::en_GB:
      return "en-GB";
    case LanguageCode::es_US:
      return "es-US";
    case LanguageCode::fr_CA:
      return "fr-CA";
    case LanguageCode::fr_FR:
      return "fr-FR";
    case LanguageCode::en_AU:
      return "en-AU";
    case LanguageCode::it_IT:
      return "it-IT";
    case LanguageCode::de_DE:
      return "de-DE";
    case LanguageCode::pt_BR:
      return "pt-BR";
    case LanguageCode::ja_JP:
      return "ja-JP";
    case LanguageCode::ko_KR:
      return "ko-KR";
    case LanguageCode::zh_CN:
      return "zh-CN";
    case LanguageCode::th_TH:
      return "th-TH";
    case LanguageCode::es_ES:
      return "es-ES";
    case LanguageCode::ar_SA:
      return "ar-SA";
    case LanguageCode::pt_PT:
      return "pt-PT";
    case LanguageCode::ca_ES:
      return "ca-ES";
    case LanguageCode::ar_AE:
      return "ar-AE";
    case LanguageCode::hi_IN:
      return "hi-IN";
    case LanguageCode::zh_HK:
      return "zh-HK";
    case LanguageCode::nl_NL:
      return "nl-NL";
    case LanguageCode::no_NO:
      return "no-NO";
    case LanguageCode::sv_SE:
      return "sv-SE";
    case LanguageCode::pl_PL:
      return "pl-PL";
    case LanguageCode::fi_FI:
      return "fi-FI";
    case LanguageCode::zh_TW:
      return "zh-TW";
    case LanguageCode::en_IN:
      return "en-IN";
    case LanguageCode::en_IE:
      return "en-IE";
    case LanguageCode::en_NZ:
      return "en-NZ";
    case LanguageCode::en_AB:
      return "en-AB";
    case LanguageCode::en_ZA:
      return "en-ZA";
    case LanguageCode::en_WL:
      return "en-WL";
    case LanguageCode::de_CH:
      return "de-CH";
    case LanguageCode::af_ZA:
      return "af-ZA";
    case LanguageCode::eu_ES:
      return "eu-ES";
    case LanguageCode::hr_HR:
      return "hr-HR";
    case LanguageCode::cs_CZ:
      return "cs-CZ";
    case LanguageCode::da_DK:
      return "da-DK";
    case LanguageCode::fa_IR:
      return "fa-IR";
    case LanguageCode::gl_ES:
      return "gl-ES";
    case LanguageCode::el_GR:
      return "el-GR";
    case LanguageCode::he_IL:
      return "he-IL";
    case LanguageCode::id_ID:
      return "id-ID";
    case LanguageCode::lv_LV:
      return "lv-LV";
    case LanguageCode::ms_MY:
      return "ms-MY";
    case LanguageCode::ro_RO:
      return "ro-RO";
    case LanguageCode::ru_RU:
      return "ru-RU";
    case LanguageCode::sr_RS:
      return "sr-RS";
    case LanguageCode::sk_SK:
      return "sk-SK";
    case LanguageCode::so_SO:
      return "so-SO";
    case LanguageCode::tl_PH:
      return "tl-PH";
    case LanguageCode::uk_UA:
      return "uk-UA";
    case LanguageCode::vi_VN:
      return "vi-VN";
    case LanguageCode::zu_ZA:
      return "zu-ZA";
    case LanguageCode::am_ET:
      return "am-ET";
    case LanguageCode::be_BY:
      return "be-BY";
    case LanguageCode::bg_BG:
      return "bg-BG";
    case LanguageCode::bn_IN:
      return "bn-IN";
    case LanguageCode::bs_BA:
      return "bs-BA";
    case LanguageCode::ckb_IQ:
      return "ckb-IQ";
    case LanguageCode::ckb_IR:
      return "ckb-IR";
    case LanguageCode::cy_WL:
      return "cy-WL";
    case LanguageCode::es_MX:
      return "es-MX";
    case LanguageCode::et_ET:
      return "et-ET";
    case LanguageCode::fa_AF:
      return "fa-AF";
    case LanguageCode::gu_IN:
      return "gu-IN";
    case LanguageCode::ht_HT:
      return "ht-HT";
    case LanguageCode::hu_HU:
      return "hu-HU";
    case LanguageCode::hy_AM:
      return "hy-AM";
    case LanguageCode::is_IS:
      return "is-IS";
    case LanguageCode::jv_ID:
      return "jv-ID";
    case LanguageCode::ka_GE:
      return "ka-GE";
    case LanguageCode::kab_DZ:
      return "kab-DZ";
    case LanguageCode::kk_KZ:
      return "kk-KZ";
    case LanguageCode::km_KH:
      return "km-KH";
    case LanguageCode::kn_IN:
      return "kn-IN";
    case LanguageCode::lg_IN:
      return "lg-IN";
    case LanguageCode::lt_LT:
      return "lt-LT";
    case LanguageCode::mk_MK:
      return "mk-MK";
    case LanguageCode::ml_IN:
      return "ml-IN";
    case LanguageCode::mr_IN:
      return "mr-IN";
    case LanguageCode::my_MM:
      return "my-MM";
    case LanguageCode::ne_NP:
      return "ne-NP";
    case LanguageCode::or_IN:
      return "or-IN";
    case LanguageCode::pa_IN:
      return "pa-IN";
    case LanguageCode::ps_AF:
      return "ps-AF";
    case LanguageCode::si_LK:
      return "si-LK";
    case LanguageCode::sl_SI:
      return "sl-SI";
    case LanguageCode::sq_AL:
      return "sq-AL";
    case LanguageCode::su_ID:
      return "su-ID";
    case LanguageCode::sw_BI:
      return "sw-BI";
    case LanguageCode::sw_KE:
      return "sw-KE";
    case LanguageCode::sw_RW:
      return "sw-RW";
    case LanguageCode::sw_TZ:
      return "sw-TZ";
    case LanguageCode::sw_UG:
      return "sw-UG";
    case LanguageCode::ta_IN:
      return "ta-IN";
    case LanguageCode::te_IN:
      return "te-IN";
    case LanguageCode::tr_TR:
      return "tr-TR";
    case LanguageCode::uz_UZ:
      return "uz-UZ";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LanguageCodeMapper
}  // namespace Model
}  // namespace TranscribeStreamingService
}  // namespace Aws
