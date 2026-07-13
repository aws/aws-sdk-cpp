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
enum class AllocationStatus { NOT_SET, ACTIVE, INACTIVE };

namespace AllocationStatusMapper {
AWS_PARTNERCENTRALREVENUEMEASUREMENT_API AllocationStatus GetAllocationStatusForName(const Aws::String& name);

AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::String GetNameForAllocationStatus(AllocationStatus value);
}  // namespace AllocationStatusMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
