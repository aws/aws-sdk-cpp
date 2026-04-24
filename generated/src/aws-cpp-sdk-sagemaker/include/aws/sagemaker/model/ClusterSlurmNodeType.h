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
enum class ClusterSlurmNodeType { NOT_SET, Controller, Login, Compute };

namespace ClusterSlurmNodeTypeMapper {
AWS_SAGEMAKER_API ClusterSlurmNodeType GetClusterSlurmNodeTypeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClusterSlurmNodeType(ClusterSlurmNodeType value);
}  // namespace ClusterSlurmNodeTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
