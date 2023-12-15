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
  enum class PipelineStatus
  {
    NOT_SET,
    Active,
    Deleting
  };

namespace PipelineStatusMapper
{
AWS_SAGEMAKER_API PipelineStatus GetPipelineStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForPipelineStatus(PipelineStatus value);
} // namespace PipelineStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
