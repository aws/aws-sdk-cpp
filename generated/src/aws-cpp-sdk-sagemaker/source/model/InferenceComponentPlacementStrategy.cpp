/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/InferenceComponentPlacementStrategy.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace InferenceComponentPlacementStrategyMapper {

static const int SPREAD_HASH = HashingUtils::HashString("SPREAD");
static const int BINPACK_HASH = HashingUtils::HashString("BINPACK");

InferenceComponentPlacementStrategy GetInferenceComponentPlacementStrategyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SPREAD_HASH) {
    return InferenceComponentPlacementStrategy::SPREAD;
  } else if (hashCode == BINPACK_HASH) {
    return InferenceComponentPlacementStrategy::BINPACK;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InferenceComponentPlacementStrategy>(hashCode);
  }

  return InferenceComponentPlacementStrategy::NOT_SET;
}

Aws::String GetNameForInferenceComponentPlacementStrategy(InferenceComponentPlacementStrategy enumValue) {
  switch (enumValue) {
    case InferenceComponentPlacementStrategy::NOT_SET:
      return {};
    case InferenceComponentPlacementStrategy::SPREAD:
      return "SPREAD";
    case InferenceComponentPlacementStrategy::BINPACK:
      return "BINPACK";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InferenceComponentPlacementStrategyMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
