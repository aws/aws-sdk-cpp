/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ClusterAutoPatchConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ClusterAutoPatchConfig::ClusterAutoPatchConfig(JsonView jsonValue) { *this = jsonValue; }

ClusterAutoPatchConfig& ClusterAutoPatchConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PatchingStrategy")) {
    m_patchingStrategy = ClusterPatchingStrategyMapper::GetClusterPatchingStrategyForName(jsonValue.GetString("PatchingStrategy"));
    m_patchingStrategyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PatchSchedule")) {
    m_patchSchedule = jsonValue.GetObject("PatchSchedule");
    m_patchScheduleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeploymentConfig")) {
    m_deploymentConfig = jsonValue.GetObject("DeploymentConfig");
    m_deploymentConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterAutoPatchConfig::Jsonize() const {
  JsonValue payload;

  if (m_patchingStrategyHasBeenSet) {
    payload.WithString("PatchingStrategy", ClusterPatchingStrategyMapper::GetNameForClusterPatchingStrategy(m_patchingStrategy));
  }

  if (m_patchScheduleHasBeenSet) {
    payload.WithObject("PatchSchedule", m_patchSchedule.Jsonize());
  }

  if (m_deploymentConfigHasBeenSet) {
    payload.WithObject("DeploymentConfig", m_deploymentConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
