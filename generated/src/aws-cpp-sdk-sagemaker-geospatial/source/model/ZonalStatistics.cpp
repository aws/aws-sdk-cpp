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

        static constexpr uint32_t MEAN_HASH = ConstExprHashingUtils::HashString("MEAN");
        static constexpr uint32_t MEDIAN_HASH = ConstExprHashingUtils::HashString("MEDIAN");
        static constexpr uint32_t STANDARD_DEVIATION_HASH = ConstExprHashingUtils::HashString("STANDARD_DEVIATION");
        static constexpr uint32_t MAX_HASH = ConstExprHashingUtils::HashString("MAX");
        static constexpr uint32_t MIN_HASH = ConstExprHashingUtils::HashString("MIN");
        static constexpr uint32_t SUM_HASH = ConstExprHashingUtils::HashString("SUM");


        ZonalStatistics GetZonalStatisticsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ZonalStatistics::NOT_SET:
            return {};
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
