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
  enum class MedicalScribeLanguageCode
  {
    NOT_SET,
    en_US
  };

namespace MedicalScribeLanguageCodeMapper
{
AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeLanguageCode GetMedicalScribeLanguageCodeForName(const Aws::String& name);

AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForMedicalScribeLanguageCode(MedicalScribeLanguageCode value);
} // namespace MedicalScribeLanguageCodeMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
