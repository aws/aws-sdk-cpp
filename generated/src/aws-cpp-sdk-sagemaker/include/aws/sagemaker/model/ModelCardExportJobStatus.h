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
  enum class ModelCardExportJobStatus
  {
    NOT_SET,
    InProgress,
    Completed,
    Failed
  };

namespace ModelCardExportJobStatusMapper
{
AWS_SAGEMAKER_API ModelCardExportJobStatus GetModelCardExportJobStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForModelCardExportJobStatus(ModelCardExportJobStatus value);
} // namespace ModelCardExportJobStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
