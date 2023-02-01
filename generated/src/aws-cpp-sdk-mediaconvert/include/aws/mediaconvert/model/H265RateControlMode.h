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
  enum class H265RateControlMode
  {
    NOT_SET,
    VBR,
    CBR,
    QVBR
  };

namespace H265RateControlModeMapper
{
AWS_MEDIACONVERT_API H265RateControlMode GetH265RateControlModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265RateControlMode(H265RateControlMode value);
} // namespace H265RateControlModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
