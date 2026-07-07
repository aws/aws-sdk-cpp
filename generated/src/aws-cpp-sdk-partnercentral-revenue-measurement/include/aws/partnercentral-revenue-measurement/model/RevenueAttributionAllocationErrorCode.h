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
enum class RevenueAttributionAllocationErrorCode {
  NOT_SET,
  ALLOCATION_CAP_EXCEEDED,
  RESOURCE_NOT_FOUND,
  IMMUTABLE_ALLOCATION,
  ACCESS_DENIED,
  INVALID_VALUE,
  CONCURRENT_MODIFICATION,
  INTERNAL_ERROR
};

namespace RevenueAttributionAllocationErrorCodeMapper {
AWS_PARTNERCENTRALREVENUEMEASUREMENT_API RevenueAttributionAllocationErrorCode
GetRevenueAttributionAllocationErrorCodeForName(const Aws::String& name);

AWS_PARTNERCENTRALREVENUEMEASUREMENT_API Aws::String GetNameForRevenueAttributionAllocationErrorCode(
    RevenueAttributionAllocationErrorCode value);
}  // namespace RevenueAttributionAllocationErrorCodeMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
