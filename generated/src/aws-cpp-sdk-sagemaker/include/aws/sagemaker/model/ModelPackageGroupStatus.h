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
  enum class ModelPackageGroupStatus
  {
    NOT_SET,
    Pending,
    InProgress,
    Completed,
    Failed,
    Deleting,
    DeleteFailed
  };

namespace ModelPackageGroupStatusMapper
{
AWS_SAGEMAKER_API ModelPackageGroupStatus GetModelPackageGroupStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForModelPackageGroupStatus(ModelPackageGroupStatus value);
} // namespace ModelPackageGroupStatusMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
