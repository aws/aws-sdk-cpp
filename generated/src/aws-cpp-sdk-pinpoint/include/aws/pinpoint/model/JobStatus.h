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
  enum class JobStatus
  {
    NOT_SET,
    CREATED,
    PREPARING_FOR_INITIALIZATION,
    INITIALIZING,
    PROCESSING,
    PENDING_JOB,
    COMPLETING,
    COMPLETED,
    FAILING,
    FAILED
  };

namespace JobStatusMapper
{
AWS_PINPOINT_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForJobStatus(JobStatus value);
} // namespace JobStatusMapper
} // namespace Model
} // namespace Pinpoint
} // namespace Aws
