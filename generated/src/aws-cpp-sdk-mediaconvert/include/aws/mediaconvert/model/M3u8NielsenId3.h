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
  enum class M3u8NielsenId3
  {
    NOT_SET,
    INSERT,
    NONE
  };

namespace M3u8NielsenId3Mapper
{
AWS_MEDIACONVERT_API M3u8NielsenId3 GetM3u8NielsenId3ForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForM3u8NielsenId3(M3u8NielsenId3 value);
} // namespace M3u8NielsenId3Mapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
