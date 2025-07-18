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
  enum class TamsGapHandling
  {
    NOT_SET,
    SKIP_GAPS,
    FILL_WITH_BLACK,
    HOLD_LAST_FRAME
  };

namespace TamsGapHandlingMapper
{
AWS_MEDIACONVERT_API TamsGapHandling GetTamsGapHandlingForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForTamsGapHandling(TamsGapHandling value);
} // namespace TamsGapHandlingMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
