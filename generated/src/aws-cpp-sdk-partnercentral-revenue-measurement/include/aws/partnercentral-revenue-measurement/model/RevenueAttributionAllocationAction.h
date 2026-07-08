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
enum class RevenueAttributionAllocationAction { NOT_SET, CREATE, UPDATE };

namespace RevenueAttributionAllocationActionMapper {
AWS_PARTNERCENTRALREVENUEMEASUREMENT_API RevenueAttributionAllocationAction
GetRevenueAttributionAllocationActionForName(const Aws::String& name);

AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::String GetNameForRevenueAttributionAllocationAction(RevenueAttributionAllocationAction value);
}  // namespace RevenueAttributionAllocationActionMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
