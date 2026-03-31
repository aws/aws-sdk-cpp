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
enum class NotifyTemplateFilterName {
  NOT_SET,
  template_type,
  channels,
  tier_access,
  supported_countries,
  language_code,
  supported_voice_ids
};

namespace NotifyTemplateFilterNameMapper {
AWS_PINPOINTSMSVOICEV2_API NotifyTemplateFilterName GetNotifyTemplateFilterNameForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForNotifyTemplateFilterName(NotifyTemplateFilterName value);
}  // namespace NotifyTemplateFilterNameMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
