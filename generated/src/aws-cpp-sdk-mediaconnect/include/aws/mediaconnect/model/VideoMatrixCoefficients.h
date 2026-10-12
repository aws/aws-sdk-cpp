/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

namespace Aws {
namespace MediaConnect {
namespace Model {
enum class VideoMatrixCoefficients {
  NOT_SET,
  IDENTITY,
  BT709,
  FCC,
  BT470BG,
  BT601,
  SMPTE240M,
  YCGCO,
  BT2020_NCL,
  BT2020_CL,
  SMPTE2085,
  CHROMATICITY_DERIVED_NCL,
  CHROMATICITY_DERIVED_CL,
  BT2100_ICTCP,
  IPT_C2
};

namespace VideoMatrixCoefficientsMapper {
AWS_MEDIACONNECT_API VideoMatrixCoefficients GetVideoMatrixCoefficientsForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForVideoMatrixCoefficients(VideoMatrixCoefficients value);
}  // namespace VideoMatrixCoefficientsMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
