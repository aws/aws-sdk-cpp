/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AggType.h>
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
      namespace AggTypeMapper
      {

        static const int SUM_HASH = HashingUtils::HashString("SUM");
        static const int MIN_HASH = HashingUtils::HashString("MIN");
        static const int MAX_HASH = HashingUtils::HashString("MAX");
        static const int COUNT_HASH = HashingUtils::HashString("COUNT");
        static const int AVERAGE_HASH = HashingUtils::HashString("AVERAGE");
        static const int DISTINCT_COUNT_HASH = HashingUtils::HashString("DISTINCT_COUNT");
        static const int STDEV_HASH = HashingUtils::HashString("STDEV");
        static const int STDEVP_HASH = HashingUtils::HashString("STDEVP");
        static const int VAR_HASH = HashingUtils::HashString("VAR");
        static const int VARP_HASH = HashingUtils::HashString("VARP");
        static const int PERCENTILE_HASH = HashingUtils::HashString("PERCENTILE");
        static const int MEDIAN_HASH = HashingUtils::HashString("MEDIAN");
        static const int PTD_SUM_HASH = HashingUtils::HashString("PTD_SUM");
        static const int PTD_MIN_HASH = HashingUtils::HashString("PTD_MIN");
        static const int PTD_MAX_HASH = HashingUtils::HashString("PTD_MAX");
        static const int PTD_COUNT_HASH = HashingUtils::HashString("PTD_COUNT");
        static const int PTD_DISTINCT_COUNT_HASH = HashingUtils::HashString("PTD_DISTINCT_COUNT");
        static const int PTD_AVERAGE_HASH = HashingUtils::HashString("PTD_AVERAGE");
        static const int COLUMN_HASH = HashingUtils::HashString("COLUMN");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        AggType GetAggTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUM_HASH)
          {
            return AggType::SUM;
          }
          else if (hashCode == MIN_HASH)
          {
            return AggType::MIN;
          }
          else if (hashCode == MAX_HASH)
          {
            return AggType::MAX;
          }
          else if (hashCode == COUNT_HASH)
          {
            return AggType::COUNT;
          }
          else if (hashCode == AVERAGE_HASH)
          {
            return AggType::AVERAGE;
          }
          else if (hashCode == DISTINCT_COUNT_HASH)
          {
            return AggType::DISTINCT_COUNT;
          }
          else if (hashCode == STDEV_HASH)
          {
            return AggType::STDEV;
          }
          else if (hashCode == STDEVP_HASH)
          {
            return AggType::STDEVP;
          }
          else if (hashCode == VAR_HASH)
          {
            return AggType::VAR;
          }
          else if (hashCode == VARP_HASH)
          {
            return AggType::VARP;
          }
          else if (hashCode == PERCENTILE_HASH)
          {
            return AggType::PERCENTILE;
          }
          else if (hashCode == MEDIAN_HASH)
          {
            return AggType::MEDIAN;
          }
          else if (hashCode == PTD_SUM_HASH)
          {
            return AggType::PTD_SUM;
          }
          else if (hashCode == PTD_MIN_HASH)
          {
            return AggType::PTD_MIN;
          }
          else if (hashCode == PTD_MAX_HASH)
          {
            return AggType::PTD_MAX;
          }
          else if (hashCode == PTD_COUNT_HASH)
          {
            return AggType::PTD_COUNT;
          }
          else if (hashCode == PTD_DISTINCT_COUNT_HASH)
          {
            return AggType::PTD_DISTINCT_COUNT;
          }
          else if (hashCode == PTD_AVERAGE_HASH)
          {
            return AggType::PTD_AVERAGE;
          }
          else if (hashCode == COLUMN_HASH)
          {
            return AggType::COLUMN;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return AggType::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AggType>(hashCode);
          }

          return AggType::NOT_SET;
        }

        Aws::String GetNameForAggType(AggType enumValue)
        {
          switch(enumValue)
          {
          case AggType::NOT_SET:
            return {};
          case AggType::SUM:
            return "SUM";
          case AggType::MIN:
            return "MIN";
          case AggType::MAX:
            return "MAX";
          case AggType::COUNT:
            return "COUNT";
          case AggType::AVERAGE:
            return "AVERAGE";
          case AggType::DISTINCT_COUNT:
            return "DISTINCT_COUNT";
          case AggType::STDEV:
            return "STDEV";
          case AggType::STDEVP:
            return "STDEVP";
          case AggType::VAR:
            return "VAR";
          case AggType::VARP:
            return "VARP";
          case AggType::PERCENTILE:
            return "PERCENTILE";
          case AggType::MEDIAN:
            return "MEDIAN";
          case AggType::PTD_SUM:
            return "PTD_SUM";
          case AggType::PTD_MIN:
            return "PTD_MIN";
          case AggType::PTD_MAX:
            return "PTD_MAX";
          case AggType::PTD_COUNT:
            return "PTD_COUNT";
          case AggType::PTD_DISTINCT_COUNT:
            return "PTD_DISTINCT_COUNT";
          case AggType::PTD_AVERAGE:
            return "PTD_AVERAGE";
          case AggType::COLUMN:
            return "COLUMN";
          case AggType::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AggTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
