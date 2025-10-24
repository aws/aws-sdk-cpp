/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/voice-id/VoiceID_EXPORTS.h>

namespace Aws {
namespace VoiceID {
namespace Model {
enum class FraudDetectionDecision { NOT_SET, HIGH_RISK, LOW_RISK, NOT_ENOUGH_SPEECH };

namespace FraudDetectionDecisionMapper {
AWS_VOICEID_API FraudDetectionDecision GetFraudDetectionDecisionForName(const Aws::String& name);

AWS_VOICEID_API Aws::String GetNameForFraudDetectionDecision(FraudDetectionDecision value);
}  // namespace FraudDetectionDecisionMapper
}  // namespace Model
}  // namespace VoiceID
}  // namespace Aws
