/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-metrics/model/MetricStatistic.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMakerMetrics
  {
    namespace Model
    {
      namespace MetricStatisticMapper
      {

        static const int Min_HASH = HashingUtils::HashString("Min");
        static const int Max_HASH = HashingUtils::HashString("Max");
        static const int Avg_HASH = HashingUtils::HashString("Avg");
        static const int Count_HASH = HashingUtils::HashString("Count");
        static const int StdDev_HASH = HashingUtils::HashString("StdDev");
        static const int Last_HASH = HashingUtils::HashString("Last");


        MetricStatistic GetMetricStatisticForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Min_HASH)
          {
            return MetricStatistic::Min;
          }
          else if (hashCode == Max_HASH)
          {
            return MetricStatistic::Max;
          }
          else if (hashCode == Avg_HASH)
          {
            return MetricStatistic::Avg;
          }
          else if (hashCode == Count_HASH)
          {
            return MetricStatistic::Count;
          }
          else if (hashCode == StdDev_HASH)
          {
            return MetricStatistic::StdDev;
          }
          else if (hashCode == Last_HASH)
          {
            return MetricStatistic::Last;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricStatistic>(hashCode);
          }

          return MetricStatistic::NOT_SET;
        }

        Aws::String GetNameForMetricStatistic(MetricStatistic enumValue)
        {
          switch(enumValue)
          {
          case MetricStatistic::NOT_SET:
            return {};
          case MetricStatistic::Min:
            return "Min";
          case MetricStatistic::Max:
            return "Max";
          case MetricStatistic::Avg:
            return "Avg";
          case MetricStatistic::Count:
            return "Count";
          case MetricStatistic::StdDev:
            return "StdDev";
          case MetricStatistic::Last:
            return "Last";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricStatisticMapper
    } // namespace Model
  } // namespace SageMakerMetrics
} // namespace Aws
