/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/mgn/model/NetworkMigrationAnalysisResultStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {
namespace NetworkMigrationAnalysisResultStatusMapper {

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int STARTED_HASH = HashingUtils::HashString("STARTED");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

NetworkMigrationAnalysisResultStatus GetNetworkMigrationAnalysisResultStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PENDING_HASH) {
    return NetworkMigrationAnalysisResultStatus::PENDING;
  } else if (hashCode == STARTED_HASH) {
    return NetworkMigrationAnalysisResultStatus::STARTED;
  } else if (hashCode == SUCCEEDED_HASH) {
    return NetworkMigrationAnalysisResultStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return NetworkMigrationAnalysisResultStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NetworkMigrationAnalysisResultStatus>(hashCode);
  }

  return NetworkMigrationAnalysisResultStatus::NOT_SET;
}

Aws::String GetNameForNetworkMigrationAnalysisResultStatus(NetworkMigrationAnalysisResultStatus enumValue) {
  switch (enumValue) {
    case NetworkMigrationAnalysisResultStatus::NOT_SET:
      return {};
    case NetworkMigrationAnalysisResultStatus::PENDING:
      return "PENDING";
    case NetworkMigrationAnalysisResultStatus::STARTED:
      return "STARTED";
    case NetworkMigrationAnalysisResultStatus::SUCCEEDED:
      return "SUCCEEDED";
    case NetworkMigrationAnalysisResultStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NetworkMigrationAnalysisResultStatusMapper
}  // namespace Model
}  // namespace mgn
}  // namespace Aws
