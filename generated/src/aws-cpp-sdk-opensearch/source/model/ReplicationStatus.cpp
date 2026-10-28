/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/ReplicationStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace ReplicationStatusMapper {

static const int PENDING_SETUP_HASH = HashingUtils::HashString("PENDING_SETUP");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int SWITCHING_OVER_HASH = HashingUtils::HashString("SWITCHING_OVER");
static const int FAILING_OVER_HASH = HashingUtils::HashString("FAILING_OVER");
static const int PENDING_REMOVAL_HASH = HashingUtils::HashString("PENDING_REMOVAL");
static const int DETACHED_HASH = HashingUtils::HashString("DETACHED");
static const int EJECTED_HASH = HashingUtils::HashString("EJECTED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

ReplicationStatus GetReplicationStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_SETUP_HASH) {
    return ReplicationStatus::PENDING_SETUP;
  } else if (hashCode == ACTIVE_HASH) {
    return ReplicationStatus::ACTIVE;
  } else if (hashCode == SWITCHING_OVER_HASH) {
    return ReplicationStatus::SWITCHING_OVER;
  } else if (hashCode == FAILING_OVER_HASH) {
    return ReplicationStatus::FAILING_OVER;
  } else if (hashCode == PENDING_REMOVAL_HASH) {
    return ReplicationStatus::PENDING_REMOVAL;
  } else if (hashCode == DETACHED_HASH) {
    return ReplicationStatus::DETACHED;
  } else if (hashCode == EJECTED_HASH) {
    return ReplicationStatus::EJECTED;
  } else if (hashCode == FAILED_HASH) {
    return ReplicationStatus::FAILED;
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
    case ReplicationStatus::PENDING_SETUP:
      return "PENDING_SETUP";
    case ReplicationStatus::ACTIVE:
      return "ACTIVE";
    case ReplicationStatus::SWITCHING_OVER:
      return "SWITCHING_OVER";
    case ReplicationStatus::FAILING_OVER:
      return "FAILING_OVER";
    case ReplicationStatus::PENDING_REMOVAL:
      return "PENDING_REMOVAL";
    case ReplicationStatus::DETACHED:
      return "DETACHED";
    case ReplicationStatus::EJECTED:
      return "EJECTED";
    case ReplicationStatus::FAILED:
      return "FAILED";
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
}  // namespace OpenSearchService
}  // namespace Aws
