/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconnect/model/VideoMatrixCoefficients.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {
namespace VideoMatrixCoefficientsMapper {

static const int IDENTITY_HASH = HashingUtils::HashString("IDENTITY");
static const int BT709_HASH = HashingUtils::HashString("BT709");
static const int FCC_HASH = HashingUtils::HashString("FCC");
static const int BT470BG_HASH = HashingUtils::HashString("BT470BG");
static const int BT601_HASH = HashingUtils::HashString("BT601");
static const int SMPTE240M_HASH = HashingUtils::HashString("SMPTE240M");
static const int YCGCO_HASH = HashingUtils::HashString("YCGCO");
static const int BT2020_NCL_HASH = HashingUtils::HashString("BT2020_NCL");
static const int BT2020_CL_HASH = HashingUtils::HashString("BT2020_CL");
static const int SMPTE2085_HASH = HashingUtils::HashString("SMPTE2085");
static const int CHROMATICITY_DERIVED_NCL_HASH = HashingUtils::HashString("CHROMATICITY_DERIVED_NCL");
static const int CHROMATICITY_DERIVED_CL_HASH = HashingUtils::HashString("CHROMATICITY_DERIVED_CL");
static const int BT2100_ICTCP_HASH = HashingUtils::HashString("BT2100_ICTCP");
static const int IPT_C2_HASH = HashingUtils::HashString("IPT_C2");

VideoMatrixCoefficients GetVideoMatrixCoefficientsForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IDENTITY_HASH) {
    return VideoMatrixCoefficients::IDENTITY;
  } else if (hashCode == BT709_HASH) {
    return VideoMatrixCoefficients::BT709;
  } else if (hashCode == FCC_HASH) {
    return VideoMatrixCoefficients::FCC;
  } else if (hashCode == BT470BG_HASH) {
    return VideoMatrixCoefficients::BT470BG;
  } else if (hashCode == BT601_HASH) {
    return VideoMatrixCoefficients::BT601;
  } else if (hashCode == SMPTE240M_HASH) {
    return VideoMatrixCoefficients::SMPTE240M;
  } else if (hashCode == YCGCO_HASH) {
    return VideoMatrixCoefficients::YCGCO;
  } else if (hashCode == BT2020_NCL_HASH) {
    return VideoMatrixCoefficients::BT2020_NCL;
  } else if (hashCode == BT2020_CL_HASH) {
    return VideoMatrixCoefficients::BT2020_CL;
  } else if (hashCode == SMPTE2085_HASH) {
    return VideoMatrixCoefficients::SMPTE2085;
  } else if (hashCode == CHROMATICITY_DERIVED_NCL_HASH) {
    return VideoMatrixCoefficients::CHROMATICITY_DERIVED_NCL;
  } else if (hashCode == CHROMATICITY_DERIVED_CL_HASH) {
    return VideoMatrixCoefficients::CHROMATICITY_DERIVED_CL;
  } else if (hashCode == BT2100_ICTCP_HASH) {
    return VideoMatrixCoefficients::BT2100_ICTCP;
  } else if (hashCode == IPT_C2_HASH) {
    return VideoMatrixCoefficients::IPT_C2;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VideoMatrixCoefficients>(hashCode);
  }

  return VideoMatrixCoefficients::NOT_SET;
}

Aws::String GetNameForVideoMatrixCoefficients(VideoMatrixCoefficients enumValue) {
  switch (enumValue) {
    case VideoMatrixCoefficients::NOT_SET:
      return {};
    case VideoMatrixCoefficients::IDENTITY:
      return "IDENTITY";
    case VideoMatrixCoefficients::BT709:
      return "BT709";
    case VideoMatrixCoefficients::FCC:
      return "FCC";
    case VideoMatrixCoefficients::BT470BG:
      return "BT470BG";
    case VideoMatrixCoefficients::BT601:
      return "BT601";
    case VideoMatrixCoefficients::SMPTE240M:
      return "SMPTE240M";
    case VideoMatrixCoefficients::YCGCO:
      return "YCGCO";
    case VideoMatrixCoefficients::BT2020_NCL:
      return "BT2020_NCL";
    case VideoMatrixCoefficients::BT2020_CL:
      return "BT2020_CL";
    case VideoMatrixCoefficients::SMPTE2085:
      return "SMPTE2085";
    case VideoMatrixCoefficients::CHROMATICITY_DERIVED_NCL:
      return "CHROMATICITY_DERIVED_NCL";
    case VideoMatrixCoefficients::CHROMATICITY_DERIVED_CL:
      return "CHROMATICITY_DERIVED_CL";
    case VideoMatrixCoefficients::BT2100_ICTCP:
      return "BT2100_ICTCP";
    case VideoMatrixCoefficients::IPT_C2:
      return "IPT_C2";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VideoMatrixCoefficientsMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
