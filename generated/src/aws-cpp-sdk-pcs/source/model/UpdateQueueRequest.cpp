/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/model/UpdateQueueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PCS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateQueueRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterIdentifierHasBeenSet)
  {
   payload.WithString("clusterIdentifier", m_clusterIdentifier);

  }

  if(m_queueIdentifierHasBeenSet)
  {
   payload.WithString("queueIdentifier", m_queueIdentifier);

  }

  if(m_computeNodeGroupConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> computeNodeGroupConfigurationsJsonList(m_computeNodeGroupConfigurations.size());
   for(unsigned computeNodeGroupConfigurationsIndex = 0; computeNodeGroupConfigurationsIndex < computeNodeGroupConfigurationsJsonList.GetLength(); ++computeNodeGroupConfigurationsIndex)
   {
     computeNodeGroupConfigurationsJsonList[computeNodeGroupConfigurationsIndex].AsObject(m_computeNodeGroupConfigurations[computeNodeGroupConfigurationsIndex].Jsonize());
   }
   payload.WithArray("computeNodeGroupConfigurations", std::move(computeNodeGroupConfigurationsJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateQueueRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSParallelComputingService.UpdateQueue"));
  return headers;

}




