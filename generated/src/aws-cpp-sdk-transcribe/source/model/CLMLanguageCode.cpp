/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/CLMLanguageCode.h>
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
      namespace CLMLanguageCodeMapper
      {

        static constexpr uint32_t en_US_HASH = ConstExprHashingUtils::HashString("en-US");
        static constexpr uint32_t hi_IN_HASH = ConstExprHashingUtils::HashString("hi-IN");
        static constexpr uint32_t es_US_HASH = ConstExprHashingUtils::HashString("es-US");
        static constexpr uint32_t en_GB_HASH = ConstExprHashingUtils::HashString("en-GB");
        static constexpr uint32_t en_AU_HASH = ConstExprHashingUtils::HashString("en-AU");
        static constexpr uint32_t de_DE_HASH = ConstExprHashingUtils::HashString("de-DE");
        static constexpr uint32_t ja_JP_HASH = ConstExprHashingUtils::HashString("ja-JP");


        CLMLanguageCode GetCLMLanguageCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == en_US_HASH)
          {
            return CLMLanguageCode::en_US;
          }
          else if (hashCode == hi_IN_HASH)
          {
            return CLMLanguageCode::hi_IN;
          }
          else if (hashCode == es_US_HASH)
          {
            return CLMLanguageCode::es_US;
          }
          else if (hashCode == en_GB_HASH)
          {
            return CLMLanguageCode::en_GB;
          }
          else if (hashCode == en_AU_HASH)
          {
            return CLMLanguageCode::en_AU;
          }
          else if (hashCode == de_DE_HASH)
          {
            return CLMLanguageCode::de_DE;
          }
          else if (hashCode == ja_JP_HASH)
          {
            return CLMLanguageCode::ja_JP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CLMLanguageCode>(hashCode);
          }

          return CLMLanguageCode::NOT_SET;
        }

        Aws::String GetNameForCLMLanguageCode(CLMLanguageCode enumValue)
        {
          switch(enumValue)
          {
          case CLMLanguageCode::NOT_SET:
            return {};
          case CLMLanguageCode::en_US:
            return "en-US";
          case CLMLanguageCode::hi_IN:
            return "hi-IN";
          case CLMLanguageCode::es_US:
            return "es-US";
          case CLMLanguageCode::en_GB:
            return "en-GB";
          case CLMLanguageCode::en_AU:
            return "en-AU";
          case CLMLanguageCode::de_DE:
            return "de-DE";
          case CLMLanguageCode::ja_JP:
            return "ja-JP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CLMLanguageCodeMapper
    } // namespace Model
  } // namespace TranscribeService
} // namespace Aws
