/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace VoiceID
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    BATCH_JOB,
    COMPLIANCE_CONSENT,
    DOMAIN_,
    FRAUDSTER,
    SESSION,
    SPEAKER,
    WATCHLIST
  };

namespace ResourceTypeMapper
{
AWS_VOICEID_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_VOICEID_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace VoiceID
} // namespace Aws
