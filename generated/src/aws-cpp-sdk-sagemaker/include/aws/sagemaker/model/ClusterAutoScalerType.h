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
enum class ClusterAutoScalerType { NOT_SET, Karpenter };

namespace ClusterAutoScalerTypeMapper {
AWS_SAGEMAKER_API ClusterAutoScalerType GetClusterAutoScalerTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClusterAutoScalerType(ClusterAutoScalerType value);
}  // namespace ClusterAutoScalerTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
