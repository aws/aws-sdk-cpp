/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-sms-voice-v2/model/NotifyConfigurationFilterName.h>

using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
namespace NotifyConfigurationFilterNameMapper {

static const int display_name_HASH = HashingUtils::HashString("display-name");
static const int enabled_countries_HASH = HashingUtils::HashString("enabled-countries");
static const int enabled_channels_HASH = HashingUtils::HashString("enabled-channels");
static const int default_template_HASH = HashingUtils::HashString("default-template");
static const int default_pool_HASH = HashingUtils::HashString("default-pool");
static const int use_case_HASH = HashingUtils::HashString("use-case");
static const int status_HASH = HashingUtils::HashString("status");
static const int deletion_protection_enabled_HASH = HashingUtils::HashString("deletion-protection-enabled");
static const int tier_upgrade_status_HASH = HashingUtils::HashString("tier-upgrade-status");

NotifyConfigurationFilterName GetNotifyConfigurationFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == display_name_HASH) {
    return NotifyConfigurationFilterName::display_name;
  } else if (hashCode == enabled_countries_HASH) {
    return NotifyConfigurationFilterName::enabled_countries;
  } else if (hashCode == enabled_channels_HASH) {
    return NotifyConfigurationFilterName::enabled_channels;
  } else if (hashCode == default_template_HASH) {
    return NotifyConfigurationFilterName::default_template;
  } else if (hashCode == default_pool_HASH) {
    return NotifyConfigurationFilterName::default_pool;
  } else if (hashCode == use_case_HASH) {
    return NotifyConfigurationFilterName::use_case;
  } else if (hashCode == status_HASH) {
    return NotifyConfigurationFilterName::status;
  } else if (hashCode == deletion_protection_enabled_HASH) {
    return NotifyConfigurationFilterName::deletion_protection_enabled;
  } else if (hashCode == tier_upgrade_status_HASH) {
    return NotifyConfigurationFilterName::tier_upgrade_status;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NotifyConfigurationFilterName>(hashCode);
  }

  return NotifyConfigurationFilterName::NOT_SET;
}

Aws::String GetNameForNotifyConfigurationFilterName(NotifyConfigurationFilterName enumValue) {
  switch (enumValue) {
    case NotifyConfigurationFilterName::NOT_SET:
      return {};
    case NotifyConfigurationFilterName::display_name:
      return "display-name";
    case NotifyConfigurationFilterName::enabled_countries:
      return "enabled-countries";
    case NotifyConfigurationFilterName::enabled_channels:
      return "enabled-channels";
    case NotifyConfigurationFilterName::default_template:
      return "default-template";
    case NotifyConfigurationFilterName::default_pool:
      return "default-pool";
    case NotifyConfigurationFilterName::use_case:
      return "use-case";
    case NotifyConfigurationFilterName::status:
      return "status";
    case NotifyConfigurationFilterName::deletion_protection_enabled:
      return "deletion-protection-enabled";
    case NotifyConfigurationFilterName::tier_upgrade_status:
      return "tier-upgrade-status";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NotifyConfigurationFilterNameMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
