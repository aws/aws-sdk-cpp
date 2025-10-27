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
enum class ModelInfrastructureType { NOT_SET, RealTimeInference };

namespace ModelInfrastructureTypeMapper {
AWS_SAGEMAKER_API ModelInfrastructureType GetModelInfrastructureTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForModelInfrastructureType(ModelInfrastructureType value);
}  // namespace ModelInfrastructureTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
