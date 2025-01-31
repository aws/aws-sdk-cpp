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
  enum class MedicalScribeParticipantRole
  {
    NOT_SET,
    PATIENT,
    CLINICIAN
  };

namespace MedicalScribeParticipantRoleMapper
{
AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeParticipantRole GetMedicalScribeParticipantRoleForName(const Aws::String& name);

AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForMedicalScribeParticipantRole(MedicalScribeParticipantRole value);
} // namespace MedicalScribeParticipantRoleMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
