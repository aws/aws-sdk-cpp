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
enum class ListingBadgeType { NOT_SET, AWS_FREE_TIER, FREE_TRIAL, DEPLOYED_ON_AWS, QUICK_LAUNCH, MULTI_PRODUCT };

namespace ListingBadgeTypeMapper {
AWS_MARKETPLACEDISCOVERY_API ListingBadgeType GetListingBadgeTypeForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForListingBadgeType(ListingBadgeType value);
}  // namespace ListingBadgeTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
