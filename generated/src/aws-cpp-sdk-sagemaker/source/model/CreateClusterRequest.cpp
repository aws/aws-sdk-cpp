/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("ClusterName", m_clusterName);

  }

  if(m_instanceGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceGroupsJsonList(m_instanceGroups.size());
   for(unsigned instanceGroupsIndex = 0; instanceGroupsIndex < instanceGroupsJsonList.GetLength(); ++instanceGroupsIndex)
   {
     instanceGroupsJsonList[instanceGroupsIndex].AsObject(m_instanceGroups[instanceGroupsIndex].Jsonize());
   }
   payload.WithArray("InstanceGroups", std::move(instanceGroupsJsonList));

  }

  if(m_restrictedInstanceGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> restrictedInstanceGroupsJsonList(m_restrictedInstanceGroups.size());
   for(unsigned restrictedInstanceGroupsIndex = 0; restrictedInstanceGroupsIndex < restrictedInstanceGroupsJsonList.GetLength(); ++restrictedInstanceGroupsIndex)
   {
     restrictedInstanceGroupsJsonList[restrictedInstanceGroupsIndex].AsObject(m_restrictedInstanceGroups[restrictedInstanceGroupsIndex].Jsonize());
   }
   payload.WithArray("RestrictedInstanceGroups", std::move(restrictedInstanceGroupsJsonList));

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_orchestratorHasBeenSet)
  {
   payload.WithObject("Orchestrator", m_orchestrator.Jsonize());

  }

  if(m_nodeRecoveryHasBeenSet)
  {
   payload.WithString("NodeRecovery", ClusterNodeRecoveryMapper::GetNameForClusterNodeRecovery(m_nodeRecovery));
  }

  if(m_tieredStorageConfigHasBeenSet)
  {
   payload.WithObject("TieredStorageConfig", m_tieredStorageConfig.Jsonize());

  }

  if(m_nodeProvisioningModeHasBeenSet)
  {
   payload.WithString("NodeProvisioningMode", ClusterNodeProvisioningModeMapper::GetNameForClusterNodeProvisioningMode(m_nodeProvisioningMode));
  }

  if(m_clusterRoleHasBeenSet)
  {
   payload.WithString("ClusterRole", m_clusterRole);

  }

  if(m_autoScalingHasBeenSet)
  {
   payload.WithObject("AutoScaling", m_autoScaling.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateClusterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateCluster"));
  return headers;

}




