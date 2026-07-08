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
enum class MarketplaceRevenueShareAllocationSortField { NOT_SET, EffectiveFrom };

namespace MarketplaceRevenueShareAllocationSortFieldMapper {
AWS_PARTNERCENTRALREVENUEMEASUREMENT_API MarketplaceRevenueShareAllocationSortField
GetMarketplaceRevenueShareAllocationSortFieldForName(const Aws::String& name);

AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::String GetNameForMarketplaceRevenueShareAllocationSortField(
    MarketplaceRevenueShareAllocationSortField value);
}  // namespace MarketplaceRevenueShareAllocationSortFieldMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
