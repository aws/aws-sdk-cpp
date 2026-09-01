/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/TtmlFontWeight.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace TtmlFontWeightMapper {

static const int NORMAL_HASH = HashingUtils::HashString("NORMAL");
static const int BOLD_HASH = HashingUtils::HashString("BOLD");

TtmlFontWeight GetTtmlFontWeightForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NORMAL_HASH) {
    return TtmlFontWeight::NORMAL;
  } else if (hashCode == BOLD_HASH) {
    return TtmlFontWeight::BOLD;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TtmlFontWeight>(hashCode);
  }

  return TtmlFontWeight::NOT_SET;
}

Aws::String GetNameForTtmlFontWeight(TtmlFontWeight enumValue) {
  switch (enumValue) {
    case TtmlFontWeight::NOT_SET:
      return {};
    case TtmlFontWeight::NORMAL:
      return "NORMAL";
    case TtmlFontWeight::BOLD:
      return "BOLD";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TtmlFontWeightMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
