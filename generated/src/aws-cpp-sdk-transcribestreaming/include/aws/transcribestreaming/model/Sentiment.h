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
  enum class Sentiment
  {
    NOT_SET,
    POSITIVE,
    NEGATIVE,
    MIXED,
    NEUTRAL
  };

namespace SentimentMapper
{
AWS_TRANSCRIBESTREAMINGSERVICE_API Sentiment GetSentimentForName(const Aws::String& name);

AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForSentiment(Sentiment value);
} // namespace SentimentMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
