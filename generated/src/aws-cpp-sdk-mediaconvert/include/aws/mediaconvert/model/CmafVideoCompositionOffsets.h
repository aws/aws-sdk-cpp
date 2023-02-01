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
  enum class CmafVideoCompositionOffsets
  {
    NOT_SET,
    SIGNED,
    UNSIGNED
  };

namespace CmafVideoCompositionOffsetsMapper
{
AWS_MEDIACONVERT_API CmafVideoCompositionOffsets GetCmafVideoCompositionOffsetsForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmafVideoCompositionOffsets(CmafVideoCompositionOffsets value);
} // namespace CmafVideoCompositionOffsetsMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
