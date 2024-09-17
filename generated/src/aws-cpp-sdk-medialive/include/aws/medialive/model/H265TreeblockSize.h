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
  enum class H265TreeblockSize
  {
    NOT_SET,
    AUTO,
    TREE_SIZE_32X32
  };

namespace H265TreeblockSizeMapper
{
AWS_MEDIALIVE_API H265TreeblockSize GetH265TreeblockSizeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH265TreeblockSize(H265TreeblockSize value);
} // namespace H265TreeblockSizeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
