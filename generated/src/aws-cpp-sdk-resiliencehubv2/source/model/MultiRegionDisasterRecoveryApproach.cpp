/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/MultiRegionDisasterRecoveryApproach.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace MultiRegionDisasterRecoveryApproachMapper {

static const int ACTIVE_ACTIVE_HASH = HashingUtils::HashString("ACTIVE_ACTIVE");
static const int HOT_STANDBY_HASH = HashingUtils::HashString("HOT_STANDBY");
static const int WARM_STANDBY_HASH = HashingUtils::HashString("WARM_STANDBY");
static const int PILOT_LIGHT_HASH = HashingUtils::HashString("PILOT_LIGHT");
static const int BACKUP_AND_RESTORE_HASH = HashingUtils::HashString("BACKUP_AND_RESTORE");

MultiRegionDisasterRecoveryApproach GetMultiRegionDisasterRecoveryApproachForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_ACTIVE_HASH) {
    return MultiRegionDisasterRecoveryApproach::ACTIVE_ACTIVE;
  } else if (hashCode == HOT_STANDBY_HASH) {
    return MultiRegionDisasterRecoveryApproach::HOT_STANDBY;
  } else if (hashCode == WARM_STANDBY_HASH) {
    return MultiRegionDisasterRecoveryApproach::WARM_STANDBY;
  } else if (hashCode == PILOT_LIGHT_HASH) {
    return MultiRegionDisasterRecoveryApproach::PILOT_LIGHT;
  } else if (hashCode == BACKUP_AND_RESTORE_HASH) {
    return MultiRegionDisasterRecoveryApproach::BACKUP_AND_RESTORE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MultiRegionDisasterRecoveryApproach>(hashCode);
  }

  return MultiRegionDisasterRecoveryApproach::NOT_SET;
}

Aws::String GetNameForMultiRegionDisasterRecoveryApproach(MultiRegionDisasterRecoveryApproach enumValue) {
  switch (enumValue) {
    case MultiRegionDisasterRecoveryApproach::NOT_SET:
      return {};
    case MultiRegionDisasterRecoveryApproach::ACTIVE_ACTIVE:
      return "ACTIVE_ACTIVE";
    case MultiRegionDisasterRecoveryApproach::HOT_STANDBY:
      return "HOT_STANDBY";
    case MultiRegionDisasterRecoveryApproach::WARM_STANDBY:
      return "WARM_STANDBY";
    case MultiRegionDisasterRecoveryApproach::PILOT_LIGHT:
      return "PILOT_LIGHT";
    case MultiRegionDisasterRecoveryApproach::BACKUP_AND_RESTORE:
      return "BACKUP_AND_RESTORE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MultiRegionDisasterRecoveryApproachMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
