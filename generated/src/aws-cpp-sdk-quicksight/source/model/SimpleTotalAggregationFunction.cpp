/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SimpleTotalAggregationFunction.h>
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
      namespace SimpleTotalAggregationFunctionMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int SUM_HASH = HashingUtils::HashString("SUM");
        static const int AVERAGE_HASH = HashingUtils::HashString("AVERAGE");
        static const int MIN_HASH = HashingUtils::HashString("MIN");
        static const int MAX_HASH = HashingUtils::HashString("MAX");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        SimpleTotalAggregationFunction GetSimpleTotalAggregationFunctionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return SimpleTotalAggregationFunction::DEFAULT;
          }
          else if (hashCode == SUM_HASH)
          {
            return SimpleTotalAggregationFunction::SUM;
          }
          else if (hashCode == AVERAGE_HASH)
          {
            return SimpleTotalAggregationFunction::AVERAGE;
          }
          else if (hashCode == MIN_HASH)
          {
            return SimpleTotalAggregationFunction::MIN;
          }
          else if (hashCode == MAX_HASH)
          {
            return SimpleTotalAggregationFunction::MAX;
          }
          else if (hashCode == NONE_HASH)
          {
            return SimpleTotalAggregationFunction::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SimpleTotalAggregationFunction>(hashCode);
          }

          return SimpleTotalAggregationFunction::NOT_SET;
        }

        Aws::String GetNameForSimpleTotalAggregationFunction(SimpleTotalAggregationFunction enumValue)
        {
          switch(enumValue)
          {
          case SimpleTotalAggregationFunction::NOT_SET:
            return {};
          case SimpleTotalAggregationFunction::DEFAULT:
            return "DEFAULT";
          case SimpleTotalAggregationFunction::SUM:
            return "SUM";
          case SimpleTotalAggregationFunction::AVERAGE:
            return "AVERAGE";
          case SimpleTotalAggregationFunction::MIN:
            return "MIN";
          case SimpleTotalAggregationFunction::MAX:
            return "MAX";
          case SimpleTotalAggregationFunction::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SimpleTotalAggregationFunctionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
