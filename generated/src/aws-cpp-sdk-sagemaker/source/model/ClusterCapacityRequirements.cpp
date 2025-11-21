/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ClusterCapacityRequirements.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ClusterCapacityRequirements::ClusterCapacityRequirements(JsonView jsonValue) { *this = jsonValue; }

ClusterCapacityRequirements& ClusterCapacityRequirements::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Spot")) {
    m_spot = jsonValue.GetObject("Spot");
    m_spotHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OnDemand")) {
    m_onDemand = jsonValue.GetObject("OnDemand");
    m_onDemandHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterCapacityRequirements::Jsonize() const {
  JsonValue payload;

  if (m_spotHasBeenSet) {
    payload.WithObject("Spot", m_spot.Jsonize());
  }

  if (m_onDemandHasBeenSet) {
    payload.WithObject("OnDemand", m_onDemand.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
