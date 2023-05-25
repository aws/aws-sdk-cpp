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
  enum class TtmlStylePassthrough
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace TtmlStylePassthroughMapper
{
AWS_MEDIACONVERT_API TtmlStylePassthrough GetTtmlStylePassthroughForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForTtmlStylePassthrough(TtmlStylePassthrough value);
} // namespace TtmlStylePassthroughMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
