/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MedicalImaging
{
namespace Model
{
  enum class JobStatus
  {
    NOT_SET,
    SUBMITTED,
    IN_PROGRESS,
    COMPLETED,
    FAILED
  };

namespace JobStatusMapper
{
AWS_MEDICALIMAGING_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_MEDICALIMAGING_API Aws::String GetNameForJobStatus(JobStatus value);
} // namespace JobStatusMapper
} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
