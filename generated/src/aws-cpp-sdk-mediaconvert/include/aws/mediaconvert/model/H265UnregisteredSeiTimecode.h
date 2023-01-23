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
  enum class H265UnregisteredSeiTimecode
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace H265UnregisteredSeiTimecodeMapper
{
AWS_MEDIACONVERT_API H265UnregisteredSeiTimecode GetH265UnregisteredSeiTimecodeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH265UnregisteredSeiTimecode(H265UnregisteredSeiTimecode value);
} // namespace H265UnregisteredSeiTimecodeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
