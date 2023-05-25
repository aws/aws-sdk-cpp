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
  enum class SentimentValue
  {
    NOT_SET,
    POSITIVE,
    NEGATIVE,
    NEUTRAL,
    MIXED
  };

namespace SentimentValueMapper
{
AWS_TRANSCRIBESERVICE_API SentimentValue GetSentimentValueForName(const Aws::String& name);

AWS_TRANSCRIBESERVICE_API Aws::String GetNameForSentimentValue(SentimentValue value);
} // namespace SentimentValueMapper
} // namespace Model
} // namespace TranscribeService
} // namespace Aws
