/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace mgn
{
namespace Model
{
  enum class JobStatus
  {
    NOT_SET,
    PENDING,
    STARTED,
    COMPLETED
  };

namespace JobStatusMapper
{
AWS_MGN_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_MGN_API Aws::String GetNameForJobStatus(JobStatus value);
} // namespace JobStatusMapper
} // namespace Model
} // namespace mgn
} // namespace Aws
