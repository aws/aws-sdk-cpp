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
  enum class H265MvOverPictureBoundaries
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace H265MvOverPictureBoundariesMapper
{
AWS_MEDIALIVE_API H265MvOverPictureBoundaries GetH265MvOverPictureBoundariesForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH265MvOverPictureBoundaries(H265MvOverPictureBoundaries value);
} // namespace H265MvOverPictureBoundariesMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
