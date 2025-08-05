/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/BatchAddClusterNodesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchAddClusterNodesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("ClusterName", m_clusterName);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_nodesToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodesToAddJsonList(m_nodesToAdd.size());
   for(unsigned nodesToAddIndex = 0; nodesToAddIndex < nodesToAddJsonList.GetLength(); ++nodesToAddIndex)
   {
     nodesToAddJsonList[nodesToAddIndex].AsObject(m_nodesToAdd[nodesToAddIndex].Jsonize());
   }
   payload.WithArray("NodesToAdd", std::move(nodesToAddJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchAddClusterNodesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.BatchAddClusterNodes"));
  return headers;

}




