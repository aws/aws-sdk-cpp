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
  enum class Ac3CodingMode
  {
    NOT_SET,
    CODING_MODE_1_0,
    CODING_MODE_1_1,
    CODING_MODE_2_0,
    CODING_MODE_3_2_LFE
  };

namespace Ac3CodingModeMapper
{
AWS_MEDIACONVERT_API Ac3CodingMode GetAc3CodingModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAc3CodingMode(Ac3CodingMode value);
} // namespace Ac3CodingModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
