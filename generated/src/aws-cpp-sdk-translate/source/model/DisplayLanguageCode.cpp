/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/DisplayLanguageCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Translate
  {
    namespace Model
    {
      namespace DisplayLanguageCodeMapper
      {

        static const int de_HASH = HashingUtils::HashString("de");
        static const int en_HASH = HashingUtils::HashString("en");
        static const int es_HASH = HashingUtils::HashString("es");
        static const int fr_HASH = HashingUtils::HashString("fr");
        static const int it_HASH = HashingUtils::HashString("it");
        static const int ja_HASH = HashingUtils::HashString("ja");
        static const int ko_HASH = HashingUtils::HashString("ko");
        static const int pt_HASH = HashingUtils::HashString("pt");
        static const int zh_HASH = HashingUtils::HashString("zh");
        static const int zh_TW_HASH = HashingUtils::HashString("zh-TW");


        DisplayLanguageCode GetDisplayLanguageCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == de_HASH)
          {
            return DisplayLanguageCode::de;
          }
          else if (hashCode == en_HASH)
          {
            return DisplayLanguageCode::en;
          }
          else if (hashCode == es_HASH)
          {
            return DisplayLanguageCode::es;
          }
          else if (hashCode == fr_HASH)
          {
            return DisplayLanguageCode::fr;
          }
          else if (hashCode == it_HASH)
          {
            return DisplayLanguageCode::it;
          }
          else if (hashCode == ja_HASH)
          {
            return DisplayLanguageCode::ja;
          }
          else if (hashCode == ko_HASH)
          {
            return DisplayLanguageCode::ko;
          }
          else if (hashCode == pt_HASH)
          {
            return DisplayLanguageCode::pt;
          }
          else if (hashCode == zh_HASH)
          {
            return DisplayLanguageCode::zh;
          }
          else if (hashCode == zh_TW_HASH)
          {
            return DisplayLanguageCode::zh_TW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DisplayLanguageCode>(hashCode);
          }

          return DisplayLanguageCode::NOT_SET;
        }

        Aws::String GetNameForDisplayLanguageCode(DisplayLanguageCode enumValue)
        {
          switch(enumValue)
          {
          case DisplayLanguageCode::NOT_SET:
            return {};
          case DisplayLanguageCode::de:
            return "de";
          case DisplayLanguageCode::en:
            return "en";
          case DisplayLanguageCode::es:
            return "es";
          case DisplayLanguageCode::fr:
            return "fr";
          case DisplayLanguageCode::it:
            return "it";
          case DisplayLanguageCode::ja:
            return "ja";
          case DisplayLanguageCode::ko:
            return "ko";
          case DisplayLanguageCode::pt:
            return "pt";
          case DisplayLanguageCode::zh:
            return "zh";
          case DisplayLanguageCode::zh_TW:
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

      } // namespace DisplayLanguageCodeMapper
    } // namespace Model
  } // namespace Translate
} // namespace Aws
