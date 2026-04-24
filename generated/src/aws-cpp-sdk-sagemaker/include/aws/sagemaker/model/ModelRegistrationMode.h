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
enum class ModelRegistrationMode { NOT_SET, AutoModelRegistrationEnabled, AutoModelRegistrationDisabled };

namespace ModelRegistrationModeMapper {
AWS_SAGEMAKER_API ModelRegistrationMode GetModelRegistrationModeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForModelRegistrationMode(ModelRegistrationMode value);
}  // namespace ModelRegistrationModeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
