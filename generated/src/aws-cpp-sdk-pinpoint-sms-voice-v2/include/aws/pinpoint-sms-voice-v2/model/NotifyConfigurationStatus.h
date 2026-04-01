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
enum class NotifyConfigurationStatus { NOT_SET, PENDING, ACTIVE, REJECTED, REQUIRES_VERIFICATION };

namespace NotifyConfigurationStatusMapper {
AWS_PINPOINTSMSVOICEV2_API NotifyConfigurationStatus GetNotifyConfigurationStatusForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForNotifyConfigurationStatus(NotifyConfigurationStatus value);
}  // namespace NotifyConfigurationStatusMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
