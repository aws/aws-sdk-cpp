/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/CrossRegionTrafficConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

CrossRegionTrafficConfig::CrossRegionTrafficConfig(JsonView jsonValue) { *this = jsonValue; }

CrossRegionTrafficConfig& CrossRegionTrafficConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MaxInvocationsPerSecondPerInstance")) {
    m_maxInvocationsPerSecondPerInstance = jsonValue.GetInteger("MaxInvocationsPerSecondPerInstance");
    m_maxInvocationsPerSecondPerInstanceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxCrossRegionPercentPerEndpoint")) {
    m_maxCrossRegionPercentPerEndpoint = jsonValue.GetInteger("MaxCrossRegionPercentPerEndpoint");
    m_maxCrossRegionPercentPerEndpointHasBeenSet = true;
  }
  return *this;
}

JsonValue CrossRegionTrafficConfig::Jsonize() const {
  JsonValue payload;

  if (m_maxInvocationsPerSecondPerInstanceHasBeenSet) {
    payload.WithInteger("MaxInvocationsPerSecondPerInstance", m_maxInvocationsPerSecondPerInstance);
  }

  if (m_maxCrossRegionPercentPerEndpointHasBeenSet) {
    payload.WithInteger("MaxCrossRegionPercentPerEndpoint", m_maxCrossRegionPercentPerEndpoint);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
