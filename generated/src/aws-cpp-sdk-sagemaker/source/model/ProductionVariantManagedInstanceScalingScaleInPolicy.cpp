/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ProductionVariantManagedInstanceScalingScaleInPolicy.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ProductionVariantManagedInstanceScalingScaleInPolicy::ProductionVariantManagedInstanceScalingScaleInPolicy(JsonView jsonValue) {
  *this = jsonValue;
}

ProductionVariantManagedInstanceScalingScaleInPolicy& ProductionVariantManagedInstanceScalingScaleInPolicy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Strategy")) {
    m_strategy =
        ManagedInstanceScalingScaleInStrategyMapper::GetManagedInstanceScalingScaleInStrategyForName(jsonValue.GetString("Strategy"));
    m_strategyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaximumStepSize")) {
    m_maximumStepSize = jsonValue.GetInteger("MaximumStepSize");
    m_maximumStepSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CooldownInMinutes")) {
    m_cooldownInMinutes = jsonValue.GetInteger("CooldownInMinutes");
    m_cooldownInMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue ProductionVariantManagedInstanceScalingScaleInPolicy::Jsonize() const {
  JsonValue payload;

  if (m_strategyHasBeenSet) {
    payload.WithString("Strategy",
                       ManagedInstanceScalingScaleInStrategyMapper::GetNameForManagedInstanceScalingScaleInStrategy(m_strategy));
  }

  if (m_maximumStepSizeHasBeenSet) {
    payload.WithInteger("MaximumStepSize", m_maximumStepSize);
  }

  if (m_cooldownInMinutesHasBeenSet) {
    payload.WithInteger("CooldownInMinutes", m_cooldownInMinutes);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
