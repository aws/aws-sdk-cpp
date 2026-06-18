/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ClusterAutoPatchConfigDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ClusterAutoPatchConfigDetails::ClusterAutoPatchConfigDetails(JsonView jsonValue) { *this = jsonValue; }

ClusterAutoPatchConfigDetails& ClusterAutoPatchConfigDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PatchingStrategy")) {
    m_patchingStrategy = ClusterPatchingStrategyMapper::GetClusterPatchingStrategyForName(jsonValue.GetString("PatchingStrategy"));
    m_patchingStrategyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CurrentPatchSchedule")) {
    m_currentPatchSchedule = jsonValue.GetObject("CurrentPatchSchedule");
    m_currentPatchScheduleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DesiredPatchSchedule")) {
    m_desiredPatchSchedule = jsonValue.GetObject("DesiredPatchSchedule");
    m_desiredPatchScheduleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeploymentConfig")) {
    m_deploymentConfig = jsonValue.GetObject("DeploymentConfig");
    m_deploymentConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterAutoPatchConfigDetails::Jsonize() const {
  JsonValue payload;

  if (m_patchingStrategyHasBeenSet) {
    payload.WithString("PatchingStrategy", ClusterPatchingStrategyMapper::GetNameForClusterPatchingStrategy(m_patchingStrategy));
  }

  if (m_currentPatchScheduleHasBeenSet) {
    payload.WithObject("CurrentPatchSchedule", m_currentPatchSchedule.Jsonize());
  }

  if (m_desiredPatchScheduleHasBeenSet) {
    payload.WithObject("DesiredPatchSchedule", m_desiredPatchSchedule.Jsonize());
  }

  if (m_deploymentConfigHasBeenSet) {
    payload.WithObject("DeploymentConfig", m_deploymentConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
