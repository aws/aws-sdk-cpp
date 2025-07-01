/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/CreateCloudVmClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateCloudVmClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_cloudExadataInfrastructureIdHasBeenSet)
  {
   payload.WithString("cloudExadataInfrastructureId", m_cloudExadataInfrastructureId);

  }

  if(m_cpuCoreCountHasBeenSet)
  {
   payload.WithInteger("cpuCoreCount", m_cpuCoreCount);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_giVersionHasBeenSet)
  {
   payload.WithString("giVersion", m_giVersion);

  }

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("hostname", m_hostname);

  }

  if(m_sshPublicKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sshPublicKeysJsonList(m_sshPublicKeys.size());
   for(unsigned sshPublicKeysIndex = 0; sshPublicKeysIndex < sshPublicKeysJsonList.GetLength(); ++sshPublicKeysIndex)
   {
     sshPublicKeysJsonList[sshPublicKeysIndex].AsString(m_sshPublicKeys[sshPublicKeysIndex]);
   }
   payload.WithArray("sshPublicKeys", std::move(sshPublicKeysJsonList));

  }

  if(m_odbNetworkIdHasBeenSet)
  {
   payload.WithString("odbNetworkId", m_odbNetworkId);

  }

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  if(m_dataCollectionOptionsHasBeenSet)
  {
   payload.WithObject("dataCollectionOptions", m_dataCollectionOptions.Jsonize());

  }

  if(m_dataStorageSizeInTBsHasBeenSet)
  {
   payload.WithDouble("dataStorageSizeInTBs", m_dataStorageSizeInTBs);

  }

  if(m_dbNodeStorageSizeInGBsHasBeenSet)
  {
   payload.WithInteger("dbNodeStorageSizeInGBs", m_dbNodeStorageSizeInGBs);

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

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_isLocalBackupEnabledHasBeenSet)
  {
   payload.WithBool("isLocalBackupEnabled", m_isLocalBackupEnabled);

  }

  if(m_isSparseDiskgroupEnabledHasBeenSet)
  {
   payload.WithBool("isSparseDiskgroupEnabled", m_isSparseDiskgroupEnabled);

  }

  if(m_licenseModelHasBeenSet)
  {
   payload.WithString("licenseModel", LicenseModelMapper::GetNameForLicenseModel(m_licenseModel));
  }

  if(m_memorySizeInGBsHasBeenSet)
  {
   payload.WithInteger("memorySizeInGBs", m_memorySizeInGBs);

  }

  if(m_systemVersionHasBeenSet)
  {
   payload.WithString("systemVersion", m_systemVersion);

  }

  if(m_timeZoneHasBeenSet)
  {
   payload.WithString("timeZone", m_timeZone);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_scanListenerPortTcpHasBeenSet)
  {
   payload.WithInteger("scanListenerPortTcp", m_scanListenerPortTcp);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateCloudVmClusterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.CreateCloudVmCluster"));
  return headers;

}




