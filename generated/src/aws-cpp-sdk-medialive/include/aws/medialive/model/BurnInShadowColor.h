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
  enum class BurnInShadowColor
  {
    NOT_SET,
    BLACK,
    NONE,
    WHITE
  };

namespace BurnInShadowColorMapper
{
AWS_MEDIALIVE_API BurnInShadowColor GetBurnInShadowColorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForBurnInShadowColor(BurnInShadowColor value);
} // namespace BurnInShadowColorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
