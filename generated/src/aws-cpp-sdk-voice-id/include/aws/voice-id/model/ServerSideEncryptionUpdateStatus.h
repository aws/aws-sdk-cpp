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
enum class ServerSideEncryptionUpdateStatus { NOT_SET, IN_PROGRESS, COMPLETED, FAILED };

namespace ServerSideEncryptionUpdateStatusMapper {
AWS_VOICEID_API ServerSideEncryptionUpdateStatus GetServerSideEncryptionUpdateStatusForName(const Aws::String& name);

AWS_VOICEID_API Aws::String GetNameForServerSideEncryptionUpdateStatus(ServerSideEncryptionUpdateStatus value);
}  // namespace ServerSideEncryptionUpdateStatusMapper
}  // namespace Model
}  // namespace VoiceID
}  // namespace Aws
