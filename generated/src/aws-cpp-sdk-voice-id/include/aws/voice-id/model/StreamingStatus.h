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
enum class StreamingStatus { NOT_SET, PENDING_CONFIGURATION, ONGOING, ENDED };

namespace StreamingStatusMapper {
AWS_VOICEID_API StreamingStatus GetStreamingStatusForName(const Aws::String& name);

AWS_VOICEID_API Aws::String GetNameForStreamingStatus(StreamingStatus value);
}  // namespace StreamingStatusMapper
}  // namespace Model
}  // namespace VoiceID
}  // namespace Aws
