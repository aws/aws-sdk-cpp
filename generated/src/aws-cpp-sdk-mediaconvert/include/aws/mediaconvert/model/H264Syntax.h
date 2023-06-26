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
  enum class H264Syntax
  {
    NOT_SET,
    DEFAULT,
    RP2027
  };

namespace H264SyntaxMapper
{
AWS_MEDIACONVERT_API H264Syntax GetH264SyntaxForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264Syntax(H264Syntax value);
} // namespace H264SyntaxMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
