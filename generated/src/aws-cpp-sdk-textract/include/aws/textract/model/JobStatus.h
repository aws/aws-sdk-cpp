/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Textract
{
namespace Model
{
  enum class JobStatus
  {
    NOT_SET,
    IN_PROGRESS,
    SUCCEEDED,
    FAILED,
    PARTIAL_SUCCESS
  };

namespace JobStatusMapper
{
AWS_TEXTRACT_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_TEXTRACT_API Aws::String GetNameForJobStatus(JobStatus value);
} // namespace JobStatusMapper
} // namespace Model
} // namespace Textract
} // namespace Aws
