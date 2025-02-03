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
  enum class MedicalScribeVocabularyFilterMethod
  {
    NOT_SET,
    remove,
    mask,
    tag
  };

namespace MedicalScribeVocabularyFilterMethodMapper
{
AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeVocabularyFilterMethod GetMedicalScribeVocabularyFilterMethodForName(const Aws::String& name);

AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForMedicalScribeVocabularyFilterMethod(MedicalScribeVocabularyFilterMethod value);
} // namespace MedicalScribeVocabularyFilterMethodMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
