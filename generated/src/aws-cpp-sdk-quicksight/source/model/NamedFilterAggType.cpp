/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NamedFilterAggType.h>
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
      namespace NamedFilterAggTypeMapper
      {

        static const int NO_AGGREGATION_HASH = HashingUtils::HashString("NO_AGGREGATION");
        static const int SUM_HASH = HashingUtils::HashString("SUM");
        static const int AVERAGE_HASH = HashingUtils::HashString("AVERAGE");
        static const int COUNT_HASH = HashingUtils::HashString("COUNT");
        static const int DISTINCT_COUNT_HASH = HashingUtils::HashString("DISTINCT_COUNT");
        static const int MAX_HASH = HashingUtils::HashString("MAX");
        static const int MEDIAN_HASH = HashingUtils::HashString("MEDIAN");
        static const int MIN_HASH = HashingUtils::HashString("MIN");
        static const int STDEV_HASH = HashingUtils::HashString("STDEV");
        static const int STDEVP_HASH = HashingUtils::HashString("STDEVP");
        static const int VAR_HASH = HashingUtils::HashString("VAR");
        static const int VARP_HASH = HashingUtils::HashString("VARP");


        NamedFilterAggType GetNamedFilterAggTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_AGGREGATION_HASH)
          {
            return NamedFilterAggType::NO_AGGREGATION;
          }
          else if (hashCode == SUM_HASH)
          {
            return NamedFilterAggType::SUM;
          }
          else if (hashCode == AVERAGE_HASH)
          {
            return NamedFilterAggType::AVERAGE;
          }
          else if (hashCode == COUNT_HASH)
          {
            return NamedFilterAggType::COUNT;
          }
          else if (hashCode == DISTINCT_COUNT_HASH)
          {
            return NamedFilterAggType::DISTINCT_COUNT;
          }
          else if (hashCode == MAX_HASH)
          {
            return NamedFilterAggType::MAX;
          }
          else if (hashCode == MEDIAN_HASH)
          {
            return NamedFilterAggType::MEDIAN;
          }
          else if (hashCode == MIN_HASH)
          {
            return NamedFilterAggType::MIN;
          }
          else if (hashCode == STDEV_HASH)
          {
            return NamedFilterAggType::STDEV;
          }
          else if (hashCode == STDEVP_HASH)
          {
            return NamedFilterAggType::STDEVP;
          }
          else if (hashCode == VAR_HASH)
          {
            return NamedFilterAggType::VAR;
          }
          else if (hashCode == VARP_HASH)
          {
            return NamedFilterAggType::VARP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NamedFilterAggType>(hashCode);
          }

          return NamedFilterAggType::NOT_SET;
        }

        Aws::String GetNameForNamedFilterAggType(NamedFilterAggType enumValue)
        {
          switch(enumValue)
          {
          case NamedFilterAggType::NOT_SET:
            return {};
          case NamedFilterAggType::NO_AGGREGATION:
            return "NO_AGGREGATION";
          case NamedFilterAggType::SUM:
            return "SUM";
          case NamedFilterAggType::AVERAGE:
            return "AVERAGE";
          case NamedFilterAggType::COUNT:
            return "COUNT";
          case NamedFilterAggType::DISTINCT_COUNT:
            return "DISTINCT_COUNT";
          case NamedFilterAggType::MAX:
            return "MAX";
          case NamedFilterAggType::MEDIAN:
            return "MEDIAN";
          case NamedFilterAggType::MIN:
            return "MIN";
          case NamedFilterAggType::STDEV:
            return "STDEV";
          case NamedFilterAggType::STDEVP:
            return "STDEVP";
          case NamedFilterAggType::VAR:
            return "VAR";
          case NamedFilterAggType::VARP:
            return "VARP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NamedFilterAggTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
