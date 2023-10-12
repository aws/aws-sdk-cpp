/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/ContinueAsNewWorkflowExecutionFailedCause.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SWF
  {
    namespace Model
    {
      namespace ContinueAsNewWorkflowExecutionFailedCauseMapper
      {

        static constexpr uint32_t UNHANDLED_DECISION_HASH = ConstExprHashingUtils::HashString("UNHANDLED_DECISION");
        static constexpr uint32_t WORKFLOW_TYPE_DEPRECATED_HASH = ConstExprHashingUtils::HashString("WORKFLOW_TYPE_DEPRECATED");
        static constexpr uint32_t WORKFLOW_TYPE_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("WORKFLOW_TYPE_DOES_NOT_EXIST");
        static constexpr uint32_t DEFAULT_EXECUTION_START_TO_CLOSE_TIMEOUT_UNDEFINED_HASH = ConstExprHashingUtils::HashString("DEFAULT_EXECUTION_START_TO_CLOSE_TIMEOUT_UNDEFINED");
        static constexpr uint32_t DEFAULT_TASK_START_TO_CLOSE_TIMEOUT_UNDEFINED_HASH = ConstExprHashingUtils::HashString("DEFAULT_TASK_START_TO_CLOSE_TIMEOUT_UNDEFINED");
        static constexpr uint32_t DEFAULT_TASK_LIST_UNDEFINED_HASH = ConstExprHashingUtils::HashString("DEFAULT_TASK_LIST_UNDEFINED");
        static constexpr uint32_t DEFAULT_CHILD_POLICY_UNDEFINED_HASH = ConstExprHashingUtils::HashString("DEFAULT_CHILD_POLICY_UNDEFINED");
        static constexpr uint32_t CONTINUE_AS_NEW_WORKFLOW_EXECUTION_RATE_EXCEEDED_HASH = ConstExprHashingUtils::HashString("CONTINUE_AS_NEW_WORKFLOW_EXECUTION_RATE_EXCEEDED");
        static constexpr uint32_t OPERATION_NOT_PERMITTED_HASH = ConstExprHashingUtils::HashString("OPERATION_NOT_PERMITTED");


        ContinueAsNewWorkflowExecutionFailedCause GetContinueAsNewWorkflowExecutionFailedCauseForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNHANDLED_DECISION_HASH)
          {
            return ContinueAsNewWorkflowExecutionFailedCause::UNHANDLED_DECISION;
          }
          else if (hashCode == WORKFLOW_TYPE_DEPRECATED_HASH)
          {
            return ContinueAsNewWorkflowExecutionFailedCause::WORKFLOW_TYPE_DEPRECATED;
          }
          else if (hashCode == WORKFLOW_TYPE_DOES_NOT_EXIST_HASH)
          {
            return ContinueAsNewWorkflowExecutionFailedCause::WORKFLOW_TYPE_DOES_NOT_EXIST;
          }
          else if (hashCode == DEFAULT_EXECUTION_START_TO_CLOSE_TIMEOUT_UNDEFINED_HASH)
          {
            return ContinueAsNewWorkflowExecutionFailedCause::DEFAULT_EXECUTION_START_TO_CLOSE_TIMEOUT_UNDEFINED;
          }
          else if (hashCode == DEFAULT_TASK_START_TO_CLOSE_TIMEOUT_UNDEFINED_HASH)
          {
            return ContinueAsNewWorkflowExecutionFailedCause::DEFAULT_TASK_START_TO_CLOSE_TIMEOUT_UNDEFINED;
          }
          else if (hashCode == DEFAULT_TASK_LIST_UNDEFINED_HASH)
          {
            return ContinueAsNewWorkflowExecutionFailedCause::DEFAULT_TASK_LIST_UNDEFINED;
          }
          else if (hashCode == DEFAULT_CHILD_POLICY_UNDEFINED_HASH)
          {
            return ContinueAsNewWorkflowExecutionFailedCause::DEFAULT_CHILD_POLICY_UNDEFINED;
          }
          else if (hashCode == CONTINUE_AS_NEW_WORKFLOW_EXECUTION_RATE_EXCEEDED_HASH)
          {
            return ContinueAsNewWorkflowExecutionFailedCause::CONTINUE_AS_NEW_WORKFLOW_EXECUTION_RATE_EXCEEDED;
          }
          else if (hashCode == OPERATION_NOT_PERMITTED_HASH)
          {
            return ContinueAsNewWorkflowExecutionFailedCause::OPERATION_NOT_PERMITTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContinueAsNewWorkflowExecutionFailedCause>(hashCode);
          }

          return ContinueAsNewWorkflowExecutionFailedCause::NOT_SET;
        }

        Aws::String GetNameForContinueAsNewWorkflowExecutionFailedCause(ContinueAsNewWorkflowExecutionFailedCause enumValue)
        {
          switch(enumValue)
          {
          case ContinueAsNewWorkflowExecutionFailedCause::NOT_SET:
            return {};
          case ContinueAsNewWorkflowExecutionFailedCause::UNHANDLED_DECISION:
            return "UNHANDLED_DECISION";
          case ContinueAsNewWorkflowExecutionFailedCause::WORKFLOW_TYPE_DEPRECATED:
            return "WORKFLOW_TYPE_DEPRECATED";
          case ContinueAsNewWorkflowExecutionFailedCause::WORKFLOW_TYPE_DOES_NOT_EXIST:
            return "WORKFLOW_TYPE_DOES_NOT_EXIST";
          case ContinueAsNewWorkflowExecutionFailedCause::DEFAULT_EXECUTION_START_TO_CLOSE_TIMEOUT_UNDEFINED:
            return "DEFAULT_EXECUTION_START_TO_CLOSE_TIMEOUT_UNDEFINED";
          case ContinueAsNewWorkflowExecutionFailedCause::DEFAULT_TASK_START_TO_CLOSE_TIMEOUT_UNDEFINED:
            return "DEFAULT_TASK_START_TO_CLOSE_TIMEOUT_UNDEFINED";
          case ContinueAsNewWorkflowExecutionFailedCause::DEFAULT_TASK_LIST_UNDEFINED:
            return "DEFAULT_TASK_LIST_UNDEFINED";
          case ContinueAsNewWorkflowExecutionFailedCause::DEFAULT_CHILD_POLICY_UNDEFINED:
            return "DEFAULT_CHILD_POLICY_UNDEFINED";
          case ContinueAsNewWorkflowExecutionFailedCause::CONTINUE_AS_NEW_WORKFLOW_EXECUTION_RATE_EXCEEDED:
            return "CONTINUE_AS_NEW_WORKFLOW_EXECUTION_RATE_EXCEEDED";
          case ContinueAsNewWorkflowExecutionFailedCause::OPERATION_NOT_PERMITTED:
            return "OPERATION_NOT_PERMITTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContinueAsNewWorkflowExecutionFailedCauseMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
