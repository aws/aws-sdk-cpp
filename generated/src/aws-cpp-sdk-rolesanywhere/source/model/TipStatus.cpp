/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rolesanywhere/model/TipStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace RolesAnywhere {
namespace Model {
namespace TipStatusMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

TipStatus GetTipStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return TipStatus::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return TipStatus::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TipStatus>(hashCode);
  }

  return TipStatus::NOT_SET;
}

Aws::String GetNameForTipStatus(TipStatus enumValue) {
  switch (enumValue) {
    case TipStatus::NOT_SET:
      return {};
    case TipStatus::ENABLED:
      return "ENABLED";
    case TipStatus::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TipStatusMapper
}  // namespace Model
}  // namespace RolesAnywhere
}  // namespace Aws
