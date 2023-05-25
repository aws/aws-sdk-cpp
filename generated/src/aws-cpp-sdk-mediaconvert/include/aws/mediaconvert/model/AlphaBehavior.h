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
  enum class AlphaBehavior
  {
    NOT_SET,
    DISCARD,
    REMAP_TO_LUMA
  };

namespace AlphaBehaviorMapper
{
AWS_MEDIACONVERT_API AlphaBehavior GetAlphaBehaviorForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAlphaBehavior(AlphaBehavior value);
} // namespace AlphaBehaviorMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
