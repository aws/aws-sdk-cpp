/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/CustomWorkspaceImageImportState.h>
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
      namespace CustomWorkspaceImageImportStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        CustomWorkspaceImageImportState GetCustomWorkspaceImageImportStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return CustomWorkspaceImageImportState::PENDING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return CustomWorkspaceImageImportState::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return CustomWorkspaceImageImportState::COMPLETED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return CustomWorkspaceImageImportState::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomWorkspaceImageImportState>(hashCode);
          }

          return CustomWorkspaceImageImportState::NOT_SET;
        }

        Aws::String GetNameForCustomWorkspaceImageImportState(CustomWorkspaceImageImportState enumValue)
        {
          switch(enumValue)
          {
          case CustomWorkspaceImageImportState::NOT_SET:
            return {};
          case CustomWorkspaceImageImportState::PENDING:
            return "PENDING";
          case CustomWorkspaceImageImportState::IN_PROGRESS:
            return "IN_PROGRESS";
          case CustomWorkspaceImageImportState::COMPLETED:
            return "COMPLETED";
          case CustomWorkspaceImageImportState::ERROR_:
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

      } // namespace CustomWorkspaceImageImportStateMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
