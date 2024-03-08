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
  enum class MedicalScribeParticipantRole
  {
    NOT_SET,
    PATIENT,
    CLINICIAN
  };

namespace MedicalScribeParticipantRoleMapper
{
AWS_TRANSCRIBESERVICE_API MedicalScribeParticipantRole GetMedicalScribeParticipantRoleForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForMedicalScribeParticipantRole(MedicalScribeParticipantRole value);
} // namespace MedicalScribeParticipantRoleMapper
} // namespace Model
} // namespace TranscribeService
} // namespace Aws
