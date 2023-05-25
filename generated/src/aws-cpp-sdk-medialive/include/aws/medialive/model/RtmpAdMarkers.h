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
  enum class RtmpAdMarkers
  {
    NOT_SET,
    ON_CUE_POINT_SCTE35
  };

namespace RtmpAdMarkersMapper
{
AWS_MEDIALIVE_API RtmpAdMarkers GetRtmpAdMarkersForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForRtmpAdMarkers(RtmpAdMarkers value);
} // namespace RtmpAdMarkersMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
