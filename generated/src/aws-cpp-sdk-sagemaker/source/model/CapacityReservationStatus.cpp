/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/CapacityReservationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace CapacityReservationStatusMapper {

static const int Scheduled_HASH = HashingUtils::HashString("Scheduled");
static const int Active_HASH = HashingUtils::HashString("Active");
static const int Expired_HASH = HashingUtils::HashString("Expired");

CapacityReservationStatus GetCapacityReservationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Scheduled_HASH) {
    return CapacityReservationStatus::Scheduled;
  } else if (hashCode == Active_HASH) {
    return CapacityReservationStatus::Active;
  } else if (hashCode == Expired_HASH) {
    return CapacityReservationStatus::Expired;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapacityReservationStatus>(hashCode);
  }

  return CapacityReservationStatus::NOT_SET;
}

Aws::String GetNameForCapacityReservationStatus(CapacityReservationStatus enumValue) {
  switch (enumValue) {
    case CapacityReservationStatus::NOT_SET:
      return {};
    case CapacityReservationStatus::Scheduled:
      return "Scheduled";
    case CapacityReservationStatus::Active:
      return "Active";
    case CapacityReservationStatus::Expired:
      return "Expired";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapacityReservationStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
