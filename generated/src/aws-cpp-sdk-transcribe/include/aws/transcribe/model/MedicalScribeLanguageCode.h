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
enum class MedicalScribeLanguageCode { NOT_SET, en_US };

namespace MedicalScribeLanguageCodeMapper {
AWS_TRANSCRIBESERVICE_API MedicalScribeLanguageCode GetMedicalScribeLanguageCodeForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForMedicalScribeLanguageCode(MedicalScribeLanguageCode value);
}  // namespace MedicalScribeLanguageCodeMapper
}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
