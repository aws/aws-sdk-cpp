/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/CreateExadbVmClusterRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateExadbVmClusterRequest::SerializePayload() const {
  JsonValue payload;

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_enabledEcpuCountHasBeenSet) {
    payload.WithInteger("enabledEcpuCount", m_enabledEcpuCount);
  }

  if (m_exascaleDbStorageVaultIdHasBeenSet) {
    payload.WithString("exascaleDbStorageVaultId", m_exascaleDbStorageVaultId);
  }

  if (m_gridImageIdHasBeenSet) {
    payload.WithString("gridImageId", m_gridImageId);
  }

  if (m_hostnameHasBeenSet) {
    payload.WithString("hostname", m_hostname);
  }

  if (m_nodeCountHasBeenSet) {
    payload.WithInteger("nodeCount", m_nodeCount);
  }

  if (m_odbNetworkIdHasBeenSet) {
    payload.WithString("odbNetworkId", m_odbNetworkId);
  }

  if (m_shapeHasBeenSet) {
    payload.WithString("shape", m_shape);
  }

  if (m_sshPublicKeysHasBeenSet) {
    Aws::Utils::Array<JsonValue> sshPublicKeysJsonList(m_sshPublicKeys.size());
    for (unsigned sshPublicKeysIndex = 0; sshPublicKeysIndex < sshPublicKeysJsonList.GetLength(); ++sshPublicKeysIndex) {
      sshPublicKeysJsonList[sshPublicKeysIndex].AsString(m_sshPublicKeys[sshPublicKeysIndex]);
    }
    payload.WithArray("sshPublicKeys", std::move(sshPublicKeysJsonList));
  }

  if (m_totalEcpuCountHasBeenSet) {
    payload.WithInteger("totalEcpuCount", m_totalEcpuCount);
  }

  if (m_vmFileSystemStorageTotalSizeInGBsHasBeenSet) {
    payload.WithInteger("vmFileSystemStorageTotalSizeInGBs", m_vmFileSystemStorageTotalSizeInGBs);
  }

  if (m_clusterNameHasBeenSet) {
    payload.WithString("clusterName", m_clusterName);
  }

  if (m_dataCollectionOptionsHasBeenSet) {
    payload.WithObject("dataCollectionOptions", m_dataCollectionOptions.Jsonize());
  }

  if (m_licenseModelHasBeenSet) {
    payload.WithString("licenseModel", LicenseModelMapper::GetNameForLicenseModel(m_licenseModel));
  }

  if (m_scanListenerPortTcpHasBeenSet) {
    payload.WithInteger("scanListenerPortTcp", m_scanListenerPortTcp);
  }

  if (m_scanListenerPortTcpSslHasBeenSet) {
    payload.WithInteger("scanListenerPortTcpSsl", m_scanListenerPortTcpSsl);
  }

  if (m_shapeAttributeHasBeenSet) {
    payload.WithString("shapeAttribute", ShapeAttributeMapper::GetNameForShapeAttribute(m_shapeAttribute));
  }

  if (m_systemVersionHasBeenSet) {
    payload.WithString("systemVersion", m_systemVersion);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_timeZoneHasBeenSet) {
    payload.WithString("timeZone", m_timeZone);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateExadbVmClusterRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.CreateExadbVmCluster"));
  return headers;
}
