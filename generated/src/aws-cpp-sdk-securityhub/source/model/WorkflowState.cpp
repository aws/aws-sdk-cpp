/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/WorkflowState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace WorkflowStateMapper
      {

        static constexpr uint32_t NEW__HASH = ConstExprHashingUtils::HashString("NEW");
        static constexpr uint32_t ASSIGNED_HASH = ConstExprHashingUtils::HashString("ASSIGNED");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t DEFERRED_HASH = ConstExprHashingUtils::HashString("DEFERRED");
        static constexpr uint32_t RESOLVED_HASH = ConstExprHashingUtils::HashString("RESOLVED");


        WorkflowState GetWorkflowStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NEW__HASH)
          {
            return WorkflowState::NEW_;
          }
          else if (hashCode == ASSIGNED_HASH)
          {
            return WorkflowState::ASSIGNED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return WorkflowState::IN_PROGRESS;
          }
          else if (hashCode == DEFERRED_HASH)
          {
            return WorkflowState::DEFERRED;
          }
          else if (hashCode == RESOLVED_HASH)
          {
            return WorkflowState::RESOLVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkflowState>(hashCode);
          }

          return WorkflowState::NOT_SET;
        }

        Aws::String GetNameForWorkflowState(WorkflowState enumValue)
        {
          switch(enumValue)
          {
          case WorkflowState::NOT_SET:
            return {};
          case WorkflowState::NEW_:
            return "NEW";
          case WorkflowState::ASSIGNED:
            return "ASSIGNED";
          case WorkflowState::IN_PROGRESS:
            return "IN_PROGRESS";
          case WorkflowState::DEFERRED:
            return "DEFERRED";
          case WorkflowState::RESOLVED:
            return "RESOLVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkflowStateMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
