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
  enum class ExistingEnrollmentAction
  {
    NOT_SET,
    SKIP,
    OVERWRITE
  };

namespace ExistingEnrollmentActionMapper
{
AWS_VOICEID_API ExistingEnrollmentAction GetExistingEnrollmentActionForName(const Aws::String& name);

AWS_VOICEID_API Aws::String GetNameForExistingEnrollmentAction(ExistingEnrollmentAction value);
} // namespace ExistingEnrollmentActionMapper
} // namespace Model
} // namespace VoiceID
} // namespace Aws
