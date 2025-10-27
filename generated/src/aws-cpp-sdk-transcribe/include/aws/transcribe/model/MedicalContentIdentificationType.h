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
enum class MedicalContentIdentificationType { NOT_SET, PHI };

namespace MedicalContentIdentificationTypeMapper {
AWS_TRANSCRIBESERVICE_API MedicalContentIdentificationType GetMedicalContentIdentificationTypeForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForMedicalContentIdentificationType(MedicalContentIdentificationType value);
}  // namespace MedicalContentIdentificationTypeMapper
}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
