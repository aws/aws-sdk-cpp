/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaPackage
{
namespace Model
{
  enum class StreamOrder
  {
    NOT_SET,
    ORIGINAL,
    VIDEO_BITRATE_ASCENDING,
    VIDEO_BITRATE_DESCENDING
  };

namespace StreamOrderMapper
{
AWS_MEDIAPACKAGE_API StreamOrder GetStreamOrderForName(const Aws::String& name);

AWS_MEDIAPACKAGE_API Aws::String GetNameForStreamOrder(StreamOrder value);
} // namespace StreamOrderMapper
} // namespace Model
} // namespace MediaPackage
} // namespace Aws
