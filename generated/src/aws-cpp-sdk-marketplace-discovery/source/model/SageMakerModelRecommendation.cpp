/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/SageMakerModelRecommendation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

SageMakerModelRecommendation::SageMakerModelRecommendation(JsonView jsonValue) { *this = jsonValue; }

SageMakerModelRecommendation& SageMakerModelRecommendation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("recommendedBatchTransformInstanceType")) {
    m_recommendedBatchTransformInstanceType = jsonValue.GetString("recommendedBatchTransformInstanceType");
    m_recommendedBatchTransformInstanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recommendedRealtimeInferenceInstanceType")) {
    m_recommendedRealtimeInferenceInstanceType = jsonValue.GetString("recommendedRealtimeInferenceInstanceType");
    m_recommendedRealtimeInferenceInstanceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue SageMakerModelRecommendation::Jsonize() const {
  JsonValue payload;

  if (m_recommendedBatchTransformInstanceTypeHasBeenSet) {
    payload.WithString("recommendedBatchTransformInstanceType", m_recommendedBatchTransformInstanceType);
  }

  if (m_recommendedRealtimeInferenceInstanceTypeHasBeenSet) {
    payload.WithString("recommendedRealtimeInferenceInstanceType", m_recommendedRealtimeInferenceInstanceType);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
