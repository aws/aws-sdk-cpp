/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PivotTableFieldCollapseState.h>
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
      namespace PivotTableFieldCollapseStateMapper
      {

        static const int COLLAPSED_HASH = HashingUtils::HashString("COLLAPSED");
        static const int EXPANDED_HASH = HashingUtils::HashString("EXPANDED");


        PivotTableFieldCollapseState GetPivotTableFieldCollapseStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COLLAPSED_HASH)
          {
            return PivotTableFieldCollapseState::COLLAPSED;
          }
          else if (hashCode == EXPANDED_HASH)
          {
            return PivotTableFieldCollapseState::EXPANDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PivotTableFieldCollapseState>(hashCode);
          }

          return PivotTableFieldCollapseState::NOT_SET;
        }

        Aws::String GetNameForPivotTableFieldCollapseState(PivotTableFieldCollapseState enumValue)
        {
          switch(enumValue)
          {
          case PivotTableFieldCollapseState::NOT_SET:
            return {};
          case PivotTableFieldCollapseState::COLLAPSED:
            return "COLLAPSED";
          case PivotTableFieldCollapseState::EXPANDED:
            return "EXPANDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PivotTableFieldCollapseStateMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
