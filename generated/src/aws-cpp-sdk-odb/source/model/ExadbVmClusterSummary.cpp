/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/ExadbVmClusterSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace odb {
namespace Model {

ExadbVmClusterSummary::ExadbVmClusterSummary(JsonView jsonValue) { *this = jsonValue; }

ExadbVmClusterSummary& ExadbVmClusterSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("exadbVmClusterId")) {
    m_exadbVmClusterId = jsonValue.GetString("exadbVmClusterId");
    m_exadbVmClusterIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clusterName")) {
    m_clusterName = jsonValue.GetString("clusterName");
    m_clusterNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataCollectionOptions")) {
    m_dataCollectionOptions = jsonValue.GetObject("dataCollectionOptions");
    m_dataCollectionOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("domain")) {
    m_domain = jsonValue.GetString("domain");
    m_domainHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enabledEcpuCount")) {
    m_enabledEcpuCount = jsonValue.GetInteger("enabledEcpuCount");
    m_enabledEcpuCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exadbVmClusterArn")) {
    m_exadbVmClusterArn = jsonValue.GetString("exadbVmClusterArn");
    m_exadbVmClusterArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exascaleDbStorageVaultArn")) {
    m_exascaleDbStorageVaultArn = jsonValue.GetString("exascaleDbStorageVaultArn");
    m_exascaleDbStorageVaultArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exascaleDbStorageVaultId")) {
    m_exascaleDbStorageVaultId = jsonValue.GetString("exascaleDbStorageVaultId");
    m_exascaleDbStorageVaultIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("giVersion")) {
    m_giVersion = jsonValue.GetString("giVersion");
    m_giVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("gridImageId")) {
    m_gridImageId = jsonValue.GetString("gridImageId");
    m_gridImageIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("gridImageType")) {
    m_gridImageType = GridImageTypeMapper::GetGridImageTypeForName(jsonValue.GetString("gridImageType"));
    m_gridImageTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hostname")) {
    m_hostname = jsonValue.GetString("hostname");
    m_hostnameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("iamRoles")) {
    Aws::Utils::Array<JsonView> iamRolesJsonList = jsonValue.GetArray("iamRoles");
    for (unsigned iamRolesIndex = 0; iamRolesIndex < iamRolesJsonList.GetLength(); ++iamRolesIndex) {
      m_iamRoles.push_back(iamRolesJsonList[iamRolesIndex].AsObject());
    }
    m_iamRolesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("iormConfigCache")) {
    m_iormConfigCache = jsonValue.GetObject("iormConfigCache");
    m_iormConfigCacheHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdateHistoryEntryId")) {
    m_lastUpdateHistoryEntryId = jsonValue.GetString("lastUpdateHistoryEntryId");
    m_lastUpdateHistoryEntryIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("licenseModel")) {
    m_licenseModel = LicenseModelMapper::GetLicenseModelForName(jsonValue.GetString("licenseModel"));
    m_licenseModelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("listenerPort")) {
    m_listenerPort = jsonValue.GetInteger("listenerPort");
    m_listenerPortHasBeenSet = true;
  }
  if (jsonValue.ValueExists("memorySizeInGBs")) {
    m_memorySizeInGBs = jsonValue.GetInteger("memorySizeInGBs");
    m_memorySizeInGBsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nodeCount")) {
    m_nodeCount = jsonValue.GetInteger("nodeCount");
    m_nodeCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ocid")) {
    m_ocid = jsonValue.GetString("ocid");
    m_ocidHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ociResourceAnchorName")) {
    m_ociResourceAnchorName = jsonValue.GetString("ociResourceAnchorName");
    m_ociResourceAnchorNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ociUrl")) {
    m_ociUrl = jsonValue.GetString("ociUrl");
    m_ociUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("odbNetworkArn")) {
    m_odbNetworkArn = jsonValue.GetString("odbNetworkArn");
    m_odbNetworkArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("odbNetworkId")) {
    m_odbNetworkId = jsonValue.GetString("odbNetworkId");
    m_odbNetworkIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("percentProgress")) {
    m_percentProgress = jsonValue.GetDouble("percentProgress");
    m_percentProgressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scanDnsName")) {
    m_scanDnsName = jsonValue.GetString("scanDnsName");
    m_scanDnsNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scanDnsRecordId")) {
    m_scanDnsRecordId = jsonValue.GetString("scanDnsRecordId");
    m_scanDnsRecordIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scanIpIds")) {
    Aws::Utils::Array<JsonView> scanIpIdsJsonList = jsonValue.GetArray("scanIpIds");
    for (unsigned scanIpIdsIndex = 0; scanIpIdsIndex < scanIpIdsJsonList.GetLength(); ++scanIpIdsIndex) {
      m_scanIpIds.push_back(scanIpIdsJsonList[scanIpIdsIndex].AsString());
    }
    m_scanIpIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scanListenerPortTcp")) {
    m_scanListenerPortTcp = jsonValue.GetInteger("scanListenerPortTcp");
    m_scanListenerPortTcpHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scanListenerPortTcpSsl")) {
    m_scanListenerPortTcpSsl = jsonValue.GetInteger("scanListenerPortTcpSsl");
    m_scanListenerPortTcpSslHasBeenSet = true;
  }
  if (jsonValue.ValueExists("shape")) {
    m_shape = jsonValue.GetString("shape");
    m_shapeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("shapeAttribute")) {
    m_shapeAttribute = ShapeAttributeMapper::GetShapeAttributeForName(jsonValue.GetString("shapeAttribute"));
    m_shapeAttributeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("snapshotFileSystemStorage")) {
    m_snapshotFileSystemStorage = jsonValue.GetObject("snapshotFileSystemStorage");
    m_snapshotFileSystemStorageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sshPublicKeys")) {
    Aws::Utils::Array<JsonView> sshPublicKeysJsonList = jsonValue.GetArray("sshPublicKeys");
    for (unsigned sshPublicKeysIndex = 0; sshPublicKeysIndex < sshPublicKeysJsonList.GetLength(); ++sshPublicKeysIndex) {
      m_sshPublicKeys.push_back(sshPublicKeysJsonList[sshPublicKeysIndex].AsString());
    }
    m_sshPublicKeysHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ResourceStatusMapper::GetResourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("systemVersion")) {
    m_systemVersion = jsonValue.GetString("systemVersion");
    m_systemVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeZone")) {
    m_timeZone = jsonValue.GetString("timeZone");
    m_timeZoneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalEcpuCount")) {
    m_totalEcpuCount = jsonValue.GetInteger("totalEcpuCount");
    m_totalEcpuCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalFileSystemStorage")) {
    m_totalFileSystemStorage = jsonValue.GetObject("totalFileSystemStorage");
    m_totalFileSystemStorageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vipIds")) {
    Aws::Utils::Array<JsonView> vipIdsJsonList = jsonValue.GetArray("vipIds");
    for (unsigned vipIdsIndex = 0; vipIdsIndex < vipIdsJsonList.GetLength(); ++vipIdsIndex) {
      m_vipIds.push_back(vipIdsJsonList[vipIdsIndex].AsString());
    }
    m_vipIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vmFileSystemStorage")) {
    m_vmFileSystemStorage = jsonValue.GetObject("vmFileSystemStorage");
    m_vmFileSystemStorageHasBeenSet = true;
  }
  return *this;
}

JsonValue ExadbVmClusterSummary::Jsonize() const {
  JsonValue payload;

  if (m_exadbVmClusterIdHasBeenSet) {
    payload.WithString("exadbVmClusterId", m_exadbVmClusterId);
  }

  if (m_clusterNameHasBeenSet) {
    payload.WithString("clusterName", m_clusterName);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_dataCollectionOptionsHasBeenSet) {
    payload.WithObject("dataCollectionOptions", m_dataCollectionOptions.Jsonize());
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_domainHasBeenSet) {
    payload.WithString("domain", m_domain);
  }

  if (m_enabledEcpuCountHasBeenSet) {
    payload.WithInteger("enabledEcpuCount", m_enabledEcpuCount);
  }

  if (m_exadbVmClusterArnHasBeenSet) {
    payload.WithString("exadbVmClusterArn", m_exadbVmClusterArn);
  }

  if (m_exascaleDbStorageVaultArnHasBeenSet) {
    payload.WithString("exascaleDbStorageVaultArn", m_exascaleDbStorageVaultArn);
  }

  if (m_exascaleDbStorageVaultIdHasBeenSet) {
    payload.WithString("exascaleDbStorageVaultId", m_exascaleDbStorageVaultId);
  }

  if (m_giVersionHasBeenSet) {
    payload.WithString("giVersion", m_giVersion);
  }

  if (m_gridImageIdHasBeenSet) {
    payload.WithString("gridImageId", m_gridImageId);
  }

  if (m_gridImageTypeHasBeenSet) {
    payload.WithString("gridImageType", GridImageTypeMapper::GetNameForGridImageType(m_gridImageType));
  }

  if (m_hostnameHasBeenSet) {
    payload.WithString("hostname", m_hostname);
  }

  if (m_iamRolesHasBeenSet) {
    Aws::Utils::Array<JsonValue> iamRolesJsonList(m_iamRoles.size());
    for (unsigned iamRolesIndex = 0; iamRolesIndex < iamRolesJsonList.GetLength(); ++iamRolesIndex) {
      iamRolesJsonList[iamRolesIndex].AsObject(m_iamRoles[iamRolesIndex].Jsonize());
    }
    payload.WithArray("iamRoles", std::move(iamRolesJsonList));
  }

  if (m_iormConfigCacheHasBeenSet) {
    payload.WithObject("iormConfigCache", m_iormConfigCache.Jsonize());
  }

  if (m_lastUpdateHistoryEntryIdHasBeenSet) {
    payload.WithString("lastUpdateHistoryEntryId", m_lastUpdateHistoryEntryId);
  }

  if (m_licenseModelHasBeenSet) {
    payload.WithString("licenseModel", LicenseModelMapper::GetNameForLicenseModel(m_licenseModel));
  }

  if (m_listenerPortHasBeenSet) {
    payload.WithInteger("listenerPort", m_listenerPort);
  }

  if (m_memorySizeInGBsHasBeenSet) {
    payload.WithInteger("memorySizeInGBs", m_memorySizeInGBs);
  }

  if (m_nodeCountHasBeenSet) {
    payload.WithInteger("nodeCount", m_nodeCount);
  }

  if (m_ocidHasBeenSet) {
    payload.WithString("ocid", m_ocid);
  }

  if (m_ociResourceAnchorNameHasBeenSet) {
    payload.WithString("ociResourceAnchorName", m_ociResourceAnchorName);
  }

  if (m_ociUrlHasBeenSet) {
    payload.WithString("ociUrl", m_ociUrl);
  }

  if (m_odbNetworkArnHasBeenSet) {
    payload.WithString("odbNetworkArn", m_odbNetworkArn);
  }

  if (m_odbNetworkIdHasBeenSet) {
    payload.WithString("odbNetworkId", m_odbNetworkId);
  }

  if (m_percentProgressHasBeenSet) {
    payload.WithDouble("percentProgress", m_percentProgress);
  }

  if (m_scanDnsNameHasBeenSet) {
    payload.WithString("scanDnsName", m_scanDnsName);
  }

  if (m_scanDnsRecordIdHasBeenSet) {
    payload.WithString("scanDnsRecordId", m_scanDnsRecordId);
  }

  if (m_scanIpIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> scanIpIdsJsonList(m_scanIpIds.size());
    for (unsigned scanIpIdsIndex = 0; scanIpIdsIndex < scanIpIdsJsonList.GetLength(); ++scanIpIdsIndex) {
      scanIpIdsJsonList[scanIpIdsIndex].AsString(m_scanIpIds[scanIpIdsIndex]);
    }
    payload.WithArray("scanIpIds", std::move(scanIpIdsJsonList));
  }

  if (m_scanListenerPortTcpHasBeenSet) {
    payload.WithInteger("scanListenerPortTcp", m_scanListenerPortTcp);
  }

  if (m_scanListenerPortTcpSslHasBeenSet) {
    payload.WithInteger("scanListenerPortTcpSsl", m_scanListenerPortTcpSsl);
  }

  if (m_shapeHasBeenSet) {
    payload.WithString("shape", m_shape);
  }

  if (m_shapeAttributeHasBeenSet) {
    payload.WithString("shapeAttribute", ShapeAttributeMapper::GetNameForShapeAttribute(m_shapeAttribute));
  }

  if (m_snapshotFileSystemStorageHasBeenSet) {
    payload.WithObject("snapshotFileSystemStorage", m_snapshotFileSystemStorage.Jsonize());
  }

  if (m_sshPublicKeysHasBeenSet) {
    Aws::Utils::Array<JsonValue> sshPublicKeysJsonList(m_sshPublicKeys.size());
    for (unsigned sshPublicKeysIndex = 0; sshPublicKeysIndex < sshPublicKeysJsonList.GetLength(); ++sshPublicKeysIndex) {
      sshPublicKeysJsonList[sshPublicKeysIndex].AsString(m_sshPublicKeys[sshPublicKeysIndex]);
    }
    payload.WithArray("sshPublicKeys", std::move(sshPublicKeysJsonList));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ResourceStatusMapper::GetNameForResourceStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  if (m_systemVersionHasBeenSet) {
    payload.WithString("systemVersion", m_systemVersion);
  }

  if (m_timeZoneHasBeenSet) {
    payload.WithString("timeZone", m_timeZone);
  }

  if (m_totalEcpuCountHasBeenSet) {
    payload.WithInteger("totalEcpuCount", m_totalEcpuCount);
  }

  if (m_totalFileSystemStorageHasBeenSet) {
    payload.WithObject("totalFileSystemStorage", m_totalFileSystemStorage.Jsonize());
  }

  if (m_vipIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> vipIdsJsonList(m_vipIds.size());
    for (unsigned vipIdsIndex = 0; vipIdsIndex < vipIdsJsonList.GetLength(); ++vipIdsIndex) {
      vipIdsJsonList[vipIdsIndex].AsString(m_vipIds[vipIdsIndex]);
    }
    payload.WithArray("vipIds", std::move(vipIdsJsonList));
  }

  if (m_vmFileSystemStorageHasBeenSet) {
    payload.WithObject("vmFileSystemStorage", m_vmFileSystemStorage.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace odb
}  // namespace Aws
