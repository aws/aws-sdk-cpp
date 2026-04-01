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
enum class TestingAgentStatus { NOT_SET, CREATED, PENDING, ACTIVE };

namespace TestingAgentStatusMapper {
AWS_PINPOINTSMSVOICEV2_API TestingAgentStatus GetTestingAgentStatusForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForTestingAgentStatus(TestingAgentStatus value);
}  // namespace TestingAgentStatusMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
