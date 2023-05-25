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
  enum class MediaEncoding
  {
    NOT_SET,
    pcm,
    ogg_opus,
    flac
  };

namespace MediaEncodingMapper
{
AWS_TRANSCRIBESTREAMINGSERVICE_API MediaEncoding GetMediaEncodingForName(const Aws::String& name);

AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::String GetNameForMediaEncoding(MediaEncoding value);
} // namespace MediaEncodingMapper
} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
