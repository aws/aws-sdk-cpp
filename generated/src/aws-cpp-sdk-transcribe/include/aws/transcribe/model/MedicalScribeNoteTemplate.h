/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{
  enum class MedicalScribeNoteTemplate
  {
    NOT_SET,
    HISTORY_AND_PHYSICAL,
    GIRPP,
    BIRP,
    SIRP,
    DAP,
    BEHAVIORAL_SOAP,
    PHYSICAL_SOAP
  };

namespace MedicalScribeNoteTemplateMapper
{
AWS_TRANSCRIBESERVICE_API MedicalScribeNoteTemplate GetMedicalScribeNoteTemplateForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForMedicalScribeNoteTemplate(MedicalScribeNoteTemplate value);
} // namespace MedicalScribeNoteTemplateMapper
} // namespace Model
} // namespace TranscribeService
} // namespace Aws
