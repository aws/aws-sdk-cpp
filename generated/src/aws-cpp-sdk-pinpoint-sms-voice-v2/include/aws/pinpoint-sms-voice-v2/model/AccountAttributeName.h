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
enum class AccountAttributeName { NOT_SET, ACCOUNT_TIER, DEFAULT_PROTECT_CONFIGURATION_ID };

namespace AccountAttributeNameMapper {
AWS_PINPOINTSMSVOICEV2_API AccountAttributeName GetAccountAttributeNameForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForAccountAttributeName(AccountAttributeName value);
}  // namespace AccountAttributeNameMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
