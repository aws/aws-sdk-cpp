/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/WorkSpaceApplicationState.h>
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
      namespace WorkSpaceApplicationStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int UNINSTALL_ONLY_HASH = HashingUtils::HashString("UNINSTALL_ONLY");


        WorkSpaceApplicationState GetWorkSpaceApplicationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return WorkSpaceApplicationState::PENDING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return WorkSpaceApplicationState::ERROR_;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return WorkSpaceApplicationState::AVAILABLE;
          }
          else if (hashCode == UNINSTALL_ONLY_HASH)
          {
            return WorkSpaceApplicationState::UNINSTALL_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkSpaceApplicationState>(hashCode);
          }

          return WorkSpaceApplicationState::NOT_SET;
        }

        Aws::String GetNameForWorkSpaceApplicationState(WorkSpaceApplicationState enumValue)
        {
          switch(enumValue)
          {
          case WorkSpaceApplicationState::NOT_SET:
            return {};
          case WorkSpaceApplicationState::PENDING:
            return "PENDING";
          case WorkSpaceApplicationState::ERROR_:
            return "ERROR";
          case WorkSpaceApplicationState::AVAILABLE:
            return "AVAILABLE";
          case WorkSpaceApplicationState::UNINSTALL_ONLY:
            return "UNINSTALL_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkSpaceApplicationStateMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
