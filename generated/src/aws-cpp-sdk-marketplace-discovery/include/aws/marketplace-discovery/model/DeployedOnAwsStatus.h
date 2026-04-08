/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
enum class DeployedOnAwsStatus { NOT_SET, DEPLOYED, NOT_DEPLOYED, NOT_APPLICABLE };

namespace DeployedOnAwsStatusMapper {
AWS_MARKETPLACEDISCOVERY_API DeployedOnAwsStatus GetDeployedOnAwsStatusForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForDeployedOnAwsStatus(DeployedOnAwsStatus value);
}  // namespace DeployedOnAwsStatusMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
