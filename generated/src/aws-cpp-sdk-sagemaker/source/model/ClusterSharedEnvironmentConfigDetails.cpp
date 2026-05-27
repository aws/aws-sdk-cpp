/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ClusterSharedEnvironmentConfigDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ClusterSharedEnvironmentConfigDetails::ClusterSharedEnvironmentConfigDetails(JsonView jsonValue) { *this = jsonValue; }

ClusterSharedEnvironmentConfigDetails& ClusterSharedEnvironmentConfigDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CurrentFSxLustreConfig")) {
    m_currentFSxLustreConfig = jsonValue.GetObject("CurrentFSxLustreConfig");
    m_currentFSxLustreConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DesiredFSxLustreConfig")) {
    m_desiredFSxLustreConfig = jsonValue.GetObject("DesiredFSxLustreConfig");
    m_desiredFSxLustreConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CurrentFSxLustreDeletionPolicy")) {
    m_currentFSxLustreDeletionPolicy = ClusterFSxLustreDeletionPolicyMapper::GetClusterFSxLustreDeletionPolicyForName(
        jsonValue.GetString("CurrentFSxLustreDeletionPolicy"));
    m_currentFSxLustreDeletionPolicyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DesiredFSxLustreDeletionPolicy")) {
    m_desiredFSxLustreDeletionPolicy = ClusterFSxLustreDeletionPolicyMapper::GetClusterFSxLustreDeletionPolicyForName(
        jsonValue.GetString("DesiredFSxLustreDeletionPolicy"));
    m_desiredFSxLustreDeletionPolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterSharedEnvironmentConfigDetails::Jsonize() const {
  JsonValue payload;

  if (m_currentFSxLustreConfigHasBeenSet) {
    payload.WithObject("CurrentFSxLustreConfig", m_currentFSxLustreConfig.Jsonize());
  }

  if (m_desiredFSxLustreConfigHasBeenSet) {
    payload.WithObject("DesiredFSxLustreConfig", m_desiredFSxLustreConfig.Jsonize());
  }

  if (m_currentFSxLustreDeletionPolicyHasBeenSet) {
    payload.WithString("CurrentFSxLustreDeletionPolicy",
                       ClusterFSxLustreDeletionPolicyMapper::GetNameForClusterFSxLustreDeletionPolicy(m_currentFSxLustreDeletionPolicy));
  }

  if (m_desiredFSxLustreDeletionPolicyHasBeenSet) {
    payload.WithString("DesiredFSxLustreDeletionPolicy",
                       ClusterFSxLustreDeletionPolicyMapper::GetNameForClusterFSxLustreDeletionPolicy(m_desiredFSxLustreDeletionPolicy));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
