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
enum class RcsFallbackChannel { NOT_SET, SMS, MMS };

namespace RcsFallbackChannelMapper {
AWS_PINPOINTSMSVOICEV2_API RcsFallbackChannel GetRcsFallbackChannelForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForRcsFallbackChannel(RcsFallbackChannel value);
}  // namespace RcsFallbackChannelMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
