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
  enum class ModelCardProcessingStatus
  {
    NOT_SET,
    DeleteInProgress,
    DeletePending,
    ContentDeleted,
    ExportJobsDeleted,
    DeleteCompleted,
    DeleteFailed
  };

namespace ModelCardProcessingStatusMapper
{
AWS_SAGEMAKER_API ModelCardProcessingStatus GetModelCardProcessingStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForModelCardProcessingStatus(ModelCardProcessingStatus value);
} // namespace ModelCardProcessingStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
