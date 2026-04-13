/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-discovery/model/DeployedOnAwsStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {
namespace DeployedOnAwsStatusMapper {

static const int DEPLOYED_HASH = HashingUtils::HashString("DEPLOYED");
static const int NOT_DEPLOYED_HASH = HashingUtils::HashString("NOT_DEPLOYED");
static const int NOT_APPLICABLE_HASH = HashingUtils::HashString("NOT_APPLICABLE");

DeployedOnAwsStatus GetDeployedOnAwsStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DEPLOYED_HASH) {
    return DeployedOnAwsStatus::DEPLOYED;
  } else if (hashCode == NOT_DEPLOYED_HASH) {
    return DeployedOnAwsStatus::NOT_DEPLOYED;
  } else if (hashCode == NOT_APPLICABLE_HASH) {
    return DeployedOnAwsStatus::NOT_APPLICABLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeployedOnAwsStatus>(hashCode);
  }

  return DeployedOnAwsStatus::NOT_SET;
}

Aws::String GetNameForDeployedOnAwsStatus(DeployedOnAwsStatus enumValue) {
  switch (enumValue) {
    case DeployedOnAwsStatus::NOT_SET:
      return {};
    case DeployedOnAwsStatus::DEPLOYED:
      return "DEPLOYED";
    case DeployedOnAwsStatus::NOT_DEPLOYED:
      return "NOT_DEPLOYED";
    case DeployedOnAwsStatus::NOT_APPLICABLE:
      return "NOT_APPLICABLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeployedOnAwsStatusMapper
}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
