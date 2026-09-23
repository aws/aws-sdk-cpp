/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-security-manager/model/WAFConflictResolutionOptions.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
namespace WAFConflictResolutionOptionsMapper {

static const int MERGE_WHERE_APPLICABLE_HASH = HashingUtils::HashString("MERGE_WHERE_APPLICABLE");

WAFConflictResolutionOptions GetWAFConflictResolutionOptionsForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MERGE_WHERE_APPLICABLE_HASH) {
    return WAFConflictResolutionOptions::MERGE_WHERE_APPLICABLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<WAFConflictResolutionOptions>(hashCode);
  }

  return WAFConflictResolutionOptions::NOT_SET;
}

Aws::String GetNameForWAFConflictResolutionOptions(WAFConflictResolutionOptions enumValue) {
  switch (enumValue) {
    case WAFConflictResolutionOptions::NOT_SET:
      return {};
    case WAFConflictResolutionOptions::MERGE_WHERE_APPLICABLE:
      return "MERGE_WHERE_APPLICABLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace WAFConflictResolutionOptionsMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
