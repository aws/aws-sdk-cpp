/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/TtmlBackgroundColor.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace TtmlBackgroundColorMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int BLACK_HASH = HashingUtils::HashString("BLACK");
static const int WHITE_HASH = HashingUtils::HashString("WHITE");
static const int AUTO_HASH = HashingUtils::HashString("AUTO");

TtmlBackgroundColor GetTtmlBackgroundColorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return TtmlBackgroundColor::NONE;
  } else if (hashCode == BLACK_HASH) {
    return TtmlBackgroundColor::BLACK;
  } else if (hashCode == WHITE_HASH) {
    return TtmlBackgroundColor::WHITE;
  } else if (hashCode == AUTO_HASH) {
    return TtmlBackgroundColor::AUTO;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TtmlBackgroundColor>(hashCode);
  }

  return TtmlBackgroundColor::NOT_SET;
}

Aws::String GetNameForTtmlBackgroundColor(TtmlBackgroundColor enumValue) {
  switch (enumValue) {
    case TtmlBackgroundColor::NOT_SET:
      return {};
    case TtmlBackgroundColor::NONE:
      return "NONE";
    case TtmlBackgroundColor::BLACK:
      return "BLACK";
    case TtmlBackgroundColor::WHITE:
      return "WHITE";
    case TtmlBackgroundColor::AUTO:
      return "AUTO";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TtmlBackgroundColorMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
