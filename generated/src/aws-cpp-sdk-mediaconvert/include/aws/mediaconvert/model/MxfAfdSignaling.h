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
  enum class MxfAfdSignaling
  {
    NOT_SET,
    NO_COPY,
    COPY_FROM_VIDEO
  };

namespace MxfAfdSignalingMapper
{
AWS_MEDIACONVERT_API MxfAfdSignaling GetMxfAfdSignalingForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMxfAfdSignaling(MxfAfdSignaling value);
} // namespace MxfAfdSignalingMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
