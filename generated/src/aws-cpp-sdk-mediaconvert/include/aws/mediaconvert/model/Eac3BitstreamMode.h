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
  enum class Eac3BitstreamMode
  {
    NOT_SET,
    COMPLETE_MAIN,
    COMMENTARY,
    EMERGENCY,
    HEARING_IMPAIRED,
    VISUALLY_IMPAIRED
  };

namespace Eac3BitstreamModeMapper
{
AWS_MEDIACONVERT_API Eac3BitstreamMode GetEac3BitstreamModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForEac3BitstreamMode(Eac3BitstreamMode value);
} // namespace Eac3BitstreamModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
