/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RadarChartAxesRangeScale.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace RadarChartAxesRangeScaleMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int INDEPENDENT_HASH = HashingUtils::HashString("INDEPENDENT");
        static const int SHARED_HASH = HashingUtils::HashString("SHARED");


        RadarChartAxesRangeScale GetRadarChartAxesRangeScaleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return RadarChartAxesRangeScale::AUTO;
          }
          else if (hashCode == INDEPENDENT_HASH)
          {
            return RadarChartAxesRangeScale::INDEPENDENT;
          }
          else if (hashCode == SHARED_HASH)
          {
            return RadarChartAxesRangeScale::SHARED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RadarChartAxesRangeScale>(hashCode);
          }

          return RadarChartAxesRangeScale::NOT_SET;
        }

        Aws::String GetNameForRadarChartAxesRangeScale(RadarChartAxesRangeScale enumValue)
        {
          switch(enumValue)
          {
          case RadarChartAxesRangeScale::NOT_SET:
            return {};
          case RadarChartAxesRangeScale::AUTO:
            return "AUTO";
          case RadarChartAxesRangeScale::INDEPENDENT:
            return "INDEPENDENT";
          case RadarChartAxesRangeScale::SHARED:
            return "SHARED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RadarChartAxesRangeScaleMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
