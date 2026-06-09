/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ClusterSharedEnvironmentConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ClusterSharedEnvironmentConfig::ClusterSharedEnvironmentConfig(JsonView jsonValue) { *this = jsonValue; }

ClusterSharedEnvironmentConfig& ClusterSharedEnvironmentConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FSxLustreDeletionPolicy")) {
    m_fSxLustreDeletionPolicy =
        ClusterFSxLustreDeletionPolicyMapper::GetClusterFSxLustreDeletionPolicyForName(jsonValue.GetString("FSxLustreDeletionPolicy"));
    m_fSxLustreDeletionPolicyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FSxLustreConfig")) {
    m_fSxLustreConfig = jsonValue.GetObject("FSxLustreConfig");
    m_fSxLustreConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterSharedEnvironmentConfig::Jsonize() const {
  JsonValue payload;

  if (m_fSxLustreDeletionPolicyHasBeenSet) {
    payload.WithString("FSxLustreDeletionPolicy",
                       ClusterFSxLustreDeletionPolicyMapper::GetNameForClusterFSxLustreDeletionPolicy(m_fSxLustreDeletionPolicy));
  }

  if (m_fSxLustreConfigHasBeenSet) {
    payload.WithObject("FSxLustreConfig", m_fSxLustreConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
