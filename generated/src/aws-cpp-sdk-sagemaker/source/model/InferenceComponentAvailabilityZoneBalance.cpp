/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/InferenceComponentAvailabilityZoneBalance.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

InferenceComponentAvailabilityZoneBalance::InferenceComponentAvailabilityZoneBalance(JsonView jsonValue) { *this = jsonValue; }

InferenceComponentAvailabilityZoneBalance& InferenceComponentAvailabilityZoneBalance::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EnforcementMode")) {
    m_enforcementMode = AvailabilityZoneBalanceEnforcementModeMapper::GetAvailabilityZoneBalanceEnforcementModeForName(
        jsonValue.GetString("EnforcementMode"));
    m_enforcementModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxImbalance")) {
    m_maxImbalance = jsonValue.GetInteger("MaxImbalance");
    m_maxImbalanceHasBeenSet = true;
  }
  return *this;
}

JsonValue InferenceComponentAvailabilityZoneBalance::Jsonize() const {
  JsonValue payload;

  if (m_enforcementModeHasBeenSet) {
    payload.WithString("EnforcementMode",
                       AvailabilityZoneBalanceEnforcementModeMapper::GetNameForAvailabilityZoneBalanceEnforcementMode(m_enforcementMode));
  }

  if (m_maxImbalanceHasBeenSet) {
    payload.WithInteger("MaxImbalance", m_maxImbalance);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
