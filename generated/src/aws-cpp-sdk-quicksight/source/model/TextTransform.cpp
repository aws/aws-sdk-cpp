/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/TextTransform.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace TextTransformMapper {

static const int CAPITALIZE_HASH = HashingUtils::HashString("CAPITALIZE");

TextTransform GetTextTransformForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CAPITALIZE_HASH) {
    return TextTransform::CAPITALIZE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TextTransform>(hashCode);
  }

  return TextTransform::NOT_SET;
}

Aws::String GetNameForTextTransform(TextTransform enumValue) {
  switch (enumValue) {
    case TextTransform::NOT_SET:
      return {};
    case TextTransform::CAPITALIZE:
      return "CAPITALIZE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TextTransformMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
