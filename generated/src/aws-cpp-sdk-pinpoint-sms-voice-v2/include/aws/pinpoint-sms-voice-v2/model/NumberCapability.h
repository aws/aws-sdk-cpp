﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
enum class NumberCapability { NOT_SET, SMS, VOICE, MMS };

namespace NumberCapabilityMapper {
AWS_PINPOINTSMSVOICEV2_API NumberCapability GetNumberCapabilityForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForNumberCapability(NumberCapability value);
}  // namespace NumberCapabilityMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
