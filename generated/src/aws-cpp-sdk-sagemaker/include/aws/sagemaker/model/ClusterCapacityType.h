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
enum class ClusterCapacityType { NOT_SET, Spot, OnDemand };

namespace ClusterCapacityTypeMapper {
AWS_SAGEMAKER_API ClusterCapacityType GetClusterCapacityTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClusterCapacityType(ClusterCapacityType value);
}  // namespace ClusterCapacityTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
