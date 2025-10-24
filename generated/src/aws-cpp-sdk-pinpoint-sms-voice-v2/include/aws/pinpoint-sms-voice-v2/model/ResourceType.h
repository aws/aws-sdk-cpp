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
enum class ResourceType {
  NOT_SET,
  account,
  phone_number,
  sender_id,
  pool,
  configuration_set,
  opt_out_list,
  event_destination,
  keyword,
  opted_out_number,
  registration,
  registration_attachment,
  verified_destination_number,
  protect_configuration,
  message_template,
  policy,
  message
};

namespace ResourceTypeMapper {
AWS_PINPOINTSMSVOICEV2_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForResourceType(ResourceType value);
}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
