/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class ThumbnailState
  {
    NOT_SET,
    AUTO,
    DISABLED
  };

namespace ThumbnailStateMapper
{
AWS_MEDIALIVE_API ThumbnailState GetThumbnailStateForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForThumbnailState(ThumbnailState value);
} // namespace ThumbnailStateMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
