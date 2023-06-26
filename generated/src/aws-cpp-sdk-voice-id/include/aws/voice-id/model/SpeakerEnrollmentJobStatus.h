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
  enum class SpeakerEnrollmentJobStatus
  {
    NOT_SET,
    SUBMITTED,
    IN_PROGRESS,
    COMPLETED,
    COMPLETED_WITH_ERRORS,
    FAILED
  };

namespace SpeakerEnrollmentJobStatusMapper
{
AWS_VOICEID_API SpeakerEnrollmentJobStatus GetSpeakerEnrollmentJobStatusForName(const Aws::String& name);

AWS_VOICEID_API Aws::String GetNameForSpeakerEnrollmentJobStatus(SpeakerEnrollmentJobStatus value);
} // namespace SpeakerEnrollmentJobStatusMapper
} // namespace Model
} // namespace VoiceID
} // namespace Aws
