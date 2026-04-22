/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIBenchmarkInferenceComponent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIBenchmarkInferenceComponent::AIBenchmarkInferenceComponent(JsonView jsonValue) { *this = jsonValue; }

AIBenchmarkInferenceComponent& AIBenchmarkInferenceComponent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Identifier")) {
    m_identifier = jsonValue.GetString("Identifier");
    m_identifierHasBeenSet = true;
  }
  return *this;
}

JsonValue AIBenchmarkInferenceComponent::Jsonize() const {
  JsonValue payload;

  if (m_identifierHasBeenSet) {
    payload.WithString("Identifier", m_identifier);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
