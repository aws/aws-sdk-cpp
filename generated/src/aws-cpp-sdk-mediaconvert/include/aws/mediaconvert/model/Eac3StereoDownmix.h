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
  enum class Eac3StereoDownmix
  {
    NOT_SET,
    NOT_INDICATED,
    LO_RO,
    LT_RT,
    DPL2
  };

namespace Eac3StereoDownmixMapper
{
AWS_MEDIACONVERT_API Eac3StereoDownmix GetEac3StereoDownmixForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForEac3StereoDownmix(Eac3StereoDownmix value);
} // namespace Eac3StereoDownmixMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
