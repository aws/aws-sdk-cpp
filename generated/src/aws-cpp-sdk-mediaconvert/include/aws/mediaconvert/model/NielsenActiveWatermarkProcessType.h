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
  enum class NielsenActiveWatermarkProcessType
  {
    NOT_SET,
    NAES2_AND_NW,
    CBET,
    NAES2_AND_NW_AND_CBET
  };

namespace NielsenActiveWatermarkProcessTypeMapper
{
AWS_MEDIACONVERT_API NielsenActiveWatermarkProcessType GetNielsenActiveWatermarkProcessTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForNielsenActiveWatermarkProcessType(NielsenActiveWatermarkProcessType value);
} // namespace NielsenActiveWatermarkProcessTypeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
