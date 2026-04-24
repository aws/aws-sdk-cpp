/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/AIBenchmarkTarget.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

AIBenchmarkTarget::AIBenchmarkTarget(JsonView jsonValue) { *this = jsonValue; }

AIBenchmarkTarget& AIBenchmarkTarget::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Endpoint")) {
    m_endpoint = jsonValue.GetObject("Endpoint");
    m_endpointHasBeenSet = true;
  }
  return *this;
}

JsonValue AIBenchmarkTarget::Jsonize() const {
  JsonValue payload;

  if (m_endpointHasBeenSet) {
    payload.WithObject("Endpoint", m_endpoint.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
