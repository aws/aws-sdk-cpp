/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SFN
{
namespace Model
{
  enum class HistoryEventType
  {
    NOT_SET,
    ActivityFailed,
    ActivityScheduled,
    ActivityScheduleFailed,
    ActivityStarted,
    ActivitySucceeded,
    ActivityTimedOut,
    ChoiceStateEntered,
    ChoiceStateExited,
    ExecutionAborted,
    ExecutionFailed,
    ExecutionStarted,
    ExecutionSucceeded,
    ExecutionTimedOut,
    FailStateEntered,
    LambdaFunctionFailed,
    LambdaFunctionScheduled,
    LambdaFunctionScheduleFailed,
    LambdaFunctionStarted,
    LambdaFunctionStartFailed,
    LambdaFunctionSucceeded,
    LambdaFunctionTimedOut,
    MapIterationAborted,
    MapIterationFailed,
    MapIterationStarted,
    MapIterationSucceeded,
    MapStateAborted,
    MapStateEntered,
    MapStateExited,
    MapStateFailed,
    MapStateStarted,
    MapStateSucceeded,
    ParallelStateAborted,
    ParallelStateEntered,
    ParallelStateExited,
    ParallelStateFailed,
    ParallelStateStarted,
    ParallelStateSucceeded,
    PassStateEntered,
    PassStateExited,
    SucceedStateEntered,
    SucceedStateExited,
    TaskFailed,
    TaskScheduled,
    TaskStarted,
    TaskStartFailed,
    TaskStateAborted,
    TaskStateEntered,
    TaskStateExited,
    TaskSubmitFailed,
    TaskSubmitted,
    TaskSucceeded,
    TaskTimedOut,
    WaitStateAborted,
    WaitStateEntered,
    WaitStateExited,
    MapRunAborted,
    MapRunFailed,
    MapRunStarted,
    MapRunSucceeded
  };

namespace HistoryEventTypeMapper
{
AWS_SFN_API HistoryEventType GetHistoryEventTypeForName(const Aws::String& name);

AWS_SFN_API Aws::String GetNameForHistoryEventType(HistoryEventType value);
} // namespace HistoryEventTypeMapper
} // namespace Model
} // namespace SFN
} // namespace Aws
