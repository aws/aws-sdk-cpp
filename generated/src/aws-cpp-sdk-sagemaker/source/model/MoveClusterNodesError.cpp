/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/MoveClusterNodesError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

MoveClusterNodesError::MoveClusterNodesError(JsonView jsonValue) { *this = jsonValue; }

MoveClusterNodesError& MoveClusterNodesError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Code")) {
    m_code = MoveClusterNodesErrorCodeMapper::GetMoveClusterNodesErrorCodeForName(jsonValue.GetString("Code"));
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NodeId")) {
    m_nodeId = jsonValue.GetString("NodeId");
    m_nodeIdHasBeenSet = true;
  }
  return *this;
}

JsonValue MoveClusterNodesError::Jsonize() const {
  JsonValue payload;

  if (m_codeHasBeenSet) {
    payload.WithString("Code", MoveClusterNodesErrorCodeMapper::GetNameForMoveClusterNodesErrorCode(m_code));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  if (m_nodeIdHasBeenSet) {
    payload.WithString("NodeId", m_nodeId);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
