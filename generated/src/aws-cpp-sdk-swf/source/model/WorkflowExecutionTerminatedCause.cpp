﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/WorkflowExecutionTerminatedCause.h>
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
      namespace WorkflowExecutionTerminatedCauseMapper
      {

        static const int CHILD_POLICY_APPLIED_HASH = HashingUtils::HashString("CHILD_POLICY_APPLIED");
        static const int EVENT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("EVENT_LIMIT_EXCEEDED");
        static const int OPERATOR_INITIATED_HASH = HashingUtils::HashString("OPERATOR_INITIATED");


        WorkflowExecutionTerminatedCause GetWorkflowExecutionTerminatedCauseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CHILD_POLICY_APPLIED_HASH)
          {
            return WorkflowExecutionTerminatedCause::CHILD_POLICY_APPLIED;
          }
          else if (hashCode == EVENT_LIMIT_EXCEEDED_HASH)
          {
            return WorkflowExecutionTerminatedCause::EVENT_LIMIT_EXCEEDED;
          }
          else if (hashCode == OPERATOR_INITIATED_HASH)
          {
            return WorkflowExecutionTerminatedCause::OPERATOR_INITIATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkflowExecutionTerminatedCause>(hashCode);
          }

          return WorkflowExecutionTerminatedCause::NOT_SET;
        }

        Aws::String GetNameForWorkflowExecutionTerminatedCause(WorkflowExecutionTerminatedCause enumValue)
        {
          switch(enumValue)
          {
          case WorkflowExecutionTerminatedCause::NOT_SET:
            return {};
          case WorkflowExecutionTerminatedCause::CHILD_POLICY_APPLIED:
            return "CHILD_POLICY_APPLIED";
          case WorkflowExecutionTerminatedCause::EVENT_LIMIT_EXCEEDED:
            return "EVENT_LIMIT_EXCEEDED";
          case WorkflowExecutionTerminatedCause::OPERATOR_INITIATED:
            return "OPERATOR_INITIATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkflowExecutionTerminatedCauseMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
