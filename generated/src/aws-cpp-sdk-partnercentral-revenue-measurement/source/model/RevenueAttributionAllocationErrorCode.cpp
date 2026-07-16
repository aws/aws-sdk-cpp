/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-revenue-measurement/model/RevenueAttributionAllocationErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralRevenueMeasurement {
namespace Model {
namespace RevenueAttributionAllocationErrorCodeMapper {

static const int ALLOCATION_CAP_EXCEEDED_HASH = HashingUtils::HashString("ALLOCATION_CAP_EXCEEDED");
static const int RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("RESOURCE_NOT_FOUND");
static const int IMMUTABLE_ALLOCATION_HASH = HashingUtils::HashString("IMMUTABLE_ALLOCATION");
static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
static const int INVALID_VALUE_HASH = HashingUtils::HashString("INVALID_VALUE");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("CONCURRENT_MODIFICATION");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");

RevenueAttributionAllocationErrorCode GetRevenueAttributionAllocationErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALLOCATION_CAP_EXCEEDED_HASH) {
    return RevenueAttributionAllocationErrorCode::ALLOCATION_CAP_EXCEEDED;
  } else if (hashCode == RESOURCE_NOT_FOUND_HASH) {
    return RevenueAttributionAllocationErrorCode::RESOURCE_NOT_FOUND;
  } else if (hashCode == IMMUTABLE_ALLOCATION_HASH) {
    return RevenueAttributionAllocationErrorCode::IMMUTABLE_ALLOCATION;
  } else if (hashCode == ACCESS_DENIED_HASH) {
    return RevenueAttributionAllocationErrorCode::ACCESS_DENIED;
  } else if (hashCode == INVALID_VALUE_HASH) {
    return RevenueAttributionAllocationErrorCode::INVALID_VALUE;
  } else if (hashCode == CONCURRENT_MODIFICATION_HASH) {
    return RevenueAttributionAllocationErrorCode::CONCURRENT_MODIFICATION;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return RevenueAttributionAllocationErrorCode::INTERNAL_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RevenueAttributionAllocationErrorCode>(hashCode);
  }

  return RevenueAttributionAllocationErrorCode::NOT_SET;
}

Aws::String GetNameForRevenueAttributionAllocationErrorCode(RevenueAttributionAllocationErrorCode enumValue) {
  switch (enumValue) {
    case RevenueAttributionAllocationErrorCode::NOT_SET:
      return {};
    case RevenueAttributionAllocationErrorCode::ALLOCATION_CAP_EXCEEDED:
      return "ALLOCATION_CAP_EXCEEDED";
    case RevenueAttributionAllocationErrorCode::RESOURCE_NOT_FOUND:
      return "RESOURCE_NOT_FOUND";
    case RevenueAttributionAllocationErrorCode::IMMUTABLE_ALLOCATION:
      return "IMMUTABLE_ALLOCATION";
    case RevenueAttributionAllocationErrorCode::ACCESS_DENIED:
      return "ACCESS_DENIED";
    case RevenueAttributionAllocationErrorCode::INVALID_VALUE:
      return "INVALID_VALUE";
    case RevenueAttributionAllocationErrorCode::CONCURRENT_MODIFICATION:
      return "CONCURRENT_MODIFICATION";
    case RevenueAttributionAllocationErrorCode::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RevenueAttributionAllocationErrorCodeMapper
}  // namespace Model
}  // namespace PartnerCentralRevenueMeasurement
}  // namespace Aws
