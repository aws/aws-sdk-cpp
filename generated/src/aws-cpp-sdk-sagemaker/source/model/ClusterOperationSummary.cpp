/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ClusterOperationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ClusterOperationSummary::ClusterOperationSummary(JsonView jsonValue) { *this = jsonValue; }

ClusterOperationSummary& ClusterOperationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("OperationId")) {
    m_operationId = jsonValue.GetString("OperationId");
    m_operationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClusterArn")) {
    m_clusterArn = jsonValue.GetString("ClusterArn");
    m_clusterArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = ClusterOperationTypeMapper::GetClusterOperationTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = ClusterOperationStatusMapper::GetClusterOperationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationTime")) {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterOperationSummary::Jsonize() const {
  JsonValue payload;

  if (m_operationIdHasBeenSet) {
    payload.WithString("OperationId", m_operationId);
  }

  if (m_clusterArnHasBeenSet) {
    payload.WithString("ClusterArn", m_clusterArn);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", ClusterOperationTypeMapper::GetNameForClusterOperationType(m_type));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", ClusterOperationStatusMapper::GetNameForClusterOperationStatus(m_status));
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
