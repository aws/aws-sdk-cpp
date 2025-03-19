/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/BatchDeleteClusterNodesError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

BatchDeleteClusterNodesError::BatchDeleteClusterNodesError(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchDeleteClusterNodesError& BatchDeleteClusterNodesError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = BatchDeleteClusterNodesErrorCodeMapper::GetBatchDeleteClusterNodesErrorCodeForName(jsonValue.GetString("Code"));
    m_codeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NodeId"))
  {
    m_nodeId = jsonValue.GetString("NodeId");
    m_nodeIdHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchDeleteClusterNodesError::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", BatchDeleteClusterNodesErrorCodeMapper::GetNameForBatchDeleteClusterNodesErrorCode(m_code));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_nodeIdHasBeenSet)
  {
   payload.WithString("NodeId", m_nodeId);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
