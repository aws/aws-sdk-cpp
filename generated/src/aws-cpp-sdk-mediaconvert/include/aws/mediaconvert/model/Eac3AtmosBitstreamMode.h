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
  enum class Eac3AtmosBitstreamMode
  {
    NOT_SET,
    COMPLETE_MAIN
  };

namespace Eac3AtmosBitstreamModeMapper
{
AWS_MEDIACONVERT_API Eac3AtmosBitstreamMode GetEac3AtmosBitstreamModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForEac3AtmosBitstreamMode(Eac3AtmosBitstreamMode value);
} // namespace Eac3AtmosBitstreamModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
