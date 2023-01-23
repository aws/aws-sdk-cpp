/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/StatusUpdateInterval.h>
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
      namespace StatusUpdateIntervalMapper
      {

        static const int SECONDS_10_HASH = HashingUtils::HashString("SECONDS_10");
        static const int SECONDS_12_HASH = HashingUtils::HashString("SECONDS_12");
        static const int SECONDS_15_HASH = HashingUtils::HashString("SECONDS_15");
        static const int SECONDS_20_HASH = HashingUtils::HashString("SECONDS_20");
        static const int SECONDS_30_HASH = HashingUtils::HashString("SECONDS_30");
        static const int SECONDS_60_HASH = HashingUtils::HashString("SECONDS_60");
        static const int SECONDS_120_HASH = HashingUtils::HashString("SECONDS_120");
        static const int SECONDS_180_HASH = HashingUtils::HashString("SECONDS_180");
        static const int SECONDS_240_HASH = HashingUtils::HashString("SECONDS_240");
        static const int SECONDS_300_HASH = HashingUtils::HashString("SECONDS_300");
        static const int SECONDS_360_HASH = HashingUtils::HashString("SECONDS_360");
        static const int SECONDS_420_HASH = HashingUtils::HashString("SECONDS_420");
        static const int SECONDS_480_HASH = HashingUtils::HashString("SECONDS_480");
        static const int SECONDS_540_HASH = HashingUtils::HashString("SECONDS_540");
        static const int SECONDS_600_HASH = HashingUtils::HashString("SECONDS_600");


        StatusUpdateInterval GetStatusUpdateIntervalForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SECONDS_10_HASH)
          {
            return StatusUpdateInterval::SECONDS_10;
          }
          else if (hashCode == SECONDS_12_HASH)
          {
            return StatusUpdateInterval::SECONDS_12;
          }
          else if (hashCode == SECONDS_15_HASH)
          {
            return StatusUpdateInterval::SECONDS_15;
          }
          else if (hashCode == SECONDS_20_HASH)
          {
            return StatusUpdateInterval::SECONDS_20;
          }
          else if (hashCode == SECONDS_30_HASH)
          {
            return StatusUpdateInterval::SECONDS_30;
          }
          else if (hashCode == SECONDS_60_HASH)
          {
            return StatusUpdateInterval::SECONDS_60;
          }
          else if (hashCode == SECONDS_120_HASH)
          {
            return StatusUpdateInterval::SECONDS_120;
          }
          else if (hashCode == SECONDS_180_HASH)
          {
            return StatusUpdateInterval::SECONDS_180;
          }
          else if (hashCode == SECONDS_240_HASH)
          {
            return StatusUpdateInterval::SECONDS_240;
          }
          else if (hashCode == SECONDS_300_HASH)
          {
            return StatusUpdateInterval::SECONDS_300;
          }
          else if (hashCode == SECONDS_360_HASH)
          {
            return StatusUpdateInterval::SECONDS_360;
          }
          else if (hashCode == SECONDS_420_HASH)
          {
            return StatusUpdateInterval::SECONDS_420;
          }
          else if (hashCode == SECONDS_480_HASH)
          {
            return StatusUpdateInterval::SECONDS_480;
          }
          else if (hashCode == SECONDS_540_HASH)
          {
            return StatusUpdateInterval::SECONDS_540;
          }
          else if (hashCode == SECONDS_600_HASH)
          {
            return StatusUpdateInterval::SECONDS_600;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatusUpdateInterval>(hashCode);
          }

          return StatusUpdateInterval::NOT_SET;
        }

        Aws::String GetNameForStatusUpdateInterval(StatusUpdateInterval enumValue)
        {
          switch(enumValue)
          {
          case StatusUpdateInterval::SECONDS_10:
            return "SECONDS_10";
          case StatusUpdateInterval::SECONDS_12:
            return "SECONDS_12";
          case StatusUpdateInterval::SECONDS_15:
            return "SECONDS_15";
          case StatusUpdateInterval::SECONDS_20:
            return "SECONDS_20";
          case StatusUpdateInterval::SECONDS_30:
            return "SECONDS_30";
          case StatusUpdateInterval::SECONDS_60:
            return "SECONDS_60";
          case StatusUpdateInterval::SECONDS_120:
            return "SECONDS_120";
          case StatusUpdateInterval::SECONDS_180:
            return "SECONDS_180";
          case StatusUpdateInterval::SECONDS_240:
            return "SECONDS_240";
          case StatusUpdateInterval::SECONDS_300:
            return "SECONDS_300";
          case StatusUpdateInterval::SECONDS_360:
            return "SECONDS_360";
          case StatusUpdateInterval::SECONDS_420:
            return "SECONDS_420";
          case StatusUpdateInterval::SECONDS_480:
            return "SECONDS_480";
          case StatusUpdateInterval::SECONDS_540:
            return "SECONDS_540";
          case StatusUpdateInterval::SECONDS_600:
            return "SECONDS_600";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusUpdateIntervalMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
