/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/timestream-influxdb/model/RestoreFromDbBackupRequest.h>

#include <utility>

using namespace Aws::TimestreamInfluxDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RestoreFromDbBackupRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_dbBackupIdHasBeenSet) {
    payload.WithString("dbBackupId", m_dbBackupId);
  }

  if (m_restoreToTimeHasBeenSet) {
    payload.WithString("restoreToTime", m_restoreToTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_restoreModeHasBeenSet) {
    payload.WithString("restoreMode", RestoreModeMapper::GetNameForRestoreMode(m_restoreMode));
  }

  if (m_vpcSubnetIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> vpcSubnetIdsJsonList(m_vpcSubnetIds.size());
    for (unsigned vpcSubnetIdsIndex = 0; vpcSubnetIdsIndex < vpcSubnetIdsJsonList.GetLength(); ++vpcSubnetIdsIndex) {
      vpcSubnetIdsJsonList[vpcSubnetIdsIndex].AsString(m_vpcSubnetIds[vpcSubnetIdsIndex]);
    }
    payload.WithArray("vpcSubnetIds", std::move(vpcSubnetIdsJsonList));
  }

  if (m_vpcSecurityGroupIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> vpcSecurityGroupIdsJsonList(m_vpcSecurityGroupIds.size());
    for (unsigned vpcSecurityGroupIdsIndex = 0; vpcSecurityGroupIdsIndex < vpcSecurityGroupIdsJsonList.GetLength();
         ++vpcSecurityGroupIdsIndex) {
      vpcSecurityGroupIdsJsonList[vpcSecurityGroupIdsIndex].AsString(m_vpcSecurityGroupIds[vpcSecurityGroupIdsIndex]);
    }
    payload.WithArray("vpcSecurityGroupIds", std::move(vpcSecurityGroupIdsJsonList));
  }

  if (m_publiclyAccessibleHasBeenSet) {
    payload.WithBool("publiclyAccessible", m_publiclyAccessible);
  }

  if (m_logDeliveryConfigurationHasBeenSet) {
    payload.WithObject("logDeliveryConfiguration", m_logDeliveryConfiguration.Jsonize());
  }

  if (m_maintenanceScheduleHasBeenSet) {
    payload.WithObject("maintenanceSchedule", m_maintenanceSchedule.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_portHasBeenSet) {
    payload.WithInteger("port", m_port);
  }

  if (m_networkTypeHasBeenSet) {
    payload.WithString("networkType", NetworkTypeMapper::GetNameForNetworkType(m_networkType));
  }

  if (m_deploymentTypeHasBeenSet) {
    payload.WithString("deploymentType", ResourceDeploymentTypeMapper::GetNameForResourceDeploymentType(m_deploymentType));
  }

  if (m_dbBackupConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> dbBackupConfigurationsJsonList(m_dbBackupConfigurations.size());
    for (unsigned dbBackupConfigurationsIndex = 0; dbBackupConfigurationsIndex < dbBackupConfigurationsJsonList.GetLength();
         ++dbBackupConfigurationsIndex) {
      dbBackupConfigurationsJsonList[dbBackupConfigurationsIndex].AsObject(m_dbBackupConfigurations[dbBackupConfigurationsIndex].Jsonize());
    }
    payload.WithArray("dbBackupConfigurations", std::move(dbBackupConfigurationsJsonList));
  }

  if (m_kmsKeyIdHasBeenSet) {
    payload.WithString("kmsKeyId", m_kmsKeyId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RestoreFromDbBackupRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonTimestreamInfluxDB.RestoreFromDbBackup"));
  return headers;
}
