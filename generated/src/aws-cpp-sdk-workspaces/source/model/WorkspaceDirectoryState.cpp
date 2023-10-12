/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/WorkspaceDirectoryState.h>
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
      namespace WorkspaceDirectoryStateMapper
      {

        static constexpr uint32_t REGISTERING_HASH = ConstExprHashingUtils::HashString("REGISTERING");
        static constexpr uint32_t REGISTERED_HASH = ConstExprHashingUtils::HashString("REGISTERED");
        static constexpr uint32_t DEREGISTERING_HASH = ConstExprHashingUtils::HashString("DEREGISTERING");
        static constexpr uint32_t DEREGISTERED_HASH = ConstExprHashingUtils::HashString("DEREGISTERED");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");


        WorkspaceDirectoryState GetWorkspaceDirectoryStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REGISTERING_HASH)
          {
            return WorkspaceDirectoryState::REGISTERING;
          }
          else if (hashCode == REGISTERED_HASH)
          {
            return WorkspaceDirectoryState::REGISTERED;
          }
          else if (hashCode == DEREGISTERING_HASH)
          {
            return WorkspaceDirectoryState::DEREGISTERING;
          }
          else if (hashCode == DEREGISTERED_HASH)
          {
            return WorkspaceDirectoryState::DEREGISTERED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return WorkspaceDirectoryState::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkspaceDirectoryState>(hashCode);
          }

          return WorkspaceDirectoryState::NOT_SET;
        }

        Aws::String GetNameForWorkspaceDirectoryState(WorkspaceDirectoryState enumValue)
        {
          switch(enumValue)
          {
          case WorkspaceDirectoryState::NOT_SET:
            return {};
          case WorkspaceDirectoryState::REGISTERING:
            return "REGISTERING";
          case WorkspaceDirectoryState::REGISTERED:
            return "REGISTERED";
          case WorkspaceDirectoryState::DEREGISTERING:
            return "DEREGISTERING";
          case WorkspaceDirectoryState::DEREGISTERED:
            return "DEREGISTERED";
          case WorkspaceDirectoryState::ERROR_:
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

      } // namespace WorkspaceDirectoryStateMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
