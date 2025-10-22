/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class JobsQueryStatus
  {
    NOT_SET,
    SUBMITTED,
    PROGRESSING,
    COMPLETE,
    ERROR_
  };

namespace JobsQueryStatusMapper
{
AWS_MEDIACONVERT_API JobsQueryStatus GetJobsQueryStatusForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForJobsQueryStatus(JobsQueryStatus value);
} // namespace JobsQueryStatusMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
