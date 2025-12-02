/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3tables/model/ReplicationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {
namespace ReplicationStatusMapper {

static const int pending_HASH = HashingUtils::HashString("pending");
static const int completed_HASH = HashingUtils::HashString("completed");
static const int failed_HASH = HashingUtils::HashString("failed");

ReplicationStatus GetReplicationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == pending_HASH) {
    return ReplicationStatus::pending;
  } else if (hashCode == completed_HASH) {
    return ReplicationStatus::completed;
  } else if (hashCode == failed_HASH) {
    return ReplicationStatus::failed;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReplicationStatus>(hashCode);
  }

  return ReplicationStatus::NOT_SET;
}

Aws::String GetNameForReplicationStatus(ReplicationStatus enumValue) {
  switch (enumValue) {
    case ReplicationStatus::NOT_SET:
      return {};
    case ReplicationStatus::pending:
      return "pending";
    case ReplicationStatus::completed:
      return "completed";
    case ReplicationStatus::failed:
      return "failed";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReplicationStatusMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
