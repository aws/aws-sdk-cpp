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
enum class ModelPackageType { NOT_SET, Versioned, Unversioned, Both };

namespace ModelPackageTypeMapper {
AWS_SAGEMAKER_API ModelPackageType GetModelPackageTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForModelPackageType(ModelPackageType value);
}  // namespace ModelPackageTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
