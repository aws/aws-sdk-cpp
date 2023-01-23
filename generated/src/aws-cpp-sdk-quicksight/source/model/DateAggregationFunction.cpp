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

        static const int COUNT_HASH = HashingUtils::HashString("COUNT");
        static const int DISTINCT_COUNT_HASH = HashingUtils::HashString("DISTINCT_COUNT");
        static const int MIN_HASH = HashingUtils::HashString("MIN");
        static const int MAX_HASH = HashingUtils::HashString("MAX");


        DateAggregationFunction GetDateAggregationFunctionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
