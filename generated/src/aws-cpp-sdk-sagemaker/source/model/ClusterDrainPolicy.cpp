/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ClusterDrainPolicy.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ClusterDrainPolicy::ClusterDrainPolicy(JsonView jsonValue) { *this = jsonValue; }

ClusterDrainPolicy& ClusterDrainPolicy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DrainTimeoutInSeconds")) {
    m_drainTimeoutInSeconds = jsonValue.GetInteger("DrainTimeoutInSeconds");
    m_drainTimeoutInSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OnDrainTimeout")) {
    m_onDrainTimeout = ClusterOnDrainTimeoutMapper::GetClusterOnDrainTimeoutForName(jsonValue.GetString("OnDrainTimeout"));
    m_onDrainTimeoutHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterDrainPolicy::Jsonize() const {
  JsonValue payload;

  if (m_drainTimeoutInSecondsHasBeenSet) {
    payload.WithInteger("DrainTimeoutInSeconds", m_drainTimeoutInSeconds);
  }

  if (m_onDrainTimeoutHasBeenSet) {
    payload.WithString("OnDrainTimeout", ClusterOnDrainTimeoutMapper::GetNameForClusterOnDrainTimeout(m_onDrainTimeout));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
