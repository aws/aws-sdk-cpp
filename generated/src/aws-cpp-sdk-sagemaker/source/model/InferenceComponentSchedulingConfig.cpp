/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/InferenceComponentSchedulingConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

InferenceComponentSchedulingConfig::InferenceComponentSchedulingConfig(JsonView jsonValue) { *this = jsonValue; }

InferenceComponentSchedulingConfig& InferenceComponentSchedulingConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PlacementStrategy")) {
    m_placementStrategy =
        InferenceComponentPlacementStrategyMapper::GetInferenceComponentPlacementStrategyForName(jsonValue.GetString("PlacementStrategy"));
    m_placementStrategyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AvailabilityZoneBalance")) {
    m_availabilityZoneBalance = jsonValue.GetObject("AvailabilityZoneBalance");
    m_availabilityZoneBalanceHasBeenSet = true;
  }
  return *this;
}

JsonValue InferenceComponentSchedulingConfig::Jsonize() const {
  JsonValue payload;

  if (m_placementStrategyHasBeenSet) {
    payload.WithString("PlacementStrategy",
                       InferenceComponentPlacementStrategyMapper::GetNameForInferenceComponentPlacementStrategy(m_placementStrategy));
  }

  if (m_availabilityZoneBalanceHasBeenSet) {
    payload.WithObject("AvailabilityZoneBalance", m_availabilityZoneBalance.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
