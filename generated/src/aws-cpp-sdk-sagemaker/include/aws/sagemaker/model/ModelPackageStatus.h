/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

namespace Aws {
namespace SageMaker {
namespace Model {
enum class ModelPackageStatus { NOT_SET, Pending, InProgress, Completed, Failed, Deleting };

namespace ModelPackageStatusMapper {
AWS_SAGEMAKER_API ModelPackageStatus GetModelPackageStatusForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForModelPackageStatus(ModelPackageStatus value);
}  // namespace ModelPackageStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
