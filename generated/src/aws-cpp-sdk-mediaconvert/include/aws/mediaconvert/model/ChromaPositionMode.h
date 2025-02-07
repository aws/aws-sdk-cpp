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
  enum class ChromaPositionMode
  {
    NOT_SET,
    AUTO,
    FORCE_CENTER,
    FORCE_TOP_LEFT
  };

namespace ChromaPositionModeMapper
{
AWS_MEDIACONVERT_API ChromaPositionMode GetChromaPositionModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForChromaPositionMode(ChromaPositionMode value);
} // namespace ChromaPositionModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
