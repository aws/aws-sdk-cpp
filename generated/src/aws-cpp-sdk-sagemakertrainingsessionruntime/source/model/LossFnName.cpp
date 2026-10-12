/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemakertrainingsessionruntime/model/LossFnName.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMakerTrainingSessionRuntime {
namespace Model {
namespace LossFnNameMapper {

static const int cross_entropy_HASH = HashingUtils::HashString("cross_entropy");
static const int importance_sampling_HASH = HashingUtils::HashString("importance_sampling");
static const int ppo_HASH = HashingUtils::HashString("ppo");
static const int cispo_HASH = HashingUtils::HashString("cispo");

LossFnName GetLossFnNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == cross_entropy_HASH) {
    return LossFnName::cross_entropy;
  } else if (hashCode == importance_sampling_HASH) {
    return LossFnName::importance_sampling;
  } else if (hashCode == ppo_HASH) {
    return LossFnName::ppo;
  } else if (hashCode == cispo_HASH) {
    return LossFnName::cispo;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LossFnName>(hashCode);
  }

  return LossFnName::NOT_SET;
}

Aws::String GetNameForLossFnName(LossFnName enumValue) {
  switch (enumValue) {
    case LossFnName::NOT_SET:
      return {};
    case LossFnName::cross_entropy:
      return "cross_entropy";
    case LossFnName::importance_sampling:
      return "importance_sampling";
    case LossFnName::ppo:
      return "ppo";
    case LossFnName::cispo:
      return "cispo";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LossFnNameMapper
}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
