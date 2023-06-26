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
  enum class Eac3AtmosStereoDownmix
  {
    NOT_SET,
    NOT_INDICATED,
    STEREO,
    SURROUND,
    DPL2
  };

namespace Eac3AtmosStereoDownmixMapper
{
AWS_MEDIACONVERT_API Eac3AtmosStereoDownmix GetEac3AtmosStereoDownmixForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForEac3AtmosStereoDownmix(Eac3AtmosStereoDownmix value);
} // namespace Eac3AtmosStereoDownmixMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
