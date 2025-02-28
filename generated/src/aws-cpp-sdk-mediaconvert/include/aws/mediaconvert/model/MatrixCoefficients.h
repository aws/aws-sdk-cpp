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
  enum class MatrixCoefficients
  {
    NOT_SET,
    RGB,
    ITU_709,
    UNSPECIFIED,
    RESERVED,
    FCC,
    ITU_470BG,
    SMPTE_170M,
    SMPTE_240M,
    YCgCo,
    ITU_2020_NCL,
    ITU_2020_CL,
    SMPTE_2085,
    CD_NCL,
    CD_CL,
    ITU_2100ICtCp,
    IPT,
    EBU3213,
    LAST
  };

namespace MatrixCoefficientsMapper
{
AWS_MEDIACONVERT_API MatrixCoefficients GetMatrixCoefficientsForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMatrixCoefficients(MatrixCoefficients value);
} // namespace MatrixCoefficientsMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
