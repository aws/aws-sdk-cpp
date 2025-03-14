﻿/**
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
  enum class WebvttStylePassthrough
  {
    NOT_SET,
    ENABLED,
    DISABLED,
    STRICT,
    MERGE
  };

namespace WebvttStylePassthroughMapper
{
AWS_MEDIACONVERT_API WebvttStylePassthrough GetWebvttStylePassthroughForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForWebvttStylePassthrough(WebvttStylePassthrough value);
} // namespace WebvttStylePassthroughMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
