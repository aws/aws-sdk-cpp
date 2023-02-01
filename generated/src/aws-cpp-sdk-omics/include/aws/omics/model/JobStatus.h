/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Omics
{
namespace Model
{
  enum class JobStatus
  {
    NOT_SET,
    SUBMITTED,
    IN_PROGRESS,
    CANCELLED,
    COMPLETED,
    FAILED
  };

namespace JobStatusMapper
{
AWS_OMICS_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForJobStatus(JobStatus value);
} // namespace JobStatusMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
