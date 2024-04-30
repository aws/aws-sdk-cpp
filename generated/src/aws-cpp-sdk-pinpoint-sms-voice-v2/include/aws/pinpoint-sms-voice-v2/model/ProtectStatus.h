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
  enum class ProtectStatus
  {
    NOT_SET,
    ALLOW,
    BLOCK
  };

namespace ProtectStatusMapper
{
AWS_PINPOINTSMSVOICEV2_API ProtectStatus GetProtectStatusForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForProtectStatus(ProtectStatus value);
} // namespace ProtectStatusMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
