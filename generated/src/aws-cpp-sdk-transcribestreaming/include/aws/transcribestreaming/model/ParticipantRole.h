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
  enum class ParticipantRole
  {
    NOT_SET,
    AGENT,
    CUSTOMER
  };

namespace ParticipantRoleMapper
{
AWS_TRANSCRIBESTREAMINGSERVICE_API ParticipantRole GetParticipantRoleForName(const Aws::String& name);

AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForParticipantRole(ParticipantRole value);
} // namespace ParticipantRoleMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
