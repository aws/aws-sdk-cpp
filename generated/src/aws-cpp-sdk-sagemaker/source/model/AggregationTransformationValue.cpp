/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AggregationTransformationValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace AggregationTransformationValueMapper
      {

        static constexpr uint32_t sum_HASH = ConstExprHashingUtils::HashString("sum");
        static constexpr uint32_t avg_HASH = ConstExprHashingUtils::HashString("avg");
        static constexpr uint32_t first_HASH = ConstExprHashingUtils::HashString("first");
        static constexpr uint32_t min_HASH = ConstExprHashingUtils::HashString("min");
        static constexpr uint32_t max_HASH = ConstExprHashingUtils::HashString("max");


        AggregationTransformationValue GetAggregationTransformationValueForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == sum_HASH)
          {
            return AggregationTransformationValue::sum;
          }
          else if (hashCode == avg_HASH)
          {
            return AggregationTransformationValue::avg;
          }
          else if (hashCode == first_HASH)
          {
            return AggregationTransformationValue::first;
          }
          else if (hashCode == min_HASH)
          {
            return AggregationTransformationValue::min;
          }
          else if (hashCode == max_HASH)
          {
            return AggregationTransformationValue::max;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AggregationTransformationValue>(hashCode);
          }

          return AggregationTransformationValue::NOT_SET;
        }

        Aws::String GetNameForAggregationTransformationValue(AggregationTransformationValue enumValue)
        {
          switch(enumValue)
          {
          case AggregationTransformationValue::NOT_SET:
            return {};
          case AggregationTransformationValue::sum:
            return "sum";
          case AggregationTransformationValue::avg:
            return "avg";
          case AggregationTransformationValue::first:
            return "first";
          case AggregationTransformationValue::min:
            return "min";
          case AggregationTransformationValue::max:
            return "max";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AggregationTransformationValueMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
