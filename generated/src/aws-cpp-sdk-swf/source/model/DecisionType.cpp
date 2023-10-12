/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/DecisionType.h>
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
      namespace DecisionTypeMapper
      {

        static constexpr uint32_t ScheduleActivityTask_HASH = ConstExprHashingUtils::HashString("ScheduleActivityTask");
        static constexpr uint32_t RequestCancelActivityTask_HASH = ConstExprHashingUtils::HashString("RequestCancelActivityTask");
        static constexpr uint32_t CompleteWorkflowExecution_HASH = ConstExprHashingUtils::HashString("CompleteWorkflowExecution");
        static constexpr uint32_t FailWorkflowExecution_HASH = ConstExprHashingUtils::HashString("FailWorkflowExecution");
        static constexpr uint32_t CancelWorkflowExecution_HASH = ConstExprHashingUtils::HashString("CancelWorkflowExecution");
        static constexpr uint32_t ContinueAsNewWorkflowExecution_HASH = ConstExprHashingUtils::HashString("ContinueAsNewWorkflowExecution");
        static constexpr uint32_t RecordMarker_HASH = ConstExprHashingUtils::HashString("RecordMarker");
        static constexpr uint32_t StartTimer_HASH = ConstExprHashingUtils::HashString("StartTimer");
        static constexpr uint32_t CancelTimer_HASH = ConstExprHashingUtils::HashString("CancelTimer");
        static constexpr uint32_t SignalExternalWorkflowExecution_HASH = ConstExprHashingUtils::HashString("SignalExternalWorkflowExecution");
        static constexpr uint32_t RequestCancelExternalWorkflowExecution_HASH = ConstExprHashingUtils::HashString("RequestCancelExternalWorkflowExecution");
        static constexpr uint32_t StartChildWorkflowExecution_HASH = ConstExprHashingUtils::HashString("StartChildWorkflowExecution");
        static constexpr uint32_t ScheduleLambdaFunction_HASH = ConstExprHashingUtils::HashString("ScheduleLambdaFunction");


        DecisionType GetDecisionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ScheduleActivityTask_HASH)
          {
            return DecisionType::ScheduleActivityTask;
          }
          else if (hashCode == RequestCancelActivityTask_HASH)
          {
            return DecisionType::RequestCancelActivityTask;
          }
          else if (hashCode == CompleteWorkflowExecution_HASH)
          {
            return DecisionType::CompleteWorkflowExecution;
          }
          else if (hashCode == FailWorkflowExecution_HASH)
          {
            return DecisionType::FailWorkflowExecution;
          }
          else if (hashCode == CancelWorkflowExecution_HASH)
          {
            return DecisionType::CancelWorkflowExecution;
          }
          else if (hashCode == ContinueAsNewWorkflowExecution_HASH)
          {
            return DecisionType::ContinueAsNewWorkflowExecution;
          }
          else if (hashCode == RecordMarker_HASH)
          {
            return DecisionType::RecordMarker;
          }
          else if (hashCode == StartTimer_HASH)
          {
            return DecisionType::StartTimer;
          }
          else if (hashCode == CancelTimer_HASH)
          {
            return DecisionType::CancelTimer;
          }
          else if (hashCode == SignalExternalWorkflowExecution_HASH)
          {
            return DecisionType::SignalExternalWorkflowExecution;
          }
          else if (hashCode == RequestCancelExternalWorkflowExecution_HASH)
          {
            return DecisionType::RequestCancelExternalWorkflowExecution;
          }
          else if (hashCode == StartChildWorkflowExecution_HASH)
          {
            return DecisionType::StartChildWorkflowExecution;
          }
          else if (hashCode == ScheduleLambdaFunction_HASH)
          {
            return DecisionType::ScheduleLambdaFunction;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DecisionType>(hashCode);
          }

          return DecisionType::NOT_SET;
        }

        Aws::String GetNameForDecisionType(DecisionType enumValue)
        {
          switch(enumValue)
          {
          case DecisionType::NOT_SET:
            return {};
          case DecisionType::ScheduleActivityTask:
            return "ScheduleActivityTask";
          case DecisionType::RequestCancelActivityTask:
            return "RequestCancelActivityTask";
          case DecisionType::CompleteWorkflowExecution:
            return "CompleteWorkflowExecution";
          case DecisionType::FailWorkflowExecution:
            return "FailWorkflowExecution";
          case DecisionType::CancelWorkflowExecution:
            return "CancelWorkflowExecution";
          case DecisionType::ContinueAsNewWorkflowExecution:
            return "ContinueAsNewWorkflowExecution";
          case DecisionType::RecordMarker:
            return "RecordMarker";
          case DecisionType::StartTimer:
            return "StartTimer";
          case DecisionType::CancelTimer:
            return "CancelTimer";
          case DecisionType::SignalExternalWorkflowExecution:
            return "SignalExternalWorkflowExecution";
          case DecisionType::RequestCancelExternalWorkflowExecution:
            return "RequestCancelExternalWorkflowExecution";
          case DecisionType::StartChildWorkflowExecution:
            return "StartChildWorkflowExecution";
          case DecisionType::ScheduleLambdaFunction:
            return "ScheduleLambdaFunction";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DecisionTypeMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
