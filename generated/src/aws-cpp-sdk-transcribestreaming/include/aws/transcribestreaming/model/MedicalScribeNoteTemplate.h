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
enum class MedicalScribeNoteTemplate { NOT_SET, HISTORY_AND_PHYSICAL, GIRPP, DAP, SIRP, BIRP, BEHAVIORAL_SOAP, PHYSICAL_SOAP };

namespace MedicalScribeNoteTemplateMapper {
AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeNoteTemplate GetMedicalScribeNoteTemplateForName(const Aws::String& name);

AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForMedicalScribeNoteTemplate(MedicalScribeNoteTemplate value);
}  // namespace MedicalScribeNoteTemplateMapper
}  // namespace Model
}  // namespace TranscribeStreamingService
}  // namespace Aws
