/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/medialive/model/Av1BitDepth.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {
namespace Av1BitDepthMapper {

static const int DEPTH_10_HASH = HashingUtils::HashString("DEPTH_10");
static const int DEPTH_8_HASH = HashingUtils::HashString("DEPTH_8");

Av1BitDepth GetAv1BitDepthForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DEPTH_10_HASH) {
    return Av1BitDepth::DEPTH_10;
  } else if (hashCode == DEPTH_8_HASH) {
    return Av1BitDepth::DEPTH_8;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Av1BitDepth>(hashCode);
  }

  return Av1BitDepth::NOT_SET;
}

Aws::String GetNameForAv1BitDepth(Av1BitDepth enumValue) {
  switch (enumValue) {
    case Av1BitDepth::NOT_SET:
      return {};
    case Av1BitDepth::DEPTH_10:
      return "DEPTH_10";
    case Av1BitDepth::DEPTH_8:
      return "DEPTH_8";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace Av1BitDepthMapper
}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
