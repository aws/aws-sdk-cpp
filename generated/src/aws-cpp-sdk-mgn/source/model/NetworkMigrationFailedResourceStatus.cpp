/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/NetworkMigrationFailedResourceStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace NetworkMigrationFailedResourceStatusMapper {

static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");

NetworkMigrationFailedResourceStatus GetNetworkMigrationFailedResourceStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATE_FAILED_HASH) {
    return NetworkMigrationFailedResourceStatus::CREATE_FAILED;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return NetworkMigrationFailedResourceStatus::DELETE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NetworkMigrationFailedResourceStatus>(hashCode);
  }

  return NetworkMigrationFailedResourceStatus::NOT_SET;
}

Aws::String GetNameForNetworkMigrationFailedResourceStatus(NetworkMigrationFailedResourceStatus enumValue) {
  switch (enumValue) {
    case NetworkMigrationFailedResourceStatus::NOT_SET:
      return {};
    case NetworkMigrationFailedResourceStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case NetworkMigrationFailedResourceStatus::DELETE_FAILED:
      return "DELETE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NetworkMigrationFailedResourceStatusMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
