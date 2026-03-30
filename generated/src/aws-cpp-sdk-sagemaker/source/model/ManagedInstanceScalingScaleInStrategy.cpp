/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ManagedInstanceScalingScaleInStrategy.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ManagedInstanceScalingScaleInStrategyMapper {

static const int IDLE_RELEASE_HASH = HashingUtils::HashString("IDLE_RELEASE");
static const int CONSOLIDATION_HASH = HashingUtils::HashString("CONSOLIDATION");

ManagedInstanceScalingScaleInStrategy GetManagedInstanceScalingScaleInStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IDLE_RELEASE_HASH) {
    return ManagedInstanceScalingScaleInStrategy::IDLE_RELEASE;
  } else if (hashCode == CONSOLIDATION_HASH) {
    return ManagedInstanceScalingScaleInStrategy::CONSOLIDATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ManagedInstanceScalingScaleInStrategy>(hashCode);
  }

  return ManagedInstanceScalingScaleInStrategy::NOT_SET;
}

Aws::String GetNameForManagedInstanceScalingScaleInStrategy(ManagedInstanceScalingScaleInStrategy enumValue) {
  switch (enumValue) {
    case ManagedInstanceScalingScaleInStrategy::NOT_SET:
      return {};
    case ManagedInstanceScalingScaleInStrategy::IDLE_RELEASE:
      return "IDLE_RELEASE";
    case ManagedInstanceScalingScaleInStrategy::CONSOLIDATION:
      return "CONSOLIDATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ManagedInstanceScalingScaleInStrategyMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
