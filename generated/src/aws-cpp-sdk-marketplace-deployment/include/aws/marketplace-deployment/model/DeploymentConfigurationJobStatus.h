/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-deployment/MarketplaceDeployment_EXPORTS.h>

namespace Aws {
namespace MarketplaceDeployment {
namespace Model {
enum class DeploymentConfigurationJobStatus { NOT_SET, IN_PROGRESS, SUCCEEDED, FAILED };

namespace DeploymentConfigurationJobStatusMapper {
AWS_MARKETPLACEDEPLOYMENT_API DeploymentConfigurationJobStatus GetDeploymentConfigurationJobStatusForName(const Aws::String& name);

AWS_MARKETPLACEDEPLOYMENT_API Aws::String GetNameForDeploymentConfigurationJobStatus(DeploymentConfigurationJobStatus value);
}  // namespace DeploymentConfigurationJobStatusMapper
}  // namespace Model
}  // namespace MarketplaceDeployment
}  // namespace Aws
