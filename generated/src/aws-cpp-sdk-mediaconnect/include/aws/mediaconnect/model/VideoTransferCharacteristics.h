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
enum class VideoTransferCharacteristics {
  NOT_SET,
  BT709,
  BT470M,
  BT470BG,
  BT601,
  SMPTE240M,
  LINEAR,
  LOG100,
  LOG316,
  IEC61966_2_4,
  BT1361_ECG,
  IEC61966_2_1,
  BT2020_10,
  BT2020_12,
  BT2100_PQ,
  SMPTE428,
  BT2100_HLG
};

namespace VideoTransferCharacteristicsMapper {
AWS_MEDIACONNECT_API VideoTransferCharacteristics GetVideoTransferCharacteristicsForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForVideoTransferCharacteristics(VideoTransferCharacteristics value);
}  // namespace VideoTransferCharacteristicsMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
