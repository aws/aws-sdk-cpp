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
enum class SellerEngagementType { NOT_SET, REQUEST_FOR_PRIVATE_OFFER, REQUEST_FOR_DEMO };

namespace SellerEngagementTypeMapper {
AWS_MARKETPLACEDISCOVERY_API SellerEngagementType GetSellerEngagementTypeForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForSellerEngagementType(SellerEngagementType value);
}  // namespace SellerEngagementTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
