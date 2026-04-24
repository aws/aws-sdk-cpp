/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sso-admin/model/RegionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SSOAdmin {
namespace Model {
namespace RegionStatusMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int ADDING_HASH = HashingUtils::HashString("ADDING");
static const int REMOVING_HASH = HashingUtils::HashString("REMOVING");

RegionStatus GetRegionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return RegionStatus::ACTIVE;
  } else if (hashCode == ADDING_HASH) {
    return RegionStatus::ADDING;
  } else if (hashCode == REMOVING_HASH) {
    return RegionStatus::REMOVING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RegionStatus>(hashCode);
  }

  return RegionStatus::NOT_SET;
}

Aws::String GetNameForRegionStatus(RegionStatus enumValue) {
  switch (enumValue) {
    case RegionStatus::NOT_SET:
      return {};
    case RegionStatus::ACTIVE:
      return "ACTIVE";
    case RegionStatus::ADDING:
      return "ADDING";
    case RegionStatus::REMOVING:
      return "REMOVING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RegionStatusMapper
}  // namespace Model
}  // namespace SSOAdmin
}  // namespace Aws
