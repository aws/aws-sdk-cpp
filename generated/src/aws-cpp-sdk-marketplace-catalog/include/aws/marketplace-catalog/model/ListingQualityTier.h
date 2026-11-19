/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {
enum class ListingQualityTier { NOT_SET, NEEDS_IMPROVEMENT, BASIC, STRONG, EXCELLENT };

namespace ListingQualityTierMapper {
AWS_MARKETPLACECATALOG_API ListingQualityTier GetListingQualityTierForName(const Aws::String& name);

AWS_MARKETPLACECATALOG_API Aws::String GetNameForListingQualityTier(ListingQualityTier value);
}  // namespace ListingQualityTierMapper
}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
