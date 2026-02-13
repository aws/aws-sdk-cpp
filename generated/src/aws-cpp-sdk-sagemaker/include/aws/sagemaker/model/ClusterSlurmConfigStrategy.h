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
enum class ClusterSlurmConfigStrategy { NOT_SET, Overwrite, Managed, Merge };

namespace ClusterSlurmConfigStrategyMapper {
AWS_SAGEMAKER_API ClusterSlurmConfigStrategy GetClusterSlurmConfigStrategyForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClusterSlurmConfigStrategy(ClusterSlurmConfigStrategy value);
}  // namespace ClusterSlurmConfigStrategyMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
