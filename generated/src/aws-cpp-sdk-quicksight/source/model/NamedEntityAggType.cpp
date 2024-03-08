/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NamedEntityAggType.h>
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
      namespace NamedEntityAggTypeMapper
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
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        NamedEntityAggType GetNamedEntityAggTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUM_HASH)
          {
            return NamedEntityAggType::SUM;
          }
          else if (hashCode == MIN_HASH)
          {
            return NamedEntityAggType::MIN;
          }
          else if (hashCode == MAX_HASH)
          {
            return NamedEntityAggType::MAX;
          }
          else if (hashCode == COUNT_HASH)
          {
            return NamedEntityAggType::COUNT;
          }
          else if (hashCode == AVERAGE_HASH)
          {
            return NamedEntityAggType::AVERAGE;
          }
          else if (hashCode == DISTINCT_COUNT_HASH)
          {
            return NamedEntityAggType::DISTINCT_COUNT;
          }
          else if (hashCode == STDEV_HASH)
          {
            return NamedEntityAggType::STDEV;
          }
          else if (hashCode == STDEVP_HASH)
          {
            return NamedEntityAggType::STDEVP;
          }
          else if (hashCode == VAR_HASH)
          {
            return NamedEntityAggType::VAR;
          }
          else if (hashCode == VARP_HASH)
          {
            return NamedEntityAggType::VARP;
          }
          else if (hashCode == PERCENTILE_HASH)
          {
            return NamedEntityAggType::PERCENTILE;
          }
          else if (hashCode == MEDIAN_HASH)
          {
            return NamedEntityAggType::MEDIAN;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return NamedEntityAggType::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NamedEntityAggType>(hashCode);
          }

          return NamedEntityAggType::NOT_SET;
        }

        Aws::String GetNameForNamedEntityAggType(NamedEntityAggType enumValue)
        {
          switch(enumValue)
          {
          case NamedEntityAggType::NOT_SET:
            return {};
          case NamedEntityAggType::SUM:
            return "SUM";
          case NamedEntityAggType::MIN:
            return "MIN";
          case NamedEntityAggType::MAX:
            return "MAX";
          case NamedEntityAggType::COUNT:
            return "COUNT";
          case NamedEntityAggType::AVERAGE:
            return "AVERAGE";
          case NamedEntityAggType::DISTINCT_COUNT:
            return "DISTINCT_COUNT";
          case NamedEntityAggType::STDEV:
            return "STDEV";
          case NamedEntityAggType::STDEVP:
            return "STDEVP";
          case NamedEntityAggType::VAR:
            return "VAR";
          case NamedEntityAggType::VARP:
            return "VARP";
          case NamedEntityAggType::PERCENTILE:
            return "PERCENTILE";
          case NamedEntityAggType::MEDIAN:
            return "MEDIAN";
          case NamedEntityAggType::CUSTOM:
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

      } // namespace NamedEntityAggTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
