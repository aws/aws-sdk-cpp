/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/odb/model/RefreshableStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {
namespace RefreshableStatusMapper {

static const int REFRESHING_HASH = HashingUtils::HashString("REFRESHING");
static const int NOT_REFRESHING_HASH = HashingUtils::HashString("NOT_REFRESHING");

RefreshableStatus GetRefreshableStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == REFRESHING_HASH) {
    return RefreshableStatus::REFRESHING;
  } else if (hashCode == NOT_REFRESHING_HASH) {
    return RefreshableStatus::NOT_REFRESHING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RefreshableStatus>(hashCode);
  }

  return RefreshableStatus::NOT_SET;
}

Aws::String GetNameForRefreshableStatus(RefreshableStatus enumValue) {
  switch (enumValue) {
    case RefreshableStatus::NOT_SET:
      return {};
    case RefreshableStatus::REFRESHING:
      return "REFRESHING";
    case RefreshableStatus::NOT_REFRESHING:
      return "NOT_REFRESHING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RefreshableStatusMapper
}  // namespace Model
}  // namespace odb
}  // namespace Aws
