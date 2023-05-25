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
  enum class MovPaddingControl
  {
    NOT_SET,
    OMNEON,
    NONE
  };

namespace MovPaddingControlMapper
{
AWS_MEDIACONVERT_API MovPaddingControl GetMovPaddingControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMovPaddingControl(MovPaddingControl value);
} // namespace MovPaddingControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
