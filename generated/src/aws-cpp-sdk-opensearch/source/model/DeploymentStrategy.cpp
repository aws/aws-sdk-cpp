/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/DeploymentStrategy.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace DeploymentStrategyMapper {

static const int Default_HASH = HashingUtils::HashString("Default");
static const int CapacityOptimized_HASH = HashingUtils::HashString("CapacityOptimized");

DeploymentStrategy GetDeploymentStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Default_HASH) {
    return DeploymentStrategy::Default;
  } else if (hashCode == CapacityOptimized_HASH) {
    return DeploymentStrategy::CapacityOptimized;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeploymentStrategy>(hashCode);
  }

  return DeploymentStrategy::NOT_SET;
}

Aws::String GetNameForDeploymentStrategy(DeploymentStrategy enumValue) {
  switch (enumValue) {
    case DeploymentStrategy::NOT_SET:
      return {};
    case DeploymentStrategy::Default:
      return "Default";
    case DeploymentStrategy::CapacityOptimized:
      return "CapacityOptimized";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeploymentStrategyMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
