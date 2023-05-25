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
  enum class StreamingClipboardMode
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace StreamingClipboardModeMapper
{
AWS_NIMBLESTUDIO_API StreamingClipboardMode GetStreamingClipboardModeForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForStreamingClipboardMode(StreamingClipboardMode value);
} // namespace StreamingClipboardModeMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
