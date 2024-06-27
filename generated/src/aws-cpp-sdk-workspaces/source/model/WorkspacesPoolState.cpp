/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/WorkspacesPoolState.h>
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
      namespace WorkspacesPoolStateMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        WorkspacesPoolState GetWorkspacesPoolStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return WorkspacesPoolState::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return WorkspacesPoolState::DELETING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return WorkspacesPoolState::RUNNING;
          }
          else if (hashCode == STARTING_HASH)
          {
            return WorkspacesPoolState::STARTING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return WorkspacesPoolState::STOPPED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return WorkspacesPoolState::STOPPING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return WorkspacesPoolState::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkspacesPoolState>(hashCode);
          }

          return WorkspacesPoolState::NOT_SET;
        }

        Aws::String GetNameForWorkspacesPoolState(WorkspacesPoolState enumValue)
        {
          switch(enumValue)
          {
          case WorkspacesPoolState::NOT_SET:
            return {};
          case WorkspacesPoolState::CREATING:
            return "CREATING";
          case WorkspacesPoolState::DELETING:
            return "DELETING";
          case WorkspacesPoolState::RUNNING:
            return "RUNNING";
          case WorkspacesPoolState::STARTING:
            return "STARTING";
          case WorkspacesPoolState::STOPPED:
            return "STOPPED";
          case WorkspacesPoolState::STOPPING:
            return "STOPPING";
          case WorkspacesPoolState::UPDATING:
            return "UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkspacesPoolStateMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
