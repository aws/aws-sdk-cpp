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
enum class PhoneNumberType { NOT_SET, MOBILE, LANDLINE, OTHER, INVALID };

namespace PhoneNumberTypeMapper {
AWS_PINPOINTSMSVOICEV2_API PhoneNumberType GetPhoneNumberTypeForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForPhoneNumberType(PhoneNumberType value);
}  // namespace PhoneNumberTypeMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
