/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53/model/HealthCheckSourceStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53 {
namespace Model {
namespace HealthCheckSourceStatusMapper {

static const int CREATE_PENDING_HASH = HashingUtils::HashString("CREATE_PENDING");
static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
static const int CREATE_COMPLETED_HASH = HashingUtils::HashString("CREATE_COMPLETED");
static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
static const int DELETE_PENDING_HASH = HashingUtils::HashString("DELETE_PENDING");
static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
static const int DELETE_COMPLETED_HASH = HashingUtils::HashString("DELETE_COMPLETED");
static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");

HealthCheckSourceStatus GetHealthCheckSourceStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CREATE_PENDING_HASH) {
    return HealthCheckSourceStatus::CREATE_PENDING;
  } else if (hashCode == CREATE_IN_PROGRESS_HASH) {
    return HealthCheckSourceStatus::CREATE_IN_PROGRESS;
  } else if (hashCode == CREATE_COMPLETED_HASH) {
    return HealthCheckSourceStatus::CREATE_COMPLETED;
  } else if (hashCode == CREATE_FAILED_HASH) {
    return HealthCheckSourceStatus::CREATE_FAILED;
  } else if (hashCode == DELETE_PENDING_HASH) {
    return HealthCheckSourceStatus::DELETE_PENDING;
  } else if (hashCode == DELETE_IN_PROGRESS_HASH) {
    return HealthCheckSourceStatus::DELETE_IN_PROGRESS;
  } else if (hashCode == DELETE_COMPLETED_HASH) {
    return HealthCheckSourceStatus::DELETE_COMPLETED;
  } else if (hashCode == DELETE_FAILED_HASH) {
    return HealthCheckSourceStatus::DELETE_FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HealthCheckSourceStatus>(hashCode);
  }

  return HealthCheckSourceStatus::NOT_SET;
}

Aws::String GetNameForHealthCheckSourceStatus(HealthCheckSourceStatus enumValue) {
  switch (enumValue) {
    case HealthCheckSourceStatus::NOT_SET:
      return {};
    case HealthCheckSourceStatus::CREATE_PENDING:
      return "CREATE_PENDING";
    case HealthCheckSourceStatus::CREATE_IN_PROGRESS:
      return "CREATE_IN_PROGRESS";
    case HealthCheckSourceStatus::CREATE_COMPLETED:
      return "CREATE_COMPLETED";
    case HealthCheckSourceStatus::CREATE_FAILED:
      return "CREATE_FAILED";
    case HealthCheckSourceStatus::DELETE_PENDING:
      return "DELETE_PENDING";
    case HealthCheckSourceStatus::DELETE_IN_PROGRESS:
      return "DELETE_IN_PROGRESS";
    case HealthCheckSourceStatus::DELETE_COMPLETED:
      return "DELETE_COMPLETED";
    case HealthCheckSourceStatus::DELETE_FAILED:
      return "DELETE_FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HealthCheckSourceStatusMapper
}  // namespace Model
}  // namespace Route53
}  // namespace Aws
