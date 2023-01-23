/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class JobStatus
  {
    NOT_SET,
    CREATED,
    PROCESSING,
    COMPLETED,
    FAILED
  };

namespace JobStatusMapper
{
AWS_SESV2_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForJobStatus(JobStatus value);
} // namespace JobStatusMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
