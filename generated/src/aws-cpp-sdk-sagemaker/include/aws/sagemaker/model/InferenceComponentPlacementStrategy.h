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
enum class InferenceComponentPlacementStrategy { NOT_SET, SPREAD, BINPACK };

namespace InferenceComponentPlacementStrategyMapper {
AWS_SAGEMAKER_API InferenceComponentPlacementStrategy GetInferenceComponentPlacementStrategyForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForInferenceComponentPlacementStrategy(InferenceComponentPlacementStrategy value);
}  // namespace InferenceComponentPlacementStrategyMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
