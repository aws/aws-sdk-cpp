/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{
  enum class StreamingMediaFileConditioning
  {
    NOT_SET,
    TRANSCODE,
    NONE
  };

namespace StreamingMediaFileConditioningMapper
{
AWS_MEDIATAILOR_API StreamingMediaFileConditioning GetStreamingMediaFileConditioningForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForStreamingMediaFileConditioning(StreamingMediaFileConditioning value);
} // namespace StreamingMediaFileConditioningMapper
} // namespace Model
} // namespace MediaTailor
} // namespace Aws
