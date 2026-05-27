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
enum class ClusterFSxLustreDeletionPolicy { NOT_SET, DeleteIfNotUsed, Keep };

namespace ClusterFSxLustreDeletionPolicyMapper {
AWS_SAGEMAKER_API ClusterFSxLustreDeletionPolicy GetClusterFSxLustreDeletionPolicyForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClusterFSxLustreDeletionPolicy(ClusterFSxLustreDeletionPolicy value);
}  // namespace ClusterFSxLustreDeletionPolicyMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
