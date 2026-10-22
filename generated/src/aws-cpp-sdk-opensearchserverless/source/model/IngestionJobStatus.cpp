/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearchserverless/model/IngestionJobStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchServerless {
namespace Model {
namespace IngestionJobStatusMapper {

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");
static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int CANCEL_FAILED_HASH = HashingUtils::HashString("CANCEL_FAILED");

IngestionJobStatus GetIngestionJobStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATING_HASH) {
    return IngestionJobStatus::CREATING;
  } else if (hashCode == ACTIVE_HASH) {
    return IngestionJobStatus::ACTIVE;
  } else if (hashCode == COMPLETED_HASH) {
    return IngestionJobStatus::COMPLETED;
  } else if (hashCode == CANCELLING_HASH) {
    return IngestionJobStatus::CANCELLING;
  } else if (hashCode == CANCELLED_HASH) {
    return IngestionJobStatus::CANCELLED;
  } else if (hashCode == FAILED_HASH) {
    return IngestionJobStatus::FAILED;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return IngestionJobStatus::CREATE_FAILED;
  } else if (hashCode == CANCEL_FAILED_HASH) {
    return IngestionJobStatus::CANCEL_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IngestionJobStatus>(hashCode);
  }

  return IngestionJobStatus::NOT_SET;
}

Aws::String GetNameForIngestionJobStatus(IngestionJobStatus enumValue) {
  switch (enumValue) {
    case IngestionJobStatus::NOT_SET:
      return {};
    case IngestionJobStatus::CREATING:
      return "CREATING";
    case IngestionJobStatus::ACTIVE:
      return "ACTIVE";
    case IngestionJobStatus::COMPLETED:
      return "COMPLETED";
    case IngestionJobStatus::CANCELLING:
      return "CANCELLING";
    case IngestionJobStatus::CANCELLED:
      return "CANCELLED";
    case IngestionJobStatus::FAILED:
      return "FAILED";
    case IngestionJobStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case IngestionJobStatus::CANCEL_FAILED:
      return "CANCEL_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IngestionJobStatusMapper
}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
