/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/CloudExadataInfrastructureSummary.h>
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

CloudExadataInfrastructureSummary::CloudExadataInfrastructureSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

CloudExadataInfrastructureSummary& CloudExadataInfrastructureSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudExadataInfrastructureId"))
  {
    m_cloudExadataInfrastructureId = jsonValue.GetString("cloudExadataInfrastructureId");
    m_cloudExadataInfrastructureIdHasBeenSet = true;
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
  if(jsonValue.ValueExists("cloudExadataInfrastructureArn"))
  {
    m_cloudExadataInfrastructureArn = jsonValue.GetString("cloudExadataInfrastructureArn");
    m_cloudExadataInfrastructureArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("activatedStorageCount"))
  {
    m_activatedStorageCount = jsonValue.GetInteger("activatedStorageCount");
    m_activatedStorageCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("additionalStorageCount"))
  {
    m_additionalStorageCount = jsonValue.GetInteger("additionalStorageCount");
    m_additionalStorageCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("availableStorageSizeInGBs"))
  {
    m_availableStorageSizeInGBs = jsonValue.GetInteger("availableStorageSizeInGBs");
    m_availableStorageSizeInGBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("availabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("availabilityZone");
    m_availabilityZoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("availabilityZoneId"))
  {
    m_availabilityZoneId = jsonValue.GetString("availabilityZoneId");
    m_availabilityZoneIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computeCount"))
  {
    m_computeCount = jsonValue.GetInteger("computeCount");
    m_computeCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cpuCount"))
  {
    m_cpuCount = jsonValue.GetInteger("cpuCount");
    m_cpuCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customerContactsToSendToOCI"))
  {
    Aws::Utils::Array<JsonView> customerContactsToSendToOCIJsonList = jsonValue.GetArray("customerContactsToSendToOCI");
    for(unsigned customerContactsToSendToOCIIndex = 0; customerContactsToSendToOCIIndex < customerContactsToSendToOCIJsonList.GetLength(); ++customerContactsToSendToOCIIndex)
    {
      m_customerContactsToSendToOCI.push_back(customerContactsToSendToOCIJsonList[customerContactsToSendToOCIIndex].AsObject());
    }
    m_customerContactsToSendToOCIHasBeenSet = true;
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
  if(jsonValue.ValueExists("dbServerVersion"))
  {
    m_dbServerVersion = jsonValue.GetString("dbServerVersion");
    m_dbServerVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastMaintenanceRunId"))
  {
    m_lastMaintenanceRunId = jsonValue.GetString("lastMaintenanceRunId");
    m_lastMaintenanceRunIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maintenanceWindow"))
  {
    m_maintenanceWindow = jsonValue.GetObject("maintenanceWindow");
    m_maintenanceWindowHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxCpuCount"))
  {
    m_maxCpuCount = jsonValue.GetInteger("maxCpuCount");
    m_maxCpuCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxDataStorageInTBs"))
  {
    m_maxDataStorageInTBs = jsonValue.GetDouble("maxDataStorageInTBs");
    m_maxDataStorageInTBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxDbNodeStorageSizeInGBs"))
  {
    m_maxDbNodeStorageSizeInGBs = jsonValue.GetInteger("maxDbNodeStorageSizeInGBs");
    m_maxDbNodeStorageSizeInGBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxMemoryInGBs"))
  {
    m_maxMemoryInGBs = jsonValue.GetInteger("maxMemoryInGBs");
    m_maxMemoryInGBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("memorySizeInGBs"))
  {
    m_memorySizeInGBs = jsonValue.GetInteger("memorySizeInGBs");
    m_memorySizeInGBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("monthlyDbServerVersion"))
  {
    m_monthlyDbServerVersion = jsonValue.GetString("monthlyDbServerVersion");
    m_monthlyDbServerVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("monthlyStorageServerVersion"))
  {
    m_monthlyStorageServerVersion = jsonValue.GetString("monthlyStorageServerVersion");
    m_monthlyStorageServerVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextMaintenanceRunId"))
  {
    m_nextMaintenanceRunId = jsonValue.GetString("nextMaintenanceRunId");
    m_nextMaintenanceRunIdHasBeenSet = true;
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
  if(jsonValue.ValueExists("ocid"))
  {
    m_ocid = jsonValue.GetString("ocid");
    m_ocidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shape"))
  {
    m_shape = jsonValue.GetString("shape");
    m_shapeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageCount"))
  {
    m_storageCount = jsonValue.GetInteger("storageCount");
    m_storageCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageServerVersion"))
  {
    m_storageServerVersion = jsonValue.GetString("storageServerVersion");
    m_storageServerVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalStorageSizeInGBs"))
  {
    m_totalStorageSizeInGBs = jsonValue.GetInteger("totalStorageSizeInGBs");
    m_totalStorageSizeInGBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("percentProgress"))
  {
    m_percentProgress = jsonValue.GetDouble("percentProgress");
    m_percentProgressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("databaseServerType"))
  {
    m_databaseServerType = jsonValue.GetString("databaseServerType");
    m_databaseServerTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageServerType"))
  {
    m_storageServerType = jsonValue.GetString("storageServerType");
    m_storageServerTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computeModel"))
  {
    m_computeModel = ComputeModelMapper::GetComputeModelForName(jsonValue.GetString("computeModel"));
    m_computeModelHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudExadataInfrastructureSummary::Jsonize() const
{
  JsonValue payload;

  if(m_cloudExadataInfrastructureIdHasBeenSet)
  {
   payload.WithString("cloudExadataInfrastructureId", m_cloudExadataInfrastructureId);

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

  if(m_cloudExadataInfrastructureArnHasBeenSet)
  {
   payload.WithString("cloudExadataInfrastructureArn", m_cloudExadataInfrastructureArn);

  }

  if(m_activatedStorageCountHasBeenSet)
  {
   payload.WithInteger("activatedStorageCount", m_activatedStorageCount);

  }

  if(m_additionalStorageCountHasBeenSet)
  {
   payload.WithInteger("additionalStorageCount", m_additionalStorageCount);

  }

  if(m_availableStorageSizeInGBsHasBeenSet)
  {
   payload.WithInteger("availableStorageSizeInGBs", m_availableStorageSizeInGBs);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_availabilityZoneIdHasBeenSet)
  {
   payload.WithString("availabilityZoneId", m_availabilityZoneId);

  }

  if(m_computeCountHasBeenSet)
  {
   payload.WithInteger("computeCount", m_computeCount);

  }

  if(m_cpuCountHasBeenSet)
  {
   payload.WithInteger("cpuCount", m_cpuCount);

  }

  if(m_customerContactsToSendToOCIHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customerContactsToSendToOCIJsonList(m_customerContactsToSendToOCI.size());
   for(unsigned customerContactsToSendToOCIIndex = 0; customerContactsToSendToOCIIndex < customerContactsToSendToOCIJsonList.GetLength(); ++customerContactsToSendToOCIIndex)
   {
     customerContactsToSendToOCIJsonList[customerContactsToSendToOCIIndex].AsObject(m_customerContactsToSendToOCI[customerContactsToSendToOCIIndex].Jsonize());
   }
   payload.WithArray("customerContactsToSendToOCI", std::move(customerContactsToSendToOCIJsonList));

  }

  if(m_dataStorageSizeInTBsHasBeenSet)
  {
   payload.WithDouble("dataStorageSizeInTBs", m_dataStorageSizeInTBs);

  }

  if(m_dbNodeStorageSizeInGBsHasBeenSet)
  {
   payload.WithInteger("dbNodeStorageSizeInGBs", m_dbNodeStorageSizeInGBs);

  }

  if(m_dbServerVersionHasBeenSet)
  {
   payload.WithString("dbServerVersion", m_dbServerVersion);

  }

  if(m_lastMaintenanceRunIdHasBeenSet)
  {
   payload.WithString("lastMaintenanceRunId", m_lastMaintenanceRunId);

  }

  if(m_maintenanceWindowHasBeenSet)
  {
   payload.WithObject("maintenanceWindow", m_maintenanceWindow.Jsonize());

  }

  if(m_maxCpuCountHasBeenSet)
  {
   payload.WithInteger("maxCpuCount", m_maxCpuCount);

  }

  if(m_maxDataStorageInTBsHasBeenSet)
  {
   payload.WithDouble("maxDataStorageInTBs", m_maxDataStorageInTBs);

  }

  if(m_maxDbNodeStorageSizeInGBsHasBeenSet)
  {
   payload.WithInteger("maxDbNodeStorageSizeInGBs", m_maxDbNodeStorageSizeInGBs);

  }

  if(m_maxMemoryInGBsHasBeenSet)
  {
   payload.WithInteger("maxMemoryInGBs", m_maxMemoryInGBs);

  }

  if(m_memorySizeInGBsHasBeenSet)
  {
   payload.WithInteger("memorySizeInGBs", m_memorySizeInGBs);

  }

  if(m_monthlyDbServerVersionHasBeenSet)
  {
   payload.WithString("monthlyDbServerVersion", m_monthlyDbServerVersion);

  }

  if(m_monthlyStorageServerVersionHasBeenSet)
  {
   payload.WithString("monthlyStorageServerVersion", m_monthlyStorageServerVersion);

  }

  if(m_nextMaintenanceRunIdHasBeenSet)
  {
   payload.WithString("nextMaintenanceRunId", m_nextMaintenanceRunId);

  }

  if(m_ociResourceAnchorNameHasBeenSet)
  {
   payload.WithString("ociResourceAnchorName", m_ociResourceAnchorName);

  }

  if(m_ociUrlHasBeenSet)
  {
   payload.WithString("ociUrl", m_ociUrl);

  }

  if(m_ocidHasBeenSet)
  {
   payload.WithString("ocid", m_ocid);

  }

  if(m_shapeHasBeenSet)
  {
   payload.WithString("shape", m_shape);

  }

  if(m_storageCountHasBeenSet)
  {
   payload.WithInteger("storageCount", m_storageCount);

  }

  if(m_storageServerVersionHasBeenSet)
  {
   payload.WithString("storageServerVersion", m_storageServerVersion);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_totalStorageSizeInGBsHasBeenSet)
  {
   payload.WithInteger("totalStorageSizeInGBs", m_totalStorageSizeInGBs);

  }

  if(m_percentProgressHasBeenSet)
  {
   payload.WithDouble("percentProgress", m_percentProgress);

  }

  if(m_databaseServerTypeHasBeenSet)
  {
   payload.WithString("databaseServerType", m_databaseServerType);

  }

  if(m_storageServerTypeHasBeenSet)
  {
   payload.WithString("storageServerType", m_storageServerType);

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
