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
  enum class ProtectConfigurationRuleSetNumberOverrideFilterName
  {
    NOT_SET,
    iso_country_code,
    destination_phone_number_begins_with,
    action,
    expires_before,
    expires_after,
    created_before,
    created_after
  };

namespace ProtectConfigurationRuleSetNumberOverrideFilterNameMapper
{
AWS_PINPOINTSMSVOICEV2_API ProtectConfigurationRuleSetNumberOverrideFilterName GetProtectConfigurationRuleSetNumberOverrideFilterNameForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForProtectConfigurationRuleSetNumberOverrideFilterName(ProtectConfigurationRuleSetNumberOverrideFilterName value);
} // namespace ProtectConfigurationRuleSetNumberOverrideFilterNameMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
