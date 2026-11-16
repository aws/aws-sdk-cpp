/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/RoutingTargetAsyncInferenceNotificationConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

RoutingTargetAsyncInferenceNotificationConfig::RoutingTargetAsyncInferenceNotificationConfig(JsonView jsonValue) { *this = jsonValue; }

RoutingTargetAsyncInferenceNotificationConfig& RoutingTargetAsyncInferenceNotificationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SuccessTopic")) {
    m_successTopic = jsonValue.GetString("SuccessTopic");
    m_successTopicHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorTopic")) {
    m_errorTopic = jsonValue.GetString("ErrorTopic");
    m_errorTopicHasBeenSet = true;
  }
  return *this;
}

JsonValue RoutingTargetAsyncInferenceNotificationConfig::Jsonize() const {
  JsonValue payload;

  if (m_successTopicHasBeenSet) {
    payload.WithString("SuccessTopic", m_successTopic);
  }

  if (m_errorTopicHasBeenSet) {
    payload.WithString("ErrorTopic", m_errorTopic);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
