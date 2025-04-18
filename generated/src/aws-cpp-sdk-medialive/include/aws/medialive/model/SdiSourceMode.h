﻿/**
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
  enum class SdiSourceMode
  {
    NOT_SET,
    QUADRANT,
    INTERLEAVE
  };

namespace SdiSourceModeMapper
{
AWS_MEDIALIVE_API SdiSourceMode GetSdiSourceModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForSdiSourceMode(SdiSourceMode value);
} // namespace SdiSourceModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
