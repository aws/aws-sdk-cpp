/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/model/CreateQueueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PCS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateQueueRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterIdentifierHasBeenSet)
  {
   payload.WithString("clusterIdentifier", m_clusterIdentifier);

  }

  if(m_queueNameHasBeenSet)
  {
   payload.WithString("queueName", m_queueName);

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

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateQueueRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSParallelComputingService.CreateQueue"));
  return headers;

}




