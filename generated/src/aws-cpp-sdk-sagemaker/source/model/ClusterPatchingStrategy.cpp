/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ClusterPatchingStrategy.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ClusterPatchingStrategyMapper {

static const int WhenIdle_HASH = HashingUtils::HashString("WhenIdle");
static const int WhenAllIdle_HASH = HashingUtils::HashString("WhenAllIdle");

ClusterPatchingStrategy GetClusterPatchingStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == WhenIdle_HASH) {
    return ClusterPatchingStrategy::WhenIdle;
  } else if (hashCode == WhenAllIdle_HASH) {
    return ClusterPatchingStrategy::WhenAllIdle;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClusterPatchingStrategy>(hashCode);
  }

  return ClusterPatchingStrategy::NOT_SET;
}

Aws::String GetNameForClusterPatchingStrategy(ClusterPatchingStrategy enumValue) {
  switch (enumValue) {
    case ClusterPatchingStrategy::NOT_SET:
      return {};
    case ClusterPatchingStrategy::WhenIdle:
      return "WhenIdle";
    case ClusterPatchingStrategy::WhenAllIdle:
      return "WhenAllIdle";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClusterPatchingStrategyMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
