/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/BatchRebootClusterNodesError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

BatchRebootClusterNodesError::BatchRebootClusterNodesError(JsonView jsonValue) { *this = jsonValue; }

BatchRebootClusterNodesError& BatchRebootClusterNodesError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("NodeId")) {
    m_nodeId = jsonValue.GetString("NodeId");
    m_nodeIdHasBeenSet = true;
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

JsonValue BatchRebootClusterNodesError::Jsonize() const {
  JsonValue payload;

  if (m_nodeIdHasBeenSet) {
    payload.WithString("NodeId", m_nodeId);
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
