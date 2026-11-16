/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/RoutingTargetAsyncInferenceConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

RoutingTargetAsyncInferenceConfig::RoutingTargetAsyncInferenceConfig(JsonView jsonValue) { *this = jsonValue; }

RoutingTargetAsyncInferenceConfig& RoutingTargetAsyncInferenceConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("OutputConfig")) {
    m_outputConfig = jsonValue.GetObject("OutputConfig");
    m_outputConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClientConfig")) {
    m_clientConfig = jsonValue.GetObject("ClientConfig");
    m_clientConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue RoutingTargetAsyncInferenceConfig::Jsonize() const {
  JsonValue payload;

  if (m_outputConfigHasBeenSet) {
    payload.WithObject("OutputConfig", m_outputConfig.Jsonize());
  }

  if (m_clientConfigHasBeenSet) {
    payload.WithObject("ClientConfig", m_clientConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
