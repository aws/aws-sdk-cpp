/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>

namespace Aws {
namespace TranscribeService {
namespace Model {
enum class SubtitleFormat { NOT_SET, vtt, srt };

namespace SubtitleFormatMapper {
AWS_TRANSCRIBESERVICE_API SubtitleFormat GetSubtitleFormatForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForSubtitleFormat(SubtitleFormat value);
}  // namespace SubtitleFormatMapper
}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
