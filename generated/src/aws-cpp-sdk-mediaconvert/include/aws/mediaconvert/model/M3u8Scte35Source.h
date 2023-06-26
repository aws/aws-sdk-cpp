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
  enum class M3u8Scte35Source
  {
    NOT_SET,
    PASSTHROUGH,
    NONE
  };

namespace M3u8Scte35SourceMapper
{
AWS_MEDIACONVERT_API M3u8Scte35Source GetM3u8Scte35SourceForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForM3u8Scte35Source(M3u8Scte35Source value);
} // namespace M3u8Scte35SourceMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
