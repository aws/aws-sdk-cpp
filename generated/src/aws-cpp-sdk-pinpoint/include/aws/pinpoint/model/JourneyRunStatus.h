/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{
  enum class JourneyRunStatus
  {
    NOT_SET,
    SCHEDULED,
    RUNNING,
    COMPLETED,
    CANCELLED
  };

namespace JourneyRunStatusMapper
{
AWS_PINPOINT_API JourneyRunStatus GetJourneyRunStatusForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForJourneyRunStatus(JourneyRunStatus value);
} // namespace JourneyRunStatusMapper
} // namespace Model
} // namespace Pinpoint
} // namespace Aws
