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
  enum class TransferCharacteristics
  {
    NOT_SET,
    ITU_709,
    UNSPECIFIED,
    RESERVED,
    ITU_470M,
    ITU_470BG,
    SMPTE_170M,
    SMPTE_240M,
    LINEAR,
    LOG10_2,
    LOC10_2_5,
    IEC_61966_2_4,
    ITU_1361,
    IEC_61966_2_1,
    ITU_2020_10bit,
    ITU_2020_12bit,
    SMPTE_2084,
    SMPTE_428_1,
    ARIB_B67,
    LAST
  };

namespace TransferCharacteristicsMapper
{
AWS_MEDIACONVERT_API TransferCharacteristics GetTransferCharacteristicsForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForTransferCharacteristics(TransferCharacteristics value);
} // namespace TransferCharacteristicsMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
