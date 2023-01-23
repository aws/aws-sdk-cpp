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
  enum class F4vMoovPlacement
  {
    NOT_SET,
    PROGRESSIVE_DOWNLOAD,
    NORMAL
  };

namespace F4vMoovPlacementMapper
{
AWS_MEDIACONVERT_API F4vMoovPlacement GetF4vMoovPlacementForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForF4vMoovPlacement(F4vMoovPlacement value);
} // namespace F4vMoovPlacementMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
