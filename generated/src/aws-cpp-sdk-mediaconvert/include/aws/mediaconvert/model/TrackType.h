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
  enum class TrackType
  {
    NOT_SET,
    video,
    audio,
    data
  };

namespace TrackTypeMapper
{
AWS_MEDIACONVERT_API TrackType GetTrackTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForTrackType(TrackType value);
} // namespace TrackTypeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
