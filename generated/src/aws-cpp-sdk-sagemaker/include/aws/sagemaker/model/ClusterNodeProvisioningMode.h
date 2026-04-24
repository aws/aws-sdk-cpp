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
enum class ClusterNodeProvisioningMode { NOT_SET, Continuous };

namespace ClusterNodeProvisioningModeMapper {
AWS_SAGEMAKER_API ClusterNodeProvisioningMode GetClusterNodeProvisioningModeForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForClusterNodeProvisioningMode(ClusterNodeProvisioningMode value);
}  // namespace ClusterNodeProvisioningModeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
