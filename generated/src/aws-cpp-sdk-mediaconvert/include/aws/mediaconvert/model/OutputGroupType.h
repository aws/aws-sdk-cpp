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
  enum class OutputGroupType
  {
    NOT_SET,
    HLS_GROUP_SETTINGS,
    DASH_ISO_GROUP_SETTINGS,
    FILE_GROUP_SETTINGS,
    MS_SMOOTH_GROUP_SETTINGS,
    CMAF_GROUP_SETTINGS
  };

namespace OutputGroupTypeMapper
{
AWS_MEDIACONVERT_API OutputGroupType GetOutputGroupTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForOutputGroupType(OutputGroupType value);
} // namespace OutputGroupTypeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
