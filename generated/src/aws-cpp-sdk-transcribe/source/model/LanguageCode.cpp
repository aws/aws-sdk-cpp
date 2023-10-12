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

        static constexpr uint32_t af_ZA_HASH = ConstExprHashingUtils::HashString("af-ZA");
        static constexpr uint32_t ar_AE_HASH = ConstExprHashingUtils::HashString("ar-AE");
        static constexpr uint32_t ar_SA_HASH = ConstExprHashingUtils::HashString("ar-SA");
        static constexpr uint32_t da_DK_HASH = ConstExprHashingUtils::HashString("da-DK");
        static constexpr uint32_t de_CH_HASH = ConstExprHashingUtils::HashString("de-CH");
        static constexpr uint32_t de_DE_HASH = ConstExprHashingUtils::HashString("de-DE");
        static constexpr uint32_t en_AB_HASH = ConstExprHashingUtils::HashString("en-AB");
        static constexpr uint32_t en_AU_HASH = ConstExprHashingUtils::HashString("en-AU");
        static constexpr uint32_t en_GB_HASH = ConstExprHashingUtils::HashString("en-GB");
        static constexpr uint32_t en_IE_HASH = ConstExprHashingUtils::HashString("en-IE");
        static constexpr uint32_t en_IN_HASH = ConstExprHashingUtils::HashString("en-IN");
        static constexpr uint32_t en_US_HASH = ConstExprHashingUtils::HashString("en-US");
        static constexpr uint32_t en_WL_HASH = ConstExprHashingUtils::HashString("en-WL");
        static constexpr uint32_t es_ES_HASH = ConstExprHashingUtils::HashString("es-ES");
        static constexpr uint32_t es_US_HASH = ConstExprHashingUtils::HashString("es-US");
        static constexpr uint32_t fa_IR_HASH = ConstExprHashingUtils::HashString("fa-IR");
        static constexpr uint32_t fr_CA_HASH = ConstExprHashingUtils::HashString("fr-CA");
        static constexpr uint32_t fr_FR_HASH = ConstExprHashingUtils::HashString("fr-FR");
        static constexpr uint32_t he_IL_HASH = ConstExprHashingUtils::HashString("he-IL");
        static constexpr uint32_t hi_IN_HASH = ConstExprHashingUtils::HashString("hi-IN");
        static constexpr uint32_t id_ID_HASH = ConstExprHashingUtils::HashString("id-ID");
        static constexpr uint32_t it_IT_HASH = ConstExprHashingUtils::HashString("it-IT");
        static constexpr uint32_t ja_JP_HASH = ConstExprHashingUtils::HashString("ja-JP");
        static constexpr uint32_t ko_KR_HASH = ConstExprHashingUtils::HashString("ko-KR");
        static constexpr uint32_t ms_MY_HASH = ConstExprHashingUtils::HashString("ms-MY");
        static constexpr uint32_t nl_NL_HASH = ConstExprHashingUtils::HashString("nl-NL");
        static constexpr uint32_t pt_BR_HASH = ConstExprHashingUtils::HashString("pt-BR");
        static constexpr uint32_t pt_PT_HASH = ConstExprHashingUtils::HashString("pt-PT");
        static constexpr uint32_t ru_RU_HASH = ConstExprHashingUtils::HashString("ru-RU");
        static constexpr uint32_t ta_IN_HASH = ConstExprHashingUtils::HashString("ta-IN");
        static constexpr uint32_t te_IN_HASH = ConstExprHashingUtils::HashString("te-IN");
        static constexpr uint32_t tr_TR_HASH = ConstExprHashingUtils::HashString("tr-TR");
        static constexpr uint32_t zh_CN_HASH = ConstExprHashingUtils::HashString("zh-CN");
        static constexpr uint32_t zh_TW_HASH = ConstExprHashingUtils::HashString("zh-TW");
        static constexpr uint32_t th_TH_HASH = ConstExprHashingUtils::HashString("th-TH");
        static constexpr uint32_t en_ZA_HASH = ConstExprHashingUtils::HashString("en-ZA");
        static constexpr uint32_t en_NZ_HASH = ConstExprHashingUtils::HashString("en-NZ");
        static constexpr uint32_t vi_VN_HASH = ConstExprHashingUtils::HashString("vi-VN");
        static constexpr uint32_t sv_SE_HASH = ConstExprHashingUtils::HashString("sv-SE");


        LanguageCode GetLanguageCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
