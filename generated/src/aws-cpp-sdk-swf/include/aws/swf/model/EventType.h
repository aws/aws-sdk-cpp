/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SWF
{
namespace Model
{
  enum class EventType
  {
    NOT_SET,
    WorkflowExecutionStarted,
    WorkflowExecutionCancelRequested,
    WorkflowExecutionCompleted,
    CompleteWorkflowExecutionFailed,
    WorkflowExecutionFailed,
    FailWorkflowExecutionFailed,
    WorkflowExecutionTimedOut,
    WorkflowExecutionCanceled,
    CancelWorkflowExecutionFailed,
    WorkflowExecutionContinuedAsNew,
    ContinueAsNewWorkflowExecutionFailed,
    WorkflowExecutionTerminated,
    DecisionTaskScheduled,
    DecisionTaskStarted,
    DecisionTaskCompleted,
    DecisionTaskTimedOut,
    ActivityTaskScheduled,
    ScheduleActivityTaskFailed,
    ActivityTaskStarted,
    ActivityTaskCompleted,
    ActivityTaskFailed,
    ActivityTaskTimedOut,
    ActivityTaskCanceled,
    ActivityTaskCancelRequested,
    RequestCancelActivityTaskFailed,
    WorkflowExecutionSignaled,
    MarkerRecorded,
    RecordMarkerFailed,
    TimerStarted,
    StartTimerFailed,
    TimerFired,
    TimerCanceled,
    CancelTimerFailed,
    StartChildWorkflowExecutionInitiated,
    StartChildWorkflowExecutionFailed,
    ChildWorkflowExecutionStarted,
    ChildWorkflowExecutionCompleted,
    ChildWorkflowExecutionFailed,
    ChildWorkflowExecutionTimedOut,
    ChildWorkflowExecutionCanceled,
    ChildWorkflowExecutionTerminated,
    SignalExternalWorkflowExecutionInitiated,
    SignalExternalWorkflowExecutionFailed,
    ExternalWorkflowExecutionSignaled,
    RequestCancelExternalWorkflowExecutionInitiated,
    RequestCancelExternalWorkflowExecutionFailed,
    ExternalWorkflowExecutionCancelRequested,
    LambdaFunctionScheduled,
    LambdaFunctionStarted,
    LambdaFunctionCompleted,
    LambdaFunctionFailed,
    LambdaFunctionTimedOut,
    ScheduleLambdaFunctionFailed,
    StartLambdaFunctionFailed
  };

namespace EventTypeMapper
{
AWS_SWF_API EventType GetEventTypeForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForEventType(EventType value);
} // namespace EventTypeMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
