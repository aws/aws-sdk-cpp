/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-sms-voice-v2/model/NotifyConfigurationTier.h>

using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
namespace NotifyConfigurationTierMapper {

static const int BASIC_HASH = HashingUtils::HashString("BASIC");
static const int ADVANCED_HASH = HashingUtils::HashString("ADVANCED");

NotifyConfigurationTier GetNotifyConfigurationTierForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BASIC_HASH) {
    return NotifyConfigurationTier::BASIC;
  } else if (hashCode == ADVANCED_HASH) {
    return NotifyConfigurationTier::ADVANCED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NotifyConfigurationTier>(hashCode);
  }

  return NotifyConfigurationTier::NOT_SET;
}

Aws::String GetNameForNotifyConfigurationTier(NotifyConfigurationTier enumValue) {
  switch (enumValue) {
    case NotifyConfigurationTier::NOT_SET:
      return {};
    case NotifyConfigurationTier::BASIC:
      return "BASIC";
    case NotifyConfigurationTier::ADVANCED:
      return "ADVANCED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NotifyConfigurationTierMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
