/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SimpleNumericalAggregationFunction.h>
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
      namespace SimpleNumericalAggregationFunctionMapper
      {

        static constexpr uint32_t SUM_HASH = ConstExprHashingUtils::HashString("SUM");
        static constexpr uint32_t AVERAGE_HASH = ConstExprHashingUtils::HashString("AVERAGE");
        static constexpr uint32_t MIN_HASH = ConstExprHashingUtils::HashString("MIN");
        static constexpr uint32_t MAX_HASH = ConstExprHashingUtils::HashString("MAX");
        static constexpr uint32_t COUNT_HASH = ConstExprHashingUtils::HashString("COUNT");
        static constexpr uint32_t DISTINCT_COUNT_HASH = ConstExprHashingUtils::HashString("DISTINCT_COUNT");
        static constexpr uint32_t VAR_HASH = ConstExprHashingUtils::HashString("VAR");
        static constexpr uint32_t VARP_HASH = ConstExprHashingUtils::HashString("VARP");
        static constexpr uint32_t STDEV_HASH = ConstExprHashingUtils::HashString("STDEV");
        static constexpr uint32_t STDEVP_HASH = ConstExprHashingUtils::HashString("STDEVP");
        static constexpr uint32_t MEDIAN_HASH = ConstExprHashingUtils::HashString("MEDIAN");


        SimpleNumericalAggregationFunction GetSimpleNumericalAggregationFunctionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUM_HASH)
          {
            return SimpleNumericalAggregationFunction::SUM;
          }
          else if (hashCode == AVERAGE_HASH)
          {
            return SimpleNumericalAggregationFunction::AVERAGE;
          }
          else if (hashCode == MIN_HASH)
          {
            return SimpleNumericalAggregationFunction::MIN;
          }
          else if (hashCode == MAX_HASH)
          {
            return SimpleNumericalAggregationFunction::MAX;
          }
          else if (hashCode == COUNT_HASH)
          {
            return SimpleNumericalAggregationFunction::COUNT;
          }
          else if (hashCode == DISTINCT_COUNT_HASH)
          {
            return SimpleNumericalAggregationFunction::DISTINCT_COUNT;
          }
          else if (hashCode == VAR_HASH)
          {
            return SimpleNumericalAggregationFunction::VAR;
          }
          else if (hashCode == VARP_HASH)
          {
            return SimpleNumericalAggregationFunction::VARP;
          }
          else if (hashCode == STDEV_HASH)
          {
            return SimpleNumericalAggregationFunction::STDEV;
          }
          else if (hashCode == STDEVP_HASH)
          {
            return SimpleNumericalAggregationFunction::STDEVP;
          }
          else if (hashCode == MEDIAN_HASH)
          {
            return SimpleNumericalAggregationFunction::MEDIAN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SimpleNumericalAggregationFunction>(hashCode);
          }

          return SimpleNumericalAggregationFunction::NOT_SET;
        }

        Aws::String GetNameForSimpleNumericalAggregationFunction(SimpleNumericalAggregationFunction enumValue)
        {
          switch(enumValue)
          {
          case SimpleNumericalAggregationFunction::NOT_SET:
            return {};
          case SimpleNumericalAggregationFunction::SUM:
            return "SUM";
          case SimpleNumericalAggregationFunction::AVERAGE:
            return "AVERAGE";
          case SimpleNumericalAggregationFunction::MIN:
            return "MIN";
          case SimpleNumericalAggregationFunction::MAX:
            return "MAX";
          case SimpleNumericalAggregationFunction::COUNT:
            return "COUNT";
          case SimpleNumericalAggregationFunction::DISTINCT_COUNT:
            return "DISTINCT_COUNT";
          case SimpleNumericalAggregationFunction::VAR:
            return "VAR";
          case SimpleNumericalAggregationFunction::VARP:
            return "VARP";
          case SimpleNumericalAggregationFunction::STDEV:
            return "STDEV";
          case SimpleNumericalAggregationFunction::STDEVP:
            return "STDEVP";
          case SimpleNumericalAggregationFunction::MEDIAN:
            return "MEDIAN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SimpleNumericalAggregationFunctionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
