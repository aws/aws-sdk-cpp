﻿/**
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
  enum class AacLoudnessMeasurementMode
  {
    NOT_SET,
    PROGRAM,
    ANCHOR
  };

namespace AacLoudnessMeasurementModeMapper
{
AWS_MEDIACONVERT_API AacLoudnessMeasurementMode GetAacLoudnessMeasurementModeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAacLoudnessMeasurementMode(AacLoudnessMeasurementMode value);
} // namespace AacLoudnessMeasurementModeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
