/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/AvailabilityZoneBalanceEnforcementMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace AvailabilityZoneBalanceEnforcementModeMapper {

static const int PERMISSIVE_HASH = HashingUtils::HashString("PERMISSIVE");

AvailabilityZoneBalanceEnforcementMode GetAvailabilityZoneBalanceEnforcementModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PERMISSIVE_HASH) {
    return AvailabilityZoneBalanceEnforcementMode::PERMISSIVE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AvailabilityZoneBalanceEnforcementMode>(hashCode);
  }

  return AvailabilityZoneBalanceEnforcementMode::NOT_SET;
}

Aws::String GetNameForAvailabilityZoneBalanceEnforcementMode(AvailabilityZoneBalanceEnforcementMode enumValue) {
  switch (enumValue) {
    case AvailabilityZoneBalanceEnforcementMode::NOT_SET:
      return {};
    case AvailabilityZoneBalanceEnforcementMode::PERMISSIVE:
      return "PERMISSIVE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AvailabilityZoneBalanceEnforcementModeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
