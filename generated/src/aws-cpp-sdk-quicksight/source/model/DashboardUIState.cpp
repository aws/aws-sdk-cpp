/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DashboardUIState.h>
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
      namespace DashboardUIStateMapper
      {

        static const int EXPANDED_HASH = HashingUtils::HashString("EXPANDED");
        static const int COLLAPSED_HASH = HashingUtils::HashString("COLLAPSED");


        DashboardUIState GetDashboardUIStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXPANDED_HASH)
          {
            return DashboardUIState::EXPANDED;
          }
          else if (hashCode == COLLAPSED_HASH)
          {
            return DashboardUIState::COLLAPSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashboardUIState>(hashCode);
          }

          return DashboardUIState::NOT_SET;
        }

        Aws::String GetNameForDashboardUIState(DashboardUIState enumValue)
        {
          switch(enumValue)
          {
          case DashboardUIState::EXPANDED:
            return "EXPANDED";
          case DashboardUIState::COLLAPSED:
            return "COLLAPSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DashboardUIStateMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
