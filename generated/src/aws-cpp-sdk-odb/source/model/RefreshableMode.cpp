/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/RefreshableMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace RefreshableModeMapper {

static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");
static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");

RefreshableMode GetRefreshableModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AUTOMATIC_HASH) {
    return RefreshableMode::AUTOMATIC;
  } else if (hashCode == MANUAL_HASH) {
    return RefreshableMode::MANUAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RefreshableMode>(hashCode);
  }

  return RefreshableMode::NOT_SET;
}

Aws::String GetNameForRefreshableMode(RefreshableMode enumValue) {
  switch (enumValue) {
    case RefreshableMode::NOT_SET:
      return {};
    case RefreshableMode::AUTOMATIC:
      return "AUTOMATIC";
    case RefreshableMode::MANUAL:
      return "MANUAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RefreshableModeMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
