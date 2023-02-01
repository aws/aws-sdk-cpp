/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTableMetricPlacement.h>
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
      namespace PivotTableMetricPlacementMapper
      {

        static const int ROW_HASH = HashingUtils::HashString("ROW");
        static const int COLUMN_HASH = HashingUtils::HashString("COLUMN");


        PivotTableMetricPlacement GetPivotTableMetricPlacementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROW_HASH)
          {
            return PivotTableMetricPlacement::ROW;
          }
          else if (hashCode == COLUMN_HASH)
          {
            return PivotTableMetricPlacement::COLUMN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PivotTableMetricPlacement>(hashCode);
          }

          return PivotTableMetricPlacement::NOT_SET;
        }

        Aws::String GetNameForPivotTableMetricPlacement(PivotTableMetricPlacement enumValue)
        {
          switch(enumValue)
          {
          case PivotTableMetricPlacement::ROW:
            return "ROW";
          case PivotTableMetricPlacement::COLUMN:
            return "COLUMN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PivotTableMetricPlacementMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
