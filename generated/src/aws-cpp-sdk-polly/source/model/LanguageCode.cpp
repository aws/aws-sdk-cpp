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

        static const int arb_HASH = HashingUtils::HashString("arb");
        static const int cmn_CN_HASH = HashingUtils::HashString("cmn-CN");
        static const int cy_GB_HASH = HashingUtils::HashString("cy-GB");
        static const int da_DK_HASH = HashingUtils::HashString("da-DK");
        static const int de_DE_HASH = HashingUtils::HashString("de-DE");
        static const int en_AU_HASH = HashingUtils::HashString("en-AU");
        static const int en_GB_HASH = HashingUtils::HashString("en-GB");
        static const int en_GB_WLS_HASH = HashingUtils::HashString("en-GB-WLS");
        static const int en_IN_HASH = HashingUtils::HashString("en-IN");
        static const int en_US_HASH = HashingUtils::HashString("en-US");
        static const int es_ES_HASH = HashingUtils::HashString("es-ES");
        static const int es_MX_HASH = HashingUtils::HashString("es-MX");
        static const int es_US_HASH = HashingUtils::HashString("es-US");
        static const int fr_CA_HASH = HashingUtils::HashString("fr-CA");
        static const int fr_FR_HASH = HashingUtils::HashString("fr-FR");
        static const int is_IS_HASH = HashingUtils::HashString("is-IS");
        static const int it_IT_HASH = HashingUtils::HashString("it-IT");
        static const int ja_JP_HASH = HashingUtils::HashString("ja-JP");
        static const int hi_IN_HASH = HashingUtils::HashString("hi-IN");
        static const int ko_KR_HASH = HashingUtils::HashString("ko-KR");
        static const int nb_NO_HASH = HashingUtils::HashString("nb-NO");
        static const int nl_NL_HASH = HashingUtils::HashString("nl-NL");
        static const int pl_PL_HASH = HashingUtils::HashString("pl-PL");
        static const int pt_BR_HASH = HashingUtils::HashString("pt-BR");
        static const int pt_PT_HASH = HashingUtils::HashString("pt-PT");
        static const int ro_RO_HASH = HashingUtils::HashString("ro-RO");
        static const int ru_RU_HASH = HashingUtils::HashString("ru-RU");
        static const int sv_SE_HASH = HashingUtils::HashString("sv-SE");
        static const int tr_TR_HASH = HashingUtils::HashString("tr-TR");
        static const int en_NZ_HASH = HashingUtils::HashString("en-NZ");
        static const int en_ZA_HASH = HashingUtils::HashString("en-ZA");
        static const int ca_ES_HASH = HashingUtils::HashString("ca-ES");
        static const int de_AT_HASH = HashingUtils::HashString("de-AT");
        static const int yue_CN_HASH = HashingUtils::HashString("yue-CN");
        static const int ar_AE_HASH = HashingUtils::HashString("ar-AE");
        static const int fi_FI_HASH = HashingUtils::HashString("fi-FI");


        LanguageCode GetLanguageCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
