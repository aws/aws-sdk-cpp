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
  enum class H265Deblocking
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace H265DeblockingMapper
{
AWS_MEDIALIVE_API H265Deblocking GetH265DeblockingForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH265Deblocking(H265Deblocking value);
} // namespace H265DeblockingMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
