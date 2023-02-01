/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SimSpaceWeaver
{
namespace Model
{
  enum class ClockTargetStatus
  {
    NOT_SET,
    UNKNOWN,
    STARTED,
    STOPPED
  };

namespace ClockTargetStatusMapper
{
AWS_SIMSPACEWEAVER_API ClockTargetStatus GetClockTargetStatusForName(const Aws::String& name);

AWS_SIMSPACEWEAVER_API Aws::String GetNameForClockTargetStatus(ClockTargetStatus value);
} // namespace ClockTargetStatusMapper
} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
