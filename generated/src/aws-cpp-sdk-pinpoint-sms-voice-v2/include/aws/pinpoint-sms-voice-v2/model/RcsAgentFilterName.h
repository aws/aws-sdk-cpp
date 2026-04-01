/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
enum class RcsAgentFilterName {
  NOT_SET,
  status,
  two_way_enabled,
  self_managed_opt_outs_enabled,
  opt_out_list_name,
  deletion_protection_enabled,
  two_way_channel_arn
};

namespace RcsAgentFilterNameMapper {
AWS_PINPOINTSMSVOICEV2_API RcsAgentFilterName GetRcsAgentFilterNameForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForRcsAgentFilterName(RcsAgentFilterName value);
}  // namespace RcsAgentFilterNameMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
