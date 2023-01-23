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
  enum class LastFrameClippingBehavior
  {
    NOT_SET,
    EXCLUDE_LAST_FRAME,
    INCLUDE_LAST_FRAME
  };

namespace LastFrameClippingBehaviorMapper
{
AWS_MEDIALIVE_API LastFrameClippingBehavior GetLastFrameClippingBehaviorForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForLastFrameClippingBehavior(LastFrameClippingBehavior value);
} // namespace LastFrameClippingBehaviorMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
