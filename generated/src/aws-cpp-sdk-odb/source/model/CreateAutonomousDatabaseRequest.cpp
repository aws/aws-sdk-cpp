/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/CreateAutonomousDatabaseRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAutonomousDatabaseRequest::SerializePayload() const {
  JsonValue payload;

  if (m_odbNetworkIdHasBeenSet) {
    payload.WithString("odbNetworkId", m_odbNetworkId);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_dbNameHasBeenSet) {
    payload.WithString("dbName", m_dbName);
  }

  if (m_adminPasswordHasBeenSet) {
    payload.WithString("adminPassword", m_adminPassword);
  }

  if (m_computeCountHasBeenSet) {
    payload.WithDouble("computeCount", m_computeCount);
  }

  if (m_dataStorageSizeInTBsHasBeenSet) {
    payload.WithInteger("dataStorageSizeInTBs", m_dataStorageSizeInTBs);
  }

  if (m_dataStorageSizeInGBsHasBeenSet) {
    payload.WithInteger("dataStorageSizeInGBs", m_dataStorageSizeInGBs);
  }

  if (m_dbWorkloadHasBeenSet) {
    payload.WithString("dbWorkload", DbWorkloadMapper::GetNameForDbWorkload(m_dbWorkload));
  }

  if (m_isAutoScalingEnabledHasBeenSet) {
    payload.WithBool("isAutoScalingEnabled", m_isAutoScalingEnabled);
  }

  if (m_isAutoScalingForStorageEnabledHasBeenSet) {
    payload.WithBool("isAutoScalingForStorageEnabled", m_isAutoScalingForStorageEnabled);
  }

  if (m_licenseModelHasBeenSet) {
    payload.WithString("licenseModel", LicenseModelMapper::GetNameForLicenseModel(m_licenseModel));
  }

  if (m_characterSetHasBeenSet) {
    payload.WithString("characterSet", m_characterSet);
  }

  if (m_ncharacterSetHasBeenSet) {
    payload.WithString("ncharacterSet", m_ncharacterSet);
  }

  if (m_dbVersionHasBeenSet) {
    payload.WithString("dbVersion", m_dbVersion);
  }

  if (m_databaseEditionHasBeenSet) {
    payload.WithString("databaseEdition", DatabaseEditionMapper::GetNameForDatabaseEdition(m_databaseEdition));
  }

  if (m_standbyAllowlistedIpsSourceHasBeenSet) {
    payload.WithString("standbyAllowlistedIpsSource",
                       StandbyAllowlistedIpsSourceMapper::GetNameForStandbyAllowlistedIpsSource(m_standbyAllowlistedIpsSource));
  }

  if (m_autonomousMaintenanceScheduleTypeHasBeenSet) {
    payload.WithString(
        "autonomousMaintenanceScheduleType",
        AutonomousMaintenanceScheduleTypeMapper::GetNameForAutonomousMaintenanceScheduleType(m_autonomousMaintenanceScheduleType));
  }

  if (m_backupRetentionPeriodInDaysHasBeenSet) {
    payload.WithInteger("backupRetentionPeriodInDays", m_backupRetentionPeriodInDays);
  }

  if (m_byolComputeCountLimitHasBeenSet) {
    payload.WithDouble("byolComputeCountLimit", m_byolComputeCountLimit);
  }

  if (m_cpuCoreCountHasBeenSet) {
    payload.WithInteger("cpuCoreCount", m_cpuCoreCount);
  }

  if (m_customerContactsToSendToOCIHasBeenSet) {
    Aws::Utils::Array<JsonValue> customerContactsToSendToOCIJsonList(m_customerContactsToSendToOCI.size());
    for (unsigned customerContactsToSendToOCIIndex = 0; customerContactsToSendToOCIIndex < customerContactsToSendToOCIJsonList.GetLength();
         ++customerContactsToSendToOCIIndex) {
      customerContactsToSendToOCIJsonList[customerContactsToSendToOCIIndex].AsObject(
          m_customerContactsToSendToOCI[customerContactsToSendToOCIIndex].Jsonize());
    }
    payload.WithArray("customerContactsToSendToOCI", std::move(customerContactsToSendToOCIJsonList));
  }

  if (m_privateEndpointIpHasBeenSet) {
    payload.WithString("privateEndpointIp", m_privateEndpointIp);
  }

  if (m_privateEndpointLabelHasBeenSet) {
    payload.WithString("privateEndpointLabel", m_privateEndpointLabel);
  }

  if (m_resourcePoolLeaderIdHasBeenSet) {
    payload.WithString("resourcePoolLeaderId", m_resourcePoolLeaderId);
  }

  if (m_resourcePoolSummaryHasBeenSet) {
    payload.WithObject("resourcePoolSummary", m_resourcePoolSummary.Jsonize());
  }

  if (m_scheduledOperationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> scheduledOperationsJsonList(m_scheduledOperations.size());
    for (unsigned scheduledOperationsIndex = 0; scheduledOperationsIndex < scheduledOperationsJsonList.GetLength();
         ++scheduledOperationsIndex) {
      scheduledOperationsJsonList[scheduledOperationsIndex].AsObject(m_scheduledOperations[scheduledOperationsIndex].Jsonize());
    }
    payload.WithArray("scheduledOperations", std::move(scheduledOperationsJsonList));
  }

  if (m_standbyAllowlistedIpsHasBeenSet) {
    Aws::Utils::Array<JsonValue> standbyAllowlistedIpsJsonList(m_standbyAllowlistedIps.size());
    for (unsigned standbyAllowlistedIpsIndex = 0; standbyAllowlistedIpsIndex < standbyAllowlistedIpsJsonList.GetLength();
         ++standbyAllowlistedIpsIndex) {
      standbyAllowlistedIpsJsonList[standbyAllowlistedIpsIndex].AsString(m_standbyAllowlistedIps[standbyAllowlistedIpsIndex]);
    }
    payload.WithArray("standbyAllowlistedIps", std::move(standbyAllowlistedIpsJsonList));
  }

  if (m_allowlistedIpsHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowlistedIpsJsonList(m_allowlistedIps.size());
    for (unsigned allowlistedIpsIndex = 0; allowlistedIpsIndex < allowlistedIpsJsonList.GetLength(); ++allowlistedIpsIndex) {
      allowlistedIpsJsonList[allowlistedIpsIndex].AsString(m_allowlistedIps[allowlistedIpsIndex]);
    }
    payload.WithArray("allowlistedIps", std::move(allowlistedIpsJsonList));
  }

  if (m_transportableTablespaceHasBeenSet) {
    payload.WithObject("transportableTablespace", m_transportableTablespace.Jsonize());
  }

  if (m_isBackupRetentionLockedHasBeenSet) {
    payload.WithBool("isBackupRetentionLocked", m_isBackupRetentionLocked);
  }

  if (m_isLocalDataGuardEnabledHasBeenSet) {
    payload.WithBool("isLocalDataGuardEnabled", m_isLocalDataGuardEnabled);
  }

  if (m_isMtlsConnectionRequiredHasBeenSet) {
    payload.WithBool("isMtlsConnectionRequired", m_isMtlsConnectionRequired);
  }

  if (m_dbToolsDetailsHasBeenSet) {
    Aws::Utils::Array<JsonValue> dbToolsDetailsJsonList(m_dbToolsDetails.size());
    for (unsigned dbToolsDetailsIndex = 0; dbToolsDetailsIndex < dbToolsDetailsJsonList.GetLength(); ++dbToolsDetailsIndex) {
      dbToolsDetailsJsonList[dbToolsDetailsIndex].AsObject(m_dbToolsDetails[dbToolsDetailsIndex].Jsonize());
    }
    payload.WithArray("dbToolsDetails", std::move(dbToolsDetailsJsonList));
  }

  if (m_sourceHasBeenSet) {
    payload.WithString("source", SourceTypeMapper::GetNameForSourceType(m_source));
  }

  if (m_sourceConfigurationHasBeenSet) {
    payload.WithObject("sourceConfiguration", m_sourceConfiguration.Jsonize());
  }

  if (m_encryptionKeyProviderHasBeenSet) {
    payload.WithString("encryptionKeyProvider",
                       EncryptionKeyProviderInputMapper::GetNameForEncryptionKeyProviderInput(m_encryptionKeyProvider));
  }

  if (m_encryptionKeyConfigurationHasBeenSet) {
    payload.WithObject("encryptionKeyConfiguration", m_encryptionKeyConfiguration.Jsonize());
  }

  if (m_adminPasswordSourceHasBeenSet) {
    payload.WithString("adminPasswordSource", AdminPasswordSourceMapper::GetNameForAdminPasswordSource(m_adminPasswordSource));
  }

  if (m_adminPasswordSourceConfigurationHasBeenSet) {
    payload.WithObject("adminPasswordSourceConfiguration", m_adminPasswordSourceConfiguration.Jsonize());
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAutonomousDatabaseRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.CreateAutonomousDatabase"));
  return headers;
}
