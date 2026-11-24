/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/CapacityReservationOptInStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace CapacityReservationOptInStatusMapper {

static const int Pending_HASH = HashingUtils::HashString("Pending");
static const int Active_HASH = HashingUtils::HashString("Active");
static const int Inactive_HASH = HashingUtils::HashString("Inactive");

CapacityReservationOptInStatus GetCapacityReservationOptInStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Pending_HASH) {
    return CapacityReservationOptInStatus::Pending;
  } else if (hashCode == Active_HASH) {
    return CapacityReservationOptInStatus::Active;
  } else if (hashCode == Inactive_HASH) {
    return CapacityReservationOptInStatus::Inactive;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapacityReservationOptInStatus>(hashCode);
  }

  return CapacityReservationOptInStatus::NOT_SET;
}

Aws::String GetNameForCapacityReservationOptInStatus(CapacityReservationOptInStatus enumValue) {
  switch (enumValue) {
    case CapacityReservationOptInStatus::NOT_SET:
      return {};
    case CapacityReservationOptInStatus::Pending:
      return "Pending";
    case CapacityReservationOptInStatus::Active:
      return "Active";
    case CapacityReservationOptInStatus::Inactive:
      return "Inactive";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapacityReservationOptInStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
