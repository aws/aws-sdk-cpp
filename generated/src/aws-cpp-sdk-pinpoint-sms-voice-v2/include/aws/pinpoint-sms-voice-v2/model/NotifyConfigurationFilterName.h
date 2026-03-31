/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
enum class NotifyConfigurationFilterName {
  NOT_SET,
  display_name,
  enabled_countries,
  enabled_channels,
  default_template,
  default_pool,
  use_case,
  status,
  deletion_protection_enabled,
  tier_upgrade_status
};

namespace NotifyConfigurationFilterNameMapper {
AWS_PINPOINTSMSVOICEV2_API NotifyConfigurationFilterName GetNotifyConfigurationFilterNameForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForNotifyConfigurationFilterName(NotifyConfigurationFilterName value);
}  // namespace NotifyConfigurationFilterNameMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
