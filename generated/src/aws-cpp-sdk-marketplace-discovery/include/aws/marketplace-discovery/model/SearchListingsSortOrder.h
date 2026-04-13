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
enum class SearchListingsSortOrder { NOT_SET, DESCENDING, ASCENDING };

namespace SearchListingsSortOrderMapper {
AWS_MARKETPLACEDISCOVERY_API SearchListingsSortOrder GetSearchListingsSortOrderForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForSearchListingsSortOrder(SearchListingsSortOrder value);
}  // namespace SearchListingsSortOrderMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
