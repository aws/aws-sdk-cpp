/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Scheduler
{
namespace Model
{
  enum class ScheduleState
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace ScheduleStateMapper
{
AWS_SCHEDULER_API ScheduleState GetScheduleStateForName(const Aws::String& name);

AWS_SCHEDULER_API Aws::String GetNameForScheduleState(ScheduleState value);
} // namespace ScheduleStateMapper
} // namespace Model
} // namespace Scheduler
} // namespace Aws
