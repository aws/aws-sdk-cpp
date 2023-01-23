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
  enum class NoiseReducerFilter
  {
    NOT_SET,
    BILATERAL,
    MEAN,
    GAUSSIAN,
    LANCZOS,
    SHARPEN,
    CONSERVE,
    SPATIAL,
    TEMPORAL
  };

namespace NoiseReducerFilterMapper
{
AWS_MEDIACONVERT_API NoiseReducerFilter GetNoiseReducerFilterForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForNoiseReducerFilter(NoiseReducerFilter value);
} // namespace NoiseReducerFilterMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
