/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/BatchDeleteClusterNodesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDeleteClusterNodesRequest::BatchDeleteClusterNodesRequest() : 
    m_clusterNameHasBeenSet(false),
    m_nodeIdsHasBeenSet(false)
{
}

Aws::String BatchDeleteClusterNodesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("ClusterName", m_clusterName);

  }

  if(m_nodeIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodeIdsJsonList(m_nodeIds.size());
   for(unsigned nodeIdsIndex = 0; nodeIdsIndex < nodeIdsJsonList.GetLength(); ++nodeIdsIndex)
   {
     nodeIdsJsonList[nodeIdsIndex].AsString(m_nodeIds[nodeIdsIndex]);
   }
   payload.WithArray("NodeIds", std::move(nodeIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchDeleteClusterNodesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.BatchDeleteClusterNodes"));
  return headers;

}




