/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTableRowsLayout.h>
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
      namespace PivotTableRowsLayoutMapper
      {

        static const int TABULAR_HASH = HashingUtils::HashString("TABULAR");
        static const int HIERARCHY_HASH = HashingUtils::HashString("HIERARCHY");


        PivotTableRowsLayout GetPivotTableRowsLayoutForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TABULAR_HASH)
          {
            return PivotTableRowsLayout::TABULAR;
          }
          else if (hashCode == HIERARCHY_HASH)
          {
            return PivotTableRowsLayout::HIERARCHY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PivotTableRowsLayout>(hashCode);
          }

          return PivotTableRowsLayout::NOT_SET;
        }

        Aws::String GetNameForPivotTableRowsLayout(PivotTableRowsLayout enumValue)
        {
          switch(enumValue)
          {
          case PivotTableRowsLayout::NOT_SET:
            return {};
          case PivotTableRowsLayout::TABULAR:
            return "TABULAR";
          case PivotTableRowsLayout::HIERARCHY:
            return "HIERARCHY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PivotTableRowsLayoutMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
