/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/UpdateCloudVmClusterRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateCloudVmClusterRequest::SerializePayload() const {
  JsonValue payload;

  if (m_cloudVmClusterIdHasBeenSet) {
    payload.WithString("cloudVmClusterId", m_cloudVmClusterId);
  }

  if (m_cpuCoreCountHasBeenSet) {
    payload.WithInteger("cpuCoreCount", m_cpuCoreCount);
  }

  if (m_dataCollectionOptionsHasBeenSet) {
    payload.WithObject("dataCollectionOptions", m_dataCollectionOptions.Jsonize());
  }

  if (m_dataStorageSizeInTBsHasBeenSet) {
    payload.WithDouble("dataStorageSizeInTBs", m_dataStorageSizeInTBs);
  }

  if (m_dbNodeStorageSizeInGBsHasBeenSet) {
    payload.WithInteger("dbNodeStorageSizeInGBs", m_dbNodeStorageSizeInGBs);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_sshPublicKeysHasBeenSet) {
    Aws::Utils::Array<JsonValue> sshPublicKeysJsonList(m_sshPublicKeys.size());
    for (unsigned sshPublicKeysIndex = 0; sshPublicKeysIndex < sshPublicKeysJsonList.GetLength(); ++sshPublicKeysIndex) {
      sshPublicKeysJsonList[sshPublicKeysIndex].AsString(m_sshPublicKeys[sshPublicKeysIndex]);
    }
    payload.WithArray("sshPublicKeys", std::move(sshPublicKeysJsonList));
  }

  if (m_licenseModelHasBeenSet) {
    payload.WithString("licenseModel", LicenseModelMapper::GetNameForLicenseModel(m_licenseModel));
  }

  if (m_memorySizeInGBsHasBeenSet) {
    payload.WithInteger("memorySizeInGBs", m_memorySizeInGBs);
  }

  if (m_storageSizeInGBsHasBeenSet) {
    payload.WithInteger("storageSizeInGBs", m_storageSizeInGBs);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateCloudVmClusterRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.UpdateCloudVmCluster"));
  return headers;
}
