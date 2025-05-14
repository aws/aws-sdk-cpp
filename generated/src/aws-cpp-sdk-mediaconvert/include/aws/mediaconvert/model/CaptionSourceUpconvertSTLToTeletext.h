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
  enum class CaptionSourceUpconvertSTLToTeletext
  {
    NOT_SET,
    UPCONVERT,
    DISABLED
  };

namespace CaptionSourceUpconvertSTLToTeletextMapper
{
AWS_MEDIACONVERT_API CaptionSourceUpconvertSTLToTeletext GetCaptionSourceUpconvertSTLToTeletextForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCaptionSourceUpconvertSTLToTeletext(CaptionSourceUpconvertSTLToTeletext value);
} // namespace CaptionSourceUpconvertSTLToTeletextMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
