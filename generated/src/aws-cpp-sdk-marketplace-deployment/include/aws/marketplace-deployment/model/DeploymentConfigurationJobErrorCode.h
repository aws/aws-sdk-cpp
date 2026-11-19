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
enum class DeploymentConfigurationJobErrorCode { NOT_SET, FULFILLMENT_URL_UNREACHABLE, INTERNAL_ERROR, ENDPOINT_INVALID };

namespace DeploymentConfigurationJobErrorCodeMapper {
AWS_MARKETPLACEDEPLOYMENT_API DeploymentConfigurationJobErrorCode GetDeploymentConfigurationJobErrorCodeForName(const Aws::String& name);

AWS_MARKETPLACEDEPLOYMENT_API Aws::String GetNameForDeploymentConfigurationJobErrorCode(DeploymentConfigurationJobErrorCode value);
}  // namespace DeploymentConfigurationJobErrorCodeMapper
}  // namespace Model
}  // namespace MarketplaceDeployment
}  // namespace Aws
