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
  enum class H264WriteMp4PackagingType
  {
    NOT_SET,
    AVC1,
    AVC3
  };

namespace H264WriteMp4PackagingTypeMapper
{
AWS_MEDIACONVERT_API H264WriteMp4PackagingType GetH264WriteMp4PackagingTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264WriteMp4PackagingType(H264WriteMp4PackagingType value);
} // namespace H264WriteMp4PackagingTypeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
