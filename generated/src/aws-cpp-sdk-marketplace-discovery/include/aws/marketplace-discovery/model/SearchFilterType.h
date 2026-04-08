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
enum class SearchFilterType {
  NOT_SET,
  MIN_AVERAGE_CUSTOMER_RATING,
  MAX_AVERAGE_CUSTOMER_RATING,
  CATEGORY,
  PUBLISHER,
  FULFILLMENT_OPTION_TYPE,
  PRICING_MODEL,
  PRICING_UNIT,
  DEPLOYED_ON_AWS,
  NUMBER_OF_PRODUCTS
};

namespace SearchFilterTypeMapper {
AWS_MARKETPLACEDISCOVERY_API SearchFilterType GetSearchFilterTypeForName(const Aws::String& name);

AWS_MARKETPLACEDISCOVERY_API Aws::String GetNameForSearchFilterType(SearchFilterType value);
}  // namespace SearchFilterTypeMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
