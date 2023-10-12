/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/CompleteWorkflowExecutionFailedCause.h>
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
      namespace CompleteWorkflowExecutionFailedCauseMapper
      {

        static constexpr uint32_t UNHANDLED_DECISION_HASH = ConstExprHashingUtils::HashString("UNHANDLED_DECISION");
        static constexpr uint32_t OPERATION_NOT_PERMITTED_HASH = ConstExprHashingUtils::HashString("OPERATION_NOT_PERMITTED");


        CompleteWorkflowExecutionFailedCause GetCompleteWorkflowExecutionFailedCauseForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNHANDLED_DECISION_HASH)
          {
            return CompleteWorkflowExecutionFailedCause::UNHANDLED_DECISION;
          }
          else if (hashCode == OPERATION_NOT_PERMITTED_HASH)
          {
            return CompleteWorkflowExecutionFailedCause::OPERATION_NOT_PERMITTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CompleteWorkflowExecutionFailedCause>(hashCode);
          }

          return CompleteWorkflowExecutionFailedCause::NOT_SET;
        }

        Aws::String GetNameForCompleteWorkflowExecutionFailedCause(CompleteWorkflowExecutionFailedCause enumValue)
        {
          switch(enumValue)
          {
          case CompleteWorkflowExecutionFailedCause::NOT_SET:
            return {};
          case CompleteWorkflowExecutionFailedCause::UNHANDLED_DECISION:
            return "UNHANDLED_DECISION";
          case CompleteWorkflowExecutionFailedCause::OPERATION_NOT_PERMITTED:
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

      } // namespace CompleteWorkflowExecutionFailedCauseMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
