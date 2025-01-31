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
  enum class MedicalScribeMediaEncoding
  {
    NOT_SET,
    pcm,
    ogg_opus,
    flac
  };

namespace MedicalScribeMediaEncodingMapper
{
AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeMediaEncoding GetMedicalScribeMediaEncodingForName(const Aws::String& name);

AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForMedicalScribeMediaEncoding(MedicalScribeMediaEncoding value);
} // namespace MedicalScribeMediaEncodingMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
