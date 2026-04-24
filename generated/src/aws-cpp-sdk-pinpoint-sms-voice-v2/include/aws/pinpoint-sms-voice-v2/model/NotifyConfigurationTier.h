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
enum class NotifyConfigurationTier { NOT_SET, BASIC, ADVANCED };

namespace NotifyConfigurationTierMapper {
AWS_PINPOINTSMSVOICEV2_API NotifyConfigurationTier GetNotifyConfigurationTierForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForNotifyConfigurationTier(NotifyConfigurationTier value);
}  // namespace NotifyConfigurationTierMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
