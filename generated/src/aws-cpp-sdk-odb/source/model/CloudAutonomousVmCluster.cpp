/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/CloudAutonomousVmCluster.h>
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

CloudAutonomousVmCluster::CloudAutonomousVmCluster(JsonView jsonValue)
{
  *this = jsonValue;
}

CloudAutonomousVmCluster& CloudAutonomousVmCluster::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cloudAutonomousVmClusterId"))
  {
    m_cloudAutonomousVmClusterId = jsonValue.GetString("cloudAutonomousVmClusterId");
    m_cloudAutonomousVmClusterIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cloudAutonomousVmClusterArn"))
  {
    m_cloudAutonomousVmClusterArn = jsonValue.GetString("cloudAutonomousVmClusterArn");
    m_cloudAutonomousVmClusterArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("odbNetworkId"))
  {
    m_odbNetworkId = jsonValue.GetString("odbNetworkId");
    m_odbNetworkIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ociResourceAnchorName"))
  {
    m_ociResourceAnchorName = jsonValue.GetString("ociResourceAnchorName");
    m_ociResourceAnchorNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("percentProgress"))
  {
    m_percentProgress = jsonValue.GetDouble("percentProgress");
    m_percentProgressHasBeenSet = true;
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
  if(jsonValue.ValueExists("cloudExadataInfrastructureId"))
  {
    m_cloudExadataInfrastructureId = jsonValue.GetString("cloudExadataInfrastructureId");
    m_cloudExadataInfrastructureIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("autonomousDataStoragePercentage"))
  {
    m_autonomousDataStoragePercentage = jsonValue.GetDouble("autonomousDataStoragePercentage");
    m_autonomousDataStoragePercentageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("autonomousDataStorageSizeInTBs"))
  {
    m_autonomousDataStorageSizeInTBs = jsonValue.GetDouble("autonomousDataStorageSizeInTBs");
    m_autonomousDataStorageSizeInTBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("availableAutonomousDataStorageSizeInTBs"))
  {
    m_availableAutonomousDataStorageSizeInTBs = jsonValue.GetDouble("availableAutonomousDataStorageSizeInTBs");
    m_availableAutonomousDataStorageSizeInTBsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("availableContainerDatabases"))
  {
    m_availableContainerDatabases = jsonValue.GetInteger("availableContainerDatabases");
    m_availableContainerDatabasesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("availableCpus"))
  {
    m_availableCpus = jsonValue.GetDouble("availableCpus");
    m_availableCpusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("computeModel"))
  {
    m_computeModel = ComputeModelMapper::GetComputeModelForName(jsonValue.GetString("computeModel"));
    m_computeModelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cpuCoreCount"))
  {
    m_cpuCoreCount = jsonValue.GetInteger("cpuCoreCount");
    m_cpuCoreCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cpuCoreCountPerNode"))
  {
    m_cpuCoreCountPerNode = jsonValue.GetInteger("cpuCoreCountPerNode");
    m_cpuCoreCountPerNodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cpuPercentage"))
  {
    m_cpuPercentage = jsonValue.GetDouble("cpuPercentage");
    m_cpuPercentageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataStorageSizeInGBs"))
  {
    m_dataStorageSizeInGBs = jsonValue.GetDouble("dataStorageSizeInGBs");
    m_dataStorageSizeInGBsHasBeenSet = true;
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
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domain"))
  {
    m_domain = jsonValue.GetString("domain");
    m_domainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("exadataStorageInTBsLowestScaledValue"))
  {
    m_exadataStorageInTBsLowestScaledValue = jsonValue.GetDouble("exadataStorageInTBsLowestScaledValue");
    m_exadataStorageInTBsLowestScaledValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hostname"))
  {
    m_hostname = jsonValue.GetString("hostname");
    m_hostnameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ocid"))
  {
    m_ocid = jsonValue.GetString("ocid");
    m_ocidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ociUrl"))
  {
    m_ociUrl = jsonValue.GetString("ociUrl");
    m_ociUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isMtlsEnabledVmCluster"))
  {
    m_isMtlsEnabledVmCluster = jsonValue.GetBool("isMtlsEnabledVmCluster");
    m_isMtlsEnabledVmClusterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("licenseModel"))
  {
    m_licenseModel = LicenseModelMapper::GetLicenseModelForName(jsonValue.GetString("licenseModel"));
    m_licenseModelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maintenanceWindow"))
  {
    m_maintenanceWindow = jsonValue.GetObject("maintenanceWindow");
    m_maintenanceWindowHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxAcdsLowestScaledValue"))
  {
    m_maxAcdsLowestScaledValue = jsonValue.GetInteger("maxAcdsLowestScaledValue");
    m_maxAcdsLowestScaledValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("memoryPerOracleComputeUnitInGBs"))
  {
    m_memoryPerOracleComputeUnitInGBs = jsonValue.GetInteger("memoryPerOracleComputeUnitInGBs");
    m_memoryPerOracleComputeUnitInGBsHasBeenSet = true;
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
  if(jsonValue.ValueExists("nonProvisionableAutonomousContainerDatabases"))
  {
    m_nonProvisionableAutonomousContainerDatabases = jsonValue.GetInteger("nonProvisionableAutonomousContainerDatabases");
    m_nonProvisionableAutonomousContainerDatabasesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("provisionableAutonomousContainerDatabases"))
  {
    m_provisionableAutonomousContainerDatabases = jsonValue.GetInteger("provisionableAutonomousContainerDatabases");
    m_provisionableAutonomousContainerDatabasesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("provisionedAutonomousContainerDatabases"))
  {
    m_provisionedAutonomousContainerDatabases = jsonValue.GetInteger("provisionedAutonomousContainerDatabases");
    m_provisionedAutonomousContainerDatabasesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("provisionedCpus"))
  {
    m_provisionedCpus = jsonValue.GetDouble("provisionedCpus");
    m_provisionedCpusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reclaimableCpus"))
  {
    m_reclaimableCpus = jsonValue.GetDouble("reclaimableCpus");
    m_reclaimableCpusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reservedCpus"))
  {
    m_reservedCpus = jsonValue.GetDouble("reservedCpus");
    m_reservedCpusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scanListenerPortNonTls"))
  {
    m_scanListenerPortNonTls = jsonValue.GetInteger("scanListenerPortNonTls");
    m_scanListenerPortNonTlsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scanListenerPortTls"))
  {
    m_scanListenerPortTls = jsonValue.GetInteger("scanListenerPortTls");
    m_scanListenerPortTlsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shape"))
  {
    m_shape = jsonValue.GetString("shape");
    m_shapeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timeDatabaseSslCertificateExpires"))
  {
    m_timeDatabaseSslCertificateExpires = jsonValue.GetString("timeDatabaseSslCertificateExpires");
    m_timeDatabaseSslCertificateExpiresHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timeOrdsCertificateExpires"))
  {
    m_timeOrdsCertificateExpires = jsonValue.GetString("timeOrdsCertificateExpires");
    m_timeOrdsCertificateExpiresHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timeZone"))
  {
    m_timeZone = jsonValue.GetString("timeZone");
    m_timeZoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalContainerDatabases"))
  {
    m_totalContainerDatabases = jsonValue.GetInteger("totalContainerDatabases");
    m_totalContainerDatabasesHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudAutonomousVmCluster::Jsonize() const
{
  JsonValue payload;

  if(m_cloudAutonomousVmClusterIdHasBeenSet)
  {
   payload.WithString("cloudAutonomousVmClusterId", m_cloudAutonomousVmClusterId);

  }

  if(m_cloudAutonomousVmClusterArnHasBeenSet)
  {
   payload.WithString("cloudAutonomousVmClusterArn", m_cloudAutonomousVmClusterArn);

  }

  if(m_odbNetworkIdHasBeenSet)
  {
   payload.WithString("odbNetworkId", m_odbNetworkId);

  }

  if(m_ociResourceAnchorNameHasBeenSet)
  {
   payload.WithString("ociResourceAnchorName", m_ociResourceAnchorName);

  }

  if(m_percentProgressHasBeenSet)
  {
   payload.WithDouble("percentProgress", m_percentProgress);

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

  if(m_cloudExadataInfrastructureIdHasBeenSet)
  {
   payload.WithString("cloudExadataInfrastructureId", m_cloudExadataInfrastructureId);

  }

  if(m_autonomousDataStoragePercentageHasBeenSet)
  {
   payload.WithDouble("autonomousDataStoragePercentage", m_autonomousDataStoragePercentage);

  }

  if(m_autonomousDataStorageSizeInTBsHasBeenSet)
  {
   payload.WithDouble("autonomousDataStorageSizeInTBs", m_autonomousDataStorageSizeInTBs);

  }

  if(m_availableAutonomousDataStorageSizeInTBsHasBeenSet)
  {
   payload.WithDouble("availableAutonomousDataStorageSizeInTBs", m_availableAutonomousDataStorageSizeInTBs);

  }

  if(m_availableContainerDatabasesHasBeenSet)
  {
   payload.WithInteger("availableContainerDatabases", m_availableContainerDatabases);

  }

  if(m_availableCpusHasBeenSet)
  {
   payload.WithDouble("availableCpus", m_availableCpus);

  }

  if(m_computeModelHasBeenSet)
  {
   payload.WithString("computeModel", ComputeModelMapper::GetNameForComputeModel(m_computeModel));
  }

  if(m_cpuCoreCountHasBeenSet)
  {
   payload.WithInteger("cpuCoreCount", m_cpuCoreCount);

  }

  if(m_cpuCoreCountPerNodeHasBeenSet)
  {
   payload.WithInteger("cpuCoreCountPerNode", m_cpuCoreCountPerNode);

  }

  if(m_cpuPercentageHasBeenSet)
  {
   payload.WithDouble("cpuPercentage", m_cpuPercentage);

  }

  if(m_dataStorageSizeInGBsHasBeenSet)
  {
   payload.WithDouble("dataStorageSizeInGBs", m_dataStorageSizeInGBs);

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

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", m_domain);

  }

  if(m_exadataStorageInTBsLowestScaledValueHasBeenSet)
  {
   payload.WithDouble("exadataStorageInTBsLowestScaledValue", m_exadataStorageInTBsLowestScaledValue);

  }

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("hostname", m_hostname);

  }

  if(m_ocidHasBeenSet)
  {
   payload.WithString("ocid", m_ocid);

  }

  if(m_ociUrlHasBeenSet)
  {
   payload.WithString("ociUrl", m_ociUrl);

  }

  if(m_isMtlsEnabledVmClusterHasBeenSet)
  {
   payload.WithBool("isMtlsEnabledVmCluster", m_isMtlsEnabledVmCluster);

  }

  if(m_licenseModelHasBeenSet)
  {
   payload.WithString("licenseModel", LicenseModelMapper::GetNameForLicenseModel(m_licenseModel));
  }

  if(m_maintenanceWindowHasBeenSet)
  {
   payload.WithObject("maintenanceWindow", m_maintenanceWindow.Jsonize());

  }

  if(m_maxAcdsLowestScaledValueHasBeenSet)
  {
   payload.WithInteger("maxAcdsLowestScaledValue", m_maxAcdsLowestScaledValue);

  }

  if(m_memoryPerOracleComputeUnitInGBsHasBeenSet)
  {
   payload.WithInteger("memoryPerOracleComputeUnitInGBs", m_memoryPerOracleComputeUnitInGBs);

  }

  if(m_memorySizeInGBsHasBeenSet)
  {
   payload.WithInteger("memorySizeInGBs", m_memorySizeInGBs);

  }

  if(m_nodeCountHasBeenSet)
  {
   payload.WithInteger("nodeCount", m_nodeCount);

  }

  if(m_nonProvisionableAutonomousContainerDatabasesHasBeenSet)
  {
   payload.WithInteger("nonProvisionableAutonomousContainerDatabases", m_nonProvisionableAutonomousContainerDatabases);

  }

  if(m_provisionableAutonomousContainerDatabasesHasBeenSet)
  {
   payload.WithInteger("provisionableAutonomousContainerDatabases", m_provisionableAutonomousContainerDatabases);

  }

  if(m_provisionedAutonomousContainerDatabasesHasBeenSet)
  {
   payload.WithInteger("provisionedAutonomousContainerDatabases", m_provisionedAutonomousContainerDatabases);

  }

  if(m_provisionedCpusHasBeenSet)
  {
   payload.WithDouble("provisionedCpus", m_provisionedCpus);

  }

  if(m_reclaimableCpusHasBeenSet)
  {
   payload.WithDouble("reclaimableCpus", m_reclaimableCpus);

  }

  if(m_reservedCpusHasBeenSet)
  {
   payload.WithDouble("reservedCpus", m_reservedCpus);

  }

  if(m_scanListenerPortNonTlsHasBeenSet)
  {
   payload.WithInteger("scanListenerPortNonTls", m_scanListenerPortNonTls);

  }

  if(m_scanListenerPortTlsHasBeenSet)
  {
   payload.WithInteger("scanListenerPortTls", m_scanListenerPortTls);

  }

  if(m_shapeHasBeenSet)
  {
   payload.WithString("shape", m_shape);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_timeDatabaseSslCertificateExpiresHasBeenSet)
  {
   payload.WithString("timeDatabaseSslCertificateExpires", m_timeDatabaseSslCertificateExpires.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_timeOrdsCertificateExpiresHasBeenSet)
  {
   payload.WithString("timeOrdsCertificateExpires", m_timeOrdsCertificateExpires.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_timeZoneHasBeenSet)
  {
   payload.WithString("timeZone", m_timeZone);

  }

  if(m_totalContainerDatabasesHasBeenSet)
  {
   payload.WithInteger("totalContainerDatabases", m_totalContainerDatabases);

  }

  return payload;
}

} // namespace Model
} // namespace odb
} // namespace Aws
