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
  enum class AccountLimitName
  {
    NOT_SET,
    PHONE_NUMBERS,
    POOLS,
    CONFIGURATION_SETS,
    OPT_OUT_LISTS,
    SENDER_IDS,
    REGISTRATIONS,
    REGISTRATION_ATTACHMENTS,
    VERIFIED_DESTINATION_NUMBERS
  };

namespace AccountLimitNameMapper
{
AWS_PINPOINTSMSVOICEV2_API AccountLimitName GetAccountLimitNameForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForAccountLimitName(AccountLimitName value);
} // namespace AccountLimitNameMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
