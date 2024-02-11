/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/MetricAggregation.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace MetricAggregationMapper
      {

        static const int RATE_HASH = HashingUtils::HashString("RATE");
        static const int VOLUME_HASH = HashingUtils::HashString("VOLUME");


        MetricAggregation GetMetricAggregationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RATE_HASH)
          {
            return MetricAggregation::RATE;
          }
          else if (hashCode == VOLUME_HASH)
          {
            return MetricAggregation::VOLUME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricAggregation>(hashCode);
          }

          return MetricAggregation::NOT_SET;
        }

        Aws::String GetNameForMetricAggregation(MetricAggregation enumValue)
        {
          switch(enumValue)
          {
          case MetricAggregation::NOT_SET:
            return {};
          case MetricAggregation::RATE:
            return "RATE";
          case MetricAggregation::VOLUME:
            return "VOLUME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricAggregationMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
