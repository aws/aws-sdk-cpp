/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/BatchRebootClusterNodeLogicalIdsError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

BatchRebootClusterNodeLogicalIdsError::BatchRebootClusterNodeLogicalIdsError(JsonView jsonValue) { *this = jsonValue; }

BatchRebootClusterNodeLogicalIdsError& BatchRebootClusterNodeLogicalIdsError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("NodeLogicalId")) {
    m_nodeLogicalId = jsonValue.GetString("NodeLogicalId");
    m_nodeLogicalIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorCode")) {
    m_errorCode = BatchRebootClusterNodesErrorCodeMapper::GetBatchRebootClusterNodesErrorCodeForName(jsonValue.GetString("ErrorCode"));
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchRebootClusterNodeLogicalIdsError::Jsonize() const {
  JsonValue payload;

  if (m_nodeLogicalIdHasBeenSet) {
    payload.WithString("NodeLogicalId", m_nodeLogicalId);
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("ErrorCode", BatchRebootClusterNodesErrorCodeMapper::GetNameForBatchRebootClusterNodesErrorCode(m_errorCode));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
