/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsProgramDateTimeClock.h>
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
      namespace HlsProgramDateTimeClockMapper
      {

        static const int INITIALIZE_FROM_OUTPUT_TIMECODE_HASH = HashingUtils::HashString("INITIALIZE_FROM_OUTPUT_TIMECODE");
        static const int SYSTEM_CLOCK_HASH = HashingUtils::HashString("SYSTEM_CLOCK");


        HlsProgramDateTimeClock GetHlsProgramDateTimeClockForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INITIALIZE_FROM_OUTPUT_TIMECODE_HASH)
          {
            return HlsProgramDateTimeClock::INITIALIZE_FROM_OUTPUT_TIMECODE;
          }
          else if (hashCode == SYSTEM_CLOCK_HASH)
          {
            return HlsProgramDateTimeClock::SYSTEM_CLOCK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsProgramDateTimeClock>(hashCode);
          }

          return HlsProgramDateTimeClock::NOT_SET;
        }

        Aws::String GetNameForHlsProgramDateTimeClock(HlsProgramDateTimeClock enumValue)
        {
          switch(enumValue)
          {
          case HlsProgramDateTimeClock::NOT_SET:
            return {};
          case HlsProgramDateTimeClock::INITIALIZE_FROM_OUTPUT_TIMECODE:
            return "INITIALIZE_FROM_OUTPUT_TIMECODE";
          case HlsProgramDateTimeClock::SYSTEM_CLOCK:
            return "SYSTEM_CLOCK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsProgramDateTimeClockMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
