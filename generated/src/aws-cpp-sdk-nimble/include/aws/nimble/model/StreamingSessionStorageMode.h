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
  enum class StreamingSessionStorageMode
  {
    NOT_SET,
    UPLOAD
  };

namespace StreamingSessionStorageModeMapper
{
AWS_NIMBLESTUDIO_API StreamingSessionStorageMode GetStreamingSessionStorageModeForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForStreamingSessionStorageMode(StreamingSessionStorageMode value);
} // namespace StreamingSessionStorageModeMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
