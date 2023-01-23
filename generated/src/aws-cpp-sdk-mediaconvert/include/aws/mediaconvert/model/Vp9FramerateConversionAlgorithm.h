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
  enum class Vp9FramerateConversionAlgorithm
  {
    NOT_SET,
    DUPLICATE_DROP,
    INTERPOLATE,
    FRAMEFORMER
  };

namespace Vp9FramerateConversionAlgorithmMapper
{
AWS_MEDIACONVERT_API Vp9FramerateConversionAlgorithm GetVp9FramerateConversionAlgorithmForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForVp9FramerateConversionAlgorithm(Vp9FramerateConversionAlgorithm value);
} // namespace Vp9FramerateConversionAlgorithmMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
