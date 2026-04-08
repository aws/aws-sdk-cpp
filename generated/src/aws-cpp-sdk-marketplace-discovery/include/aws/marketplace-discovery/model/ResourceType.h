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
enum class ResourceType { NOT_SET, MANUFACTURER_SUPPORT, MANUFACTURER_INSTRUCTIONS };

namespace ResourceTypeMapper {
AWS_MARKETPLACEDISCOVERY_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForResourceType(ResourceType value);
}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
