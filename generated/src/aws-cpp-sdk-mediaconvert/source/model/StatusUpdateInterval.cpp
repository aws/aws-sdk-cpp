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

        static constexpr uint32_t SECONDS_10_HASH = ConstExprHashingUtils::HashString("SECONDS_10");
        static constexpr uint32_t SECONDS_12_HASH = ConstExprHashingUtils::HashString("SECONDS_12");
        static constexpr uint32_t SECONDS_15_HASH = ConstExprHashingUtils::HashString("SECONDS_15");
        static constexpr uint32_t SECONDS_20_HASH = ConstExprHashingUtils::HashString("SECONDS_20");
        static constexpr uint32_t SECONDS_30_HASH = ConstExprHashingUtils::HashString("SECONDS_30");
        static constexpr uint32_t SECONDS_60_HASH = ConstExprHashingUtils::HashString("SECONDS_60");
        static constexpr uint32_t SECONDS_120_HASH = ConstExprHashingUtils::HashString("SECONDS_120");
        static constexpr uint32_t SECONDS_180_HASH = ConstExprHashingUtils::HashString("SECONDS_180");
        static constexpr uint32_t SECONDS_240_HASH = ConstExprHashingUtils::HashString("SECONDS_240");
        static constexpr uint32_t SECONDS_300_HASH = ConstExprHashingUtils::HashString("SECONDS_300");
        static constexpr uint32_t SECONDS_360_HASH = ConstExprHashingUtils::HashString("SECONDS_360");
        static constexpr uint32_t SECONDS_420_HASH = ConstExprHashingUtils::HashString("SECONDS_420");
        static constexpr uint32_t SECONDS_480_HASH = ConstExprHashingUtils::HashString("SECONDS_480");
        static constexpr uint32_t SECONDS_540_HASH = ConstExprHashingUtils::HashString("SECONDS_540");
        static constexpr uint32_t SECONDS_600_HASH = ConstExprHashingUtils::HashString("SECONDS_600");


        StatusUpdateInterval GetStatusUpdateIntervalForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case StatusUpdateInterval::NOT_SET:
            return {};
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
