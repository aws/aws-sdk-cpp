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
enum class ClusterPatchingStrategy { NOT_SET, WhenIdle, WhenAllIdle };

namespace ClusterPatchingStrategyMapper {
AWS_SAGEMAKER_API ClusterPatchingStrategy GetClusterPatchingStrategyForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClusterPatchingStrategy(ClusterPatchingStrategy value);
}  // namespace ClusterPatchingStrategyMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
