/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CategoricalAggregationFunction.h>
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
      namespace CategoricalAggregationFunctionMapper
      {

        static const int COUNT_HASH = HashingUtils::HashString("COUNT");
        static const int DISTINCT_COUNT_HASH = HashingUtils::HashString("DISTINCT_COUNT");


        CategoricalAggregationFunction GetCategoricalAggregationFunctionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COUNT_HASH)
          {
            return CategoricalAggregationFunction::COUNT;
          }
          else if (hashCode == DISTINCT_COUNT_HASH)
          {
            return CategoricalAggregationFunction::DISTINCT_COUNT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CategoricalAggregationFunction>(hashCode);
          }

          return CategoricalAggregationFunction::NOT_SET;
        }

        Aws::String GetNameForCategoricalAggregationFunction(CategoricalAggregationFunction enumValue)
        {
          switch(enumValue)
          {
          case CategoricalAggregationFunction::COUNT:
            return "COUNT";
          case CategoricalAggregationFunction::DISTINCT_COUNT:
            return "DISTINCT_COUNT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CategoricalAggregationFunctionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
