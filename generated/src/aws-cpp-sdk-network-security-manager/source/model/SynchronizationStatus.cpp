/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/network-security-manager/model/SynchronizationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
namespace SynchronizationStatusMapper {

static const int IN_SYNC_HASH = HashingUtils::HashString("IN_SYNC");
static const int OUT_OF_SYNC_HASH = HashingUtils::HashString("OUT_OF_SYNC");
static const int NOT_APPLICABLE_HASH = HashingUtils::HashString("NOT_APPLICABLE");

SynchronizationStatus GetSynchronizationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_SYNC_HASH) {
    return SynchronizationStatus::IN_SYNC;
  } else if (hashCode == OUT_OF_SYNC_HASH) {
    return SynchronizationStatus::OUT_OF_SYNC;
  } else if (hashCode == NOT_APPLICABLE_HASH) {
    return SynchronizationStatus::NOT_APPLICABLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SynchronizationStatus>(hashCode);
  }

  return SynchronizationStatus::NOT_SET;
}

Aws::String GetNameForSynchronizationStatus(SynchronizationStatus enumValue) {
  switch (enumValue) {
    case SynchronizationStatus::NOT_SET:
      return {};
    case SynchronizationStatus::IN_SYNC:
      return "IN_SYNC";
    case SynchronizationStatus::OUT_OF_SYNC:
      return "OUT_OF_SYNC";
    case SynchronizationStatus::NOT_APPLICABLE:
      return "NOT_APPLICABLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SynchronizationStatusMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
