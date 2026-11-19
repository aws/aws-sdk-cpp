/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/partnercentral-marketing/model/DeliveryStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {
namespace DeliveryStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int DELIVERED_HASH = HashingUtils::HashString("DELIVERED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

DeliveryStatus GetDeliveryStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return DeliveryStatus::PENDING;
  } else if (hashCode == DELIVERED_HASH) {
    return DeliveryStatus::DELIVERED;
  } else if (hashCode == FAILED_HASH) {
    return DeliveryStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeliveryStatus>(hashCode);
  }

  return DeliveryStatus::NOT_SET;
}

Aws::String GetNameForDeliveryStatus(DeliveryStatus enumValue) {
  switch (enumValue) {
    case DeliveryStatus::NOT_SET:
      return {};
    case DeliveryStatus::PENDING:
      return "PENDING";
    case DeliveryStatus::DELIVERED:
      return "DELIVERED";
    case DeliveryStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeliveryStatusMapper
}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
