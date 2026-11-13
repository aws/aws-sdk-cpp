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
enum class ClusterOnDrainTimeout { NOT_SET, Force, Skip };

namespace ClusterOnDrainTimeoutMapper {
AWS_SAGEMAKER_API ClusterOnDrainTimeout GetClusterOnDrainTimeoutForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClusterOnDrainTimeout(ClusterOnDrainTimeout value);
}  // namespace ClusterOnDrainTimeoutMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
