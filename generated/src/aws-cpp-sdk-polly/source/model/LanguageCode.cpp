/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/polly/model/LanguageCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Polly
  {
    namespace Model
    {
      namespace LanguageCodeMapper
      {

        static constexpr uint32_t arb_HASH = ConstExprHashingUtils::HashString("arb");
        static constexpr uint32_t cmn_CN_HASH = ConstExprHashingUtils::HashString("cmn-CN");
        static constexpr uint32_t cy_GB_HASH = ConstExprHashingUtils::HashString("cy-GB");
        static constexpr uint32_t da_DK_HASH = ConstExprHashingUtils::HashString("da-DK");
        static constexpr uint32_t de_DE_HASH = ConstExprHashingUtils::HashString("de-DE");
        static constexpr uint32_t en_AU_HASH = ConstExprHashingUtils::HashString("en-AU");
        static constexpr uint32_t en_GB_HASH = ConstExprHashingUtils::HashString("en-GB");
        static constexpr uint32_t en_GB_WLS_HASH = ConstExprHashingUtils::HashString("en-GB-WLS");
        static constexpr uint32_t en_IN_HASH = ConstExprHashingUtils::HashString("en-IN");
        static constexpr uint32_t en_US_HASH = ConstExprHashingUtils::HashString("en-US");
        static constexpr uint32_t es_ES_HASH = ConstExprHashingUtils::HashString("es-ES");
        static constexpr uint32_t es_MX_HASH = ConstExprHashingUtils::HashString("es-MX");
        static constexpr uint32_t es_US_HASH = ConstExprHashingUtils::HashString("es-US");
        static constexpr uint32_t fr_CA_HASH = ConstExprHashingUtils::HashString("fr-CA");
        static constexpr uint32_t fr_FR_HASH = ConstExprHashingUtils::HashString("fr-FR");
        static constexpr uint32_t is_IS_HASH = ConstExprHashingUtils::HashString("is-IS");
        static constexpr uint32_t it_IT_HASH = ConstExprHashingUtils::HashString("it-IT");
        static constexpr uint32_t ja_JP_HASH = ConstExprHashingUtils::HashString("ja-JP");
        static constexpr uint32_t hi_IN_HASH = ConstExprHashingUtils::HashString("hi-IN");
        static constexpr uint32_t ko_KR_HASH = ConstExprHashingUtils::HashString("ko-KR");
        static constexpr uint32_t nb_NO_HASH = ConstExprHashingUtils::HashString("nb-NO");
        static constexpr uint32_t nl_NL_HASH = ConstExprHashingUtils::HashString("nl-NL");
        static constexpr uint32_t pl_PL_HASH = ConstExprHashingUtils::HashString("pl-PL");
        static constexpr uint32_t pt_BR_HASH = ConstExprHashingUtils::HashString("pt-BR");
        static constexpr uint32_t pt_PT_HASH = ConstExprHashingUtils::HashString("pt-PT");
        static constexpr uint32_t ro_RO_HASH = ConstExprHashingUtils::HashString("ro-RO");
        static constexpr uint32_t ru_RU_HASH = ConstExprHashingUtils::HashString("ru-RU");
        static constexpr uint32_t sv_SE_HASH = ConstExprHashingUtils::HashString("sv-SE");
        static constexpr uint32_t tr_TR_HASH = ConstExprHashingUtils::HashString("tr-TR");
        static constexpr uint32_t en_NZ_HASH = ConstExprHashingUtils::HashString("en-NZ");
        static constexpr uint32_t en_ZA_HASH = ConstExprHashingUtils::HashString("en-ZA");
        static constexpr uint32_t ca_ES_HASH = ConstExprHashingUtils::HashString("ca-ES");
        static constexpr uint32_t de_AT_HASH = ConstExprHashingUtils::HashString("de-AT");
        static constexpr uint32_t yue_CN_HASH = ConstExprHashingUtils::HashString("yue-CN");
        static constexpr uint32_t ar_AE_HASH = ConstExprHashingUtils::HashString("ar-AE");
        static constexpr uint32_t fi_FI_HASH = ConstExprHashingUtils::HashString("fi-FI");
        static constexpr uint32_t en_IE_HASH = ConstExprHashingUtils::HashString("en-IE");
        static constexpr uint32_t nl_BE_HASH = ConstExprHashingUtils::HashString("nl-BE");
        static constexpr uint32_t fr_BE_HASH = ConstExprHashingUtils::HashString("fr-BE");


        LanguageCode GetLanguageCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == arb_HASH)
          {
            return LanguageCode::arb;
          }
          else if (hashCode == cmn_CN_HASH)
          {
            return LanguageCode::cmn_CN;
          }
          else if (hashCode == cy_GB_HASH)
          {
            return LanguageCode::cy_GB;
          }
          else if (hashCode == da_DK_HASH)
          {
            return LanguageCode::da_DK;
          }
          else if (hashCode == de_DE_HASH)
          {
            return LanguageCode::de_DE;
          }
          else if (hashCode == en_AU_HASH)
          {
            return LanguageCode::en_AU;
          }
          else if (hashCode == en_GB_HASH)
          {
            return LanguageCode::en_GB;
          }
          else if (hashCode == en_GB_WLS_HASH)
          {
            return LanguageCode::en_GB_WLS;
          }
          else if (hashCode == en_IN_HASH)
          {
            return LanguageCode::en_IN;
          }
          else if (hashCode == en_US_HASH)
          {
            return LanguageCode::en_US;
          }
          else if (hashCode == es_ES_HASH)
          {
            return LanguageCode::es_ES;
          }
          else if (hashCode == es_MX_HASH)
          {
            return LanguageCode::es_MX;
          }
          else if (hashCode == es_US_HASH)
          {
            return LanguageCode::es_US;
          }
          else if (hashCode == fr_CA_HASH)
          {
            return LanguageCode::fr_CA;
          }
          else if (hashCode == fr_FR_HASH)
          {
            return LanguageCode::fr_FR;
          }
          else if (hashCode == is_IS_HASH)
          {
            return LanguageCode::is_IS;
          }
          else if (hashCode == it_IT_HASH)
          {
            return LanguageCode::it_IT;
          }
          else if (hashCode == ja_JP_HASH)
          {
            return LanguageCode::ja_JP;
          }
          else if (hashCode == hi_IN_HASH)
          {
            return LanguageCode::hi_IN;
          }
          else if (hashCode == ko_KR_HASH)
          {
            return LanguageCode::ko_KR;
          }
          else if (hashCode == nb_NO_HASH)
          {
            return LanguageCode::nb_NO;
          }
          else if (hashCode == nl_NL_HASH)
          {
            return LanguageCode::nl_NL;
          }
          else if (hashCode == pl_PL_HASH)
          {
            return LanguageCode::pl_PL;
          }
          else if (hashCode == pt_BR_HASH)
          {
            return LanguageCode::pt_BR;
          }
          else if (hashCode == pt_PT_HASH)
          {
            return LanguageCode::pt_PT;
          }
          else if (hashCode == ro_RO_HASH)
          {
            return LanguageCode::ro_RO;
          }
          else if (hashCode == ru_RU_HASH)
          {
            return LanguageCode::ru_RU;
          }
          else if (hashCode == sv_SE_HASH)
          {
            return LanguageCode::sv_SE;
          }
          else if (hashCode == tr_TR_HASH)
          {
            return LanguageCode::tr_TR;
          }
          else if (hashCode == en_NZ_HASH)
          {
            return LanguageCode::en_NZ;
          }
          else if (hashCode == en_ZA_HASH)
          {
            return LanguageCode::en_ZA;
          }
          else if (hashCode == ca_ES_HASH)
          {
            return LanguageCode::ca_ES;
          }
          else if (hashCode == de_AT_HASH)
          {
            return LanguageCode::de_AT;
          }
          else if (hashCode == yue_CN_HASH)
          {
            return LanguageCode::yue_CN;
          }
          else if (hashCode == ar_AE_HASH)
          {
            return LanguageCode::ar_AE;
          }
          else if (hashCode == fi_FI_HASH)
          {
            return LanguageCode::fi_FI;
          }
          else if (hashCode == en_IE_HASH)
          {
            return LanguageCode::en_IE;
          }
          else if (hashCode == nl_BE_HASH)
          {
            return LanguageCode::nl_BE;
          }
          else if (hashCode == fr_BE_HASH)
          {
            return LanguageCode::fr_BE;
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
          case LanguageCode::arb:
            return "arb";
          case LanguageCode::cmn_CN:
            return "cmn-CN";
          case LanguageCode::cy_GB:
            return "cy-GB";
          case LanguageCode::da_DK:
            return "da-DK";
          case LanguageCode::de_DE:
            return "de-DE";
          case LanguageCode::en_AU:
            return "en-AU";
          case LanguageCode::en_GB:
            return "en-GB";
          case LanguageCode::en_GB_WLS:
            return "en-GB-WLS";
          case LanguageCode::en_IN:
            return "en-IN";
          case LanguageCode::en_US:
            return "en-US";
          case LanguageCode::es_ES:
            return "es-ES";
          case LanguageCode::es_MX:
            return "es-MX";
          case LanguageCode::es_US:
            return "es-US";
          case LanguageCode::fr_CA:
            return "fr-CA";
          case LanguageCode::fr_FR:
            return "fr-FR";
          case LanguageCode::is_IS:
            return "is-IS";
          case LanguageCode::it_IT:
            return "it-IT";
          case LanguageCode::ja_JP:
            return "ja-JP";
          case LanguageCode::hi_IN:
            return "hi-IN";
          case LanguageCode::ko_KR:
            return "ko-KR";
          case LanguageCode::nb_NO:
            return "nb-NO";
          case LanguageCode::nl_NL:
            return "nl-NL";
          case LanguageCode::pl_PL:
            return "pl-PL";
          case LanguageCode::pt_BR:
            return "pt-BR";
          case LanguageCode::pt_PT:
            return "pt-PT";
          case LanguageCode::ro_RO:
            return "ro-RO";
          case LanguageCode::ru_RU:
            return "ru-RU";
          case LanguageCode::sv_SE:
            return "sv-SE";
          case LanguageCode::tr_TR:
            return "tr-TR";
          case LanguageCode::en_NZ:
            return "en-NZ";
          case LanguageCode::en_ZA:
            return "en-ZA";
          case LanguageCode::ca_ES:
            return "ca-ES";
          case LanguageCode::de_AT:
            return "de-AT";
          case LanguageCode::yue_CN:
            return "yue-CN";
          case LanguageCode::ar_AE:
            return "ar-AE";
          case LanguageCode::fi_FI:
            return "fi-FI";
          case LanguageCode::en_IE:
            return "en-IE";
          case LanguageCode::nl_BE:
            return "nl-BE";
          case LanguageCode::fr_BE:
            return "fr-BE";
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
  } // namespace Polly
} // namespace Aws
