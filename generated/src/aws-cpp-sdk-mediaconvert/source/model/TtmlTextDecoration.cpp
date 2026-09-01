/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediaconvert/model/TtmlTextDecoration.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaConvert {
namespace Model {
namespace TtmlTextDecorationMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int UNDERLINE_HASH = HashingUtils::HashString("UNDERLINE");

TtmlTextDecoration GetTtmlTextDecorationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return TtmlTextDecoration::NONE;
  } else if (hashCode == UNDERLINE_HASH) {
    return TtmlTextDecoration::UNDERLINE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TtmlTextDecoration>(hashCode);
  }

  return TtmlTextDecoration::NOT_SET;
}

Aws::String GetNameForTtmlTextDecoration(TtmlTextDecoration enumValue) {
  switch (enumValue) {
    case TtmlTextDecoration::NOT_SET:
      return {};
    case TtmlTextDecoration::NONE:
      return "NONE";
    case TtmlTextDecoration::UNDERLINE:
      return "UNDERLINE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TtmlTextDecorationMapper
}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
