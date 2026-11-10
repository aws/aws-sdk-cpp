/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearch/model/DeploymentStrategyOverrideOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {

DeploymentStrategyOverrideOptions::DeploymentStrategyOverrideOptions(JsonView jsonValue) { *this = jsonValue; }

DeploymentStrategyOverrideOptions& DeploymentStrategyOverrideOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DeploymentStrategy")) {
    m_deploymentStrategy =
        DeploymentStrategyOverrideMapper::GetDeploymentStrategyOverrideForName(jsonValue.GetString("DeploymentStrategy"));
    m_deploymentStrategyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClonedBlueGreenOptions")) {
    m_clonedBlueGreenOptions = jsonValue.GetObject("ClonedBlueGreenOptions");
    m_clonedBlueGreenOptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue DeploymentStrategyOverrideOptions::Jsonize() const {
  JsonValue payload;

  if (m_deploymentStrategyHasBeenSet) {
    payload.WithString("DeploymentStrategy", DeploymentStrategyOverrideMapper::GetNameForDeploymentStrategyOverride(m_deploymentStrategy));
  }

  if (m_clonedBlueGreenOptionsHasBeenSet) {
    payload.WithObject("ClonedBlueGreenOptions", m_clonedBlueGreenOptions.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
