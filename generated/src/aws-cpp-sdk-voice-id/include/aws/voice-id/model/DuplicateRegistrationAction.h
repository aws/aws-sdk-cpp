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
enum class DuplicateRegistrationAction { NOT_SET, SKIP, REGISTER_AS_NEW };

namespace DuplicateRegistrationActionMapper {
AWS_VOICEID_API DuplicateRegistrationAction GetDuplicateRegistrationActionForName(const Aws::String& name);

AWS_VOICEID_API Aws::String GetNameForDuplicateRegistrationAction(DuplicateRegistrationAction value);
}  // namespace DuplicateRegistrationActionMapper
}  // namespace Model
}  // namespace VoiceID
}  // namespace Aws
