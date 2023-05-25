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
  enum class AuthenticationDecision
  {
    NOT_SET,
    ACCEPT,
    REJECT,
    NOT_ENOUGH_SPEECH,
    SPEAKER_NOT_ENROLLED,
    SPEAKER_OPTED_OUT,
    SPEAKER_ID_NOT_PROVIDED,
    SPEAKER_EXPIRED
  };

namespace AuthenticationDecisionMapper
{
AWS_VOICEID_API AuthenticationDecision GetAuthenticationDecisionForName(const Aws::String& name);

AWS_VOICEID_API Aws::String GetNameForAuthenticationDecision(AuthenticationDecision value);
} // namespace AuthenticationDecisionMapper
} // namespace Model
} // namespace VoiceID
} // namespace Aws
