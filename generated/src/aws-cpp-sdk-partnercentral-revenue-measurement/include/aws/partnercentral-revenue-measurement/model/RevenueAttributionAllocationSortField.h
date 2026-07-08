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
enum class RevenueAttributionAllocationSortField { NOT_SET, EffectiveFrom };

namespace RevenueAttributionAllocationSortFieldMapper {
AWS_PARTNERCENTRALREVENUEMEASUREMENT_API RevenueAttributionAllocationSortField
GetRevenueAttributionAllocationSortFieldForName(const Aws::String& name);

AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::String GetNameForRevenueAttributionAllocationSortField(
    RevenueAttributionAllocationSortField value);
}  // namespace RevenueAttributionAllocationSortFieldMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
