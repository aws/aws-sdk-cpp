/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/NetworkMigrationDeployedStackStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace NetworkMigrationDeployedStackStatusMapper {

static const int CREATE_COMPLETE_HASH = HashingUtils::HashString("CREATE_COMPLETE");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int CREATE_STARTED_HASH = HashingUtils::HashString("CREATE_STARTED");
static const int DELETE_COMPLETE_HASH = HashingUtils::HashString("DELETE_COMPLETE");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
static const int DELETE_STARTED_HASH = HashingUtils::HashString("DELETE_STARTED");

NetworkMigrationDeployedStackStatus GetNetworkMigrationDeployedStackStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATE_COMPLETE_HASH) {
    return NetworkMigrationDeployedStackStatus::CREATE_COMPLETE;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return NetworkMigrationDeployedStackStatus::CREATE_FAILED;
  } else if (hashCode == CREATE_STARTED_HASH) {
    return NetworkMigrationDeployedStackStatus::CREATE_STARTED;
  } else if (hashCode == DELETE_COMPLETE_HASH) {
    return NetworkMigrationDeployedStackStatus::DELETE_COMPLETE;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return NetworkMigrationDeployedStackStatus::DELETE_FAILED;
  } else if (hashCode == DELETE_STARTED_HASH) {
    return NetworkMigrationDeployedStackStatus::DELETE_STARTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NetworkMigrationDeployedStackStatus>(hashCode);
  }

  return NetworkMigrationDeployedStackStatus::NOT_SET;
}

Aws::String GetNameForNetworkMigrationDeployedStackStatus(NetworkMigrationDeployedStackStatus enumValue) {
  switch (enumValue) {
    case NetworkMigrationDeployedStackStatus::NOT_SET:
      return {};
    case NetworkMigrationDeployedStackStatus::CREATE_COMPLETE:
      return "CREATE_COMPLETE";
    case NetworkMigrationDeployedStackStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case NetworkMigrationDeployedStackStatus::CREATE_STARTED:
      return "CREATE_STARTED";
    case NetworkMigrationDeployedStackStatus::DELETE_COMPLETE:
      return "DELETE_COMPLETE";
    case NetworkMigrationDeployedStackStatus::DELETE_FAILED:
      return "DELETE_FAILED";
    case NetworkMigrationDeployedStackStatus::DELETE_STARTED:
      return "DELETE_STARTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NetworkMigrationDeployedStackStatusMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
