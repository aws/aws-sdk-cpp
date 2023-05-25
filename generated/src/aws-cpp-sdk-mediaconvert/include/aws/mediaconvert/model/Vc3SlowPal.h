/**
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
  enum class Vc3SlowPal
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace Vc3SlowPalMapper
{
AWS_MEDIACONVERT_API Vc3SlowPal GetVc3SlowPalForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForVc3SlowPal(Vc3SlowPal value);
} // namespace Vc3SlowPalMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
