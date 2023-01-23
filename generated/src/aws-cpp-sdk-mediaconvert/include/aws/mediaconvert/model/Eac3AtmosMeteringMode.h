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
  enum class Eac3AtmosMeteringMode
  {
    NOT_SET,
    LEQ_A,
    ITU_BS_1770_1,
    ITU_BS_1770_2,
    ITU_BS_1770_3,
    ITU_BS_1770_4
  };

namespace Eac3AtmosMeteringModeMapper
{
AWS_MEDIACONVERT_API Eac3AtmosMeteringMode GetEac3AtmosMeteringModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForEac3AtmosMeteringMode(Eac3AtmosMeteringMode value);
} // namespace Eac3AtmosMeteringModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
