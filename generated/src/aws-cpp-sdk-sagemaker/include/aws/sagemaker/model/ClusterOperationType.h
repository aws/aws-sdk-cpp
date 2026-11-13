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
enum class ClusterOperationType { NOT_SET, Scaling, DeepHealthCheck };

namespace ClusterOperationTypeMapper {
AWS_SAGEMAKER_API ClusterOperationType GetClusterOperationTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClusterOperationType(ClusterOperationType value);
}  // namespace ClusterOperationTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
