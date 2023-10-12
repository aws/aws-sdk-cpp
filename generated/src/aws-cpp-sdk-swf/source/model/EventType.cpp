/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/EventType.h>
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
      namespace EventTypeMapper
      {

        static constexpr uint32_t WorkflowExecutionStarted_HASH = ConstExprHashingUtils::HashString("WorkflowExecutionStarted");
        static constexpr uint32_t WorkflowExecutionCancelRequested_HASH = ConstExprHashingUtils::HashString("WorkflowExecutionCancelRequested");
        static constexpr uint32_t WorkflowExecutionCompleted_HASH = ConstExprHashingUtils::HashString("WorkflowExecutionCompleted");
        static constexpr uint32_t CompleteWorkflowExecutionFailed_HASH = ConstExprHashingUtils::HashString("CompleteWorkflowExecutionFailed");
        static constexpr uint32_t WorkflowExecutionFailed_HASH = ConstExprHashingUtils::HashString("WorkflowExecutionFailed");
        static constexpr uint32_t FailWorkflowExecutionFailed_HASH = ConstExprHashingUtils::HashString("FailWorkflowExecutionFailed");
        static constexpr uint32_t WorkflowExecutionTimedOut_HASH = ConstExprHashingUtils::HashString("WorkflowExecutionTimedOut");
        static constexpr uint32_t WorkflowExecutionCanceled_HASH = ConstExprHashingUtils::HashString("WorkflowExecutionCanceled");
        static constexpr uint32_t CancelWorkflowExecutionFailed_HASH = ConstExprHashingUtils::HashString("CancelWorkflowExecutionFailed");
        static constexpr uint32_t WorkflowExecutionContinuedAsNew_HASH = ConstExprHashingUtils::HashString("WorkflowExecutionContinuedAsNew");
        static constexpr uint32_t ContinueAsNewWorkflowExecutionFailed_HASH = ConstExprHashingUtils::HashString("ContinueAsNewWorkflowExecutionFailed");
        static constexpr uint32_t WorkflowExecutionTerminated_HASH = ConstExprHashingUtils::HashString("WorkflowExecutionTerminated");
        static constexpr uint32_t DecisionTaskScheduled_HASH = ConstExprHashingUtils::HashString("DecisionTaskScheduled");
        static constexpr uint32_t DecisionTaskStarted_HASH = ConstExprHashingUtils::HashString("DecisionTaskStarted");
        static constexpr uint32_t DecisionTaskCompleted_HASH = ConstExprHashingUtils::HashString("DecisionTaskCompleted");
        static constexpr uint32_t DecisionTaskTimedOut_HASH = ConstExprHashingUtils::HashString("DecisionTaskTimedOut");
        static constexpr uint32_t ActivityTaskScheduled_HASH = ConstExprHashingUtils::HashString("ActivityTaskScheduled");
        static constexpr uint32_t ScheduleActivityTaskFailed_HASH = ConstExprHashingUtils::HashString("ScheduleActivityTaskFailed");
        static constexpr uint32_t ActivityTaskStarted_HASH = ConstExprHashingUtils::HashString("ActivityTaskStarted");
        static constexpr uint32_t ActivityTaskCompleted_HASH = ConstExprHashingUtils::HashString("ActivityTaskCompleted");
        static constexpr uint32_t ActivityTaskFailed_HASH = ConstExprHashingUtils::HashString("ActivityTaskFailed");
        static constexpr uint32_t ActivityTaskTimedOut_HASH = ConstExprHashingUtils::HashString("ActivityTaskTimedOut");
        static constexpr uint32_t ActivityTaskCanceled_HASH = ConstExprHashingUtils::HashString("ActivityTaskCanceled");
        static constexpr uint32_t ActivityTaskCancelRequested_HASH = ConstExprHashingUtils::HashString("ActivityTaskCancelRequested");
        static constexpr uint32_t RequestCancelActivityTaskFailed_HASH = ConstExprHashingUtils::HashString("RequestCancelActivityTaskFailed");
        static constexpr uint32_t WorkflowExecutionSignaled_HASH = ConstExprHashingUtils::HashString("WorkflowExecutionSignaled");
        static constexpr uint32_t MarkerRecorded_HASH = ConstExprHashingUtils::HashString("MarkerRecorded");
        static constexpr uint32_t RecordMarkerFailed_HASH = ConstExprHashingUtils::HashString("RecordMarkerFailed");
        static constexpr uint32_t TimerStarted_HASH = ConstExprHashingUtils::HashString("TimerStarted");
        static constexpr uint32_t StartTimerFailed_HASH = ConstExprHashingUtils::HashString("StartTimerFailed");
        static constexpr uint32_t TimerFired_HASH = ConstExprHashingUtils::HashString("TimerFired");
        static constexpr uint32_t TimerCanceled_HASH = ConstExprHashingUtils::HashString("TimerCanceled");
        static constexpr uint32_t CancelTimerFailed_HASH = ConstExprHashingUtils::HashString("CancelTimerFailed");
        static constexpr uint32_t StartChildWorkflowExecutionInitiated_HASH = ConstExprHashingUtils::HashString("StartChildWorkflowExecutionInitiated");
        static constexpr uint32_t StartChildWorkflowExecutionFailed_HASH = ConstExprHashingUtils::HashString("StartChildWorkflowExecutionFailed");
        static constexpr uint32_t ChildWorkflowExecutionStarted_HASH = ConstExprHashingUtils::HashString("ChildWorkflowExecutionStarted");
        static constexpr uint32_t ChildWorkflowExecutionCompleted_HASH = ConstExprHashingUtils::HashString("ChildWorkflowExecutionCompleted");
        static constexpr uint32_t ChildWorkflowExecutionFailed_HASH = ConstExprHashingUtils::HashString("ChildWorkflowExecutionFailed");
        static constexpr uint32_t ChildWorkflowExecutionTimedOut_HASH = ConstExprHashingUtils::HashString("ChildWorkflowExecutionTimedOut");
        static constexpr uint32_t ChildWorkflowExecutionCanceled_HASH = ConstExprHashingUtils::HashString("ChildWorkflowExecutionCanceled");
        static constexpr uint32_t ChildWorkflowExecutionTerminated_HASH = ConstExprHashingUtils::HashString("ChildWorkflowExecutionTerminated");
        static constexpr uint32_t SignalExternalWorkflowExecutionInitiated_HASH = ConstExprHashingUtils::HashString("SignalExternalWorkflowExecutionInitiated");
        static constexpr uint32_t SignalExternalWorkflowExecutionFailed_HASH = ConstExprHashingUtils::HashString("SignalExternalWorkflowExecutionFailed");
        static constexpr uint32_t ExternalWorkflowExecutionSignaled_HASH = ConstExprHashingUtils::HashString("ExternalWorkflowExecutionSignaled");
        static constexpr uint32_t RequestCancelExternalWorkflowExecutionInitiated_HASH = ConstExprHashingUtils::HashString("RequestCancelExternalWorkflowExecutionInitiated");
        static constexpr uint32_t RequestCancelExternalWorkflowExecutionFailed_HASH = ConstExprHashingUtils::HashString("RequestCancelExternalWorkflowExecutionFailed");
        static constexpr uint32_t ExternalWorkflowExecutionCancelRequested_HASH = ConstExprHashingUtils::HashString("ExternalWorkflowExecutionCancelRequested");
        static constexpr uint32_t LambdaFunctionScheduled_HASH = ConstExprHashingUtils::HashString("LambdaFunctionScheduled");
        static constexpr uint32_t LambdaFunctionStarted_HASH = ConstExprHashingUtils::HashString("LambdaFunctionStarted");
        static constexpr uint32_t LambdaFunctionCompleted_HASH = ConstExprHashingUtils::HashString("LambdaFunctionCompleted");
        static constexpr uint32_t LambdaFunctionFailed_HASH = ConstExprHashingUtils::HashString("LambdaFunctionFailed");
        static constexpr uint32_t LambdaFunctionTimedOut_HASH = ConstExprHashingUtils::HashString("LambdaFunctionTimedOut");
        static constexpr uint32_t ScheduleLambdaFunctionFailed_HASH = ConstExprHashingUtils::HashString("ScheduleLambdaFunctionFailed");
        static constexpr uint32_t StartLambdaFunctionFailed_HASH = ConstExprHashingUtils::HashString("StartLambdaFunctionFailed");


        EventType GetEventTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WorkflowExecutionStarted_HASH)
          {
            return EventType::WorkflowExecutionStarted;
          }
          else if (hashCode == WorkflowExecutionCancelRequested_HASH)
          {
            return EventType::WorkflowExecutionCancelRequested;
          }
          else if (hashCode == WorkflowExecutionCompleted_HASH)
          {
            return EventType::WorkflowExecutionCompleted;
          }
          else if (hashCode == CompleteWorkflowExecutionFailed_HASH)
          {
            return EventType::CompleteWorkflowExecutionFailed;
          }
          else if (hashCode == WorkflowExecutionFailed_HASH)
          {
            return EventType::WorkflowExecutionFailed;
          }
          else if (hashCode == FailWorkflowExecutionFailed_HASH)
          {
            return EventType::FailWorkflowExecutionFailed;
          }
          else if (hashCode == WorkflowExecutionTimedOut_HASH)
          {
            return EventType::WorkflowExecutionTimedOut;
          }
          else if (hashCode == WorkflowExecutionCanceled_HASH)
          {
            return EventType::WorkflowExecutionCanceled;
          }
          else if (hashCode == CancelWorkflowExecutionFailed_HASH)
          {
            return EventType::CancelWorkflowExecutionFailed;
          }
          else if (hashCode == WorkflowExecutionContinuedAsNew_HASH)
          {
            return EventType::WorkflowExecutionContinuedAsNew;
          }
          else if (hashCode == ContinueAsNewWorkflowExecutionFailed_HASH)
          {
            return EventType::ContinueAsNewWorkflowExecutionFailed;
          }
          else if (hashCode == WorkflowExecutionTerminated_HASH)
          {
            return EventType::WorkflowExecutionTerminated;
          }
          else if (hashCode == DecisionTaskScheduled_HASH)
          {
            return EventType::DecisionTaskScheduled;
          }
          else if (hashCode == DecisionTaskStarted_HASH)
          {
            return EventType::DecisionTaskStarted;
          }
          else if (hashCode == DecisionTaskCompleted_HASH)
          {
            return EventType::DecisionTaskCompleted;
          }
          else if (hashCode == DecisionTaskTimedOut_HASH)
          {
            return EventType::DecisionTaskTimedOut;
          }
          else if (hashCode == ActivityTaskScheduled_HASH)
          {
            return EventType::ActivityTaskScheduled;
          }
          else if (hashCode == ScheduleActivityTaskFailed_HASH)
          {
            return EventType::ScheduleActivityTaskFailed;
          }
          else if (hashCode == ActivityTaskStarted_HASH)
          {
            return EventType::ActivityTaskStarted;
          }
          else if (hashCode == ActivityTaskCompleted_HASH)
          {
            return EventType::ActivityTaskCompleted;
          }
          else if (hashCode == ActivityTaskFailed_HASH)
          {
            return EventType::ActivityTaskFailed;
          }
          else if (hashCode == ActivityTaskTimedOut_HASH)
          {
            return EventType::ActivityTaskTimedOut;
          }
          else if (hashCode == ActivityTaskCanceled_HASH)
          {
            return EventType::ActivityTaskCanceled;
          }
          else if (hashCode == ActivityTaskCancelRequested_HASH)
          {
            return EventType::ActivityTaskCancelRequested;
          }
          else if (hashCode == RequestCancelActivityTaskFailed_HASH)
          {
            return EventType::RequestCancelActivityTaskFailed;
          }
          else if (hashCode == WorkflowExecutionSignaled_HASH)
          {
            return EventType::WorkflowExecutionSignaled;
          }
          else if (hashCode == MarkerRecorded_HASH)
          {
            return EventType::MarkerRecorded;
          }
          else if (hashCode == RecordMarkerFailed_HASH)
          {
            return EventType::RecordMarkerFailed;
          }
          else if (hashCode == TimerStarted_HASH)
          {
            return EventType::TimerStarted;
          }
          else if (hashCode == StartTimerFailed_HASH)
          {
            return EventType::StartTimerFailed;
          }
          else if (hashCode == TimerFired_HASH)
          {
            return EventType::TimerFired;
          }
          else if (hashCode == TimerCanceled_HASH)
          {
            return EventType::TimerCanceled;
          }
          else if (hashCode == CancelTimerFailed_HASH)
          {
            return EventType::CancelTimerFailed;
          }
          else if (hashCode == StartChildWorkflowExecutionInitiated_HASH)
          {
            return EventType::StartChildWorkflowExecutionInitiated;
          }
          else if (hashCode == StartChildWorkflowExecutionFailed_HASH)
          {
            return EventType::StartChildWorkflowExecutionFailed;
          }
          else if (hashCode == ChildWorkflowExecutionStarted_HASH)
          {
            return EventType::ChildWorkflowExecutionStarted;
          }
          else if (hashCode == ChildWorkflowExecutionCompleted_HASH)
          {
            return EventType::ChildWorkflowExecutionCompleted;
          }
          else if (hashCode == ChildWorkflowExecutionFailed_HASH)
          {
            return EventType::ChildWorkflowExecutionFailed;
          }
          else if (hashCode == ChildWorkflowExecutionTimedOut_HASH)
          {
            return EventType::ChildWorkflowExecutionTimedOut;
          }
          else if (hashCode == ChildWorkflowExecutionCanceled_HASH)
          {
            return EventType::ChildWorkflowExecutionCanceled;
          }
          else if (hashCode == ChildWorkflowExecutionTerminated_HASH)
          {
            return EventType::ChildWorkflowExecutionTerminated;
          }
          else if (hashCode == SignalExternalWorkflowExecutionInitiated_HASH)
          {
            return EventType::SignalExternalWorkflowExecutionInitiated;
          }
          else if (hashCode == SignalExternalWorkflowExecutionFailed_HASH)
          {
            return EventType::SignalExternalWorkflowExecutionFailed;
          }
          else if (hashCode == ExternalWorkflowExecutionSignaled_HASH)
          {
            return EventType::ExternalWorkflowExecutionSignaled;
          }
          else if (hashCode == RequestCancelExternalWorkflowExecutionInitiated_HASH)
          {
            return EventType::RequestCancelExternalWorkflowExecutionInitiated;
          }
          else if (hashCode == RequestCancelExternalWorkflowExecutionFailed_HASH)
          {
            return EventType::RequestCancelExternalWorkflowExecutionFailed;
          }
          else if (hashCode == ExternalWorkflowExecutionCancelRequested_HASH)
          {
            return EventType::ExternalWorkflowExecutionCancelRequested;
          }
          else if (hashCode == LambdaFunctionScheduled_HASH)
          {
            return EventType::LambdaFunctionScheduled;
          }
          else if (hashCode == LambdaFunctionStarted_HASH)
          {
            return EventType::LambdaFunctionStarted;
          }
          else if (hashCode == LambdaFunctionCompleted_HASH)
          {
            return EventType::LambdaFunctionCompleted;
          }
          else if (hashCode == LambdaFunctionFailed_HASH)
          {
            return EventType::LambdaFunctionFailed;
          }
          else if (hashCode == LambdaFunctionTimedOut_HASH)
          {
            return EventType::LambdaFunctionTimedOut;
          }
          else if (hashCode == ScheduleLambdaFunctionFailed_HASH)
          {
            return EventType::ScheduleLambdaFunctionFailed;
          }
          else if (hashCode == StartLambdaFunctionFailed_HASH)
          {
            return EventType::StartLambdaFunctionFailed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventType>(hashCode);
          }

          return EventType::NOT_SET;
        }

        Aws::String GetNameForEventType(EventType enumValue)
        {
          switch(enumValue)
          {
          case EventType::NOT_SET:
            return {};
          case EventType::WorkflowExecutionStarted:
            return "WorkflowExecutionStarted";
          case EventType::WorkflowExecutionCancelRequested:
            return "WorkflowExecutionCancelRequested";
          case EventType::WorkflowExecutionCompleted:
            return "WorkflowExecutionCompleted";
          case EventType::CompleteWorkflowExecutionFailed:
            return "CompleteWorkflowExecutionFailed";
          case EventType::WorkflowExecutionFailed:
            return "WorkflowExecutionFailed";
          case EventType::FailWorkflowExecutionFailed:
            return "FailWorkflowExecutionFailed";
          case EventType::WorkflowExecutionTimedOut:
            return "WorkflowExecutionTimedOut";
          case EventType::WorkflowExecutionCanceled:
            return "WorkflowExecutionCanceled";
          case EventType::CancelWorkflowExecutionFailed:
            return "CancelWorkflowExecutionFailed";
          case EventType::WorkflowExecutionContinuedAsNew:
            return "WorkflowExecutionContinuedAsNew";
          case EventType::ContinueAsNewWorkflowExecutionFailed:
            return "ContinueAsNewWorkflowExecutionFailed";
          case EventType::WorkflowExecutionTerminated:
            return "WorkflowExecutionTerminated";
          case EventType::DecisionTaskScheduled:
            return "DecisionTaskScheduled";
          case EventType::DecisionTaskStarted:
            return "DecisionTaskStarted";
          case EventType::DecisionTaskCompleted:
            return "DecisionTaskCompleted";
          case EventType::DecisionTaskTimedOut:
            return "DecisionTaskTimedOut";
          case EventType::ActivityTaskScheduled:
            return "ActivityTaskScheduled";
          case EventType::ScheduleActivityTaskFailed:
            return "ScheduleActivityTaskFailed";
          case EventType::ActivityTaskStarted:
            return "ActivityTaskStarted";
          case EventType::ActivityTaskCompleted:
            return "ActivityTaskCompleted";
          case EventType::ActivityTaskFailed:
            return "ActivityTaskFailed";
          case EventType::ActivityTaskTimedOut:
            return "ActivityTaskTimedOut";
          case EventType::ActivityTaskCanceled:
            return "ActivityTaskCanceled";
          case EventType::ActivityTaskCancelRequested:
            return "ActivityTaskCancelRequested";
          case EventType::RequestCancelActivityTaskFailed:
            return "RequestCancelActivityTaskFailed";
          case EventType::WorkflowExecutionSignaled:
            return "WorkflowExecutionSignaled";
          case EventType::MarkerRecorded:
            return "MarkerRecorded";
          case EventType::RecordMarkerFailed:
            return "RecordMarkerFailed";
          case EventType::TimerStarted:
            return "TimerStarted";
          case EventType::StartTimerFailed:
            return "StartTimerFailed";
          case EventType::TimerFired:
            return "TimerFired";
          case EventType::TimerCanceled:
            return "TimerCanceled";
          case EventType::CancelTimerFailed:
            return "CancelTimerFailed";
          case EventType::StartChildWorkflowExecutionInitiated:
            return "StartChildWorkflowExecutionInitiated";
          case EventType::StartChildWorkflowExecutionFailed:
            return "StartChildWorkflowExecutionFailed";
          case EventType::ChildWorkflowExecutionStarted:
            return "ChildWorkflowExecutionStarted";
          case EventType::ChildWorkflowExecutionCompleted:
            return "ChildWorkflowExecutionCompleted";
          case EventType::ChildWorkflowExecutionFailed:
            return "ChildWorkflowExecutionFailed";
          case EventType::ChildWorkflowExecutionTimedOut:
            return "ChildWorkflowExecutionTimedOut";
          case EventType::ChildWorkflowExecutionCanceled:
            return "ChildWorkflowExecutionCanceled";
          case EventType::ChildWorkflowExecutionTerminated:
            return "ChildWorkflowExecutionTerminated";
          case EventType::SignalExternalWorkflowExecutionInitiated:
            return "SignalExternalWorkflowExecutionInitiated";
          case EventType::SignalExternalWorkflowExecutionFailed:
            return "SignalExternalWorkflowExecutionFailed";
          case EventType::ExternalWorkflowExecutionSignaled:
            return "ExternalWorkflowExecutionSignaled";
          case EventType::RequestCancelExternalWorkflowExecutionInitiated:
            return "RequestCancelExternalWorkflowExecutionInitiated";
          case EventType::RequestCancelExternalWorkflowExecutionFailed:
            return "RequestCancelExternalWorkflowExecutionFailed";
          case EventType::ExternalWorkflowExecutionCancelRequested:
            return "ExternalWorkflowExecutionCancelRequested";
          case EventType::LambdaFunctionScheduled:
            return "LambdaFunctionScheduled";
          case EventType::LambdaFunctionStarted:
            return "LambdaFunctionStarted";
          case EventType::LambdaFunctionCompleted:
            return "LambdaFunctionCompleted";
          case EventType::LambdaFunctionFailed:
            return "LambdaFunctionFailed";
          case EventType::LambdaFunctionTimedOut:
            return "LambdaFunctionTimedOut";
          case EventType::ScheduleLambdaFunctionFailed:
            return "ScheduleLambdaFunctionFailed";
          case EventType::StartLambdaFunctionFailed:
            return "StartLambdaFunctionFailed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventTypeMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
