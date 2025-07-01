/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/CreateCloudAutonomousVmClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateCloudAutonomousVmClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_cloudExadataInfrastructureIdHasBeenSet)
  {
   payload.WithString("cloudExadataInfrastructureId", m_cloudExadataInfrastructureId);

  }

  if(m_odbNetworkIdHasBeenSet)
  {
   payload.WithString("odbNetworkId", m_odbNetworkId);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_autonomousDataStorageSizeInTBsHasBeenSet)
  {
   payload.WithDouble("autonomousDataStorageSizeInTBs", m_autonomousDataStorageSizeInTBs);

  }

  if(m_cpuCoreCountPerNodeHasBeenSet)
  {
   payload.WithInteger("cpuCoreCountPerNode", m_cpuCoreCountPerNode);

  }

  if(m_dbServersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dbServersJsonList(m_dbServers.size());
   for(unsigned dbServersIndex = 0; dbServersIndex < dbServersJsonList.GetLength(); ++dbServersIndex)
   {
     dbServersJsonList[dbServersIndex].AsString(m_dbServers[dbServersIndex]);
   }
   payload.WithArray("dbServers", std::move(dbServersJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_isMtlsEnabledVmClusterHasBeenSet)
  {
   payload.WithBool("isMtlsEnabledVmCluster", m_isMtlsEnabledVmCluster);

  }

  if(m_licenseModelHasBeenSet)
  {
   payload.WithString("licenseModel", LicenseModelMapper::GetNameForLicenseModel(m_licenseModel));
  }

  if(m_maintenanceWindowHasBeenSet)
  {
   payload.WithObject("maintenanceWindow", m_maintenanceWindow.Jsonize());

  }

  if(m_memoryPerOracleComputeUnitInGBsHasBeenSet)
  {
   payload.WithInteger("memoryPerOracleComputeUnitInGBs", m_memoryPerOracleComputeUnitInGBs);

  }

  if(m_scanListenerPortNonTlsHasBeenSet)
  {
   payload.WithInteger("scanListenerPortNonTls", m_scanListenerPortNonTls);

  }

  if(m_scanListenerPortTlsHasBeenSet)
  {
   payload.WithInteger("scanListenerPortTls", m_scanListenerPortTls);

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

  if(m_timeZoneHasBeenSet)
  {
   payload.WithString("timeZone", m_timeZone);

  }

  if(m_totalContainerDatabasesHasBeenSet)
  {
   payload.WithInteger("totalContainerDatabases", m_totalContainerDatabases);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateCloudAutonomousVmClusterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.CreateCloudAutonomousVmCluster"));
  return headers;

}




