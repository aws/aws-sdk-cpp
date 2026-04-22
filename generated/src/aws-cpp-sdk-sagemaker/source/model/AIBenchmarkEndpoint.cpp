/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIBenchmarkEndpoint.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIBenchmarkEndpoint::AIBenchmarkEndpoint(JsonView jsonValue) { *this = jsonValue; }

AIBenchmarkEndpoint& AIBenchmarkEndpoint::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Identifier")) {
    m_identifier = jsonValue.GetString("Identifier");
    m_identifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TargetContainerHostname")) {
    m_targetContainerHostname = jsonValue.GetString("TargetContainerHostname");
    m_targetContainerHostnameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InferenceComponents")) {
    Aws::Utils::Array<JsonView> inferenceComponentsJsonList = jsonValue.GetArray("InferenceComponents");
    for (unsigned inferenceComponentsIndex = 0; inferenceComponentsIndex < inferenceComponentsJsonList.GetLength();
         ++inferenceComponentsIndex) {
      m_inferenceComponents.push_back(inferenceComponentsJsonList[inferenceComponentsIndex].AsObject());
    }
    m_inferenceComponentsHasBeenSet = true;
  }
  return *this;
}

JsonValue AIBenchmarkEndpoint::Jsonize() const {
  JsonValue payload;

  if (m_identifierHasBeenSet) {
    payload.WithString("Identifier", m_identifier);
  }

  if (m_targetContainerHostnameHasBeenSet) {
    payload.WithString("TargetContainerHostname", m_targetContainerHostname);
  }

  if (m_inferenceComponentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> inferenceComponentsJsonList(m_inferenceComponents.size());
    for (unsigned inferenceComponentsIndex = 0; inferenceComponentsIndex < inferenceComponentsJsonList.GetLength();
         ++inferenceComponentsIndex) {
      inferenceComponentsJsonList[inferenceComponentsIndex].AsObject(m_inferenceComponents[inferenceComponentsIndex].Jsonize());
    }
    payload.WithArray("InferenceComponents", std::move(inferenceComponentsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
