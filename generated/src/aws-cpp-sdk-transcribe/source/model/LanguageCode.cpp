/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/LanguageCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace TranscribeService
  {
    namespace Model
    {
      namespace LanguageCodeMapper
      {

        static const int af_ZA_HASH = HashingUtils::HashString("af-ZA");
        static const int ar_AE_HASH = HashingUtils::HashString("ar-AE");
        static const int ar_SA_HASH = HashingUtils::HashString("ar-SA");
        static const int da_DK_HASH = HashingUtils::HashString("da-DK");
        static const int de_CH_HASH = HashingUtils::HashString("de-CH");
        static const int de_DE_HASH = HashingUtils::HashString("de-DE");
        static const int en_AB_HASH = HashingUtils::HashString("en-AB");
        static const int en_AU_HASH = HashingUtils::HashString("en-AU");
        static const int en_GB_HASH = HashingUtils::HashString("en-GB");
        static const int en_IE_HASH = HashingUtils::HashString("en-IE");
        static const int en_IN_HASH = HashingUtils::HashString("en-IN");
        static const int en_US_HASH = HashingUtils::HashString("en-US");
        static const int en_WL_HASH = HashingUtils::HashString("en-WL");
        static const int es_ES_HASH = HashingUtils::HashString("es-ES");
        static const int es_US_HASH = HashingUtils::HashString("es-US");
        static const int fa_IR_HASH = HashingUtils::HashString("fa-IR");
        static const int fr_CA_HASH = HashingUtils::HashString("fr-CA");
        static const int fr_FR_HASH = HashingUtils::HashString("fr-FR");
        static const int he_IL_HASH = HashingUtils::HashString("he-IL");
        static const int hi_IN_HASH = HashingUtils::HashString("hi-IN");
        static const int id_ID_HASH = HashingUtils::HashString("id-ID");
        static const int it_IT_HASH = HashingUtils::HashString("it-IT");
        static const int ja_JP_HASH = HashingUtils::HashString("ja-JP");
        static const int ko_KR_HASH = HashingUtils::HashString("ko-KR");
        static const int ms_MY_HASH = HashingUtils::HashString("ms-MY");
        static const int nl_NL_HASH = HashingUtils::HashString("nl-NL");
        static const int pt_BR_HASH = HashingUtils::HashString("pt-BR");
        static const int pt_PT_HASH = HashingUtils::HashString("pt-PT");
        static const int ru_RU_HASH = HashingUtils::HashString("ru-RU");
        static const int ta_IN_HASH = HashingUtils::HashString("ta-IN");
        static const int te_IN_HASH = HashingUtils::HashString("te-IN");
        static const int tr_TR_HASH = HashingUtils::HashString("tr-TR");
        static const int zh_CN_HASH = HashingUtils::HashString("zh-CN");
        static const int zh_TW_HASH = HashingUtils::HashString("zh-TW");
        static const int th_TH_HASH = HashingUtils::HashString("th-TH");
        static const int en_ZA_HASH = HashingUtils::HashString("en-ZA");
        static const int en_NZ_HASH = HashingUtils::HashString("en-NZ");
        static const int vi_VN_HASH = HashingUtils::HashString("vi-VN");
        static const int sv_SE_HASH = HashingUtils::HashString("sv-SE");
        static const int ab_GE_HASH = HashingUtils::HashString("ab-GE");
        static const int ast_ES_HASH = HashingUtils::HashString("ast-ES");
        static const int az_AZ_HASH = HashingUtils::HashString("az-AZ");
        static const int ba_RU_HASH = HashingUtils::HashString("ba-RU");
        static const int be_BY_HASH = HashingUtils::HashString("be-BY");
        static const int bg_BG_HASH = HashingUtils::HashString("bg-BG");
        static const int bn_IN_HASH = HashingUtils::HashString("bn-IN");
        static const int bs_BA_HASH = HashingUtils::HashString("bs-BA");
        static const int ca_ES_HASH = HashingUtils::HashString("ca-ES");
        static const int ckb_IQ_HASH = HashingUtils::HashString("ckb-IQ");
        static const int ckb_IR_HASH = HashingUtils::HashString("ckb-IR");
        static const int cs_CZ_HASH = HashingUtils::HashString("cs-CZ");
        static const int cy_WL_HASH = HashingUtils::HashString("cy-WL");
        static const int el_GR_HASH = HashingUtils::HashString("el-GR");
        static const int et_ET_HASH = HashingUtils::HashString("et-ET");
        static const int eu_ES_HASH = HashingUtils::HashString("eu-ES");
        static const int fi_FI_HASH = HashingUtils::HashString("fi-FI");
        static const int gl_ES_HASH = HashingUtils::HashString("gl-ES");
        static const int gu_IN_HASH = HashingUtils::HashString("gu-IN");
        static const int ha_NG_HASH = HashingUtils::HashString("ha-NG");
        static const int hr_HR_HASH = HashingUtils::HashString("hr-HR");
        static const int hu_HU_HASH = HashingUtils::HashString("hu-HU");
        static const int hy_AM_HASH = HashingUtils::HashString("hy-AM");
        static const int is_IS_HASH = HashingUtils::HashString("is-IS");
        static const int ka_GE_HASH = HashingUtils::HashString("ka-GE");
        static const int kab_DZ_HASH = HashingUtils::HashString("kab-DZ");
        static const int kk_KZ_HASH = HashingUtils::HashString("kk-KZ");
        static const int kn_IN_HASH = HashingUtils::HashString("kn-IN");
        static const int ky_KG_HASH = HashingUtils::HashString("ky-KG");
        static const int lg_IN_HASH = HashingUtils::HashString("lg-IN");
        static const int lt_LT_HASH = HashingUtils::HashString("lt-LT");
        static const int lv_LV_HASH = HashingUtils::HashString("lv-LV");
        static const int mhr_RU_HASH = HashingUtils::HashString("mhr-RU");
        static const int mi_NZ_HASH = HashingUtils::HashString("mi-NZ");
        static const int mk_MK_HASH = HashingUtils::HashString("mk-MK");
        static const int ml_IN_HASH = HashingUtils::HashString("ml-IN");
        static const int mn_MN_HASH = HashingUtils::HashString("mn-MN");
        static const int mr_IN_HASH = HashingUtils::HashString("mr-IN");
        static const int mt_MT_HASH = HashingUtils::HashString("mt-MT");
        static const int no_NO_HASH = HashingUtils::HashString("no-NO");
        static const int or_IN_HASH = HashingUtils::HashString("or-IN");
        static const int pa_IN_HASH = HashingUtils::HashString("pa-IN");
        static const int pl_PL_HASH = HashingUtils::HashString("pl-PL");
        static const int ps_AF_HASH = HashingUtils::HashString("ps-AF");
        static const int ro_RO_HASH = HashingUtils::HashString("ro-RO");
        static const int rw_RW_HASH = HashingUtils::HashString("rw-RW");
        static const int si_LK_HASH = HashingUtils::HashString("si-LK");
        static const int sk_SK_HASH = HashingUtils::HashString("sk-SK");
        static const int sl_SI_HASH = HashingUtils::HashString("sl-SI");
        static const int so_SO_HASH = HashingUtils::HashString("so-SO");
        static const int sr_RS_HASH = HashingUtils::HashString("sr-RS");
        static const int su_ID_HASH = HashingUtils::HashString("su-ID");
        static const int sw_BI_HASH = HashingUtils::HashString("sw-BI");
        static const int sw_KE_HASH = HashingUtils::HashString("sw-KE");
        static const int sw_RW_HASH = HashingUtils::HashString("sw-RW");
        static const int sw_TZ_HASH = HashingUtils::HashString("sw-TZ");
        static const int sw_UG_HASH = HashingUtils::HashString("sw-UG");
        static const int tl_PH_HASH = HashingUtils::HashString("tl-PH");
        static const int tt_RU_HASH = HashingUtils::HashString("tt-RU");
        static const int ug_CN_HASH = HashingUtils::HashString("ug-CN");
        static const int uk_UA_HASH = HashingUtils::HashString("uk-UA");
        static const int uz_UZ_HASH = HashingUtils::HashString("uz-UZ");
        static const int wo_SN_HASH = HashingUtils::HashString("wo-SN");
        static const int zu_ZA_HASH = HashingUtils::HashString("zu-ZA");


        LanguageCode GetLanguageCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == af_ZA_HASH)
          {
            return LanguageCode::af_ZA;
          }
          else if (hashCode == ar_AE_HASH)
          {
            return LanguageCode::ar_AE;
          }
          else if (hashCode == ar_SA_HASH)
          {
            return LanguageCode::ar_SA;
          }
          else if (hashCode == da_DK_HASH)
          {
            return LanguageCode::da_DK;
          }
          else if (hashCode == de_CH_HASH)
          {
            return LanguageCode::de_CH;
          }
          else if (hashCode == de_DE_HASH)
          {
            return LanguageCode::de_DE;
          }
          else if (hashCode == en_AB_HASH)
          {
            return LanguageCode::en_AB;
          }
          else if (hashCode == en_AU_HASH)
          {
            return LanguageCode::en_AU;
          }
          else if (hashCode == en_GB_HASH)
          {
            return LanguageCode::en_GB;
          }
          else if (hashCode == en_IE_HASH)
          {
            return LanguageCode::en_IE;
          }
          else if (hashCode == en_IN_HASH)
          {
            return LanguageCode::en_IN;
          }
          else if (hashCode == en_US_HASH)
          {
            return LanguageCode::en_US;
          }
          else if (hashCode == en_WL_HASH)
          {
            return LanguageCode::en_WL;
          }
          else if (hashCode == es_ES_HASH)
          {
            return LanguageCode::es_ES;
          }
          else if (hashCode == es_US_HASH)
          {
            return LanguageCode::es_US;
          }
          else if (hashCode == fa_IR_HASH)
          {
            return LanguageCode::fa_IR;
          }
          else if (hashCode == fr_CA_HASH)
          {
            return LanguageCode::fr_CA;
          }
          else if (hashCode == fr_FR_HASH)
          {
            return LanguageCode::fr_FR;
          }
          else if (hashCode == he_IL_HASH)
          {
            return LanguageCode::he_IL;
          }
          else if (hashCode == hi_IN_HASH)
          {
            return LanguageCode::hi_IN;
          }
          else if (hashCode == id_ID_HASH)
          {
            return LanguageCode::id_ID;
          }
          else if (hashCode == it_IT_HASH)
          {
            return LanguageCode::it_IT;
          }
          else if (hashCode == ja_JP_HASH)
          {
            return LanguageCode::ja_JP;
          }
          else if (hashCode == ko_KR_HASH)
          {
            return LanguageCode::ko_KR;
          }
          else if (hashCode == ms_MY_HASH)
          {
            return LanguageCode::ms_MY;
          }
          else if (hashCode == nl_NL_HASH)
          {
            return LanguageCode::nl_NL;
          }
          else if (hashCode == pt_BR_HASH)
          {
            return LanguageCode::pt_BR;
          }
          else if (hashCode == pt_PT_HASH)
          {
            return LanguageCode::pt_PT;
          }
          else if (hashCode == ru_RU_HASH)
          {
            return LanguageCode::ru_RU;
          }
          else if (hashCode == ta_IN_HASH)
          {
            return LanguageCode::ta_IN;
          }
          else if (hashCode == te_IN_HASH)
          {
            return LanguageCode::te_IN;
          }
          else if (hashCode == tr_TR_HASH)
          {
            return LanguageCode::tr_TR;
          }
          else if (hashCode == zh_CN_HASH)
          {
            return LanguageCode::zh_CN;
          }
          else if (hashCode == zh_TW_HASH)
          {
            return LanguageCode::zh_TW;
          }
          else if (hashCode == th_TH_HASH)
          {
            return LanguageCode::th_TH;
          }
          else if (hashCode == en_ZA_HASH)
          {
            return LanguageCode::en_ZA;
          }
          else if (hashCode == en_NZ_HASH)
          {
            return LanguageCode::en_NZ;
          }
          else if (hashCode == vi_VN_HASH)
          {
            return LanguageCode::vi_VN;
          }
          else if (hashCode == sv_SE_HASH)
          {
            return LanguageCode::sv_SE;
          }
          else if (hashCode == ab_GE_HASH)
          {
            return LanguageCode::ab_GE;
          }
          else if (hashCode == ast_ES_HASH)
          {
            return LanguageCode::ast_ES;
          }
          else if (hashCode == az_AZ_HASH)
          {
            return LanguageCode::az_AZ;
          }
          else if (hashCode == ba_RU_HASH)
          {
            return LanguageCode::ba_RU;
          }
          else if (hashCode == be_BY_HASH)
          {
            return LanguageCode::be_BY;
          }
          else if (hashCode == bg_BG_HASH)
          {
            return LanguageCode::bg_BG;
          }
          else if (hashCode == bn_IN_HASH)
          {
            return LanguageCode::bn_IN;
          }
          else if (hashCode == bs_BA_HASH)
          {
            return LanguageCode::bs_BA;
          }
          else if (hashCode == ca_ES_HASH)
          {
            return LanguageCode::ca_ES;
          }
          else if (hashCode == ckb_IQ_HASH)
          {
            return LanguageCode::ckb_IQ;
          }
          else if (hashCode == ckb_IR_HASH)
          {
            return LanguageCode::ckb_IR;
          }
          else if (hashCode == cs_CZ_HASH)
          {
            return LanguageCode::cs_CZ;
          }
          else if (hashCode == cy_WL_HASH)
          {
            return LanguageCode::cy_WL;
          }
          else if (hashCode == el_GR_HASH)
          {
            return LanguageCode::el_GR;
          }
          else if (hashCode == et_ET_HASH)
          {
            return LanguageCode::et_ET;
          }
          else if (hashCode == eu_ES_HASH)
          {
            return LanguageCode::eu_ES;
          }
          else if (hashCode == fi_FI_HASH)
          {
            return LanguageCode::fi_FI;
          }
          else if (hashCode == gl_ES_HASH)
          {
            return LanguageCode::gl_ES;
          }
          else if (hashCode == gu_IN_HASH)
          {
            return LanguageCode::gu_IN;
          }
          else if (hashCode == ha_NG_HASH)
          {
            return LanguageCode::ha_NG;
          }
          else if (hashCode == hr_HR_HASH)
          {
            return LanguageCode::hr_HR;
          }
          else if (hashCode == hu_HU_HASH)
          {
            return LanguageCode::hu_HU;
          }
          else if (hashCode == hy_AM_HASH)
          {
            return LanguageCode::hy_AM;
          }
          else if (hashCode == is_IS_HASH)
          {
            return LanguageCode::is_IS;
          }
          else if (hashCode == ka_GE_HASH)
          {
            return LanguageCode::ka_GE;
          }
          else if (hashCode == kab_DZ_HASH)
          {
            return LanguageCode::kab_DZ;
          }
          else if (hashCode == kk_KZ_HASH)
          {
            return LanguageCode::kk_KZ;
          }
          else if (hashCode == kn_IN_HASH)
          {
            return LanguageCode::kn_IN;
          }
          else if (hashCode == ky_KG_HASH)
          {
            return LanguageCode::ky_KG;
          }
          else if (hashCode == lg_IN_HASH)
          {
            return LanguageCode::lg_IN;
          }
          else if (hashCode == lt_LT_HASH)
          {
            return LanguageCode::lt_LT;
          }
          else if (hashCode == lv_LV_HASH)
          {
            return LanguageCode::lv_LV;
          }
          else if (hashCode == mhr_RU_HASH)
          {
            return LanguageCode::mhr_RU;
          }
          else if (hashCode == mi_NZ_HASH)
          {
            return LanguageCode::mi_NZ;
          }
          else if (hashCode == mk_MK_HASH)
          {
            return LanguageCode::mk_MK;
          }
          else if (hashCode == ml_IN_HASH)
          {
            return LanguageCode::ml_IN;
          }
          else if (hashCode == mn_MN_HASH)
          {
            return LanguageCode::mn_MN;
          }
          else if (hashCode == mr_IN_HASH)
          {
            return LanguageCode::mr_IN;
          }
          else if (hashCode == mt_MT_HASH)
          {
            return LanguageCode::mt_MT;
          }
          else if (hashCode == no_NO_HASH)
          {
            return LanguageCode::no_NO;
          }
          else if (hashCode == or_IN_HASH)
          {
            return LanguageCode::or_IN;
          }
          else if (hashCode == pa_IN_HASH)
          {
            return LanguageCode::pa_IN;
          }
          else if (hashCode == pl_PL_HASH)
          {
            return LanguageCode::pl_PL;
          }
          else if (hashCode == ps_AF_HASH)
          {
            return LanguageCode::ps_AF;
          }
          else if (hashCode == ro_RO_HASH)
          {
            return LanguageCode::ro_RO;
          }
          else if (hashCode == rw_RW_HASH)
          {
            return LanguageCode::rw_RW;
          }
          else if (hashCode == si_LK_HASH)
          {
            return LanguageCode::si_LK;
          }
          else if (hashCode == sk_SK_HASH)
          {
            return LanguageCode::sk_SK;
          }
          else if (hashCode == sl_SI_HASH)
          {
            return LanguageCode::sl_SI;
          }
          else if (hashCode == so_SO_HASH)
          {
            return LanguageCode::so_SO;
          }
          else if (hashCode == sr_RS_HASH)
          {
            return LanguageCode::sr_RS;
          }
          else if (hashCode == su_ID_HASH)
          {
            return LanguageCode::su_ID;
          }
          else if (hashCode == sw_BI_HASH)
          {
            return LanguageCode::sw_BI;
          }
          else if (hashCode == sw_KE_HASH)
          {
            return LanguageCode::sw_KE;
          }
          else if (hashCode == sw_RW_HASH)
          {
            return LanguageCode::sw_RW;
          }
          else if (hashCode == sw_TZ_HASH)
          {
            return LanguageCode::sw_TZ;
          }
          else if (hashCode == sw_UG_HASH)
          {
            return LanguageCode::sw_UG;
          }
          else if (hashCode == tl_PH_HASH)
          {
            return LanguageCode::tl_PH;
          }
          else if (hashCode == tt_RU_HASH)
          {
            return LanguageCode::tt_RU;
          }
          else if (hashCode == ug_CN_HASH)
          {
            return LanguageCode::ug_CN;
          }
          else if (hashCode == uk_UA_HASH)
          {
            return LanguageCode::uk_UA;
          }
          else if (hashCode == uz_UZ_HASH)
          {
            return LanguageCode::uz_UZ;
          }
          else if (hashCode == wo_SN_HASH)
          {
            return LanguageCode::wo_SN;
          }
          else if (hashCode == zu_ZA_HASH)
          {
            return LanguageCode::zu_ZA;
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
          switch(enumValue)
          {
          case LanguageCode::NOT_SET:
            return {};
          case LanguageCode::af_ZA:
            return "af-ZA";
          case LanguageCode::ar_AE:
            return "ar-AE";
          case LanguageCode::ar_SA:
            return "ar-SA";
          case LanguageCode::da_DK:
            return "da-DK";
          case LanguageCode::de_CH:
            return "de-CH";
          case LanguageCode::de_DE:
            return "de-DE";
          case LanguageCode::en_AB:
            return "en-AB";
          case LanguageCode::en_AU:
            return "en-AU";
          case LanguageCode::en_GB:
            return "en-GB";
          case LanguageCode::en_IE:
            return "en-IE";
          case LanguageCode::en_IN:
            return "en-IN";
          case LanguageCode::en_US:
            return "en-US";
          case LanguageCode::en_WL:
            return "en-WL";
          case LanguageCode::es_ES:
            return "es-ES";
          case LanguageCode::es_US:
            return "es-US";
          case LanguageCode::fa_IR:
            return "fa-IR";
          case LanguageCode::fr_CA:
            return "fr-CA";
          case LanguageCode::fr_FR:
            return "fr-FR";
          case LanguageCode::he_IL:
            return "he-IL";
          case LanguageCode::hi_IN:
            return "hi-IN";
          case LanguageCode::id_ID:
            return "id-ID";
          case LanguageCode::it_IT:
            return "it-IT";
          case LanguageCode::ja_JP:
            return "ja-JP";
          case LanguageCode::ko_KR:
            return "ko-KR";
          case LanguageCode::ms_MY:
            return "ms-MY";
          case LanguageCode::nl_NL:
            return "nl-NL";
          case LanguageCode::pt_BR:
            return "pt-BR";
          case LanguageCode::pt_PT:
            return "pt-PT";
          case LanguageCode::ru_RU:
            return "ru-RU";
          case LanguageCode::ta_IN:
            return "ta-IN";
          case LanguageCode::te_IN:
            return "te-IN";
          case LanguageCode::tr_TR:
            return "tr-TR";
          case LanguageCode::zh_CN:
            return "zh-CN";
          case LanguageCode::zh_TW:
            return "zh-TW";
          case LanguageCode::th_TH:
            return "th-TH";
          case LanguageCode::en_ZA:
            return "en-ZA";
          case LanguageCode::en_NZ:
            return "en-NZ";
          case LanguageCode::vi_VN:
            return "vi-VN";
          case LanguageCode::sv_SE:
            return "sv-SE";
          case LanguageCode::ab_GE:
            return "ab-GE";
          case LanguageCode::ast_ES:
            return "ast-ES";
          case LanguageCode::az_AZ:
            return "az-AZ";
          case LanguageCode::ba_RU:
            return "ba-RU";
          case LanguageCode::be_BY:
            return "be-BY";
          case LanguageCode::bg_BG:
            return "bg-BG";
          case LanguageCode::bn_IN:
            return "bn-IN";
          case LanguageCode::bs_BA:
            return "bs-BA";
          case LanguageCode::ca_ES:
            return "ca-ES";
          case LanguageCode::ckb_IQ:
            return "ckb-IQ";
          case LanguageCode::ckb_IR:
            return "ckb-IR";
          case LanguageCode::cs_CZ:
            return "cs-CZ";
          case LanguageCode::cy_WL:
            return "cy-WL";
          case LanguageCode::el_GR:
            return "el-GR";
          case LanguageCode::et_ET:
            return "et-ET";
          case LanguageCode::eu_ES:
            return "eu-ES";
          case LanguageCode::fi_FI:
            return "fi-FI";
          case LanguageCode::gl_ES:
            return "gl-ES";
          case LanguageCode::gu_IN:
            return "gu-IN";
          case LanguageCode::ha_NG:
            return "ha-NG";
          case LanguageCode::hr_HR:
            return "hr-HR";
          case LanguageCode::hu_HU:
            return "hu-HU";
          case LanguageCode::hy_AM:
            return "hy-AM";
          case LanguageCode::is_IS:
            return "is-IS";
          case LanguageCode::ka_GE:
            return "ka-GE";
          case LanguageCode::kab_DZ:
            return "kab-DZ";
          case LanguageCode::kk_KZ:
            return "kk-KZ";
          case LanguageCode::kn_IN:
            return "kn-IN";
          case LanguageCode::ky_KG:
            return "ky-KG";
          case LanguageCode::lg_IN:
            return "lg-IN";
          case LanguageCode::lt_LT:
            return "lt-LT";
          case LanguageCode::lv_LV:
            return "lv-LV";
          case LanguageCode::mhr_RU:
            return "mhr-RU";
          case LanguageCode::mi_NZ:
            return "mi-NZ";
          case LanguageCode::mk_MK:
            return "mk-MK";
          case LanguageCode::ml_IN:
            return "ml-IN";
          case LanguageCode::mn_MN:
            return "mn-MN";
          case LanguageCode::mr_IN:
            return "mr-IN";
          case LanguageCode::mt_MT:
            return "mt-MT";
          case LanguageCode::no_NO:
            return "no-NO";
          case LanguageCode::or_IN:
            return "or-IN";
          case LanguageCode::pa_IN:
            return "pa-IN";
          case LanguageCode::pl_PL:
            return "pl-PL";
          case LanguageCode::ps_AF:
            return "ps-AF";
          case LanguageCode::ro_RO:
            return "ro-RO";
          case LanguageCode::rw_RW:
            return "rw-RW";
          case LanguageCode::si_LK:
            return "si-LK";
          case LanguageCode::sk_SK:
            return "sk-SK";
          case LanguageCode::sl_SI:
            return "sl-SI";
          case LanguageCode::so_SO:
            return "so-SO";
          case LanguageCode::sr_RS:
            return "sr-RS";
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
          case LanguageCode::tl_PH:
            return "tl-PH";
          case LanguageCode::tt_RU:
            return "tt-RU";
          case LanguageCode::ug_CN:
            return "ug-CN";
          case LanguageCode::uk_UA:
            return "uk-UA";
          case LanguageCode::uz_UZ:
            return "uz-UZ";
          case LanguageCode::wo_SN:
            return "wo-SN";
          case LanguageCode::zu_ZA:
            return "zu-ZA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LanguageCodeMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws
