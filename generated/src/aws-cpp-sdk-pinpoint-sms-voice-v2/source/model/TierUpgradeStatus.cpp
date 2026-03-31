/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-sms-voice-v2/model/TierUpgradeStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
namespace TierUpgradeStatusMapper {

static const int BASIC_HASH = HashingUtils::HashString("BASIC");
static const int PENDING_UPGRADE_HASH = HashingUtils::HashString("PENDING_UPGRADE");
static const int ADVANCED_HASH = HashingUtils::HashString("ADVANCED");
static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");

TierUpgradeStatus GetTierUpgradeStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BASIC_HASH) {
    return TierUpgradeStatus::BASIC;
  } else if (hashCode == PENDING_UPGRADE_HASH) {
    return TierUpgradeStatus::PENDING_UPGRADE;
  } else if (hashCode == ADVANCED_HASH) {
    return TierUpgradeStatus::ADVANCED;
  } else if (hashCode == REJECTED_HASH) {
    return TierUpgradeStatus::REJECTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TierUpgradeStatus>(hashCode);
  }

  return TierUpgradeStatus::NOT_SET;
}

Aws::String GetNameForTierUpgradeStatus(TierUpgradeStatus enumValue) {
  switch (enumValue) {
    case TierUpgradeStatus::NOT_SET:
      return {};
    case TierUpgradeStatus::BASIC:
      return "BASIC";
    case TierUpgradeStatus::PENDING_UPGRADE:
      return "PENDING_UPGRADE";
    case TierUpgradeStatus::ADVANCED:
      return "ADVANCED";
    case TierUpgradeStatus::REJECTED:
      return "REJECTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TierUpgradeStatusMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
