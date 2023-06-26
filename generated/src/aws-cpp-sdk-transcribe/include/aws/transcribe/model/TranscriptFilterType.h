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
  enum class TranscriptFilterType
  {
    NOT_SET,
    EXACT
  };

namespace TranscriptFilterTypeMapper
{
AWS_TRANSCRIBESERVICE_API TranscriptFilterType GetTranscriptFilterTypeForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForTranscriptFilterType(TranscriptFilterType value);
} // namespace TranscriptFilterTypeMapper
} // namespace Model
} // namespace TranscribeService
} // namespace Aws
