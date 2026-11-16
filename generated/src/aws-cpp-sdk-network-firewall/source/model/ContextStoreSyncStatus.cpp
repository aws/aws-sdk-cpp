/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-firewall/model/ContextStoreSyncStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {
namespace ContextStoreSyncStatusMapper {

static const int SYNCING_HASH = HashingUtils::HashString("SYNCING");
static const int PARTIALLY_RESOLVED_HASH = HashingUtils::HashString("PARTIALLY_RESOLVED");
static const int FULLY_RESOLVED_HASH = HashingUtils::HashString("FULLY_RESOLVED");
static const int SYNC_FAILED_HASH = HashingUtils::HashString("SYNC_FAILED");
static const int UNRESOLVED_HASH = HashingUtils::HashString("UNRESOLVED");

ContextStoreSyncStatus GetContextStoreSyncStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SYNCING_HASH) {
    return ContextStoreSyncStatus::SYNCING;
  } else if (hashCode == PARTIALLY_RESOLVED_HASH) {
    return ContextStoreSyncStatus::PARTIALLY_RESOLVED;
  } else if (hashCode == FULLY_RESOLVED_HASH) {
    return ContextStoreSyncStatus::FULLY_RESOLVED;
  } else if (hashCode == SYNC_FAILED_HASH) {
    return ContextStoreSyncStatus::SYNC_FAILED;
  } else if (hashCode == UNRESOLVED_HASH) {
    return ContextStoreSyncStatus::UNRESOLVED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContextStoreSyncStatus>(hashCode);
  }

  return ContextStoreSyncStatus::NOT_SET;
}

Aws::String GetNameForContextStoreSyncStatus(ContextStoreSyncStatus enumValue) {
  switch (enumValue) {
    case ContextStoreSyncStatus::NOT_SET:
      return {};
    case ContextStoreSyncStatus::SYNCING:
      return "SYNCING";
    case ContextStoreSyncStatus::PARTIALLY_RESOLVED:
      return "PARTIALLY_RESOLVED";
    case ContextStoreSyncStatus::FULLY_RESOLVED:
      return "FULLY_RESOLVED";
    case ContextStoreSyncStatus::SYNC_FAILED:
      return "SYNC_FAILED";
    case ContextStoreSyncStatus::UNRESOLVED:
      return "UNRESOLVED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContextStoreSyncStatusMapper
}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
