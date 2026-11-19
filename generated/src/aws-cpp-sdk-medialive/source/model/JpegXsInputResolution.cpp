/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/model/JpegXsInputResolution.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {
namespace JpegXsInputResolutionMapper {

static const int HD_HASH = HashingUtils::HashString("HD");

JpegXsInputResolution GetJpegXsInputResolutionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == HD_HASH) {
    return JpegXsInputResolution::HD;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<JpegXsInputResolution>(hashCode);
  }

  return JpegXsInputResolution::NOT_SET;
}

Aws::String GetNameForJpegXsInputResolution(JpegXsInputResolution enumValue) {
  switch (enumValue) {
    case JpegXsInputResolution::NOT_SET:
      return {};
    case JpegXsInputResolution::HD:
      return "HD";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace JpegXsInputResolutionMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
