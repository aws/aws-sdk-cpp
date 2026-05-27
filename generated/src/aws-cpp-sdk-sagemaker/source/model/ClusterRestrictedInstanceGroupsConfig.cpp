/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ClusterRestrictedInstanceGroupsConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ClusterRestrictedInstanceGroupsConfig::ClusterRestrictedInstanceGroupsConfig(JsonView jsonValue) { *this = jsonValue; }

ClusterRestrictedInstanceGroupsConfig& ClusterRestrictedInstanceGroupsConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SharedEnvironmentConfig")) {
    m_sharedEnvironmentConfig = jsonValue.GetObject("SharedEnvironmentConfig");
    m_sharedEnvironmentConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterRestrictedInstanceGroupsConfig::Jsonize() const {
  JsonValue payload;

  if (m_sharedEnvironmentConfigHasBeenSet) {
    payload.WithObject("SharedEnvironmentConfig", m_sharedEnvironmentConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
