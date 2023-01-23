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
  enum class MsSmoothAudioDeduplication
  {
    NOT_SET,
    COMBINE_DUPLICATE_STREAMS,
    NONE
  };

namespace MsSmoothAudioDeduplicationMapper
{
AWS_MEDIACONVERT_API MsSmoothAudioDeduplication GetMsSmoothAudioDeduplicationForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMsSmoothAudioDeduplication(MsSmoothAudioDeduplication value);
} // namespace MsSmoothAudioDeduplicationMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
