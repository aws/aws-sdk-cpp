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
enum class SearchListingsSortBy { NOT_SET, RELEVANCE, AVERAGE_CUSTOMER_RATING };

namespace SearchListingsSortByMapper {
AWS_MARKETPLACEDISCOVERY_API SearchListingsSortBy GetSearchListingsSortByForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForSearchListingsSortBy(SearchListingsSortBy value);
}  // namespace SearchListingsSortByMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
