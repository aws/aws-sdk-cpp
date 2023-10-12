/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AuthorSpecifiedAggregation.h>
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
      namespace AuthorSpecifiedAggregationMapper
      {

        static constexpr uint32_t COUNT_HASH = ConstExprHashingUtils::HashString("COUNT");
        static constexpr uint32_t DISTINCT_COUNT_HASH = ConstExprHashingUtils::HashString("DISTINCT_COUNT");
        static constexpr uint32_t MIN_HASH = ConstExprHashingUtils::HashString("MIN");
        static constexpr uint32_t MAX_HASH = ConstExprHashingUtils::HashString("MAX");
        static constexpr uint32_t MEDIAN_HASH = ConstExprHashingUtils::HashString("MEDIAN");
        static constexpr uint32_t SUM_HASH = ConstExprHashingUtils::HashString("SUM");
        static constexpr uint32_t AVERAGE_HASH = ConstExprHashingUtils::HashString("AVERAGE");
        static constexpr uint32_t STDEV_HASH = ConstExprHashingUtils::HashString("STDEV");
        static constexpr uint32_t STDEVP_HASH = ConstExprHashingUtils::HashString("STDEVP");
        static constexpr uint32_t VAR_HASH = ConstExprHashingUtils::HashString("VAR");
        static constexpr uint32_t VARP_HASH = ConstExprHashingUtils::HashString("VARP");
        static constexpr uint32_t PERCENTILE_HASH = ConstExprHashingUtils::HashString("PERCENTILE");


        AuthorSpecifiedAggregation GetAuthorSpecifiedAggregationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COUNT_HASH)
          {
            return AuthorSpecifiedAggregation::COUNT;
          }
          else if (hashCode == DISTINCT_COUNT_HASH)
          {
            return AuthorSpecifiedAggregation::DISTINCT_COUNT;
          }
          else if (hashCode == MIN_HASH)
          {
            return AuthorSpecifiedAggregation::MIN;
          }
          else if (hashCode == MAX_HASH)
          {
            return AuthorSpecifiedAggregation::MAX;
          }
          else if (hashCode == MEDIAN_HASH)
          {
            return AuthorSpecifiedAggregation::MEDIAN;
          }
          else if (hashCode == SUM_HASH)
          {
            return AuthorSpecifiedAggregation::SUM;
          }
          else if (hashCode == AVERAGE_HASH)
          {
            return AuthorSpecifiedAggregation::AVERAGE;
          }
          else if (hashCode == STDEV_HASH)
          {
            return AuthorSpecifiedAggregation::STDEV;
          }
          else if (hashCode == STDEVP_HASH)
          {
            return AuthorSpecifiedAggregation::STDEVP;
          }
          else if (hashCode == VAR_HASH)
          {
            return AuthorSpecifiedAggregation::VAR;
          }
          else if (hashCode == VARP_HASH)
          {
            return AuthorSpecifiedAggregation::VARP;
          }
          else if (hashCode == PERCENTILE_HASH)
          {
            return AuthorSpecifiedAggregation::PERCENTILE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthorSpecifiedAggregation>(hashCode);
          }

          return AuthorSpecifiedAggregation::NOT_SET;
        }

        Aws::String GetNameForAuthorSpecifiedAggregation(AuthorSpecifiedAggregation enumValue)
        {
          switch(enumValue)
          {
          case AuthorSpecifiedAggregation::NOT_SET:
            return {};
          case AuthorSpecifiedAggregation::COUNT:
            return "COUNT";
          case AuthorSpecifiedAggregation::DISTINCT_COUNT:
            return "DISTINCT_COUNT";
          case AuthorSpecifiedAggregation::MIN:
            return "MIN";
          case AuthorSpecifiedAggregation::MAX:
            return "MAX";
          case AuthorSpecifiedAggregation::MEDIAN:
            return "MEDIAN";
          case AuthorSpecifiedAggregation::SUM:
            return "SUM";
          case AuthorSpecifiedAggregation::AVERAGE:
            return "AVERAGE";
          case AuthorSpecifiedAggregation::STDEV:
            return "STDEV";
          case AuthorSpecifiedAggregation::STDEVP:
            return "STDEVP";
          case AuthorSpecifiedAggregation::VAR:
            return "VAR";
          case AuthorSpecifiedAggregation::VARP:
            return "VARP";
          case AuthorSpecifiedAggregation::PERCENTILE:
            return "PERCENTILE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthorSpecifiedAggregationMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
