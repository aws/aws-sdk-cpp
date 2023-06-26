/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/TeletextPageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace TeletextPageTypeMapper
      {

        static const int PAGE_TYPE_INITIAL_HASH = HashingUtils::HashString("PAGE_TYPE_INITIAL");
        static const int PAGE_TYPE_SUBTITLE_HASH = HashingUtils::HashString("PAGE_TYPE_SUBTITLE");
        static const int PAGE_TYPE_ADDL_INFO_HASH = HashingUtils::HashString("PAGE_TYPE_ADDL_INFO");
        static const int PAGE_TYPE_PROGRAM_SCHEDULE_HASH = HashingUtils::HashString("PAGE_TYPE_PROGRAM_SCHEDULE");
        static const int PAGE_TYPE_HEARING_IMPAIRED_SUBTITLE_HASH = HashingUtils::HashString("PAGE_TYPE_HEARING_IMPAIRED_SUBTITLE");


        TeletextPageType GetTeletextPageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PAGE_TYPE_INITIAL_HASH)
          {
            return TeletextPageType::PAGE_TYPE_INITIAL;
          }
          else if (hashCode == PAGE_TYPE_SUBTITLE_HASH)
          {
            return TeletextPageType::PAGE_TYPE_SUBTITLE;
          }
          else if (hashCode == PAGE_TYPE_ADDL_INFO_HASH)
          {
            return TeletextPageType::PAGE_TYPE_ADDL_INFO;
          }
          else if (hashCode == PAGE_TYPE_PROGRAM_SCHEDULE_HASH)
          {
            return TeletextPageType::PAGE_TYPE_PROGRAM_SCHEDULE;
          }
          else if (hashCode == PAGE_TYPE_HEARING_IMPAIRED_SUBTITLE_HASH)
          {
            return TeletextPageType::PAGE_TYPE_HEARING_IMPAIRED_SUBTITLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TeletextPageType>(hashCode);
          }

          return TeletextPageType::NOT_SET;
        }

        Aws::String GetNameForTeletextPageType(TeletextPageType enumValue)
        {
          switch(enumValue)
          {
          case TeletextPageType::PAGE_TYPE_INITIAL:
            return "PAGE_TYPE_INITIAL";
          case TeletextPageType::PAGE_TYPE_SUBTITLE:
            return "PAGE_TYPE_SUBTITLE";
          case TeletextPageType::PAGE_TYPE_ADDL_INFO:
            return "PAGE_TYPE_ADDL_INFO";
          case TeletextPageType::PAGE_TYPE_PROGRAM_SCHEDULE:
            return "PAGE_TYPE_PROGRAM_SCHEDULE";
          case TeletextPageType::PAGE_TYPE_HEARING_IMPAIRED_SUBTITLE:
            return "PAGE_TYPE_HEARING_IMPAIRED_SUBTITLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TeletextPageTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
