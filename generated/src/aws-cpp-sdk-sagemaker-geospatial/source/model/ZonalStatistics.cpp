/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/ZonalStatistics.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMakerGeospatial
  {
    namespace Model
    {
      namespace ZonalStatisticsMapper
      {

        static const int MEAN_HASH = HashingUtils::HashString("MEAN");
        static const int MEDIAN_HASH = HashingUtils::HashString("MEDIAN");
        static const int STANDARD_DEVIATION_HASH = HashingUtils::HashString("STANDARD_DEVIATION");
        static const int MAX_HASH = HashingUtils::HashString("MAX");
        static const int MIN_HASH = HashingUtils::HashString("MIN");
        static const int SUM_HASH = HashingUtils::HashString("SUM");


        ZonalStatistics GetZonalStatisticsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MEAN_HASH)
          {
            return ZonalStatistics::MEAN;
          }
          else if (hashCode == MEDIAN_HASH)
          {
            return ZonalStatistics::MEDIAN;
          }
          else if (hashCode == STANDARD_DEVIATION_HASH)
          {
            return ZonalStatistics::STANDARD_DEVIATION;
          }
          else if (hashCode == MAX_HASH)
          {
            return ZonalStatistics::MAX;
          }
          else if (hashCode == MIN_HASH)
          {
            return ZonalStatistics::MIN;
          }
          else if (hashCode == SUM_HASH)
          {
            return ZonalStatistics::SUM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ZonalStatistics>(hashCode);
          }

          return ZonalStatistics::NOT_SET;
        }

        Aws::String GetNameForZonalStatistics(ZonalStatistics enumValue)
        {
          switch(enumValue)
          {
          case ZonalStatistics::MEAN:
            return "MEAN";
          case ZonalStatistics::MEDIAN:
            return "MEDIAN";
          case ZonalStatistics::STANDARD_DEVIATION:
            return "STANDARD_DEVIATION";
          case ZonalStatistics::MAX:
            return "MAX";
          case ZonalStatistics::MIN:
            return "MIN";
          case ZonalStatistics::SUM:
            return "SUM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ZonalStatisticsMapper
    } // namespace Model
  } // namespace SageMakerGeospatial
} // namespace Aws
