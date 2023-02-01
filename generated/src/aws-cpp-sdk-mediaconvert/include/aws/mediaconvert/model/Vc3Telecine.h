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
  enum class Vc3Telecine
  {
    NOT_SET,
    NONE,
    HARD
  };

namespace Vc3TelecineMapper
{
AWS_MEDIACONVERT_API Vc3Telecine GetVc3TelecineForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForVc3Telecine(Vc3Telecine value);
} // namespace Vc3TelecineMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
