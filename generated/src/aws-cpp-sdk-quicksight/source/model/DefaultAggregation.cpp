/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DefaultAggregation.h>
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
      namespace DefaultAggregationMapper
      {

        static const int SUM_HASH = HashingUtils::HashString("SUM");
        static const int MAX_HASH = HashingUtils::HashString("MAX");
        static const int MIN_HASH = HashingUtils::HashString("MIN");
        static const int COUNT_HASH = HashingUtils::HashString("COUNT");
        static const int DISTINCT_COUNT_HASH = HashingUtils::HashString("DISTINCT_COUNT");
        static const int AVERAGE_HASH = HashingUtils::HashString("AVERAGE");


        DefaultAggregation GetDefaultAggregationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUM_HASH)
          {
            return DefaultAggregation::SUM;
          }
          else if (hashCode == MAX_HASH)
          {
            return DefaultAggregation::MAX;
          }
          else if (hashCode == MIN_HASH)
          {
            return DefaultAggregation::MIN;
          }
          else if (hashCode == COUNT_HASH)
          {
            return DefaultAggregation::COUNT;
          }
          else if (hashCode == DISTINCT_COUNT_HASH)
          {
            return DefaultAggregation::DISTINCT_COUNT;
          }
          else if (hashCode == AVERAGE_HASH)
          {
            return DefaultAggregation::AVERAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DefaultAggregation>(hashCode);
          }

          return DefaultAggregation::NOT_SET;
        }

        Aws::String GetNameForDefaultAggregation(DefaultAggregation enumValue)
        {
          switch(enumValue)
          {
          case DefaultAggregation::SUM:
            return "SUM";
          case DefaultAggregation::MAX:
            return "MAX";
          case DefaultAggregation::MIN:
            return "MIN";
          case DefaultAggregation::COUNT:
            return "COUNT";
          case DefaultAggregation::DISTINCT_COUNT:
            return "DISTINCT_COUNT";
          case DefaultAggregation::AVERAGE:
            return "AVERAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DefaultAggregationMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
