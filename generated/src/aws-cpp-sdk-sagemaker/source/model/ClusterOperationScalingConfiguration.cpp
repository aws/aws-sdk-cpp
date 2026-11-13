/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ClusterOperationScalingConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ClusterOperationScalingConfiguration::ClusterOperationScalingConfiguration(JsonView jsonValue) { *this = jsonValue; }

ClusterOperationScalingConfiguration& ClusterOperationScalingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CurrentCount")) {
    m_currentCount = jsonValue.GetInteger("CurrentCount");
    m_currentCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TargetCount")) {
    m_targetCount = jsonValue.GetInteger("TargetCount");
    m_targetCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MinCount")) {
    m_minCount = jsonValue.GetInteger("MinCount");
    m_minCountHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterOperationScalingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_currentCountHasBeenSet) {
    payload.WithInteger("CurrentCount", m_currentCount);
  }

  if (m_targetCountHasBeenSet) {
    payload.WithInteger("TargetCount", m_targetCount);
  }

  if (m_minCountHasBeenSet) {
    payload.WithInteger("MinCount", m_minCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
