/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/AIRecommendationMetric.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace AIRecommendationMetricMapper {

static const int ttft_ms_HASH = HashingUtils::HashString("ttft-ms");
static const int throughput_HASH = HashingUtils::HashString("throughput");
static const int cost_HASH = HashingUtils::HashString("cost");

AIRecommendationMetric GetAIRecommendationMetricForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ttft_ms_HASH) {
    return AIRecommendationMetric::ttft_ms;
  } else if (hashCode == throughput_HASH) {
    return AIRecommendationMetric::throughput;
  } else if (hashCode == cost_HASH) {
    return AIRecommendationMetric::cost;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AIRecommendationMetric>(hashCode);
  }

  return AIRecommendationMetric::NOT_SET;
}

Aws::String GetNameForAIRecommendationMetric(AIRecommendationMetric enumValue) {
  switch (enumValue) {
    case AIRecommendationMetric::NOT_SET:
      return {};
    case AIRecommendationMetric::ttft_ms:
      return "ttft-ms";
    case AIRecommendationMetric::throughput:
      return "throughput";
    case AIRecommendationMetric::cost:
      return "cost";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AIRecommendationMetricMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
