/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/TtmlFontStyle.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace TtmlFontStyleMapper {

static const int NORMAL_HASH = HashingUtils::HashString("NORMAL");
static const int ITALIC_HASH = HashingUtils::HashString("ITALIC");

TtmlFontStyle GetTtmlFontStyleForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NORMAL_HASH) {
    return TtmlFontStyle::NORMAL;
  } else if (hashCode == ITALIC_HASH) {
    return TtmlFontStyle::ITALIC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TtmlFontStyle>(hashCode);
  }

  return TtmlFontStyle::NOT_SET;
}

Aws::String GetNameForTtmlFontStyle(TtmlFontStyle enumValue) {
  switch (enumValue) {
    case TtmlFontStyle::NOT_SET:
      return {};
    case TtmlFontStyle::NORMAL:
      return "NORMAL";
    case TtmlFontStyle::ITALIC:
      return "ITALIC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TtmlFontStyleMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
