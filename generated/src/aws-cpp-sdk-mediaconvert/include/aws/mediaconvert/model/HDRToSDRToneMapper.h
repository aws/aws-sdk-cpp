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
  enum class HDRToSDRToneMapper
  {
    NOT_SET,
    PRESERVE_DETAILS,
    VIBRANT
  };

namespace HDRToSDRToneMapperMapper
{
AWS_MEDIACONVERT_API HDRToSDRToneMapper GetHDRToSDRToneMapperForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForHDRToSDRToneMapper(HDRToSDRToneMapper value);
} // namespace HDRToSDRToneMapperMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
