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
  enum class BurnInOutlineColor
  {
    NOT_SET,
    BLACK,
    BLUE,
    GREEN,
    RED,
    WHITE,
    YELLOW
  };

namespace BurnInOutlineColorMapper
{
AWS_MEDIALIVE_API BurnInOutlineColor GetBurnInOutlineColorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForBurnInOutlineColor(BurnInOutlineColor value);
} // namespace BurnInOutlineColorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
