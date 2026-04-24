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
enum class TemplateVariableSource { NOT_SET, CUSTOMER, SYSTEM };

namespace TemplateVariableSourceMapper {
AWS_PINPOINTSMSVOICEV2_API TemplateVariableSource GetTemplateVariableSourceForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForTemplateVariableSource(TemplateVariableSource value);
}  // namespace TemplateVariableSourceMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
