/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/AIRecommendationInferenceFramework.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace AIRecommendationInferenceFrameworkMapper {

static const int LMI_HASH = HashingUtils::HashString("LMI");
static const int VLLM_HASH = HashingUtils::HashString("VLLM");

AIRecommendationInferenceFramework GetAIRecommendationInferenceFrameworkForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LMI_HASH) {
    return AIRecommendationInferenceFramework::LMI;
  } else if (hashCode == VLLM_HASH) {
    return AIRecommendationInferenceFramework::VLLM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AIRecommendationInferenceFramework>(hashCode);
  }

  return AIRecommendationInferenceFramework::NOT_SET;
}

Aws::String GetNameForAIRecommendationInferenceFramework(AIRecommendationInferenceFramework enumValue) {
  switch (enumValue) {
    case AIRecommendationInferenceFramework::NOT_SET:
      return {};
    case AIRecommendationInferenceFramework::LMI:
      return "LMI";
    case AIRecommendationInferenceFramework::VLLM:
      return "VLLM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AIRecommendationInferenceFrameworkMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
