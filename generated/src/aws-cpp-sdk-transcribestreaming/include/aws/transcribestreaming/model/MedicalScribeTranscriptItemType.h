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
enum class MedicalScribeTranscriptItemType { NOT_SET, pronunciation, punctuation };

namespace MedicalScribeTranscriptItemTypeMapper {
AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeTranscriptItemType GetMedicalScribeTranscriptItemTypeForName(const Aws::String& name);

AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForMedicalScribeTranscriptItemType(MedicalScribeTranscriptItemType value);
}  // namespace MedicalScribeTranscriptItemTypeMapper
}  // namespace Model
}  // namespace TranscribeStreamingService
}  // namespace Aws
