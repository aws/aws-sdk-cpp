/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/GlobalInferenceGatewayRoutingWeights.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

GlobalInferenceGatewayRoutingWeights::GlobalInferenceGatewayRoutingWeights(JsonView jsonValue) { *this = jsonValue; }

GlobalInferenceGatewayRoutingWeights& GlobalInferenceGatewayRoutingWeights::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("KVHeadroom")) {
    m_kVHeadroom = jsonValue.GetDouble("KVHeadroom");
    m_kVHeadroomHasBeenSet = true;
  }
  if (jsonValue.ValueExists("QueueDepth")) {
    m_queueDepth = jsonValue.GetDouble("QueueDepth");
    m_queueDepthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RegionProximity")) {
    m_regionProximity = jsonValue.GetDouble("RegionProximity");
    m_regionProximityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorRate")) {
    m_errorRate = jsonValue.GetDouble("ErrorRate");
    m_errorRateHasBeenSet = true;
  }
  return *this;
}

JsonValue GlobalInferenceGatewayRoutingWeights::Jsonize() const {
  JsonValue payload;

  if (m_kVHeadroomHasBeenSet) {
    payload.WithDouble("KVHeadroom", m_kVHeadroom);
  }

  if (m_queueDepthHasBeenSet) {
    payload.WithDouble("QueueDepth", m_queueDepth);
  }

  if (m_regionProximityHasBeenSet) {
    payload.WithDouble("RegionProximity", m_regionProximity);
  }

  if (m_errorRateHasBeenSet) {
    payload.WithDouble("ErrorRate", m_errorRate);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
