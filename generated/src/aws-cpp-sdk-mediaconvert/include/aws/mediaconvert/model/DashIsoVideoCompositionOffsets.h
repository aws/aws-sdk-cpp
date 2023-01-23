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
  enum class DashIsoVideoCompositionOffsets
  {
    NOT_SET,
    SIGNED,
    UNSIGNED
  };

namespace DashIsoVideoCompositionOffsetsMapper
{
AWS_MEDIACONVERT_API DashIsoVideoCompositionOffsets GetDashIsoVideoCompositionOffsetsForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForDashIsoVideoCompositionOffsets(DashIsoVideoCompositionOffsets value);
} // namespace DashIsoVideoCompositionOffsetsMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
