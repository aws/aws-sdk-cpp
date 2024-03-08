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
  enum class UncompressedFourcc
  {
    NOT_SET,
    I420,
    I422,
    I444
  };

namespace UncompressedFourccMapper
{
AWS_MEDIACONVERT_API UncompressedFourcc GetUncompressedFourccForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForUncompressedFourcc(UncompressedFourcc value);
} // namespace UncompressedFourccMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
