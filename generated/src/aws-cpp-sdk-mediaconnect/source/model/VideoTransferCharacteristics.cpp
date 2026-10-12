/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/VideoTransferCharacteristics.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace VideoTransferCharacteristicsMapper {

static const int BT709_HASH = HashingUtils::HashString("BT709");
static const int BT470M_HASH = HashingUtils::HashString("BT470M");
static const int BT470BG_HASH = HashingUtils::HashString("BT470BG");
static const int BT601_HASH = HashingUtils::HashString("BT601");
static const int SMPTE240M_HASH = HashingUtils::HashString("SMPTE240M");
static const int LINEAR_HASH = HashingUtils::HashString("LINEAR");
static const int LOG100_HASH = HashingUtils::HashString("LOG100");
static const int LOG316_HASH = HashingUtils::HashString("LOG316");
static const int IEC61966_2_4_HASH = HashingUtils::HashString("IEC61966_2_4");
static const int BT1361_ECG_HASH = HashingUtils::HashString("BT1361_ECG");
static const int IEC61966_2_1_HASH = HashingUtils::HashString("IEC61966_2_1");
static const int BT2020_10_HASH = HashingUtils::HashString("BT2020_10");
static const int BT2020_12_HASH = HashingUtils::HashString("BT2020_12");
static const int BT2100_PQ_HASH = HashingUtils::HashString("BT2100_PQ");
static const int SMPTE428_HASH = HashingUtils::HashString("SMPTE428");
static const int BT2100_HLG_HASH = HashingUtils::HashString("BT2100_HLG");

VideoTransferCharacteristics GetVideoTransferCharacteristicsForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BT709_HASH) {
    return VideoTransferCharacteristics::BT709;
  } else if (hashCode == BT470M_HASH) {
    return VideoTransferCharacteristics::BT470M;
  } else if (hashCode == BT470BG_HASH) {
    return VideoTransferCharacteristics::BT470BG;
  } else if (hashCode == BT601_HASH) {
    return VideoTransferCharacteristics::BT601;
  } else if (hashCode == SMPTE240M_HASH) {
    return VideoTransferCharacteristics::SMPTE240M;
  } else if (hashCode == LINEAR_HASH) {
    return VideoTransferCharacteristics::LINEAR;
  } else if (hashCode == LOG100_HASH) {
    return VideoTransferCharacteristics::LOG100;
  } else if (hashCode == LOG316_HASH) {
    return VideoTransferCharacteristics::LOG316;
  } else if (hashCode == IEC61966_2_4_HASH) {
    return VideoTransferCharacteristics::IEC61966_2_4;
  } else if (hashCode == BT1361_ECG_HASH) {
    return VideoTransferCharacteristics::BT1361_ECG;
  } else if (hashCode == IEC61966_2_1_HASH) {
    return VideoTransferCharacteristics::IEC61966_2_1;
  } else if (hashCode == BT2020_10_HASH) {
    return VideoTransferCharacteristics::BT2020_10;
  } else if (hashCode == BT2020_12_HASH) {
    return VideoTransferCharacteristics::BT2020_12;
  } else if (hashCode == BT2100_PQ_HASH) {
    return VideoTransferCharacteristics::BT2100_PQ;
  } else if (hashCode == SMPTE428_HASH) {
    return VideoTransferCharacteristics::SMPTE428;
  } else if (hashCode == BT2100_HLG_HASH) {
    return VideoTransferCharacteristics::BT2100_HLG;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VideoTransferCharacteristics>(hashCode);
  }

  return VideoTransferCharacteristics::NOT_SET;
}

Aws::String GetNameForVideoTransferCharacteristics(VideoTransferCharacteristics enumValue) {
  switch (enumValue) {
    case VideoTransferCharacteristics::NOT_SET:
      return {};
    case VideoTransferCharacteristics::BT709:
      return "BT709";
    case VideoTransferCharacteristics::BT470M:
      return "BT470M";
    case VideoTransferCharacteristics::BT470BG:
      return "BT470BG";
    case VideoTransferCharacteristics::BT601:
      return "BT601";
    case VideoTransferCharacteristics::SMPTE240M:
      return "SMPTE240M";
    case VideoTransferCharacteristics::LINEAR:
      return "LINEAR";
    case VideoTransferCharacteristics::LOG100:
      return "LOG100";
    case VideoTransferCharacteristics::LOG316:
      return "LOG316";
    case VideoTransferCharacteristics::IEC61966_2_4:
      return "IEC61966_2_4";
    case VideoTransferCharacteristics::BT1361_ECG:
      return "BT1361_ECG";
    case VideoTransferCharacteristics::IEC61966_2_1:
      return "IEC61966_2_1";
    case VideoTransferCharacteristics::BT2020_10:
      return "BT2020_10";
    case VideoTransferCharacteristics::BT2020_12:
      return "BT2020_12";
    case VideoTransferCharacteristics::BT2100_PQ:
      return "BT2100_PQ";
    case VideoTransferCharacteristics::SMPTE428:
      return "SMPTE428";
    case VideoTransferCharacteristics::BT2100_HLG:
      return "BT2100_HLG";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VideoTransferCharacteristicsMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
