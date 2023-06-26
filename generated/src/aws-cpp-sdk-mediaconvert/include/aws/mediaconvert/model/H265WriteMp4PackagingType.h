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
  enum class H265WriteMp4PackagingType
  {
    NOT_SET,
    HVC1,
    HEV1
  };

namespace H265WriteMp4PackagingTypeMapper
{
AWS_MEDIACONVERT_API H265WriteMp4PackagingType GetH265WriteMp4PackagingTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265WriteMp4PackagingType(H265WriteMp4PackagingType value);
} // namespace H265WriteMp4PackagingTypeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
