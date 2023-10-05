/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class H264EndOfStreamMarkers
  {
    NOT_SET,
    INCLUDE,
    SUPPRESS
  };

namespace H264EndOfStreamMarkersMapper
{
AWS_MEDIACONVERT_API H264EndOfStreamMarkers GetH264EndOfStreamMarkersForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264EndOfStreamMarkers(H264EndOfStreamMarkers value);
} // namespace H264EndOfStreamMarkersMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
