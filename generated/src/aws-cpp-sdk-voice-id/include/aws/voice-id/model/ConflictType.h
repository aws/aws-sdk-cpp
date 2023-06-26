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
  enum class ConflictType
  {
    NOT_SET,
    ANOTHER_ACTIVE_STREAM,
    DOMAIN_NOT_ACTIVE,
    CANNOT_CHANGE_SPEAKER_AFTER_ENROLLMENT,
    ENROLLMENT_ALREADY_EXISTS,
    SPEAKER_NOT_SET,
    SPEAKER_OPTED_OUT,
    CONCURRENT_CHANGES,
    DOMAIN_LOCKED_FROM_ENCRYPTION_UPDATES,
    CANNOT_DELETE_NON_EMPTY_WATCHLIST,
    FRAUDSTER_MUST_BELONG_TO_AT_LEAST_ONE_WATCHLIST
  };

namespace ConflictTypeMapper
{
AWS_VOICEID_API ConflictType GetConflictTypeForName(const Aws::String& name);

AWS_VOICEID_API Aws::String GetNameForConflictType(ConflictType value);
} // namespace ConflictTypeMapper
} // namespace Model
} // namespace VoiceID
} // namespace Aws
