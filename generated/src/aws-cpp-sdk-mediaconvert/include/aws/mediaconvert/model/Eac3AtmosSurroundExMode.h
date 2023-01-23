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
  enum class Eac3AtmosSurroundExMode
  {
    NOT_SET,
    NOT_INDICATED,
    ENABLED,
    DISABLED
  };

namespace Eac3AtmosSurroundExModeMapper
{
AWS_MEDIACONVERT_API Eac3AtmosSurroundExMode GetEac3AtmosSurroundExModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForEac3AtmosSurroundExMode(Eac3AtmosSurroundExMode value);
} // namespace Eac3AtmosSurroundExModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
