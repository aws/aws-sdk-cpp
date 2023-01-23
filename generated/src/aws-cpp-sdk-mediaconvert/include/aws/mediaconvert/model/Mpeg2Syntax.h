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
  enum class Mpeg2Syntax
  {
    NOT_SET,
    DEFAULT,
    D_10
  };

namespace Mpeg2SyntaxMapper
{
AWS_MEDIACONVERT_API Mpeg2Syntax GetMpeg2SyntaxForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMpeg2Syntax(Mpeg2Syntax value);
} // namespace Mpeg2SyntaxMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
