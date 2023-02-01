/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{
  enum class StreamingSessionStreamStatusCode
  {
    NOT_SET,
    STREAM_CREATE_IN_PROGRESS,
    STREAM_READY,
    STREAM_DELETE_IN_PROGRESS,
    STREAM_DELETED,
    INTERNAL_ERROR,
    NETWORK_CONNECTION_ERROR
  };

namespace StreamingSessionStreamStatusCodeMapper
{
AWS_NIMBLESTUDIO_API StreamingSessionStreamStatusCode GetStreamingSessionStreamStatusCodeForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForStreamingSessionStreamStatusCode(StreamingSessionStreamStatusCode value);
} // namespace StreamingSessionStreamStatusCodeMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
