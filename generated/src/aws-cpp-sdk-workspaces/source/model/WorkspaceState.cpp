/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/WorkspaceState.h>
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
      namespace WorkspaceStateMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t IMPAIRED_HASH = ConstExprHashingUtils::HashString("IMPAIRED");
        static constexpr uint32_t UNHEALTHY_HASH = ConstExprHashingUtils::HashString("UNHEALTHY");
        static constexpr uint32_t REBOOTING_HASH = ConstExprHashingUtils::HashString("REBOOTING");
        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t REBUILDING_HASH = ConstExprHashingUtils::HashString("REBUILDING");
        static constexpr uint32_t RESTORING_HASH = ConstExprHashingUtils::HashString("RESTORING");
        static constexpr uint32_t MAINTENANCE_HASH = ConstExprHashingUtils::HashString("MAINTENANCE");
        static constexpr uint32_t ADMIN_MAINTENANCE_HASH = ConstExprHashingUtils::HashString("ADMIN_MAINTENANCE");
        static constexpr uint32_t TERMINATING_HASH = ConstExprHashingUtils::HashString("TERMINATING");
        static constexpr uint32_t TERMINATED_HASH = ConstExprHashingUtils::HashString("TERMINATED");
        static constexpr uint32_t SUSPENDED_HASH = ConstExprHashingUtils::HashString("SUSPENDED");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");


        WorkspaceState GetWorkspaceStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return WorkspaceState::PENDING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return WorkspaceState::AVAILABLE;
          }
          else if (hashCode == IMPAIRED_HASH)
          {
            return WorkspaceState::IMPAIRED;
          }
          else if (hashCode == UNHEALTHY_HASH)
          {
            return WorkspaceState::UNHEALTHY;
          }
          else if (hashCode == REBOOTING_HASH)
          {
            return WorkspaceState::REBOOTING;
          }
          else if (hashCode == STARTING_HASH)
          {
            return WorkspaceState::STARTING;
          }
          else if (hashCode == REBUILDING_HASH)
          {
            return WorkspaceState::REBUILDING;
          }
          else if (hashCode == RESTORING_HASH)
          {
            return WorkspaceState::RESTORING;
          }
          else if (hashCode == MAINTENANCE_HASH)
          {
            return WorkspaceState::MAINTENANCE;
          }
          else if (hashCode == ADMIN_MAINTENANCE_HASH)
          {
            return WorkspaceState::ADMIN_MAINTENANCE;
          }
          else if (hashCode == TERMINATING_HASH)
          {
            return WorkspaceState::TERMINATING;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return WorkspaceState::TERMINATED;
          }
          else if (hashCode == SUSPENDED_HASH)
          {
            return WorkspaceState::SUSPENDED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return WorkspaceState::UPDATING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return WorkspaceState::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return WorkspaceState::STOPPED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return WorkspaceState::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkspaceState>(hashCode);
          }

          return WorkspaceState::NOT_SET;
        }

        Aws::String GetNameForWorkspaceState(WorkspaceState enumValue)
        {
          switch(enumValue)
          {
          case WorkspaceState::NOT_SET:
            return {};
          case WorkspaceState::PENDING:
            return "PENDING";
          case WorkspaceState::AVAILABLE:
            return "AVAILABLE";
          case WorkspaceState::IMPAIRED:
            return "IMPAIRED";
          case WorkspaceState::UNHEALTHY:
            return "UNHEALTHY";
          case WorkspaceState::REBOOTING:
            return "REBOOTING";
          case WorkspaceState::STARTING:
            return "STARTING";
          case WorkspaceState::REBUILDING:
            return "REBUILDING";
          case WorkspaceState::RESTORING:
            return "RESTORING";
          case WorkspaceState::MAINTENANCE:
            return "MAINTENANCE";
          case WorkspaceState::ADMIN_MAINTENANCE:
            return "ADMIN_MAINTENANCE";
          case WorkspaceState::TERMINATING:
            return "TERMINATING";
          case WorkspaceState::TERMINATED:
            return "TERMINATED";
          case WorkspaceState::SUSPENDED:
            return "SUSPENDED";
          case WorkspaceState::UPDATING:
            return "UPDATING";
          case WorkspaceState::STOPPING:
            return "STOPPING";
          case WorkspaceState::STOPPED:
            return "STOPPED";
          case WorkspaceState::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkspaceStateMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
