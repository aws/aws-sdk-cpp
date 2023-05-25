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
  enum class H264UnregisteredSeiTimecode
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace H264UnregisteredSeiTimecodeMapper
{
AWS_MEDIACONVERT_API H264UnregisteredSeiTimecode GetH264UnregisteredSeiTimecodeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264UnregisteredSeiTimecode(H264UnregisteredSeiTimecode value);
} // namespace H264UnregisteredSeiTimecodeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
