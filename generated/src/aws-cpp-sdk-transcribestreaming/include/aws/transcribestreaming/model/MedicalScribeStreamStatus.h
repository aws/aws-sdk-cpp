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
  enum class MedicalScribeStreamStatus
  {
    NOT_SET,
    IN_PROGRESS,
    PAUSED,
    FAILED,
    COMPLETED
  };

namespace MedicalScribeStreamStatusMapper
{
AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeStreamStatus GetMedicalScribeStreamStatusForName(const Aws::String& name);

AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForMedicalScribeStreamStatus(MedicalScribeStreamStatus value);
} // namespace MedicalScribeStreamStatusMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
