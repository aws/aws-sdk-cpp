/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-revenue-measurement/PartnerCentralRevenueMeasurement_EXPORTS.h>

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {
enum class MarketplaceRevenueShareSortBy { NOT_SET, LastModifiedDate };

namespace MarketplaceRevenueShareSortByMapper {
AWS_PARTNERCENTRALREVENUEMEASUREMENT_API MarketplaceRevenueShareSortBy GetMarketplaceRevenueShareSortByForName(const Aws::String& name);

AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::String GetNameForMarketplaceRevenueShareSortBy(MarketplaceRevenueShareSortBy value);
}  // namespace MarketplaceRevenueShareSortByMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
