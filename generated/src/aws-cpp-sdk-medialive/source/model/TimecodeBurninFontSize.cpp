/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/TimecodeBurninFontSize.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace TimecodeBurninFontSizeMapper
      {

        static const int EXTRA_SMALL_10_HASH = HashingUtils::HashString("EXTRA_SMALL_10");
        static const int LARGE_48_HASH = HashingUtils::HashString("LARGE_48");
        static const int MEDIUM_32_HASH = HashingUtils::HashString("MEDIUM_32");
        static const int SMALL_16_HASH = HashingUtils::HashString("SMALL_16");


        TimecodeBurninFontSize GetTimecodeBurninFontSizeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXTRA_SMALL_10_HASH)
          {
            return TimecodeBurninFontSize::EXTRA_SMALL_10;
          }
          else if (hashCode == LARGE_48_HASH)
          {
            return TimecodeBurninFontSize::LARGE_48;
          }
          else if (hashCode == MEDIUM_32_HASH)
          {
            return TimecodeBurninFontSize::MEDIUM_32;
          }
          else if (hashCode == SMALL_16_HASH)
          {
            return TimecodeBurninFontSize::SMALL_16;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TimecodeBurninFontSize>(hashCode);
          }

          return TimecodeBurninFontSize::NOT_SET;
        }

        Aws::String GetNameForTimecodeBurninFontSize(TimecodeBurninFontSize enumValue)
        {
          switch(enumValue)
          {
          case TimecodeBurninFontSize::EXTRA_SMALL_10:
            return "EXTRA_SMALL_10";
          case TimecodeBurninFontSize::LARGE_48:
            return "LARGE_48";
          case TimecodeBurninFontSize::MEDIUM_32:
            return "MEDIUM_32";
          case TimecodeBurninFontSize::SMALL_16:
            return "SMALL_16";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TimecodeBurninFontSizeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
