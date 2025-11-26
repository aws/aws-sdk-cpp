/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/route53/model/AcceleratedRecoveryStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Route53 {
namespace Model {
namespace AcceleratedRecoveryStatusMapper {

static const int ENABLING_HASH = HashingUtils::HashString("ENABLING");
static const int ENABLE_FAILED_HASH = HashingUtils::HashString("ENABLE_FAILED");
static const int ENABLING_HOSTED_ZONE_LOCKED_HASH = HashingUtils::HashString("ENABLING_HOSTED_ZONE_LOCKED");
static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLING_HASH = HashingUtils::HashString("DISABLING");
static const int DISABLE_FAILED_HASH = HashingUtils::HashString("DISABLE_FAILED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int DISABLING_HOSTED_ZONE_LOCKED_HASH = HashingUtils::HashString("DISABLING_HOSTED_ZONE_LOCKED");

AcceleratedRecoveryStatus GetAcceleratedRecoveryStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLING_HASH) {
    return AcceleratedRecoveryStatus::ENABLING;
  } else if (hashCode == ENABLE_FAILED_HASH) {
    return AcceleratedRecoveryStatus::ENABLE_FAILED;
  } else if (hashCode == ENABLING_HOSTED_ZONE_LOCKED_HASH) {
    return AcceleratedRecoveryStatus::ENABLING_HOSTED_ZONE_LOCKED;
  } else if (hashCode == ENABLED_HASH) {
    return AcceleratedRecoveryStatus::ENABLED;
  } else if (hashCode == DISABLING_HASH) {
    return AcceleratedRecoveryStatus::DISABLING;
  } else if (hashCode == DISABLE_FAILED_HASH) {
    return AcceleratedRecoveryStatus::DISABLE_FAILED;
  } else if (hashCode == DISABLED_HASH) {
    return AcceleratedRecoveryStatus::DISABLED;
  } else if (hashCode == DISABLING_HOSTED_ZONE_LOCKED_HASH) {
    return AcceleratedRecoveryStatus::DISABLING_HOSTED_ZONE_LOCKED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AcceleratedRecoveryStatus>(hashCode);
  }

  return AcceleratedRecoveryStatus::NOT_SET;
}

Aws::String GetNameForAcceleratedRecoveryStatus(AcceleratedRecoveryStatus enumValue) {
  switch (enumValue) {
    case AcceleratedRecoveryStatus::NOT_SET:
      return {};
    case AcceleratedRecoveryStatus::ENABLING:
      return "ENABLING";
    case AcceleratedRecoveryStatus::ENABLE_FAILED:
      return "ENABLE_FAILED";
    case AcceleratedRecoveryStatus::ENABLING_HOSTED_ZONE_LOCKED:
      return "ENABLING_HOSTED_ZONE_LOCKED";
    case AcceleratedRecoveryStatus::ENABLED:
      return "ENABLED";
    case AcceleratedRecoveryStatus::DISABLING:
      return "DISABLING";
    case AcceleratedRecoveryStatus::DISABLE_FAILED:
      return "DISABLE_FAILED";
    case AcceleratedRecoveryStatus::DISABLED:
      return "DISABLED";
    case AcceleratedRecoveryStatus::DISABLING_HOSTED_ZONE_LOCKED:
      return "DISABLING_HOSTED_ZONE_LOCKED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AcceleratedRecoveryStatusMapper
}  // namespace Model
}  // namespace Route53
}  // namespace Aws
