/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace VoiceID
{
namespace Model
{
  enum class FraudDetectionAction
  {
    NOT_SET,
    IGNORE,
    FAIL
  };

namespace FraudDetectionActionMapper
{
AWS_VOICEID_API FraudDetectionAction GetFraudDetectionActionForName(const Aws::String& name);

AWS_VOICEID_API Aws::String GetNameForFraudDetectionAction(FraudDetectionAction value);
} // namespace FraudDetectionActionMapper
} // namespace Model
} // namespace VoiceID
} // namespace Aws
