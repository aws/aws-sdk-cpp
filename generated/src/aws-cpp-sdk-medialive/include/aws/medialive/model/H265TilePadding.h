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
  enum class H265TilePadding
  {
    NOT_SET,
    NONE,
    PADDED
  };

namespace H265TilePaddingMapper
{
AWS_MEDIALIVE_API H265TilePadding GetH265TilePaddingForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH265TilePadding(H265TilePadding value);
} // namespace H265TilePaddingMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
