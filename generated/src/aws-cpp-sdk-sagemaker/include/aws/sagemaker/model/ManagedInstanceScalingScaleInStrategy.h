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
enum class ManagedInstanceScalingScaleInStrategy { NOT_SET, IDLE_RELEASE, CONSOLIDATION };

namespace ManagedInstanceScalingScaleInStrategyMapper {
AWS_SAGEMAKER_API ManagedInstanceScalingScaleInStrategy GetManagedInstanceScalingScaleInStrategyForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForManagedInstanceScalingScaleInStrategy(ManagedInstanceScalingScaleInStrategy value);
}  // namespace ManagedInstanceScalingScaleInStrategyMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
