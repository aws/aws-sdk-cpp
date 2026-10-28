/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/ReplicationRole.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace ReplicationRoleMapper {

static const int PRIMARY_HASH = HashingUtils::HashString("PRIMARY");
static const int SECONDARY_HASH = HashingUtils::HashString("SECONDARY");

ReplicationRole GetReplicationRoleForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PRIMARY_HASH) {
    return ReplicationRole::PRIMARY;
  } else if (hashCode == SECONDARY_HASH) {
    return ReplicationRole::SECONDARY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReplicationRole>(hashCode);
  }

  return ReplicationRole::NOT_SET;
}

Aws::String GetNameForReplicationRole(ReplicationRole enumValue) {
  switch (enumValue) {
    case ReplicationRole::NOT_SET:
      return {};
    case ReplicationRole::PRIMARY:
      return "PRIMARY";
    case ReplicationRole::SECONDARY:
      return "SECONDARY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReplicationRoleMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
