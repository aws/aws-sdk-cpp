/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-sms-voice-v2/model/CarrierStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
namespace CarrierStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");

CarrierStatus GetCarrierStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return CarrierStatus::PENDING;
  } else if (hashCode == ACTIVE_HASH) {
    return CarrierStatus::ACTIVE;
  } else if (hashCode == REJECTED_HASH) {
    return CarrierStatus::REJECTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CarrierStatus>(hashCode);
  }

  return CarrierStatus::NOT_SET;
}

Aws::String GetNameForCarrierStatus(CarrierStatus enumValue) {
  switch (enumValue) {
    case CarrierStatus::NOT_SET:
      return {};
    case CarrierStatus::PENDING:
      return "PENDING";
    case CarrierStatus::ACTIVE:
      return "ACTIVE";
    case CarrierStatus::REJECTED:
      return "REJECTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CarrierStatusMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
