/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/Polly_EXPORTS.h>

namespace Aws {
namespace Polly {
namespace Model {
enum class VoiceStatus { NOT_SET, pending, active, failed };

namespace VoiceStatusMapper {
AWS_POLLY_API VoiceStatus GetVoiceStatusForName(const Aws::String& name);

AWS_POLLY_API Aws::String GetNameForVoiceStatus(VoiceStatus value);
}  // namespace VoiceStatusMapper
}  // namespace Model
}  // namespace Polly
}  // namespace Aws
