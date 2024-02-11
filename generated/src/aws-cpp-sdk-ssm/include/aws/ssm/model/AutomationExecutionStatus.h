/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class AutomationExecutionStatus
  {
    NOT_SET,
    Pending,
    InProgress,
    Waiting,
    Success,
    TimedOut,
    Cancelling,
    Cancelled,
    Failed,
    PendingApproval,
    Approved,
    Rejected,
    Scheduled,
    RunbookInProgress,
    PendingChangeCalendarOverride,
    ChangeCalendarOverrideApproved,
    ChangeCalendarOverrideRejected,
    CompletedWithSuccess,
    CompletedWithFailure,
    Exited
  };

namespace AutomationExecutionStatusMapper
{
AWS_SSM_API AutomationExecutionStatus GetAutomationExecutionStatusForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForAutomationExecutionStatus(AutomationExecutionStatus value);
} // namespace AutomationExecutionStatusMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
