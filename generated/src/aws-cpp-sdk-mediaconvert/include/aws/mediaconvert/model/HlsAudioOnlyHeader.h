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
  enum class HlsAudioOnlyHeader
  {
    NOT_SET,
    INCLUDE,
    EXCLUDE
  };

namespace HlsAudioOnlyHeaderMapper
{
AWS_MEDIACONVERT_API HlsAudioOnlyHeader GetHlsAudioOnlyHeaderForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHlsAudioOnlyHeader(HlsAudioOnlyHeader value);
} // namespace HlsAudioOnlyHeaderMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
