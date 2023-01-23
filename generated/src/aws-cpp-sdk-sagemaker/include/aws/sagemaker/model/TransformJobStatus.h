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
  enum class TransformJobStatus
  {
    NOT_SET,
    InProgress,
    Completed,
    Failed,
    Stopping,
    Stopped
  };

namespace TransformJobStatusMapper
{
AWS_SAGEMAKER_API TransformJobStatus GetTransformJobStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForTransformJobStatus(TransformJobStatus value);
} // namespace TransformJobStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
