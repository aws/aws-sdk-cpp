/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/FrameControl.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace FrameControlMapper {

static const int NEAREST_IDRFRAME_HASH = HashingUtils::HashString("NEAREST_IDRFRAME");
static const int NEAREST_IFRAME_HASH = HashingUtils::HashString("NEAREST_IFRAME");

FrameControl GetFrameControlForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NEAREST_IDRFRAME_HASH) {
    return FrameControl::NEAREST_IDRFRAME;
  } else if (hashCode == NEAREST_IFRAME_HASH) {
    return FrameControl::NEAREST_IFRAME;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FrameControl>(hashCode);
  }

  return FrameControl::NOT_SET;
}

Aws::String GetNameForFrameControl(FrameControl enumValue) {
  switch (enumValue) {
    case FrameControl::NOT_SET:
      return {};
    case FrameControl::NEAREST_IDRFRAME:
      return "NEAREST_IDRFRAME";
    case FrameControl::NEAREST_IFRAME:
      return "NEAREST_IFRAME";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FrameControlMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
