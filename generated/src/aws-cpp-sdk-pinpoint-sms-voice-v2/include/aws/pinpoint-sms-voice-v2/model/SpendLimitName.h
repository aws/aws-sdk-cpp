/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{
  enum class SpendLimitName
  {
    NOT_SET,
    TEXT_MESSAGE_MONTHLY_SPEND_LIMIT,
    VOICE_MESSAGE_MONTHLY_SPEND_LIMIT
  };

namespace SpendLimitNameMapper
{
AWS_PINPOINTSMSVOICEV2_API SpendLimitName GetSpendLimitNameForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForSpendLimitName(SpendLimitName value);
} // namespace SpendLimitNameMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
