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
enum class RevenueAttributionAllocationTaskStatus { NOT_SET, IN_PROGRESS, COMPLETE, FAILED };

namespace RevenueAttributionAllocationTaskStatusMapper {
AWS_PARTNERCENTRALREVENUEMEASUREMENT_API RevenueAttributionAllocationTaskStatus
GetRevenueAttributionAllocationTaskStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::String GetNameForRevenueAttributionAllocationTaskStatus(
    RevenueAttributionAllocationTaskStatus value);
}  // namespace RevenueAttributionAllocationTaskStatusMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
