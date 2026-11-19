/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-deployment/model/DeploymentConfigurationJobStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDeployment {
namespace Model {
namespace DeploymentConfigurationJobStatusMapper {

static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

DeploymentConfigurationJobStatus GetDeploymentConfigurationJobStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_PROGRESS_HASH) {
    return DeploymentConfigurationJobStatus::IN_PROGRESS;
  } else if (hashCode == SUCCEEDED_HASH) {
    return DeploymentConfigurationJobStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return DeploymentConfigurationJobStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeploymentConfigurationJobStatus>(hashCode);
  }

  return DeploymentConfigurationJobStatus::NOT_SET;
}

Aws::String GetNameForDeploymentConfigurationJobStatus(DeploymentConfigurationJobStatus enumValue) {
  switch (enumValue) {
    case DeploymentConfigurationJobStatus::NOT_SET:
      return {};
    case DeploymentConfigurationJobStatus::IN_PROGRESS:
      return "IN_PROGRESS";
    case DeploymentConfigurationJobStatus::SUCCEEDED:
      return "SUCCEEDED";
    case DeploymentConfigurationJobStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeploymentConfigurationJobStatusMapper
}  // namespace Model
}  // namespace MarketplaceDeployment
}  // namespace Aws
