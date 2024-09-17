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
  enum class ProtectConfigurationFilterName
  {
    NOT_SET,
    account_default,
    deletion_protection_enabled
  };

namespace ProtectConfigurationFilterNameMapper
{
AWS_PINPOINTSMSVOICEV2_API ProtectConfigurationFilterName GetProtectConfigurationFilterNameForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForProtectConfigurationFilterName(ProtectConfigurationFilterName value);
} // namespace ProtectConfigurationFilterNameMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
