/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{
  enum class MediaStreamType
  {
    NOT_SET,
    video,
    audio,
    ancillary_data
  };

namespace MediaStreamTypeMapper
{
AWS_MEDIACONNECT_API MediaStreamType GetMediaStreamTypeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForMediaStreamType(MediaStreamType value);
} // namespace MediaStreamTypeMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
