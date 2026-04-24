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
enum class FieldRequirement { NOT_SET, REQUIRED, CONDITIONAL, OPTIONAL };

namespace FieldRequirementMapper {
AWS_PINPOINTSMSVOICEV2_API FieldRequirement GetFieldRequirementForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForFieldRequirement(FieldRequirement value);
}  // namespace FieldRequirementMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
