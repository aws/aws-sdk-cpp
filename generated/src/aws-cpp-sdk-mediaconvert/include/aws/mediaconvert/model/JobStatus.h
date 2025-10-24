/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

namespace Aws {
namespace MediaConvert {
namespace Model {
enum class JobStatus { NOT_SET, SUBMITTED, PROGRESSING, COMPLETE, CANCELED, ERROR_ };

namespace JobStatusMapper {
AWS_MEDIACONVERT_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForJobStatus(JobStatus value);
}  // namespace JobStatusMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
