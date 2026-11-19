/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/model/JpegXsInputMaximumBitrate.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {
namespace JpegXsInputMaximumBitrateMapper {

static const int MAX_500_MBPS_HASH = HashingUtils::HashString("MAX_500_MBPS");

JpegXsInputMaximumBitrate GetJpegXsInputMaximumBitrateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MAX_500_MBPS_HASH) {
    return JpegXsInputMaximumBitrate::MAX_500_MBPS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<JpegXsInputMaximumBitrate>(hashCode);
  }

  return JpegXsInputMaximumBitrate::NOT_SET;
}

Aws::String GetNameForJpegXsInputMaximumBitrate(JpegXsInputMaximumBitrate enumValue) {
  switch (enumValue) {
    case JpegXsInputMaximumBitrate::NOT_SET:
      return {};
    case JpegXsInputMaximumBitrate::MAX_500_MBPS:
      return "MAX_500_MBPS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace JpegXsInputMaximumBitrateMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
