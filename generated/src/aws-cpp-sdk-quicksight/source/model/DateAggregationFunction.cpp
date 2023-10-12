/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DateAggregationFunction.h>
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
      namespace DateAggregationFunctionMapper
      {

        static constexpr uint32_t COUNT_HASH = ConstExprHashingUtils::HashString("COUNT");
        static constexpr uint32_t DISTINCT_COUNT_HASH = ConstExprHashingUtils::HashString("DISTINCT_COUNT");
        static constexpr uint32_t MIN_HASH = ConstExprHashingUtils::HashString("MIN");
        static constexpr uint32_t MAX_HASH = ConstExprHashingUtils::HashString("MAX");


        DateAggregationFunction GetDateAggregationFunctionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COUNT_HASH)
          {
            return DateAggregationFunction::COUNT;
          }
          else if (hashCode == DISTINCT_COUNT_HASH)
          {
            return DateAggregationFunction::DISTINCT_COUNT;
          }
          else if (hashCode == MIN_HASH)
          {
            return DateAggregationFunction::MIN;
          }
          else if (hashCode == MAX_HASH)
          {
            return DateAggregationFunction::MAX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DateAggregationFunction>(hashCode);
          }

          return DateAggregationFunction::NOT_SET;
        }

        Aws::String GetNameForDateAggregationFunction(DateAggregationFunction enumValue)
        {
          switch(enumValue)
          {
          case DateAggregationFunction::NOT_SET:
            return {};
          case DateAggregationFunction::COUNT:
            return "COUNT";
          case DateAggregationFunction::DISTINCT_COUNT:
            return "DISTINCT_COUNT";
          case DateAggregationFunction::MIN:
            return "MIN";
          case DateAggregationFunction::MAX:
            return "MAX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DateAggregationFunctionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
