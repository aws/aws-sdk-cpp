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
enum class ModelPackageRegistrationType { NOT_SET, Logged, Registered };

namespace ModelPackageRegistrationTypeMapper {
AWS_SAGEMAKER_API ModelPackageRegistrationType GetModelPackageRegistrationTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForModelPackageRegistrationType(ModelPackageRegistrationType value);
}  // namespace ModelPackageRegistrationTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
