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

        static const int SUM_HASH = HashingUtils::HashString("SUM");
        static const int AVERAGE_HASH = HashingUtils::HashString("AVERAGE");
        static const int MIN_HASH = HashingUtils::HashString("MIN");
        static const int MAX_HASH = HashingUtils::HashString("MAX");
        static const int COUNT_HASH = HashingUtils::HashString("COUNT");
        static const int DISTINCT_COUNT_HASH = HashingUtils::HashString("DISTINCT_COUNT");
        static const int VAR_HASH = HashingUtils::HashString("VAR");
        static const int VARP_HASH = HashingUtils::HashString("VARP");
        static const int STDEV_HASH = HashingUtils::HashString("STDEV");
        static const int STDEVP_HASH = HashingUtils::HashString("STDEVP");
        static const int MEDIAN_HASH = HashingUtils::HashString("MEDIAN");


        SimpleNumericalAggregationFunction GetSimpleNumericalAggregationFunctionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
