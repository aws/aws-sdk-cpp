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
  enum class PartialResultsStability
  {
    NOT_SET,
    high,
    medium,
    low
  };

namespace PartialResultsStabilityMapper
{
AWS_TRANSCRIBESTREAMINGSERVICE_API PartialResultsStability GetPartialResultsStabilityForName(const Aws::String& name);

AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForPartialResultsStability(PartialResultsStability value);
} // namespace PartialResultsStabilityMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
