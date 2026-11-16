/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/RoutingTargetAsyncInferenceClientConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

RoutingTargetAsyncInferenceClientConfig::RoutingTargetAsyncInferenceClientConfig(JsonView jsonValue) { *this = jsonValue; }

RoutingTargetAsyncInferenceClientConfig& RoutingTargetAsyncInferenceClientConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MaxTimeInBacklogSeconds")) {
    m_maxTimeInBacklogSeconds = jsonValue.GetInteger("MaxTimeInBacklogSeconds");
    m_maxTimeInBacklogSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue RoutingTargetAsyncInferenceClientConfig::Jsonize() const {
  JsonValue payload;

  if (m_maxTimeInBacklogSecondsHasBeenSet) {
    payload.WithInteger("MaxTimeInBacklogSeconds", m_maxTimeInBacklogSeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
