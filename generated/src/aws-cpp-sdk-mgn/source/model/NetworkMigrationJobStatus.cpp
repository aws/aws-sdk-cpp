/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/NetworkMigrationJobStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace NetworkMigrationJobStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int STARTED_HASH = HashingUtils::HashString("STARTED");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

NetworkMigrationJobStatus GetNetworkMigrationJobStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return NetworkMigrationJobStatus::PENDING;
  } else if (hashCode == STARTED_HASH) {
    return NetworkMigrationJobStatus::STARTED;
  } else if (hashCode == SUCCEEDED_HASH) {
    return NetworkMigrationJobStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return NetworkMigrationJobStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NetworkMigrationJobStatus>(hashCode);
  }

  return NetworkMigrationJobStatus::NOT_SET;
}

Aws::String GetNameForNetworkMigrationJobStatus(NetworkMigrationJobStatus enumValue) {
  switch (enumValue) {
    case NetworkMigrationJobStatus::NOT_SET:
      return {};
    case NetworkMigrationJobStatus::PENDING:
      return "PENDING";
    case NetworkMigrationJobStatus::STARTED:
      return "STARTED";
    case NetworkMigrationJobStatus::SUCCEEDED:
      return "SUCCEEDED";
    case NetworkMigrationJobStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NetworkMigrationJobStatusMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
