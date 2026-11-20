/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/MoveClusterNodeLogicalIdsError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

MoveClusterNodeLogicalIdsError::MoveClusterNodeLogicalIdsError(JsonView jsonValue) { *this = jsonValue; }

MoveClusterNodeLogicalIdsError& MoveClusterNodeLogicalIdsError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Code")) {
    m_code = MoveClusterNodesErrorCodeMapper::GetMoveClusterNodesErrorCodeForName(jsonValue.GetString("Code"));
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NodeLogicalId")) {
    m_nodeLogicalId = jsonValue.GetString("NodeLogicalId");
    m_nodeLogicalIdHasBeenSet = true;
  }
  return *this;
}

JsonValue MoveClusterNodeLogicalIdsError::Jsonize() const {
  JsonValue payload;

  if (m_codeHasBeenSet) {
    payload.WithString("Code", MoveClusterNodesErrorCodeMapper::GetNameForMoveClusterNodesErrorCode(m_code));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  if (m_nodeLogicalIdHasBeenSet) {
    payload.WithString("NodeLogicalId", m_nodeLogicalId);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
