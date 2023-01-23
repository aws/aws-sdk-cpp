/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/WorkflowExecutionCancelRequestedCause.h>
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
      namespace WorkflowExecutionCancelRequestedCauseMapper
      {

        static const int CHILD_POLICY_APPLIED_HASH = HashingUtils::HashString("CHILD_POLICY_APPLIED");


        WorkflowExecutionCancelRequestedCause GetWorkflowExecutionCancelRequestedCauseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CHILD_POLICY_APPLIED_HASH)
          {
            return WorkflowExecutionCancelRequestedCause::CHILD_POLICY_APPLIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkflowExecutionCancelRequestedCause>(hashCode);
          }

          return WorkflowExecutionCancelRequestedCause::NOT_SET;
        }

        Aws::String GetNameForWorkflowExecutionCancelRequestedCause(WorkflowExecutionCancelRequestedCause enumValue)
        {
          switch(enumValue)
          {
          case WorkflowExecutionCancelRequestedCause::CHILD_POLICY_APPLIED:
            return "CHILD_POLICY_APPLIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkflowExecutionCancelRequestedCauseMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
