/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/SageMakerAlgorithmRecommendation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

SageMakerAlgorithmRecommendation::SageMakerAlgorithmRecommendation(JsonView jsonValue) { *this = jsonValue; }

SageMakerAlgorithmRecommendation& SageMakerAlgorithmRecommendation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("recommendedBatchTransformInstanceType")) {
    m_recommendedBatchTransformInstanceType = jsonValue.GetString("recommendedBatchTransformInstanceType");
    m_recommendedBatchTransformInstanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recommendedRealtimeInferenceInstanceType")) {
    m_recommendedRealtimeInferenceInstanceType = jsonValue.GetString("recommendedRealtimeInferenceInstanceType");
    m_recommendedRealtimeInferenceInstanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recommendedTrainingInstanceType")) {
    m_recommendedTrainingInstanceType = jsonValue.GetString("recommendedTrainingInstanceType");
    m_recommendedTrainingInstanceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue SageMakerAlgorithmRecommendation::Jsonize() const {
  JsonValue payload;

  if (m_recommendedBatchTransformInstanceTypeHasBeenSet) {
    payload.WithString("recommendedBatchTransformInstanceType", m_recommendedBatchTransformInstanceType);
  }

  if (m_recommendedRealtimeInferenceInstanceTypeHasBeenSet) {
    payload.WithString("recommendedRealtimeInferenceInstanceType", m_recommendedRealtimeInferenceInstanceType);
  }

  if (m_recommendedTrainingInstanceTypeHasBeenSet) {
    payload.WithString("recommendedTrainingInstanceType", m_recommendedTrainingInstanceType);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
