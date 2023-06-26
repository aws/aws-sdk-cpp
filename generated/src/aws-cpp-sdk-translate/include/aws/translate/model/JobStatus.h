/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Translate
{
namespace Model
{
  enum class JobStatus
  {
    NOT_SET,
    SUBMITTED,
    IN_PROGRESS,
    COMPLETED,
    COMPLETED_WITH_ERROR,
    FAILED,
    STOP_REQUESTED,
    STOPPED
  };

namespace JobStatusMapper
{
AWS_TRANSLATE_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_TRANSLATE_API Aws::String GetNameForJobStatus(JobStatus value);
} // namespace JobStatusMapper
} // namespace Model
} // namespace Translate
} // namespace Aws
