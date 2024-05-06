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
  enum class Scte35SegmentationScope
  {
    NOT_SET,
    ALL_OUTPUT_GROUPS,
    SCTE35_ENABLED_OUTPUT_GROUPS
  };

namespace Scte35SegmentationScopeMapper
{
AWS_MEDIALIVE_API Scte35SegmentationScope GetScte35SegmentationScopeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForScte35SegmentationScope(Scte35SegmentationScope value);
} // namespace Scte35SegmentationScopeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
