/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ComparisonMethodType.h>
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
      namespace ComparisonMethodTypeMapper
      {

        static const int DIFF_HASH = HashingUtils::HashString("DIFF");
        static const int PERC_DIFF_HASH = HashingUtils::HashString("PERC_DIFF");
        static const int DIFF_AS_PERC_HASH = HashingUtils::HashString("DIFF_AS_PERC");
        static const int POP_CURRENT_DIFF_AS_PERC_HASH = HashingUtils::HashString("POP_CURRENT_DIFF_AS_PERC");
        static const int POP_CURRENT_DIFF_HASH = HashingUtils::HashString("POP_CURRENT_DIFF");
        static const int POP_OVERTIME_DIFF_AS_PERC_HASH = HashingUtils::HashString("POP_OVERTIME_DIFF_AS_PERC");
        static const int POP_OVERTIME_DIFF_HASH = HashingUtils::HashString("POP_OVERTIME_DIFF");
        static const int PERCENT_OF_TOTAL_HASH = HashingUtils::HashString("PERCENT_OF_TOTAL");
        static const int RUNNING_SUM_HASH = HashingUtils::HashString("RUNNING_SUM");
        static const int MOVING_AVERAGE_HASH = HashingUtils::HashString("MOVING_AVERAGE");


        ComparisonMethodType GetComparisonMethodTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DIFF_HASH)
          {
            return ComparisonMethodType::DIFF;
          }
          else if (hashCode == PERC_DIFF_HASH)
          {
            return ComparisonMethodType::PERC_DIFF;
          }
          else if (hashCode == DIFF_AS_PERC_HASH)
          {
            return ComparisonMethodType::DIFF_AS_PERC;
          }
          else if (hashCode == POP_CURRENT_DIFF_AS_PERC_HASH)
          {
            return ComparisonMethodType::POP_CURRENT_DIFF_AS_PERC;
          }
          else if (hashCode == POP_CURRENT_DIFF_HASH)
          {
            return ComparisonMethodType::POP_CURRENT_DIFF;
          }
          else if (hashCode == POP_OVERTIME_DIFF_AS_PERC_HASH)
          {
            return ComparisonMethodType::POP_OVERTIME_DIFF_AS_PERC;
          }
          else if (hashCode == POP_OVERTIME_DIFF_HASH)
          {
            return ComparisonMethodType::POP_OVERTIME_DIFF;
          }
          else if (hashCode == PERCENT_OF_TOTAL_HASH)
          {
            return ComparisonMethodType::PERCENT_OF_TOTAL;
          }
          else if (hashCode == RUNNING_SUM_HASH)
          {
            return ComparisonMethodType::RUNNING_SUM;
          }
          else if (hashCode == MOVING_AVERAGE_HASH)
          {
            return ComparisonMethodType::MOVING_AVERAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComparisonMethodType>(hashCode);
          }

          return ComparisonMethodType::NOT_SET;
        }

        Aws::String GetNameForComparisonMethodType(ComparisonMethodType enumValue)
        {
          switch(enumValue)
          {
          case ComparisonMethodType::NOT_SET:
            return {};
          case ComparisonMethodType::DIFF:
            return "DIFF";
          case ComparisonMethodType::PERC_DIFF:
            return "PERC_DIFF";
          case ComparisonMethodType::DIFF_AS_PERC:
            return "DIFF_AS_PERC";
          case ComparisonMethodType::POP_CURRENT_DIFF_AS_PERC:
            return "POP_CURRENT_DIFF_AS_PERC";
          case ComparisonMethodType::POP_CURRENT_DIFF:
            return "POP_CURRENT_DIFF";
          case ComparisonMethodType::POP_OVERTIME_DIFF_AS_PERC:
            return "POP_OVERTIME_DIFF_AS_PERC";
          case ComparisonMethodType::POP_OVERTIME_DIFF:
            return "POP_OVERTIME_DIFF";
          case ComparisonMethodType::PERCENT_OF_TOTAL:
            return "PERCENT_OF_TOTAL";
          case ComparisonMethodType::RUNNING_SUM:
            return "RUNNING_SUM";
          case ComparisonMethodType::MOVING_AVERAGE:
            return "MOVING_AVERAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComparisonMethodTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
