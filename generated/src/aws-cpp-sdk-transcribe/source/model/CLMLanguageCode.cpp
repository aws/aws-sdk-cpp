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

        static const int en_US_HASH = HashingUtils::HashString("en-US");
        static const int hi_IN_HASH = HashingUtils::HashString("hi-IN");
        static const int es_US_HASH = HashingUtils::HashString("es-US");
        static const int en_GB_HASH = HashingUtils::HashString("en-GB");
        static const int en_AU_HASH = HashingUtils::HashString("en-AU");
        static const int de_DE_HASH = HashingUtils::HashString("de-DE");
        static const int ja_JP_HASH = HashingUtils::HashString("ja-JP");


        CLMLanguageCode GetCLMLanguageCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
