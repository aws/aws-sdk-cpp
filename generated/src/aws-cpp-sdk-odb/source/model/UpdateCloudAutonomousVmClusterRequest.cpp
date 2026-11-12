/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/UpdateCloudAutonomousVmClusterRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateCloudAutonomousVmClusterRequest::SerializePayload() const {
  JsonValue payload;

  if (m_cloudAutonomousVmClusterIdHasBeenSet) {
    payload.WithString("cloudAutonomousVmClusterId", m_cloudAutonomousVmClusterId);
  }

  if (m_autonomousDataStorageSizeInTBsHasBeenSet) {
    payload.WithDouble("autonomousDataStorageSizeInTBs", m_autonomousDataStorageSizeInTBs);
  }

  if (m_cpuCoreCountPerNodeHasBeenSet) {
    payload.WithInteger("cpuCoreCountPerNode", m_cpuCoreCountPerNode);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_licenseModelHasBeenSet) {
    payload.WithString("licenseModel", LicenseModelMapper::GetNameForLicenseModel(m_licenseModel));
  }

  if (m_maintenanceWindowHasBeenSet) {
    payload.WithObject("maintenanceWindow", m_maintenanceWindow.Jsonize());
  }

  if (m_totalContainerDatabasesHasBeenSet) {
    payload.WithInteger("totalContainerDatabases", m_totalContainerDatabases);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateCloudAutonomousVmClusterRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.UpdateCloudAutonomousVmCluster"));
  return headers;
}
