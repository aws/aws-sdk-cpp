/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/model/ResourceStatus.h>
#include <aws/odb/model/ComputeModel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/model/LicenseModel.h>
#include <aws/odb/model/MaintenanceWindow.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace odb
{
namespace Model
{

  /**
   * <p>A summary of an Autonomous VM cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/CloudAutonomousVmClusterSummary">AWS
   * API Reference</a></p>
   */
  class CloudAutonomousVmClusterSummary
  {
  public:
    AWS_ODB_API CloudAutonomousVmClusterSummary() = default;
    AWS_ODB_API CloudAutonomousVmClusterSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API CloudAutonomousVmClusterSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the Autonomous VM cluster.</p>
     */
    inline const Aws::String& GetCloudAutonomousVmClusterId() const { return m_cloudAutonomousVmClusterId; }
    inline bool CloudAutonomousVmClusterIdHasBeenSet() const { return m_cloudAutonomousVmClusterIdHasBeenSet; }
    template<typename CloudAutonomousVmClusterIdT = Aws::String>
    void SetCloudAutonomousVmClusterId(CloudAutonomousVmClusterIdT&& value) { m_cloudAutonomousVmClusterIdHasBeenSet = true; m_cloudAutonomousVmClusterId = std::forward<CloudAutonomousVmClusterIdT>(value); }
    template<typename CloudAutonomousVmClusterIdT = Aws::String>
    CloudAutonomousVmClusterSummary& WithCloudAutonomousVmClusterId(CloudAutonomousVmClusterIdT&& value) { SetCloudAutonomousVmClusterId(std::forward<CloudAutonomousVmClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the Autonomous VM cluster.</p>
     */
    inline const Aws::String& GetCloudAutonomousVmClusterArn() const { return m_cloudAutonomousVmClusterArn; }
    inline bool CloudAutonomousVmClusterArnHasBeenSet() const { return m_cloudAutonomousVmClusterArnHasBeenSet; }
    template<typename CloudAutonomousVmClusterArnT = Aws::String>
    void SetCloudAutonomousVmClusterArn(CloudAutonomousVmClusterArnT&& value) { m_cloudAutonomousVmClusterArnHasBeenSet = true; m_cloudAutonomousVmClusterArn = std::forward<CloudAutonomousVmClusterArnT>(value); }
    template<typename CloudAutonomousVmClusterArnT = Aws::String>
    CloudAutonomousVmClusterSummary& WithCloudAutonomousVmClusterArn(CloudAutonomousVmClusterArnT&& value) { SetCloudAutonomousVmClusterArn(std::forward<CloudAutonomousVmClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the ODB network associated with this Autonomous VM
     * cluster.</p>
     */
    inline const Aws::String& GetOdbNetworkId() const { return m_odbNetworkId; }
    inline bool OdbNetworkIdHasBeenSet() const { return m_odbNetworkIdHasBeenSet; }
    template<typename OdbNetworkIdT = Aws::String>
    void SetOdbNetworkId(OdbNetworkIdT&& value) { m_odbNetworkIdHasBeenSet = true; m_odbNetworkId = std::forward<OdbNetworkIdT>(value); }
    template<typename OdbNetworkIdT = Aws::String>
    CloudAutonomousVmClusterSummary& WithOdbNetworkId(OdbNetworkIdT&& value) { SetOdbNetworkId(std::forward<OdbNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the OCI resource anchor associated with this Autonomous VM
     * cluster.</p>
     */
    inline const Aws::String& GetOciResourceAnchorName() const { return m_ociResourceAnchorName; }
    inline bool OciResourceAnchorNameHasBeenSet() const { return m_ociResourceAnchorNameHasBeenSet; }
    template<typename OciResourceAnchorNameT = Aws::String>
    void SetOciResourceAnchorName(OciResourceAnchorNameT&& value) { m_ociResourceAnchorNameHasBeenSet = true; m_ociResourceAnchorName = std::forward<OciResourceAnchorNameT>(value); }
    template<typename OciResourceAnchorNameT = Aws::String>
    CloudAutonomousVmClusterSummary& WithOciResourceAnchorName(OciResourceAnchorNameT&& value) { SetOciResourceAnchorName(std::forward<OciResourceAnchorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progress of the current operation on the Autonomous VM cluster, as a
     * percentage.</p>
     */
    inline double GetPercentProgress() const { return m_percentProgress; }
    inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }
    inline void SetPercentProgress(double value) { m_percentProgressHasBeenSet = true; m_percentProgress = value; }
    inline CloudAutonomousVmClusterSummary& WithPercentProgress(double value) { SetPercentProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name for the Autonomous VM cluster.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CloudAutonomousVmClusterSummary& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the Autonomous VM cluster.</p>
     */
    inline ResourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CloudAutonomousVmClusterSummary& WithStatus(ResourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the current status of the Autonomous VM cluster,
     * if applicable.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    CloudAutonomousVmClusterSummary& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Exadata infrastructure containing this
     * Autonomous VM cluster.</p>
     */
    inline const Aws::String& GetCloudExadataInfrastructureId() const { return m_cloudExadataInfrastructureId; }
    inline bool CloudExadataInfrastructureIdHasBeenSet() const { return m_cloudExadataInfrastructureIdHasBeenSet; }
    template<typename CloudExadataInfrastructureIdT = Aws::String>
    void SetCloudExadataInfrastructureId(CloudExadataInfrastructureIdT&& value) { m_cloudExadataInfrastructureIdHasBeenSet = true; m_cloudExadataInfrastructureId = std::forward<CloudExadataInfrastructureIdT>(value); }
    template<typename CloudExadataInfrastructureIdT = Aws::String>
    CloudAutonomousVmClusterSummary& WithCloudExadataInfrastructureId(CloudExadataInfrastructureIdT&& value) { SetCloudExadataInfrastructureId(std::forward<CloudExadataInfrastructureIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of data storage currently in use for Autonomous Databases in
     * the Autonomous VM cluster.</p>
     */
    inline double GetAutonomousDataStoragePercentage() const { return m_autonomousDataStoragePercentage; }
    inline bool AutonomousDataStoragePercentageHasBeenSet() const { return m_autonomousDataStoragePercentageHasBeenSet; }
    inline void SetAutonomousDataStoragePercentage(double value) { m_autonomousDataStoragePercentageHasBeenSet = true; m_autonomousDataStoragePercentage = value; }
    inline CloudAutonomousVmClusterSummary& WithAutonomousDataStoragePercentage(double value) { SetAutonomousDataStoragePercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total data storage allocated for Autonomous Databases in the Autonomous
     * VM cluster, in TB.</p>
     */
    inline double GetAutonomousDataStorageSizeInTBs() const { return m_autonomousDataStorageSizeInTBs; }
    inline bool AutonomousDataStorageSizeInTBsHasBeenSet() const { return m_autonomousDataStorageSizeInTBsHasBeenSet; }
    inline void SetAutonomousDataStorageSizeInTBs(double value) { m_autonomousDataStorageSizeInTBsHasBeenSet = true; m_autonomousDataStorageSizeInTBs = value; }
    inline CloudAutonomousVmClusterSummary& WithAutonomousDataStorageSizeInTBs(double value) { SetAutonomousDataStorageSizeInTBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The available data storage for Autonomous Databases in the Autonomous VM
     * cluster, in TB.</p>
     */
    inline double GetAvailableAutonomousDataStorageSizeInTBs() const { return m_availableAutonomousDataStorageSizeInTBs; }
    inline bool AvailableAutonomousDataStorageSizeInTBsHasBeenSet() const { return m_availableAutonomousDataStorageSizeInTBsHasBeenSet; }
    inline void SetAvailableAutonomousDataStorageSizeInTBs(double value) { m_availableAutonomousDataStorageSizeInTBsHasBeenSet = true; m_availableAutonomousDataStorageSizeInTBs = value; }
    inline CloudAutonomousVmClusterSummary& WithAvailableAutonomousDataStorageSizeInTBs(double value) { SetAvailableAutonomousDataStorageSizeInTBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Autonomous Container Databases that you can create with the
     * currently available storage.</p>
     */
    inline int GetAvailableContainerDatabases() const { return m_availableContainerDatabases; }
    inline bool AvailableContainerDatabasesHasBeenSet() const { return m_availableContainerDatabasesHasBeenSet; }
    inline void SetAvailableContainerDatabases(int value) { m_availableContainerDatabasesHasBeenSet = true; m_availableContainerDatabases = value; }
    inline CloudAutonomousVmClusterSummary& WithAvailableContainerDatabases(int value) { SetAvailableContainerDatabases(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of CPU cores available for allocation to Autonomous Databases.</p>
     */
    inline double GetAvailableCpus() const { return m_availableCpus; }
    inline bool AvailableCpusHasBeenSet() const { return m_availableCpusHasBeenSet; }
    inline void SetAvailableCpus(double value) { m_availableCpusHasBeenSet = true; m_availableCpus = value; }
    inline CloudAutonomousVmClusterSummary& WithAvailableCpus(double value) { SetAvailableCpus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute model of the Autonomous VM cluster: ECPU or OCPU.</p>
     */
    inline ComputeModel GetComputeModel() const { return m_computeModel; }
    inline bool ComputeModelHasBeenSet() const { return m_computeModelHasBeenSet; }
    inline void SetComputeModel(ComputeModel value) { m_computeModelHasBeenSet = true; m_computeModel = value; }
    inline CloudAutonomousVmClusterSummary& WithComputeModel(ComputeModel value) { SetComputeModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of CPU cores in the Autonomous VM cluster.</p>
     */
    inline int GetCpuCoreCount() const { return m_cpuCoreCount; }
    inline bool CpuCoreCountHasBeenSet() const { return m_cpuCoreCountHasBeenSet; }
    inline void SetCpuCoreCount(int value) { m_cpuCoreCountHasBeenSet = true; m_cpuCoreCount = value; }
    inline CloudAutonomousVmClusterSummary& WithCpuCoreCount(int value) { SetCpuCoreCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of CPU cores per node in the Autonomous VM cluster.</p>
     */
    inline int GetCpuCoreCountPerNode() const { return m_cpuCoreCountPerNode; }
    inline bool CpuCoreCountPerNodeHasBeenSet() const { return m_cpuCoreCountPerNodeHasBeenSet; }
    inline void SetCpuCoreCountPerNode(int value) { m_cpuCoreCountPerNodeHasBeenSet = true; m_cpuCoreCountPerNode = value; }
    inline CloudAutonomousVmClusterSummary& WithCpuCoreCountPerNode(int value) { SetCpuCoreCountPerNode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of total CPU cores currently in use in the Autonomous VM
     * cluster.</p>
     */
    inline double GetCpuPercentage() const { return m_cpuPercentage; }
    inline bool CpuPercentageHasBeenSet() const { return m_cpuPercentageHasBeenSet; }
    inline void SetCpuPercentage(double value) { m_cpuPercentageHasBeenSet = true; m_cpuPercentage = value; }
    inline CloudAutonomousVmClusterSummary& WithCpuPercentage(double value) { SetCpuPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total data storage allocated to the Autonomous VM cluster, in GB.</p>
     */
    inline double GetDataStorageSizeInGBs() const { return m_dataStorageSizeInGBs; }
    inline bool DataStorageSizeInGBsHasBeenSet() const { return m_dataStorageSizeInGBsHasBeenSet; }
    inline void SetDataStorageSizeInGBs(double value) { m_dataStorageSizeInGBsHasBeenSet = true; m_dataStorageSizeInGBs = value; }
    inline CloudAutonomousVmClusterSummary& WithDataStorageSizeInGBs(double value) { SetDataStorageSizeInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total data storage allocated to the Autonomous VM cluster, in TB.</p>
     */
    inline double GetDataStorageSizeInTBs() const { return m_dataStorageSizeInTBs; }
    inline bool DataStorageSizeInTBsHasBeenSet() const { return m_dataStorageSizeInTBsHasBeenSet; }
    inline void SetDataStorageSizeInTBs(double value) { m_dataStorageSizeInTBsHasBeenSet = true; m_dataStorageSizeInTBs = value; }
    inline CloudAutonomousVmClusterSummary& WithDataStorageSizeInTBs(double value) { SetDataStorageSizeInTBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The local node storage allocated to the Autonomous VM cluster, in GB.</p>
     */
    inline int GetDbNodeStorageSizeInGBs() const { return m_dbNodeStorageSizeInGBs; }
    inline bool DbNodeStorageSizeInGBsHasBeenSet() const { return m_dbNodeStorageSizeInGBsHasBeenSet; }
    inline void SetDbNodeStorageSizeInGBs(int value) { m_dbNodeStorageSizeInGBsHasBeenSet = true; m_dbNodeStorageSizeInGBs = value; }
    inline CloudAutonomousVmClusterSummary& WithDbNodeStorageSizeInGBs(int value) { SetDbNodeStorageSizeInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of database servers associated with the Autonomous VM cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDbServers() const { return m_dbServers; }
    inline bool DbServersHasBeenSet() const { return m_dbServersHasBeenSet; }
    template<typename DbServersT = Aws::Vector<Aws::String>>
    void SetDbServers(DbServersT&& value) { m_dbServersHasBeenSet = true; m_dbServers = std::forward<DbServersT>(value); }
    template<typename DbServersT = Aws::Vector<Aws::String>>
    CloudAutonomousVmClusterSummary& WithDbServers(DbServersT&& value) { SetDbServers(std::forward<DbServersT>(value)); return *this;}
    template<typename DbServersT = Aws::String>
    CloudAutonomousVmClusterSummary& AddDbServers(DbServersT&& value) { m_dbServersHasBeenSet = true; m_dbServers.emplace_back(std::forward<DbServersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user-provided description of the Autonomous VM cluster.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CloudAutonomousVmClusterSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name for the Autonomous VM cluster.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    CloudAutonomousVmClusterSummary& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lowest value to which Exadata storage can be scaled down, in TB.</p>
     */
    inline double GetExadataStorageInTBsLowestScaledValue() const { return m_exadataStorageInTBsLowestScaledValue; }
    inline bool ExadataStorageInTBsLowestScaledValueHasBeenSet() const { return m_exadataStorageInTBsLowestScaledValueHasBeenSet; }
    inline void SetExadataStorageInTBsLowestScaledValue(double value) { m_exadataStorageInTBsLowestScaledValueHasBeenSet = true; m_exadataStorageInTBsLowestScaledValue = value; }
    inline CloudAutonomousVmClusterSummary& WithExadataStorageInTBsLowestScaledValue(double value) { SetExadataStorageInTBsLowestScaledValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The host name for the Autonomous VM cluster.</p>
     */
    inline const Aws::String& GetHostname() const { return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    template<typename HostnameT = Aws::String>
    void SetHostname(HostnameT&& value) { m_hostnameHasBeenSet = true; m_hostname = std::forward<HostnameT>(value); }
    template<typename HostnameT = Aws::String>
    CloudAutonomousVmClusterSummary& WithHostname(HostnameT&& value) { SetHostname(std::forward<HostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Oracle Cloud Identifier (OCID) of the Autonomous VM cluster.</p>
     */
    inline const Aws::String& GetOcid() const { return m_ocid; }
    inline bool OcidHasBeenSet() const { return m_ocidHasBeenSet; }
    template<typename OcidT = Aws::String>
    void SetOcid(OcidT&& value) { m_ocidHasBeenSet = true; m_ocid = std::forward<OcidT>(value); }
    template<typename OcidT = Aws::String>
    CloudAutonomousVmClusterSummary& WithOcid(OcidT&& value) { SetOcid(std::forward<OcidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for accessing the OCI console page for this Autonomous VM
     * cluster.</p>
     */
    inline const Aws::String& GetOciUrl() const { return m_ociUrl; }
    inline bool OciUrlHasBeenSet() const { return m_ociUrlHasBeenSet; }
    template<typename OciUrlT = Aws::String>
    void SetOciUrl(OciUrlT&& value) { m_ociUrlHasBeenSet = true; m_ociUrl = std::forward<OciUrlT>(value); }
    template<typename OciUrlT = Aws::String>
    CloudAutonomousVmClusterSummary& WithOciUrl(OciUrlT&& value) { SetOciUrl(std::forward<OciUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if mutual TLS (mTLS) authentication is enabled for the Autonomous
     * VM cluster.</p>
     */
    inline bool GetIsMtlsEnabledVmCluster() const { return m_isMtlsEnabledVmCluster; }
    inline bool IsMtlsEnabledVmClusterHasBeenSet() const { return m_isMtlsEnabledVmClusterHasBeenSet; }
    inline void SetIsMtlsEnabledVmCluster(bool value) { m_isMtlsEnabledVmClusterHasBeenSet = true; m_isMtlsEnabledVmCluster = value; }
    inline CloudAutonomousVmClusterSummary& WithIsMtlsEnabledVmCluster(bool value) { SetIsMtlsEnabledVmCluster(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Oracle license model that applies to the Autonomous VM cluster.</p>
     */
    inline LicenseModel GetLicenseModel() const { return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    inline void SetLicenseModel(LicenseModel value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }
    inline CloudAutonomousVmClusterSummary& WithLicenseModel(LicenseModel value) { SetLicenseModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scheduling details for the maintenance window. Patching and system
     * updates take place during the maintenance window.</p>
     */
    inline const MaintenanceWindow& GetMaintenanceWindow() const { return m_maintenanceWindow; }
    inline bool MaintenanceWindowHasBeenSet() const { return m_maintenanceWindowHasBeenSet; }
    template<typename MaintenanceWindowT = MaintenanceWindow>
    void SetMaintenanceWindow(MaintenanceWindowT&& value) { m_maintenanceWindowHasBeenSet = true; m_maintenanceWindow = std::forward<MaintenanceWindowT>(value); }
    template<typename MaintenanceWindowT = MaintenanceWindow>
    CloudAutonomousVmClusterSummary& WithMaintenanceWindow(MaintenanceWindowT&& value) { SetMaintenanceWindow(std::forward<MaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lowest value to which you can scale down the maximum number of Autonomous
     * CDBs.</p>
     */
    inline int GetMaxAcdsLowestScaledValue() const { return m_maxAcdsLowestScaledValue; }
    inline bool MaxAcdsLowestScaledValueHasBeenSet() const { return m_maxAcdsLowestScaledValueHasBeenSet; }
    inline void SetMaxAcdsLowestScaledValue(int value) { m_maxAcdsLowestScaledValueHasBeenSet = true; m_maxAcdsLowestScaledValue = value; }
    inline CloudAutonomousVmClusterSummary& WithMaxAcdsLowestScaledValue(int value) { SetMaxAcdsLowestScaledValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of memory allocated per Oracle Compute Unit (OCU), in GB.</p>
     */
    inline int GetMemoryPerOracleComputeUnitInGBs() const { return m_memoryPerOracleComputeUnitInGBs; }
    inline bool MemoryPerOracleComputeUnitInGBsHasBeenSet() const { return m_memoryPerOracleComputeUnitInGBsHasBeenSet; }
    inline void SetMemoryPerOracleComputeUnitInGBs(int value) { m_memoryPerOracleComputeUnitInGBsHasBeenSet = true; m_memoryPerOracleComputeUnitInGBs = value; }
    inline CloudAutonomousVmClusterSummary& WithMemoryPerOracleComputeUnitInGBs(int value) { SetMemoryPerOracleComputeUnitInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount of memory allocated to the Autonomous VM cluster, in GB.</p>
     */
    inline int GetMemorySizeInGBs() const { return m_memorySizeInGBs; }
    inline bool MemorySizeInGBsHasBeenSet() const { return m_memorySizeInGBsHasBeenSet; }
    inline void SetMemorySizeInGBs(int value) { m_memorySizeInGBsHasBeenSet = true; m_memorySizeInGBs = value; }
    inline CloudAutonomousVmClusterSummary& WithMemorySizeInGBs(int value) { SetMemorySizeInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of database server nodes in the Autonomous VM cluster.</p>
     */
    inline int GetNodeCount() const { return m_nodeCount; }
    inline bool NodeCountHasBeenSet() const { return m_nodeCountHasBeenSet; }
    inline void SetNodeCount(int value) { m_nodeCountHasBeenSet = true; m_nodeCount = value; }
    inline CloudAutonomousVmClusterSummary& WithNodeCount(int value) { SetNodeCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Autonomous CDBs that can't be provisioned because of resource
     * constraints.</p>
     */
    inline int GetNonProvisionableAutonomousContainerDatabases() const { return m_nonProvisionableAutonomousContainerDatabases; }
    inline bool NonProvisionableAutonomousContainerDatabasesHasBeenSet() const { return m_nonProvisionableAutonomousContainerDatabasesHasBeenSet; }
    inline void SetNonProvisionableAutonomousContainerDatabases(int value) { m_nonProvisionableAutonomousContainerDatabasesHasBeenSet = true; m_nonProvisionableAutonomousContainerDatabases = value; }
    inline CloudAutonomousVmClusterSummary& WithNonProvisionableAutonomousContainerDatabases(int value) { SetNonProvisionableAutonomousContainerDatabases(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Autonomous CDBs that you can provision in the Autonomous VM
     * cluster.</p>
     */
    inline int GetProvisionableAutonomousContainerDatabases() const { return m_provisionableAutonomousContainerDatabases; }
    inline bool ProvisionableAutonomousContainerDatabasesHasBeenSet() const { return m_provisionableAutonomousContainerDatabasesHasBeenSet; }
    inline void SetProvisionableAutonomousContainerDatabases(int value) { m_provisionableAutonomousContainerDatabasesHasBeenSet = true; m_provisionableAutonomousContainerDatabases = value; }
    inline CloudAutonomousVmClusterSummary& WithProvisionableAutonomousContainerDatabases(int value) { SetProvisionableAutonomousContainerDatabases(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Autonomous Container Databases currently provisioned in the
     * Autonomous VM cluster.</p>
     */
    inline int GetProvisionedAutonomousContainerDatabases() const { return m_provisionedAutonomousContainerDatabases; }
    inline bool ProvisionedAutonomousContainerDatabasesHasBeenSet() const { return m_provisionedAutonomousContainerDatabasesHasBeenSet; }
    inline void SetProvisionedAutonomousContainerDatabases(int value) { m_provisionedAutonomousContainerDatabasesHasBeenSet = true; m_provisionedAutonomousContainerDatabases = value; }
    inline CloudAutonomousVmClusterSummary& WithProvisionedAutonomousContainerDatabases(int value) { SetProvisionedAutonomousContainerDatabases(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of CPUs currently provisioned in the Autonomous VM cluster.</p>
     */
    inline double GetProvisionedCpus() const { return m_provisionedCpus; }
    inline bool ProvisionedCpusHasBeenSet() const { return m_provisionedCpusHasBeenSet; }
    inline void SetProvisionedCpus(double value) { m_provisionedCpusHasBeenSet = true; m_provisionedCpus = value; }
    inline CloudAutonomousVmClusterSummary& WithProvisionedCpus(double value) { SetProvisionedCpus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of CPUs that can be reclaimed from terminated or scaled-down
     * Autonomous Databases.</p>
     */
    inline double GetReclaimableCpus() const { return m_reclaimableCpus; }
    inline bool ReclaimableCpusHasBeenSet() const { return m_reclaimableCpusHasBeenSet; }
    inline void SetReclaimableCpus(double value) { m_reclaimableCpusHasBeenSet = true; m_reclaimableCpus = value; }
    inline CloudAutonomousVmClusterSummary& WithReclaimableCpus(double value) { SetReclaimableCpus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of CPUs reserved for system operations and redundancy.</p>
     */
    inline double GetReservedCpus() const { return m_reservedCpus; }
    inline bool ReservedCpusHasBeenSet() const { return m_reservedCpusHasBeenSet; }
    inline void SetReservedCpus(double value) { m_reservedCpusHasBeenSet = true; m_reservedCpus = value; }
    inline CloudAutonomousVmClusterSummary& WithReservedCpus(double value) { SetReservedCpus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SCAN listener port for non-TLS (TCP) protocol.</p>
     */
    inline int GetScanListenerPortNonTls() const { return m_scanListenerPortNonTls; }
    inline bool ScanListenerPortNonTlsHasBeenSet() const { return m_scanListenerPortNonTlsHasBeenSet; }
    inline void SetScanListenerPortNonTls(int value) { m_scanListenerPortNonTlsHasBeenSet = true; m_scanListenerPortNonTls = value; }
    inline CloudAutonomousVmClusterSummary& WithScanListenerPortNonTls(int value) { SetScanListenerPortNonTls(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SCAN listener port for TLS (TCP) protocol.</p>
     */
    inline int GetScanListenerPortTls() const { return m_scanListenerPortTls; }
    inline bool ScanListenerPortTlsHasBeenSet() const { return m_scanListenerPortTlsHasBeenSet; }
    inline void SetScanListenerPortTls(int value) { m_scanListenerPortTlsHasBeenSet = true; m_scanListenerPortTls = value; }
    inline CloudAutonomousVmClusterSummary& WithScanListenerPortTls(int value) { SetScanListenerPortTls(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The shape of the Exadata infrastructure for the Autonomous VM cluster.</p>
     */
    inline const Aws::String& GetShape() const { return m_shape; }
    inline bool ShapeHasBeenSet() const { return m_shapeHasBeenSet; }
    template<typename ShapeT = Aws::String>
    void SetShape(ShapeT&& value) { m_shapeHasBeenSet = true; m_shape = std::forward<ShapeT>(value); }
    template<typename ShapeT = Aws::String>
    CloudAutonomousVmClusterSummary& WithShape(ShapeT&& value) { SetShape(std::forward<ShapeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the Autonomous VM cluster was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CloudAutonomousVmClusterSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration date and time of the database SSL certificate.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeDatabaseSslCertificateExpires() const { return m_timeDatabaseSslCertificateExpires; }
    inline bool TimeDatabaseSslCertificateExpiresHasBeenSet() const { return m_timeDatabaseSslCertificateExpiresHasBeenSet; }
    template<typename TimeDatabaseSslCertificateExpiresT = Aws::Utils::DateTime>
    void SetTimeDatabaseSslCertificateExpires(TimeDatabaseSslCertificateExpiresT&& value) { m_timeDatabaseSslCertificateExpiresHasBeenSet = true; m_timeDatabaseSslCertificateExpires = std::forward<TimeDatabaseSslCertificateExpiresT>(value); }
    template<typename TimeDatabaseSslCertificateExpiresT = Aws::Utils::DateTime>
    CloudAutonomousVmClusterSummary& WithTimeDatabaseSslCertificateExpires(TimeDatabaseSslCertificateExpiresT&& value) { SetTimeDatabaseSslCertificateExpires(std::forward<TimeDatabaseSslCertificateExpiresT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration date and time of the Oracle REST Data Services (ORDS)
     * certificate.</p>
     */
    inline const Aws::Utils::DateTime& GetTimeOrdsCertificateExpires() const { return m_timeOrdsCertificateExpires; }
    inline bool TimeOrdsCertificateExpiresHasBeenSet() const { return m_timeOrdsCertificateExpiresHasBeenSet; }
    template<typename TimeOrdsCertificateExpiresT = Aws::Utils::DateTime>
    void SetTimeOrdsCertificateExpires(TimeOrdsCertificateExpiresT&& value) { m_timeOrdsCertificateExpiresHasBeenSet = true; m_timeOrdsCertificateExpires = std::forward<TimeOrdsCertificateExpiresT>(value); }
    template<typename TimeOrdsCertificateExpiresT = Aws::Utils::DateTime>
    CloudAutonomousVmClusterSummary& WithTimeOrdsCertificateExpires(TimeOrdsCertificateExpiresT&& value) { SetTimeOrdsCertificateExpires(std::forward<TimeOrdsCertificateExpiresT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone of the Autonomous VM cluster.</p>
     */
    inline const Aws::String& GetTimeZone() const { return m_timeZone; }
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }
    template<typename TimeZoneT = Aws::String>
    void SetTimeZone(TimeZoneT&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::forward<TimeZoneT>(value); }
    template<typename TimeZoneT = Aws::String>
    CloudAutonomousVmClusterSummary& WithTimeZone(TimeZoneT&& value) { SetTimeZone(std::forward<TimeZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of Autonomous Container Databases that can be created in the
     * Autonomous VM cluster.</p>
     */
    inline int GetTotalContainerDatabases() const { return m_totalContainerDatabases; }
    inline bool TotalContainerDatabasesHasBeenSet() const { return m_totalContainerDatabasesHasBeenSet; }
    inline void SetTotalContainerDatabases(int value) { m_totalContainerDatabasesHasBeenSet = true; m_totalContainerDatabases = value; }
    inline CloudAutonomousVmClusterSummary& WithTotalContainerDatabases(int value) { SetTotalContainerDatabases(value); return *this;}
    ///@}
  private:

    Aws::String m_cloudAutonomousVmClusterId;
    bool m_cloudAutonomousVmClusterIdHasBeenSet = false;

    Aws::String m_cloudAutonomousVmClusterArn;
    bool m_cloudAutonomousVmClusterArnHasBeenSet = false;

    Aws::String m_odbNetworkId;
    bool m_odbNetworkIdHasBeenSet = false;

    Aws::String m_ociResourceAnchorName;
    bool m_ociResourceAnchorNameHasBeenSet = false;

    double m_percentProgress{0.0};
    bool m_percentProgressHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    ResourceStatus m_status{ResourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_cloudExadataInfrastructureId;
    bool m_cloudExadataInfrastructureIdHasBeenSet = false;

    double m_autonomousDataStoragePercentage{0.0};
    bool m_autonomousDataStoragePercentageHasBeenSet = false;

    double m_autonomousDataStorageSizeInTBs{0.0};
    bool m_autonomousDataStorageSizeInTBsHasBeenSet = false;

    double m_availableAutonomousDataStorageSizeInTBs{0.0};
    bool m_availableAutonomousDataStorageSizeInTBsHasBeenSet = false;

    int m_availableContainerDatabases{0};
    bool m_availableContainerDatabasesHasBeenSet = false;

    double m_availableCpus{0.0};
    bool m_availableCpusHasBeenSet = false;

    ComputeModel m_computeModel{ComputeModel::NOT_SET};
    bool m_computeModelHasBeenSet = false;

    int m_cpuCoreCount{0};
    bool m_cpuCoreCountHasBeenSet = false;

    int m_cpuCoreCountPerNode{0};
    bool m_cpuCoreCountPerNodeHasBeenSet = false;

    double m_cpuPercentage{0.0};
    bool m_cpuPercentageHasBeenSet = false;

    double m_dataStorageSizeInGBs{0.0};
    bool m_dataStorageSizeInGBsHasBeenSet = false;

    double m_dataStorageSizeInTBs{0.0};
    bool m_dataStorageSizeInTBsHasBeenSet = false;

    int m_dbNodeStorageSizeInGBs{0};
    bool m_dbNodeStorageSizeInGBsHasBeenSet = false;

    Aws::Vector<Aws::String> m_dbServers;
    bool m_dbServersHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    double m_exadataStorageInTBsLowestScaledValue{0.0};
    bool m_exadataStorageInTBsLowestScaledValueHasBeenSet = false;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::String m_ocid;
    bool m_ocidHasBeenSet = false;

    Aws::String m_ociUrl;
    bool m_ociUrlHasBeenSet = false;

    bool m_isMtlsEnabledVmCluster{false};
    bool m_isMtlsEnabledVmClusterHasBeenSet = false;

    LicenseModel m_licenseModel{LicenseModel::NOT_SET};
    bool m_licenseModelHasBeenSet = false;

    MaintenanceWindow m_maintenanceWindow;
    bool m_maintenanceWindowHasBeenSet = false;

    int m_maxAcdsLowestScaledValue{0};
    bool m_maxAcdsLowestScaledValueHasBeenSet = false;

    int m_memoryPerOracleComputeUnitInGBs{0};
    bool m_memoryPerOracleComputeUnitInGBsHasBeenSet = false;

    int m_memorySizeInGBs{0};
    bool m_memorySizeInGBsHasBeenSet = false;

    int m_nodeCount{0};
    bool m_nodeCountHasBeenSet = false;

    int m_nonProvisionableAutonomousContainerDatabases{0};
    bool m_nonProvisionableAutonomousContainerDatabasesHasBeenSet = false;

    int m_provisionableAutonomousContainerDatabases{0};
    bool m_provisionableAutonomousContainerDatabasesHasBeenSet = false;

    int m_provisionedAutonomousContainerDatabases{0};
    bool m_provisionedAutonomousContainerDatabasesHasBeenSet = false;

    double m_provisionedCpus{0.0};
    bool m_provisionedCpusHasBeenSet = false;

    double m_reclaimableCpus{0.0};
    bool m_reclaimableCpusHasBeenSet = false;

    double m_reservedCpus{0.0};
    bool m_reservedCpusHasBeenSet = false;

    int m_scanListenerPortNonTls{0};
    bool m_scanListenerPortNonTlsHasBeenSet = false;

    int m_scanListenerPortTls{0};
    bool m_scanListenerPortTlsHasBeenSet = false;

    Aws::String m_shape;
    bool m_shapeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_timeDatabaseSslCertificateExpires{};
    bool m_timeDatabaseSslCertificateExpiresHasBeenSet = false;

    Aws::Utils::DateTime m_timeOrdsCertificateExpires{};
    bool m_timeOrdsCertificateExpiresHasBeenSet = false;

    Aws::String m_timeZone;
    bool m_timeZoneHasBeenSet = false;

    int m_totalContainerDatabases{0};
    bool m_totalContainerDatabasesHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
