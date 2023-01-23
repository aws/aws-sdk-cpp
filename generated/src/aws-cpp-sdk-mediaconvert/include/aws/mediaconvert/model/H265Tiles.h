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
  enum class H265Tiles
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace H265TilesMapper
{
AWS_MEDIACONVERT_API H265Tiles GetH265TilesForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265Tiles(H265Tiles value);
} // namespace H265TilesMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
