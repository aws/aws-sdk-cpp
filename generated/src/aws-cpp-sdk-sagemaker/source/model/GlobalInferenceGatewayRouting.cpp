/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/GlobalInferenceGatewayRouting.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

GlobalInferenceGatewayRouting::GlobalInferenceGatewayRouting(JsonView jsonValue) { *this = jsonValue; }

GlobalInferenceGatewayRouting& GlobalInferenceGatewayRouting::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Weights")) {
    m_weights = jsonValue.GetObject("Weights");
    m_weightsHasBeenSet = true;
  }
  return *this;
}

JsonValue GlobalInferenceGatewayRouting::Jsonize() const {
  JsonValue payload;

  if (m_weightsHasBeenSet) {
    payload.WithObject("Weights", m_weights.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
