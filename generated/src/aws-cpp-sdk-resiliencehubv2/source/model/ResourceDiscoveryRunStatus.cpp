/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/ResourceDiscoveryRunStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace ResourceDiscoveryRunStatusMapper {

static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");
static const int COMPLETED_WITH_FAILURES_HASH = HashingUtils::HashString("COMPLETED_WITH_FAILURES");
static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");

ResourceDiscoveryRunStatus GetResourceDiscoveryRunStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == RUNNING_HASH) {
    return ResourceDiscoveryRunStatus::RUNNING;
  } else if (hashCode == SUCCEEDED_HASH) {
    return ResourceDiscoveryRunStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return ResourceDiscoveryRunStatus::FAILED;
  } else if (hashCode == COMPLETED_WITH_FAILURES_HASH) {
    return ResourceDiscoveryRunStatus::COMPLETED_WITH_FAILURES;
  } else if (hashCode == NOT_STARTED_HASH) {
    return ResourceDiscoveryRunStatus::NOT_STARTED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceDiscoveryRunStatus>(hashCode);
  }

  return ResourceDiscoveryRunStatus::NOT_SET;
}

Aws::String GetNameForResourceDiscoveryRunStatus(ResourceDiscoveryRunStatus enumValue) {
  switch (enumValue) {
    case ResourceDiscoveryRunStatus::NOT_SET:
      return {};
    case ResourceDiscoveryRunStatus::RUNNING:
      return "RUNNING";
    case ResourceDiscoveryRunStatus::SUCCEEDED:
      return "SUCCEEDED";
    case ResourceDiscoveryRunStatus::FAILED:
      return "FAILED";
    case ResourceDiscoveryRunStatus::COMPLETED_WITH_FAILURES:
      return "COMPLETED_WITH_FAILURES";
    case ResourceDiscoveryRunStatus::NOT_STARTED:
      return "NOT_STARTED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceDiscoveryRunStatusMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
