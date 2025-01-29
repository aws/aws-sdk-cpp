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
  enum class MedicalScribeSessionControlEventType
  {
    NOT_SET,
    END_OF_SESSION
  };

namespace MedicalScribeSessionControlEventTypeMapper
{
AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeSessionControlEventType GetMedicalScribeSessionControlEventTypeForName(const Aws::String& name);

AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForMedicalScribeSessionControlEventType(MedicalScribeSessionControlEventType value);
} // namespace MedicalScribeSessionControlEventTypeMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
