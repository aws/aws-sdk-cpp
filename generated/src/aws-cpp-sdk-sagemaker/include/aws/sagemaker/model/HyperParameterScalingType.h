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
enum class HyperParameterScalingType { NOT_SET, Auto, Linear, Logarithmic, ReverseLogarithmic };

namespace HyperParameterScalingTypeMapper {
AWS_SAGEMAKER_API HyperParameterScalingType GetHyperParameterScalingTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForHyperParameterScalingType(HyperParameterScalingType value);
}  // namespace HyperParameterScalingTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
