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
  enum class PhoneNumberFilterName
  {
    NOT_SET,
    status,
    iso_country_code,
    message_type,
    number_capability,
    number_type,
    two_way_enabled,
    self_managed_opt_outs_enabled,
    opt_out_list_name,
    deletion_protection_enabled,
    two_way_channel_arn
  };

namespace PhoneNumberFilterNameMapper
{
AWS_PINPOINTSMSVOICEV2_API PhoneNumberFilterName GetPhoneNumberFilterNameForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForPhoneNumberFilterName(PhoneNumberFilterName value);
} // namespace PhoneNumberFilterNameMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
