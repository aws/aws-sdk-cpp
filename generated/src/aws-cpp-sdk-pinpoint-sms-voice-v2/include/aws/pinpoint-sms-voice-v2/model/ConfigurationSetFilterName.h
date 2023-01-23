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
  enum class ConfigurationSetFilterName
  {
    NOT_SET,
    event_destination_name,
    matching_event_types,
    default_message_type,
    default_sender_id
  };

namespace ConfigurationSetFilterNameMapper
{
AWS_PINPOINTSMSVOICEV2_API ConfigurationSetFilterName GetConfigurationSetFilterNameForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForConfigurationSetFilterName(ConfigurationSetFilterName value);
} // namespace ConfigurationSetFilterNameMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
