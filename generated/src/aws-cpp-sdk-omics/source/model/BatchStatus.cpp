/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/omics/model/BatchStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Omics {
namespace Model {
namespace BatchStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int SUBMITTING_HASH = HashingUtils::HashString("SUBMITTING");
static const int INPROGRESS_HASH = HashingUtils::HashString("INPROGRESS");
static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int PROCESSED_HASH = HashingUtils::HashString("PROCESSED");
static const int RUNS_DELETING_HASH = HashingUtils::HashString("RUNS_DELETING");
static const int RUNS_DELETED_HASH = HashingUtils::HashString("RUNS_DELETED");

BatchStatus GetBatchStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return BatchStatus::PENDING;
  } else if (hashCode == SUBMITTING_HASH) {
    return BatchStatus::SUBMITTING;
  } else if (hashCode == INPROGRESS_HASH) {
    return BatchStatus::INPROGRESS;
  } else if (hashCode == STOPPING_HASH) {
    return BatchStatus::STOPPING;
  } else if (hashCode == CANCELLED_HASH) {
    return BatchStatus::CANCELLED;
  } else if (hashCode == FAILED_HASH) {
    return BatchStatus::FAILED;
  } else if (hashCode == PROCESSED_HASH) {
    return BatchStatus::PROCESSED;
  } else if (hashCode == RUNS_DELETING_HASH) {
    return BatchStatus::RUNS_DELETING;
  } else if (hashCode == RUNS_DELETED_HASH) {
    return BatchStatus::RUNS_DELETED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BatchStatus>(hashCode);
  }

  return BatchStatus::NOT_SET;
}

Aws::String GetNameForBatchStatus(BatchStatus enumValue) {
  switch (enumValue) {
    case BatchStatus::NOT_SET:
      return {};
    case BatchStatus::PENDING:
      return "PENDING";
    case BatchStatus::SUBMITTING:
      return "SUBMITTING";
    case BatchStatus::INPROGRESS:
      return "INPROGRESS";
    case BatchStatus::STOPPING:
      return "STOPPING";
    case BatchStatus::CANCELLED:
      return "CANCELLED";
    case BatchStatus::FAILED:
      return "FAILED";
    case BatchStatus::PROCESSED:
      return "PROCESSED";
    case BatchStatus::RUNS_DELETING:
      return "RUNS_DELETING";
    case BatchStatus::RUNS_DELETED:
      return "RUNS_DELETED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BatchStatusMapper
}  // namespace Model
}  // namespace Omics
}  // namespace Aws
