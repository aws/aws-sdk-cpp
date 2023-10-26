/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/LanguageCodeString.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SNS
  {
    namespace Model
    {
      namespace LanguageCodeStringMapper
      {

        static const int en_US_HASH = HashingUtils::HashString("en-US");
        static const int en_GB_HASH = HashingUtils::HashString("en-GB");
        static const int es_419_HASH = HashingUtils::HashString("es-419");
        static const int es_ES_HASH = HashingUtils::HashString("es-ES");
        static const int de_DE_HASH = HashingUtils::HashString("de-DE");
        static const int fr_CA_HASH = HashingUtils::HashString("fr-CA");
        static const int fr_FR_HASH = HashingUtils::HashString("fr-FR");
        static const int it_IT_HASH = HashingUtils::HashString("it-IT");
        static const int ja_JP_HASH = HashingUtils::HashString("ja-JP");
        static const int pt_BR_HASH = HashingUtils::HashString("pt-BR");
        static const int kr_KR_HASH = HashingUtils::HashString("kr-KR");
        static const int zh_CN_HASH = HashingUtils::HashString("zh-CN");
        static const int zh_TW_HASH = HashingUtils::HashString("zh-TW");


        LanguageCodeString GetLanguageCodeStringForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == en_US_HASH)
          {
            return LanguageCodeString::en_US;
          }
          else if (hashCode == en_GB_HASH)
          {
            return LanguageCodeString::en_GB;
          }
          else if (hashCode == es_419_HASH)
          {
            return LanguageCodeString::es_419;
          }
          else if (hashCode == es_ES_HASH)
          {
            return LanguageCodeString::es_ES;
          }
          else if (hashCode == de_DE_HASH)
          {
            return LanguageCodeString::de_DE;
          }
          else if (hashCode == fr_CA_HASH)
          {
            return LanguageCodeString::fr_CA;
          }
          else if (hashCode == fr_FR_HASH)
          {
            return LanguageCodeString::fr_FR;
          }
          else if (hashCode == it_IT_HASH)
          {
            return LanguageCodeString::it_IT;
          }
          else if (hashCode == ja_JP_HASH)
          {
            return LanguageCodeString::ja_JP;
          }
          else if (hashCode == pt_BR_HASH)
          {
            return LanguageCodeString::pt_BR;
          }
          else if (hashCode == kr_KR_HASH)
          {
            return LanguageCodeString::kr_KR;
          }
          else if (hashCode == zh_CN_HASH)
          {
            return LanguageCodeString::zh_CN;
          }
          else if (hashCode == zh_TW_HASH)
          {
            return LanguageCodeString::zh_TW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LanguageCodeString>(hashCode);
          }

          return LanguageCodeString::NOT_SET;
        }

        Aws::String GetNameForLanguageCodeString(LanguageCodeString enumValue)
        {
          switch(enumValue)
          {
          case LanguageCodeString::NOT_SET:
            return {};
          case LanguageCodeString::en_US:
            return "en-US";
          case LanguageCodeString::en_GB:
            return "en-GB";
          case LanguageCodeString::es_419:
            return "es-419";
          case LanguageCodeString::es_ES:
            return "es-ES";
          case LanguageCodeString::de_DE:
            return "de-DE";
          case LanguageCodeString::fr_CA:
            return "fr-CA";
          case LanguageCodeString::fr_FR:
            return "fr-FR";
          case LanguageCodeString::it_IT:
            return "it-IT";
          case LanguageCodeString::ja_JP:
            return "ja-JP";
          case LanguageCodeString::pt_BR:
            return "pt-BR";
          case LanguageCodeString::kr_KR:
            return "kr-KR";
          case LanguageCodeString::zh_CN:
            return "zh-CN";
          case LanguageCodeString::zh_TW:
            return "zh-TW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LanguageCodeStringMapper
    } // namespace Model
  } // namespace SNS
} // namespace Aws
