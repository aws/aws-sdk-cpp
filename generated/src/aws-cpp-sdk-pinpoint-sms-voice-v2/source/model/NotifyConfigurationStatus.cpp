/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-sms-voice-v2/model/NotifyConfigurationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
namespace NotifyConfigurationStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
static const int REQUIRES_VERIFICATION_HASH = HashingUtils::HashString("REQUIRES_VERIFICATION");

NotifyConfigurationStatus GetNotifyConfigurationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return NotifyConfigurationStatus::PENDING;
  } else if (hashCode == ACTIVE_HASH) {
    return NotifyConfigurationStatus::ACTIVE;
  } else if (hashCode == REJECTED_HASH) {
    return NotifyConfigurationStatus::REJECTED;
  } else if (hashCode == REQUIRES_VERIFICATION_HASH) {
    return NotifyConfigurationStatus::REQUIRES_VERIFICATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NotifyConfigurationStatus>(hashCode);
  }

  return NotifyConfigurationStatus::NOT_SET;
}

Aws::String GetNameForNotifyConfigurationStatus(NotifyConfigurationStatus enumValue) {
  switch (enumValue) {
    case NotifyConfigurationStatus::NOT_SET:
      return {};
    case NotifyConfigurationStatus::PENDING:
      return "PENDING";
    case NotifyConfigurationStatus::ACTIVE:
      return "ACTIVE";
    case NotifyConfigurationStatus::REJECTED:
      return "REJECTED";
    case NotifyConfigurationStatus::REQUIRES_VERIFICATION:
      return "REQUIRES_VERIFICATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NotifyConfigurationStatusMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
