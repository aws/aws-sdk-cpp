/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/TemporalStatistics.h>
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
      namespace TemporalStatisticsMapper
      {

        static const int MEAN_HASH = HashingUtils::HashString("MEAN");
        static const int MEDIAN_HASH = HashingUtils::HashString("MEDIAN");
        static const int STANDARD_DEVIATION_HASH = HashingUtils::HashString("STANDARD_DEVIATION");


        TemporalStatistics GetTemporalStatisticsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MEAN_HASH)
          {
            return TemporalStatistics::MEAN;
          }
          else if (hashCode == MEDIAN_HASH)
          {
            return TemporalStatistics::MEDIAN;
          }
          else if (hashCode == STANDARD_DEVIATION_HASH)
          {
            return TemporalStatistics::STANDARD_DEVIATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TemporalStatistics>(hashCode);
          }

          return TemporalStatistics::NOT_SET;
        }

        Aws::String GetNameForTemporalStatistics(TemporalStatistics enumValue)
        {
          switch(enumValue)
          {
          case TemporalStatistics::MEAN:
            return "MEAN";
          case TemporalStatistics::MEDIAN:
            return "MEDIAN";
          case TemporalStatistics::STANDARD_DEVIATION:
            return "STANDARD_DEVIATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TemporalStatisticsMapper
    } // namespace Model
  } // namespace SageMakerGeospatial
} // namespace Aws
