/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/quicksight/model/AccessControlApplicationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {
namespace AccessControlApplicationStatusMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

AccessControlApplicationStatus GetAccessControlApplicationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return AccessControlApplicationStatus::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return AccessControlApplicationStatus::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccessControlApplicationStatus>(hashCode);
  }

  return AccessControlApplicationStatus::NOT_SET;
}

Aws::String GetNameForAccessControlApplicationStatus(AccessControlApplicationStatus enumValue) {
  switch (enumValue) {
    case AccessControlApplicationStatus::NOT_SET:
      return {};
    case AccessControlApplicationStatus::ENABLED:
      return "ENABLED";
    case AccessControlApplicationStatus::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccessControlApplicationStatusMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
