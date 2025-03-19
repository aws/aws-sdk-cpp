/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/model/CreateComputeNodeGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PCS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateComputeNodeGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterIdentifierHasBeenSet)
  {
   payload.WithString("clusterIdentifier", m_clusterIdentifier);

  }

  if(m_computeNodeGroupNameHasBeenSet)
  {
   payload.WithString("computeNodeGroupName", m_computeNodeGroupName);

  }

  if(m_amiIdHasBeenSet)
  {
   payload.WithString("amiId", m_amiId);

  }

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("subnetIds", std::move(subnetIdsJsonList));

  }

  if(m_purchaseOptionHasBeenSet)
  {
   payload.WithString("purchaseOption", PurchaseOptionMapper::GetNameForPurchaseOption(m_purchaseOption));
  }

  if(m_customLaunchTemplateHasBeenSet)
  {
   payload.WithObject("customLaunchTemplate", m_customLaunchTemplate.Jsonize());

  }

  if(m_iamInstanceProfileArnHasBeenSet)
  {
   payload.WithString("iamInstanceProfileArn", m_iamInstanceProfileArn);

  }

  if(m_scalingConfigurationHasBeenSet)
  {
   payload.WithObject("scalingConfiguration", m_scalingConfiguration.Jsonize());

  }

  if(m_instanceConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceConfigsJsonList(m_instanceConfigs.size());
   for(unsigned instanceConfigsIndex = 0; instanceConfigsIndex < instanceConfigsJsonList.GetLength(); ++instanceConfigsIndex)
   {
     instanceConfigsJsonList[instanceConfigsIndex].AsObject(m_instanceConfigs[instanceConfigsIndex].Jsonize());
   }
   payload.WithArray("instanceConfigs", std::move(instanceConfigsJsonList));

  }

  if(m_spotOptionsHasBeenSet)
  {
   payload.WithObject("spotOptions", m_spotOptions.Jsonize());

  }

  if(m_slurmConfigurationHasBeenSet)
  {
   payload.WithObject("slurmConfiguration", m_slurmConfiguration.Jsonize());

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

Aws::Http::HeaderValueCollection CreateComputeNodeGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSParallelComputingService.CreateComputeNodeGroup"));
  return headers;

}




