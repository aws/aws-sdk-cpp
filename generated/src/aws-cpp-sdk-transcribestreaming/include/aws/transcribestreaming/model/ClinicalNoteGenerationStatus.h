/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{
  enum class ClinicalNoteGenerationStatus
  {
    NOT_SET,
    IN_PROGRESS,
    FAILED,
    COMPLETED
  };

namespace ClinicalNoteGenerationStatusMapper
{
AWS_TRANSCRIBESTREAMINGSERVICE_API ClinicalNoteGenerationStatus GetClinicalNoteGenerationStatusForName(const Aws::String& name);

AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForClinicalNoteGenerationStatus(ClinicalNoteGenerationStatus value);
} // namespace ClinicalNoteGenerationStatusMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
