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
enum class RcsAgentStatus { NOT_SET, CREATED, PENDING, TESTING, PARTIAL, ACTIVE, DELETED };

namespace RcsAgentStatusMapper {
AWS_PINPOINTSMSVOICEV2_API RcsAgentStatus GetRcsAgentStatusForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForRcsAgentStatus(RcsAgentStatus value);
}  // namespace RcsAgentStatusMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
