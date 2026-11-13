/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ClusterOperationScalingDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ClusterOperationScalingDetails::ClusterOperationScalingDetails(JsonView jsonValue) { *this = jsonValue; }

ClusterOperationScalingDetails& ClusterOperationScalingDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InstanceGroupName")) {
    m_instanceGroupName = jsonValue.GetString("InstanceGroupName");
    m_instanceGroupNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = ClusterOperationStatusMapper::GetClusterOperationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Original")) {
    m_original = jsonValue.GetObject("Original");
    m_originalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Desired")) {
    m_desired = jsonValue.GetObject("Desired");
    m_desiredHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterOperationScalingDetails::Jsonize() const {
  JsonValue payload;

  if (m_instanceGroupNameHasBeenSet) {
    payload.WithString("InstanceGroupName", m_instanceGroupName);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", ClusterOperationStatusMapper::GetNameForClusterOperationStatus(m_status));
  }

  if (m_originalHasBeenSet) {
    payload.WithObject("Original", m_original.Jsonize());
  }

  if (m_desiredHasBeenSet) {
    payload.WithObject("Desired", m_desired.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
