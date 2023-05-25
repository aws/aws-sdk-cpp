/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/WorkspaceBundleState.h>
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
      namespace WorkspaceBundleStateMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        WorkspaceBundleState GetWorkspaceBundleStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return WorkspaceBundleState::AVAILABLE;
          }
          else if (hashCode == PENDING_HASH)
          {
            return WorkspaceBundleState::PENDING;
          }
          else if (hashCode == ERROR__HASH)
          {
            return WorkspaceBundleState::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkspaceBundleState>(hashCode);
          }

          return WorkspaceBundleState::NOT_SET;
        }

        Aws::String GetNameForWorkspaceBundleState(WorkspaceBundleState enumValue)
        {
          switch(enumValue)
          {
          case WorkspaceBundleState::AVAILABLE:
            return "AVAILABLE";
          case WorkspaceBundleState::PENDING:
            return "PENDING";
          case WorkspaceBundleState::ERROR_:
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

      } // namespace WorkspaceBundleStateMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
