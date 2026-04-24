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
enum class ResourceContentType { NOT_SET, EMAIL, PHONE_NUMBER, LINK, OTHER };

namespace ResourceContentTypeMapper {
AWS_MARKETPLACEDISCOVERY_API ResourceContentType GetResourceContentTypeForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForResourceContentType(ResourceContentType value);
}  // namespace ResourceContentTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
