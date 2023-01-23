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
  enum class XavcHdProfileQualityTuningLevel
  {
    NOT_SET,
    SINGLE_PASS,
    SINGLE_PASS_HQ,
    MULTI_PASS_HQ
  };

namespace XavcHdProfileQualityTuningLevelMapper
{
AWS_MEDIACONVERT_API XavcHdProfileQualityTuningLevel GetXavcHdProfileQualityTuningLevelForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForXavcHdProfileQualityTuningLevel(XavcHdProfileQualityTuningLevel value);
} // namespace XavcHdProfileQualityTuningLevelMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
