/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateClusterRequest::SerializePayload() const
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

  if(m_tieredStorageConfigHasBeenSet)
  {
   payload.WithObject("TieredStorageConfig", m_tieredStorageConfig.Jsonize());

  }

  if(m_nodeRecoveryHasBeenSet)
  {
   payload.WithString("NodeRecovery", ClusterNodeRecoveryMapper::GetNameForClusterNodeRecovery(m_nodeRecovery));
  }

  if(m_instanceGroupsToDeleteHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceGroupsToDeleteJsonList(m_instanceGroupsToDelete.size());
   for(unsigned instanceGroupsToDeleteIndex = 0; instanceGroupsToDeleteIndex < instanceGroupsToDeleteJsonList.GetLength(); ++instanceGroupsToDeleteIndex)
   {
     instanceGroupsToDeleteJsonList[instanceGroupsToDeleteIndex].AsString(m_instanceGroupsToDelete[instanceGroupsToDeleteIndex]);
   }
   payload.WithArray("InstanceGroupsToDelete", std::move(instanceGroupsToDeleteJsonList));

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

Aws::Http::HeaderValueCollection UpdateClusterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateCluster"));
  return headers;

}




