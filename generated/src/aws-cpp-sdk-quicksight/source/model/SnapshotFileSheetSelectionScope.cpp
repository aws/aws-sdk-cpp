/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SnapshotFileSheetSelectionScope.h>
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
      namespace SnapshotFileSheetSelectionScopeMapper
      {

        static const int ALL_VISUALS_HASH = HashingUtils::HashString("ALL_VISUALS");
        static const int SELECTED_VISUALS_HASH = HashingUtils::HashString("SELECTED_VISUALS");


        SnapshotFileSheetSelectionScope GetSnapshotFileSheetSelectionScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_VISUALS_HASH)
          {
            return SnapshotFileSheetSelectionScope::ALL_VISUALS;
          }
          else if (hashCode == SELECTED_VISUALS_HASH)
          {
            return SnapshotFileSheetSelectionScope::SELECTED_VISUALS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnapshotFileSheetSelectionScope>(hashCode);
          }

          return SnapshotFileSheetSelectionScope::NOT_SET;
        }

        Aws::String GetNameForSnapshotFileSheetSelectionScope(SnapshotFileSheetSelectionScope enumValue)
        {
          switch(enumValue)
          {
          case SnapshotFileSheetSelectionScope::NOT_SET:
            return {};
          case SnapshotFileSheetSelectionScope::ALL_VISUALS:
            return "ALL_VISUALS";
          case SnapshotFileSheetSelectionScope::SELECTED_VISUALS:
            return "SELECTED_VISUALS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnapshotFileSheetSelectionScopeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
