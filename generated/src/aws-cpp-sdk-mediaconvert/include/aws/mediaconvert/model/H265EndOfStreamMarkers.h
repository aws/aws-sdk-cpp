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
  enum class H265EndOfStreamMarkers
  {
    NOT_SET,
    INCLUDE,
    SUPPRESS
  };

namespace H265EndOfStreamMarkersMapper
{
AWS_MEDIACONVERT_API H265EndOfStreamMarkers GetH265EndOfStreamMarkersForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265EndOfStreamMarkers(H265EndOfStreamMarkers value);
} // namespace H265EndOfStreamMarkersMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
