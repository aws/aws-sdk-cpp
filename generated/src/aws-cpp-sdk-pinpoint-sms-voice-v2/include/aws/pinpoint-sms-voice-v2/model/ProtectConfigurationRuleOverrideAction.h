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
  enum class ProtectConfigurationRuleOverrideAction
  {
    NOT_SET,
    ALLOW,
    BLOCK
  };

namespace ProtectConfigurationRuleOverrideActionMapper
{
AWS_PINPOINTSMSVOICEV2_API ProtectConfigurationRuleOverrideAction GetProtectConfigurationRuleOverrideActionForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForProtectConfigurationRuleOverrideAction(ProtectConfigurationRuleOverrideAction value);
} // namespace ProtectConfigurationRuleOverrideActionMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
