/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTableDataPathType.h>
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
      namespace PivotTableDataPathTypeMapper
      {

        static const int HIERARCHY_ROWS_LAYOUT_COLUMN_HASH = HashingUtils::HashString("HIERARCHY_ROWS_LAYOUT_COLUMN");
        static const int MULTIPLE_ROW_METRICS_COLUMN_HASH = HashingUtils::HashString("MULTIPLE_ROW_METRICS_COLUMN");
        static const int EMPTY_COLUMN_HEADER_HASH = HashingUtils::HashString("EMPTY_COLUMN_HEADER");
        static const int COUNT_METRIC_COLUMN_HASH = HashingUtils::HashString("COUNT_METRIC_COLUMN");


        PivotTableDataPathType GetPivotTableDataPathTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HIERARCHY_ROWS_LAYOUT_COLUMN_HASH)
          {
            return PivotTableDataPathType::HIERARCHY_ROWS_LAYOUT_COLUMN;
          }
          else if (hashCode == MULTIPLE_ROW_METRICS_COLUMN_HASH)
          {
            return PivotTableDataPathType::MULTIPLE_ROW_METRICS_COLUMN;
          }
          else if (hashCode == EMPTY_COLUMN_HEADER_HASH)
          {
            return PivotTableDataPathType::EMPTY_COLUMN_HEADER;
          }
          else if (hashCode == COUNT_METRIC_COLUMN_HASH)
          {
            return PivotTableDataPathType::COUNT_METRIC_COLUMN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PivotTableDataPathType>(hashCode);
          }

          return PivotTableDataPathType::NOT_SET;
        }

        Aws::String GetNameForPivotTableDataPathType(PivotTableDataPathType enumValue)
        {
          switch(enumValue)
          {
          case PivotTableDataPathType::NOT_SET:
            return {};
          case PivotTableDataPathType::HIERARCHY_ROWS_LAYOUT_COLUMN:
            return "HIERARCHY_ROWS_LAYOUT_COLUMN";
          case PivotTableDataPathType::MULTIPLE_ROW_METRICS_COLUMN:
            return "MULTIPLE_ROW_METRICS_COLUMN";
          case PivotTableDataPathType::EMPTY_COLUMN_HEADER:
            return "EMPTY_COLUMN_HEADER";
          case PivotTableDataPathType::COUNT_METRIC_COLUMN:
            return "COUNT_METRIC_COLUMN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PivotTableDataPathTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
