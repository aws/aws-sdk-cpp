/**
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
  enum class TimecodeBurninFontSize
  {
    NOT_SET,
    EXTRA_SMALL_10,
    LARGE_48,
    MEDIUM_32,
    SMALL_16
  };

namespace TimecodeBurninFontSizeMapper
{
AWS_MEDIALIVE_API TimecodeBurninFontSize GetTimecodeBurninFontSizeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForTimecodeBurninFontSize(TimecodeBurninFontSize value);
} // namespace TimecodeBurninFontSizeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
