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
  enum class Mp4FreeSpaceBox
  {
    NOT_SET,
    INCLUDE,
    EXCLUDE
  };

namespace Mp4FreeSpaceBoxMapper
{
AWS_MEDIACONVERT_API Mp4FreeSpaceBox GetMp4FreeSpaceBoxForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMp4FreeSpaceBox(Mp4FreeSpaceBox value);
} // namespace Mp4FreeSpaceBoxMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
