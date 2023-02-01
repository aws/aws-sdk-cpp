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
  enum class CancelTimerFailedCause
  {
    NOT_SET,
    TIMER_ID_UNKNOWN,
    OPERATION_NOT_PERMITTED
  };

namespace CancelTimerFailedCauseMapper
{
AWS_SWF_API CancelTimerFailedCause GetCancelTimerFailedCauseForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForCancelTimerFailedCause(CancelTimerFailedCause value);
} // namespace CancelTimerFailedCauseMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
