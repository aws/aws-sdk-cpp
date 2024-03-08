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
  enum class UncompressedTelecine
  {
    NOT_SET,
    NONE,
    HARD
  };

namespace UncompressedTelecineMapper
{
AWS_MEDIACONVERT_API UncompressedTelecine GetUncompressedTelecineForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForUncompressedTelecine(UncompressedTelecine value);
} // namespace UncompressedTelecineMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
