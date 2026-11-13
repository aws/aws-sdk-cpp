/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mediatailor/model/HlsTagName.h>

using namespace Aws::Utils;

namespace Aws {
namespace MediaTailor {
namespace Model {
namespace HlsTagNameMapper {

static const int EXT_X_DATERANGE_HASH = HashingUtils::HashString("EXT-X-DATERANGE");

HlsTagName GetHlsTagNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EXT_X_DATERANGE_HASH) {
    return HlsTagName::EXT_X_DATERANGE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HlsTagName>(hashCode);
  }

  return HlsTagName::NOT_SET;
}

Aws::String GetNameForHlsTagName(HlsTagName enumValue) {
  switch (enumValue) {
    case HlsTagName::NOT_SET:
      return {};
    case HlsTagName::EXT_X_DATERANGE:
      return "EXT-X-DATERANGE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HlsTagNameMapper
}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
