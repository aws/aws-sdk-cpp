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
  enum class HlsIvSource
  {
    NOT_SET,
    EXPLICIT,
    FOLLOWS_SEGMENT_NUMBER
  };

namespace HlsIvSourceMapper
{
AWS_MEDIALIVE_API HlsIvSource GetHlsIvSourceForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForHlsIvSource(HlsIvSource value);
} // namespace HlsIvSourceMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
