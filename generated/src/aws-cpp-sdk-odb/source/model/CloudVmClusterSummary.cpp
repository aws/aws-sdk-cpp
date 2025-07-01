/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/CloudVmClusterSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace odb
{
namespace Model
{

CloudVmClusterSummary::CloudVmClusterSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

CloudVmClusterSummary& CloudVmClusterSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudVmClusterId"))
  {
    m_cloudVmClusterId = jsonValue.GetString("cloudVmClusterId");
    m_cloudVmClusterIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cloudVmClusterArn"))
  {
    m_cloudVmClusterArn = jsonValue.GetString("cloudVmClusterArn");
    m_cloudVmClusterArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cloudExadataInfrastructureId"))
  {
    m_cloudExadataInfrastructureId = jsonValue.GetString("cloudExadataInfrastructureId");
    m_cloudExadataInfrastructureIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");
    m_clusterNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cpuCoreCount"))
  {
    m_cpuCoreCount = jsonValue.GetInteger("cpuCoreCount");
    m_cpuCoreCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataCollectionOptions"))
  {
    m_dataCollectionOptions = jsonValue.GetObject("dataCollectionOptions");
    m_dataCollectionOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataStorageSizeInTBs"))
  {
    m_dataStorageSizeInTBs = jsonValue.GetDouble("dataStorageSizeInTBs");
    m_dataStorageSizeInTBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dbNodeStorageSizeInGBs"))
  {
    m_dbNodeStorageSizeInGBs = jsonValue.GetInteger("dbNodeStorageSizeInGBs");
    m_dbNodeStorageSizeInGBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dbServers"))
  {
    Aws::Utils::Array<JsonView> dbServersJsonList = jsonValue.GetArray("dbServers");
    for(unsigned dbServersIndex = 0; dbServersIndex < dbServersJsonList.GetLength(); ++dbServersIndex)
    {
      m_dbServers.push_back(dbServersJsonList[dbServersIndex].AsString());
    }
    m_dbServersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("diskRedundancy"))
  {
    m_diskRedundancy = DiskRedundancyMapper::GetDiskRedundancyForName(jsonValue.GetString("diskRedundancy"));
    m_diskRedundancyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("giVersion"))
  {
    m_giVersion = jsonValue.GetString("giVersion");
    m_giVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hostname"))
  {
    m_hostname = jsonValue.GetString("hostname");
    m_hostnameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("iormConfigCache"))
  {
    m_iormConfigCache = jsonValue.GetObject("iormConfigCache");
    m_iormConfigCacheHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isLocalBackupEnabled"))
  {
    m_isLocalBackupEnabled = jsonValue.GetBool("isLocalBackupEnabled");
    m_isLocalBackupEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isSparseDiskgroupEnabled"))
  {
    m_isSparseDiskgroupEnabled = jsonValue.GetBool("isSparseDiskgroupEnabled");
    m_isSparseDiskgroupEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdateHistoryEntryId"))
  {
    m_lastUpdateHistoryEntryId = jsonValue.GetString("lastUpdateHistoryEntryId");
    m_lastUpdateHistoryEntryIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("licenseModel"))
  {
    m_licenseModel = LicenseModelMapper::GetLicenseModelForName(jsonValue.GetString("licenseModel"));
    m_licenseModelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("listenerPort"))
  {
    m_listenerPort = jsonValue.GetInteger("listenerPort");
    m_listenerPortHasBeenSet = true;
  }
  if(jsonValue.ValueExists("memorySizeInGBs"))
  {
    m_memorySizeInGBs = jsonValue.GetInteger("memorySizeInGBs");
    m_memorySizeInGBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nodeCount"))
  {
    m_nodeCount = jsonValue.GetInteger("nodeCount");
    m_nodeCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ocid"))
  {
    m_ocid = jsonValue.GetString("ocid");
    m_ocidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ociResourceAnchorName"))
  {
    m_ociResourceAnchorName = jsonValue.GetString("ociResourceAnchorName");
    m_ociResourceAnchorNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ociUrl"))
  {
    m_ociUrl = jsonValue.GetString("ociUrl");
    m_ociUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domain"))
  {
    m_domain = jsonValue.GetString("domain");
    m_domainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scanDnsName"))
  {
    m_scanDnsName = jsonValue.GetString("scanDnsName");
    m_scanDnsNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scanDnsRecordId"))
  {
    m_scanDnsRecordId = jsonValue.GetString("scanDnsRecordId");
    m_scanDnsRecordIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scanIpIds"))
  {
    Aws::Utils::Array<JsonView> scanIpIdsJsonList = jsonValue.GetArray("scanIpIds");
    for(unsigned scanIpIdsIndex = 0; scanIpIdsIndex < scanIpIdsJsonList.GetLength(); ++scanIpIdsIndex)
    {
      m_scanIpIds.push_back(scanIpIdsJsonList[scanIpIdsIndex].AsString());
    }
    m_scanIpIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shape"))
  {
    m_shape = jsonValue.GetString("shape");
    m_shapeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sshPublicKeys"))
  {
    Aws::Utils::Array<JsonView> sshPublicKeysJsonList = jsonValue.GetArray("sshPublicKeys");
    for(unsigned sshPublicKeysIndex = 0; sshPublicKeysIndex < sshPublicKeysJsonList.GetLength(); ++sshPublicKeysIndex)
    {
      m_sshPublicKeys.push_back(sshPublicKeysJsonList[sshPublicKeysIndex].AsString());
    }
    m_sshPublicKeysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageSizeInGBs"))
  {
    m_storageSizeInGBs = jsonValue.GetInteger("storageSizeInGBs");
    m_storageSizeInGBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("systemVersion"))
  {
    m_systemVersion = jsonValue.GetString("systemVersion");
    m_systemVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timeZone"))
  {
    m_timeZone = jsonValue.GetString("timeZone");
    m_timeZoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vipIds"))
  {
    Aws::Utils::Array<JsonView> vipIdsJsonList = jsonValue.GetArray("vipIds");
    for(unsigned vipIdsIndex = 0; vipIdsIndex < vipIdsJsonList.GetLength(); ++vipIdsIndex)
    {
      m_vipIds.push_back(vipIdsJsonList[vipIdsIndex].AsString());
    }
    m_vipIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("odbNetworkId"))
  {
    m_odbNetworkId = jsonValue.GetString("odbNetworkId");
    m_odbNetworkIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("percentProgress"))
  {
    m_percentProgress = jsonValue.GetDouble("percentProgress");
    m_percentProgressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computeModel"))
  {
    m_computeModel = ComputeModelMapper::GetComputeModelForName(jsonValue.GetString("computeModel"));
    m_computeModelHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudVmClusterSummary::Jsonize() const
{
  JsonValue payload;

  if(m_cloudVmClusterIdHasBeenSet)
  {
   payload.WithString("cloudVmClusterId", m_cloudVmClusterId);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ResourceStatusMapper::GetNameForResourceStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_cloudVmClusterArnHasBeenSet)
  {
   payload.WithString("cloudVmClusterArn", m_cloudVmClusterArn);

  }

  if(m_cloudExadataInfrastructureIdHasBeenSet)
  {
   payload.WithString("cloudExadataInfrastructureId", m_cloudExadataInfrastructureId);

  }

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  if(m_cpuCoreCountHasBeenSet)
  {
   payload.WithInteger("cpuCoreCount", m_cpuCoreCount);

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

  if(m_diskRedundancyHasBeenSet)
  {
   payload.WithString("diskRedundancy", DiskRedundancyMapper::GetNameForDiskRedundancy(m_diskRedundancy));
  }

  if(m_giVersionHasBeenSet)
  {
   payload.WithString("giVersion", m_giVersion);

  }

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("hostname", m_hostname);

  }

  if(m_iormConfigCacheHasBeenSet)
  {
   payload.WithObject("iormConfigCache", m_iormConfigCache.Jsonize());

  }

  if(m_isLocalBackupEnabledHasBeenSet)
  {
   payload.WithBool("isLocalBackupEnabled", m_isLocalBackupEnabled);

  }

  if(m_isSparseDiskgroupEnabledHasBeenSet)
  {
   payload.WithBool("isSparseDiskgroupEnabled", m_isSparseDiskgroupEnabled);

  }

  if(m_lastUpdateHistoryEntryIdHasBeenSet)
  {
   payload.WithString("lastUpdateHistoryEntryId", m_lastUpdateHistoryEntryId);

  }

  if(m_licenseModelHasBeenSet)
  {
   payload.WithString("licenseModel", LicenseModelMapper::GetNameForLicenseModel(m_licenseModel));
  }

  if(m_listenerPortHasBeenSet)
  {
   payload.WithInteger("listenerPort", m_listenerPort);

  }

  if(m_memorySizeInGBsHasBeenSet)
  {
   payload.WithInteger("memorySizeInGBs", m_memorySizeInGBs);

  }

  if(m_nodeCountHasBeenSet)
  {
   payload.WithInteger("nodeCount", m_nodeCount);

  }

  if(m_ocidHasBeenSet)
  {
   payload.WithString("ocid", m_ocid);

  }

  if(m_ociResourceAnchorNameHasBeenSet)
  {
   payload.WithString("ociResourceAnchorName", m_ociResourceAnchorName);

  }

  if(m_ociUrlHasBeenSet)
  {
   payload.WithString("ociUrl", m_ociUrl);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", m_domain);

  }

  if(m_scanDnsNameHasBeenSet)
  {
   payload.WithString("scanDnsName", m_scanDnsName);

  }

  if(m_scanDnsRecordIdHasBeenSet)
  {
   payload.WithString("scanDnsRecordId", m_scanDnsRecordId);

  }

  if(m_scanIpIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scanIpIdsJsonList(m_scanIpIds.size());
   for(unsigned scanIpIdsIndex = 0; scanIpIdsIndex < scanIpIdsJsonList.GetLength(); ++scanIpIdsIndex)
   {
     scanIpIdsJsonList[scanIpIdsIndex].AsString(m_scanIpIds[scanIpIdsIndex]);
   }
   payload.WithArray("scanIpIds", std::move(scanIpIdsJsonList));

  }

  if(m_shapeHasBeenSet)
  {
   payload.WithString("shape", m_shape);

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

  if(m_storageSizeInGBsHasBeenSet)
  {
   payload.WithInteger("storageSizeInGBs", m_storageSizeInGBs);

  }

  if(m_systemVersionHasBeenSet)
  {
   payload.WithString("systemVersion", m_systemVersion);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_timeZoneHasBeenSet)
  {
   payload.WithString("timeZone", m_timeZone);

  }

  if(m_vipIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vipIdsJsonList(m_vipIds.size());
   for(unsigned vipIdsIndex = 0; vipIdsIndex < vipIdsJsonList.GetLength(); ++vipIdsIndex)
   {
     vipIdsJsonList[vipIdsIndex].AsString(m_vipIds[vipIdsIndex]);
   }
   payload.WithArray("vipIds", std::move(vipIdsJsonList));

  }

  if(m_odbNetworkIdHasBeenSet)
  {
   payload.WithString("odbNetworkId", m_odbNetworkId);

  }

  if(m_percentProgressHasBeenSet)
  {
   payload.WithDouble("percentProgress", m_percentProgress);

  }

  if(m_computeModelHasBeenSet)
  {
   payload.WithString("computeModel", ComputeModelMapper::GetNameForComputeModel(m_computeModel));
  }

  return payload;
}

} // namespace Model
} // namespace odb
} // namespace Aws
