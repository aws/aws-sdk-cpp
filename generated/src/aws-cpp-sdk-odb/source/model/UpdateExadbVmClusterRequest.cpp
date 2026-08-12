/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/UpdateExadbVmClusterRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateExadbVmClusterRequest::SerializePayload() const {
  JsonValue payload;

  if (m_exadbVmClusterIdHasBeenSet) {
    payload.WithString("exadbVmClusterId", m_exadbVmClusterId);
  }

  if (m_dataCollectionOptionsHasBeenSet) {
    payload.WithObject("dataCollectionOptions", m_dataCollectionOptions.Jsonize());
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_enabledEcpuCountHasBeenSet) {
    payload.WithInteger("enabledEcpuCount", m_enabledEcpuCount);
  }

  if (m_gridImageIdHasBeenSet) {
    payload.WithString("gridImageId", m_gridImageId);
  }

  if (m_licenseModelHasBeenSet) {
    payload.WithString("licenseModel", LicenseModelMapper::GetNameForLicenseModel(m_licenseModel));
  }

  if (m_sshPublicKeysHasBeenSet) {
    Aws::Utils::Array<JsonValue> sshPublicKeysJsonList(m_sshPublicKeys.size());
    for (unsigned sshPublicKeysIndex = 0; sshPublicKeysIndex < sshPublicKeysJsonList.GetLength(); ++sshPublicKeysIndex) {
      sshPublicKeysJsonList[sshPublicKeysIndex].AsString(m_sshPublicKeys[sshPublicKeysIndex]);
    }
    payload.WithArray("sshPublicKeys", std::move(sshPublicKeysJsonList));
  }

  if (m_systemVersionHasBeenSet) {
    payload.WithString("systemVersion", m_systemVersion);
  }

  if (m_totalEcpuCountHasBeenSet) {
    payload.WithInteger("totalEcpuCount", m_totalEcpuCount);
  }

  if (m_updateActionHasBeenSet) {
    payload.WithString("updateAction", UpdateActionMapper::GetNameForUpdateAction(m_updateAction));
  }

  if (m_vmFileSystemStorageTotalSizeInGBsHasBeenSet) {
    payload.WithInteger("vmFileSystemStorageTotalSizeInGBs", m_vmFileSystemStorageTotalSizeInGBs);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateExadbVmClusterRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.UpdateExadbVmCluster"));
  return headers;
}
