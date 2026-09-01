/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/TtmlFontColor.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace TtmlFontColorMapper {

static const int WHITE_HASH = HashingUtils::HashString("WHITE");
static const int BLACK_HASH = HashingUtils::HashString("BLACK");
static const int YELLOW_HASH = HashingUtils::HashString("YELLOW");
static const int RED_HASH = HashingUtils::HashString("RED");
static const int GREEN_HASH = HashingUtils::HashString("GREEN");
static const int BLUE_HASH = HashingUtils::HashString("BLUE");
static const int AUTO_HASH = HashingUtils::HashString("AUTO");

TtmlFontColor GetTtmlFontColorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == WHITE_HASH) {
    return TtmlFontColor::WHITE;
  } else if (hashCode == BLACK_HASH) {
    return TtmlFontColor::BLACK;
  } else if (hashCode == YELLOW_HASH) {
    return TtmlFontColor::YELLOW;
  } else if (hashCode == RED_HASH) {
    return TtmlFontColor::RED;
  } else if (hashCode == GREEN_HASH) {
    return TtmlFontColor::GREEN;
  } else if (hashCode == BLUE_HASH) {
    return TtmlFontColor::BLUE;
  } else if (hashCode == AUTO_HASH) {
    return TtmlFontColor::AUTO;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TtmlFontColor>(hashCode);
  }

  return TtmlFontColor::NOT_SET;
}

Aws::String GetNameForTtmlFontColor(TtmlFontColor enumValue) {
  switch (enumValue) {
    case TtmlFontColor::NOT_SET:
      return {};
    case TtmlFontColor::WHITE:
      return "WHITE";
    case TtmlFontColor::BLACK:
      return "BLACK";
    case TtmlFontColor::YELLOW:
      return "YELLOW";
    case TtmlFontColor::RED:
      return "RED";
    case TtmlFontColor::GREEN:
      return "GREEN";
    case TtmlFontColor::BLUE:
      return "BLUE";
    case TtmlFontColor::AUTO:
      return "AUTO";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TtmlFontColorMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
