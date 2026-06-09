/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resiliencehubv2/model/PolicyComponent.h>

using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {
namespace PolicyComponentMapper {

static const int AVAILABILITY_SLO_HASH = HashingUtils::HashString("AVAILABILITY_SLO");
static const int MULTI_AZ_DISASTER_RECOVERY_HASH = HashingUtils::HashString("MULTI_AZ_DISASTER_RECOVERY");
static const int MULTI_REGION_DISASTER_RECOVERY_HASH = HashingUtils::HashString("MULTI_REGION_DISASTER_RECOVERY");
static const int DATA_RECOVERY_HASH = HashingUtils::HashString("DATA_RECOVERY");

PolicyComponent GetPolicyComponentForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AVAILABILITY_SLO_HASH) {
    return PolicyComponent::AVAILABILITY_SLO;
  } else if (hashCode == MULTI_AZ_DISASTER_RECOVERY_HASH) {
    return PolicyComponent::MULTI_AZ_DISASTER_RECOVERY;
  } else if (hashCode == MULTI_REGION_DISASTER_RECOVERY_HASH) {
    return PolicyComponent::MULTI_REGION_DISASTER_RECOVERY;
  } else if (hashCode == DATA_RECOVERY_HASH) {
    return PolicyComponent::DATA_RECOVERY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PolicyComponent>(hashCode);
  }

  return PolicyComponent::NOT_SET;
}

Aws::String GetNameForPolicyComponent(PolicyComponent enumValue) {
  switch (enumValue) {
    case PolicyComponent::NOT_SET:
      return {};
    case PolicyComponent::AVAILABILITY_SLO:
      return "AVAILABILITY_SLO";
    case PolicyComponent::MULTI_AZ_DISASTER_RECOVERY:
      return "MULTI_AZ_DISASTER_RECOVERY";
    case PolicyComponent::MULTI_REGION_DISASTER_RECOVERY:
      return "MULTI_REGION_DISASTER_RECOVERY";
    case PolicyComponent::DATA_RECOVERY:
      return "DATA_RECOVERY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PolicyComponentMapper
}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
