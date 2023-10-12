/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/SignalExternalWorkflowExecutionFailedCause.h>
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
      namespace SignalExternalWorkflowExecutionFailedCauseMapper
      {

        static constexpr uint32_t UNKNOWN_EXTERNAL_WORKFLOW_EXECUTION_HASH = ConstExprHashingUtils::HashString("UNKNOWN_EXTERNAL_WORKFLOW_EXECUTION");
        static constexpr uint32_t SIGNAL_EXTERNAL_WORKFLOW_EXECUTION_RATE_EXCEEDED_HASH = ConstExprHashingUtils::HashString("SIGNAL_EXTERNAL_WORKFLOW_EXECUTION_RATE_EXCEEDED");
        static constexpr uint32_t OPERATION_NOT_PERMITTED_HASH = ConstExprHashingUtils::HashString("OPERATION_NOT_PERMITTED");


        SignalExternalWorkflowExecutionFailedCause GetSignalExternalWorkflowExecutionFailedCauseForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNKNOWN_EXTERNAL_WORKFLOW_EXECUTION_HASH)
          {
            return SignalExternalWorkflowExecutionFailedCause::UNKNOWN_EXTERNAL_WORKFLOW_EXECUTION;
          }
          else if (hashCode == SIGNAL_EXTERNAL_WORKFLOW_EXECUTION_RATE_EXCEEDED_HASH)
          {
            return SignalExternalWorkflowExecutionFailedCause::SIGNAL_EXTERNAL_WORKFLOW_EXECUTION_RATE_EXCEEDED;
          }
          else if (hashCode == OPERATION_NOT_PERMITTED_HASH)
          {
            return SignalExternalWorkflowExecutionFailedCause::OPERATION_NOT_PERMITTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SignalExternalWorkflowExecutionFailedCause>(hashCode);
          }

          return SignalExternalWorkflowExecutionFailedCause::NOT_SET;
        }

        Aws::String GetNameForSignalExternalWorkflowExecutionFailedCause(SignalExternalWorkflowExecutionFailedCause enumValue)
        {
          switch(enumValue)
          {
          case SignalExternalWorkflowExecutionFailedCause::NOT_SET:
            return {};
          case SignalExternalWorkflowExecutionFailedCause::UNKNOWN_EXTERNAL_WORKFLOW_EXECUTION:
            return "UNKNOWN_EXTERNAL_WORKFLOW_EXECUTION";
          case SignalExternalWorkflowExecutionFailedCause::SIGNAL_EXTERNAL_WORKFLOW_EXECUTION_RATE_EXCEEDED:
            return "SIGNAL_EXTERNAL_WORKFLOW_EXECUTION_RATE_EXCEEDED";
          case SignalExternalWorkflowExecutionFailedCause::OPERATION_NOT_PERMITTED:
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

      } // namespace SignalExternalWorkflowExecutionFailedCauseMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
