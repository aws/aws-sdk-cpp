/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/AIRecommendationOptimizationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace AIRecommendationOptimizationTypeMapper {

static const int SpeculativeDecoding_HASH = HashingUtils::HashString("SpeculativeDecoding");
static const int KernelTuning_HASH = HashingUtils::HashString("KernelTuning");

AIRecommendationOptimizationType GetAIRecommendationOptimizationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SpeculativeDecoding_HASH) {
    return AIRecommendationOptimizationType::SpeculativeDecoding;
  } else if (hashCode == KernelTuning_HASH) {
    return AIRecommendationOptimizationType::KernelTuning;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AIRecommendationOptimizationType>(hashCode);
  }

  return AIRecommendationOptimizationType::NOT_SET;
}

Aws::String GetNameForAIRecommendationOptimizationType(AIRecommendationOptimizationType enumValue) {
  switch (enumValue) {
    case AIRecommendationOptimizationType::NOT_SET:
      return {};
    case AIRecommendationOptimizationType::SpeculativeDecoding:
      return "SpeculativeDecoding";
    case AIRecommendationOptimizationType::KernelTuning:
      return "KernelTuning";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AIRecommendationOptimizationTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
