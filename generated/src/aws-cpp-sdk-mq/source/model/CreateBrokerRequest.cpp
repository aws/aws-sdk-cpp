/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/CreateBrokerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MQ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateBrokerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authenticationStrategyHasBeenSet)
  {
   payload.WithString("authenticationStrategy", AuthenticationStrategyMapper::GetNameForAuthenticationStrategy(m_authenticationStrategy));
  }

  if(m_autoMinorVersionUpgradeHasBeenSet)
  {
   payload.WithBool("autoMinorVersionUpgrade", m_autoMinorVersionUpgrade);

  }

  if(m_brokerNameHasBeenSet)
  {
   payload.WithString("brokerName", m_brokerName);

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("creatorRequestId", m_creatorRequestId);

  }

  if(m_deploymentModeHasBeenSet)
  {
   payload.WithString("deploymentMode", DeploymentModeMapper::GetNameForDeploymentMode(m_deploymentMode));
  }

  if(m_encryptionOptionsHasBeenSet)
  {
   payload.WithObject("encryptionOptions", m_encryptionOptions.Jsonize());

  }

  if(m_engineTypeHasBeenSet)
  {
   payload.WithString("engineType", EngineTypeMapper::GetNameForEngineType(m_engineType));
  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("engineVersion", m_engineVersion);

  }

  if(m_hostInstanceTypeHasBeenSet)
  {
   payload.WithString("hostInstanceType", m_hostInstanceType);

  }

  if(m_ldapServerMetadataHasBeenSet)
  {
   payload.WithObject("ldapServerMetadata", m_ldapServerMetadata.Jsonize());

  }

  if(m_logsHasBeenSet)
  {
   payload.WithObject("logs", m_logs.Jsonize());

  }

  if(m_maintenanceWindowStartTimeHasBeenSet)
  {
   payload.WithObject("maintenanceWindowStartTime", m_maintenanceWindowStartTime.Jsonize());

  }

  if(m_publiclyAccessibleHasBeenSet)
  {
   payload.WithBool("publiclyAccessible", m_publiclyAccessible);

  }

  if(m_securityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
   }
   payload.WithArray("securityGroups", std::move(securityGroupsJsonList));

  }

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("storageType", BrokerStorageTypeMapper::GetNameForBrokerStorageType(m_storageType));
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

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_usersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> usersJsonList(m_users.size());
   for(unsigned usersIndex = 0; usersIndex < usersJsonList.GetLength(); ++usersIndex)
   {
     usersJsonList[usersIndex].AsObject(m_users[usersIndex].Jsonize());
   }
   payload.WithArray("users", std::move(usersJsonList));

  }

  if(m_dataReplicationModeHasBeenSet)
  {
   payload.WithString("dataReplicationMode", DataReplicationModeMapper::GetNameForDataReplicationMode(m_dataReplicationMode));
  }

  if(m_dataReplicationPrimaryBrokerArnHasBeenSet)
  {
   payload.WithString("dataReplicationPrimaryBrokerArn", m_dataReplicationPrimaryBrokerArn);

  }

  return payload.View().WriteReadable();
}




