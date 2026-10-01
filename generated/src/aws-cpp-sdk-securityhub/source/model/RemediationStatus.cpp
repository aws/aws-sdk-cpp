/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/securityhub/model/RemediationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {
namespace RemediationStatusMapper {

static const int New_HASH = HashingUtils::HashString("New");
static const int Updated_HASH = HashingUtils::HashString("Updated");
static const int Resolved_HASH = HashingUtils::HashString("Resolved");

RemediationStatus GetRemediationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == New_HASH) {
    return RemediationStatus::New;
  } else if (hashCode == Updated_HASH) {
    return RemediationStatus::Updated;
  } else if (hashCode == Resolved_HASH) {
    return RemediationStatus::Resolved;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RemediationStatus>(hashCode);
  }

  return RemediationStatus::NOT_SET;
}

Aws::String GetNameForRemediationStatus(RemediationStatus enumValue) {
  switch (enumValue) {
    case RemediationStatus::NOT_SET:
      return {};
    case RemediationStatus::New:
      return "New";
    case RemediationStatus::Updated:
      return "Updated";
    case RemediationStatus::Resolved:
      return "Resolved";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RemediationStatusMapper
}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
