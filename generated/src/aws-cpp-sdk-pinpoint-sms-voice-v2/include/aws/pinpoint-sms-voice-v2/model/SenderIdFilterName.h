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
  enum class SenderIdFilterName
  {
    NOT_SET,
    sender_id,
    iso_country_code,
    message_type,
    deletion_protection_enabled,
    registered
  };

namespace SenderIdFilterNameMapper
{
AWS_PINPOINTSMSVOICEV2_API SenderIdFilterName GetSenderIdFilterNameForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForSenderIdFilterName(SenderIdFilterName value);
} // namespace SenderIdFilterNameMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
