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
  enum class StartTimerFailedCause
  {
    NOT_SET,
    TIMER_ID_ALREADY_IN_USE,
    OPEN_TIMERS_LIMIT_EXCEEDED,
    TIMER_CREATION_RATE_EXCEEDED,
    OPERATION_NOT_PERMITTED
  };

namespace StartTimerFailedCauseMapper
{
AWS_SWF_API StartTimerFailedCause GetStartTimerFailedCauseForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForStartTimerFailedCause(StartTimerFailedCause value);
} // namespace StartTimerFailedCauseMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
