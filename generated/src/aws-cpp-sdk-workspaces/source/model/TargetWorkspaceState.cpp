/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/TargetWorkspaceState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace TargetWorkspaceStateMapper
      {

        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t ADMIN_MAINTENANCE_HASH = ConstExprHashingUtils::HashString("ADMIN_MAINTENANCE");


        TargetWorkspaceState GetTargetWorkspaceStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return TargetWorkspaceState::AVAILABLE;
          }
          else if (hashCode == ADMIN_MAINTENANCE_HASH)
          {
            return TargetWorkspaceState::ADMIN_MAINTENANCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetWorkspaceState>(hashCode);
          }

          return TargetWorkspaceState::NOT_SET;
        }

        Aws::String GetNameForTargetWorkspaceState(TargetWorkspaceState enumValue)
        {
          switch(enumValue)
          {
          case TargetWorkspaceState::NOT_SET:
            return {};
          case TargetWorkspaceState::AVAILABLE:
            return "AVAILABLE";
          case TargetWorkspaceState::ADMIN_MAINTENANCE:
            return "ADMIN_MAINTENANCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetWorkspaceStateMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
