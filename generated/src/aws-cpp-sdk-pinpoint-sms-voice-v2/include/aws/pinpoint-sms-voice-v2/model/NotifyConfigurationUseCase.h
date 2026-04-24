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
enum class NotifyConfigurationUseCase { NOT_SET, CODE_VERIFICATION };

namespace NotifyConfigurationUseCaseMapper {
AWS_PINPOINTSMSVOICEV2_API NotifyConfigurationUseCase GetNotifyConfigurationUseCaseForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForNotifyConfigurationUseCase(NotifyConfigurationUseCase value);
}  // namespace NotifyConfigurationUseCaseMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
