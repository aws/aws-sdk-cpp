/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>

namespace Aws {
namespace TranscribeStreamingService {
namespace Model {
enum class TranscriptFormat { NOT_SET, spoken, written };

namespace TranscriptFormatMapper {
AWS_TRANSCRIBESTREAMINGSERVICE_API TranscriptFormat GetTranscriptFormatForName(const Aws::String& name);

AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForTranscriptFormat(TranscriptFormat value);
}  // namespace TranscriptFormatMapper
}  // namespace Model
}  // namespace TranscribeStreamingService
}  // namespace Aws
