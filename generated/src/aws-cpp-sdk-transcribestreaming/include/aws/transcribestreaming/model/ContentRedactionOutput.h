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
  enum class ContentRedactionOutput
  {
    NOT_SET,
    redacted,
    redacted_and_unredacted
  };

namespace ContentRedactionOutputMapper
{
AWS_TRANSCRIBESTREAMINGSERVICE_API ContentRedactionOutput GetContentRedactionOutputForName(const Aws::String& name);

AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForContentRedactionOutput(ContentRedactionOutput value);
} // namespace ContentRedactionOutputMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
