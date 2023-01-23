/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class AutoMLJobStatus
  {
    NOT_SET,
    Completed,
    InProgress,
    Failed,
    Stopped,
    Stopping
  };

namespace AutoMLJobStatusMapper
{
AWS_SAGEMAKER_API AutoMLJobStatus GetAutoMLJobStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForAutoMLJobStatus(AutoMLJobStatus value);
} // namespace AutoMLJobStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
