/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/OdbRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/model/LicenseModel.h>
#include <aws/odb/model/MaintenanceWindow.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace odb
{
namespace Model
{

  /**
   */
  class CreateCloudAutonomousVmClusterRequest : public OdbRequest
  {
  public:
    AWS_ODB_API CreateCloudAutonomousVmClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCloudAutonomousVmCluster"; }

    AWS_ODB_API Aws::String SerializePayload() const override;

    AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the Exadata infrastructure where the VM cluster will
     * be created.</p>
     */
    inline const Aws::String& GetCloudExadataInfrastructureId() const { return m_cloudExadataInfrastructureId; }
    inline bool CloudExadataInfrastructureIdHasBeenSet() const { return m_cloudExadataInfrastructureIdHasBeenSet; }
    template<typename CloudExadataInfrastructureIdT = Aws::String>
    void SetCloudExadataInfrastructureId(CloudExadataInfrastructureIdT&& value) { m_cloudExadataInfrastructureIdHasBeenSet = true; m_cloudExadataInfrastructureId = std::forward<CloudExadataInfrastructureIdT>(value); }
    template<typename CloudExadataInfrastructureIdT = Aws::String>
    CreateCloudAutonomousVmClusterRequest& WithCloudExadataInfrastructureId(CloudExadataInfrastructureIdT&& value) { SetCloudExadataInfrastructureId(std::forward<CloudExadataInfrastructureIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the ODB network to be used for the VM cluster.</p>
     */
    inline const Aws::String& GetOdbNetworkId() const { return m_odbNetworkId; }
    inline bool OdbNetworkIdHasBeenSet() const { return m_odbNetworkIdHasBeenSet; }
    template<typename OdbNetworkIdT = Aws::String>
    void SetOdbNetworkId(OdbNetworkIdT&& value) { m_odbNetworkIdHasBeenSet = true; m_odbNetworkId = std::forward<OdbNetworkIdT>(value); }
    template<typename OdbNetworkIdT = Aws::String>
    CreateCloudAutonomousVmClusterRequest& WithOdbNetworkId(OdbNetworkIdT&& value) { SetOdbNetworkId(std::forward<OdbNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name for the Autonomous VM cluster. The name does not need to be
     * unique.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CreateCloudAutonomousVmClusterRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A client-provided token to ensure idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateCloudAutonomousVmClusterRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data disk group size to be allocated for Autonomous Databases, in
     * terabytes (TB).</p>
     */
    inline double GetAutonomousDataStorageSizeInTBs() const { return m_autonomousDataStorageSizeInTBs; }
    inline bool AutonomousDataStorageSizeInTBsHasBeenSet() const { return m_autonomousDataStorageSizeInTBsHasBeenSet; }
    inline void SetAutonomousDataStorageSizeInTBs(double value) { m_autonomousDataStorageSizeInTBsHasBeenSet = true; m_autonomousDataStorageSizeInTBs = value; }
    inline CreateCloudAutonomousVmClusterRequest& WithAutonomousDataStorageSizeInTBs(double value) { SetAutonomousDataStorageSizeInTBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of CPU cores to be enabled per VM cluster node.</p>
     */
    inline int GetCpuCoreCountPerNode() const { return m_cpuCoreCountPerNode; }
    inline bool CpuCoreCountPerNodeHasBeenSet() const { return m_cpuCoreCountPerNodeHasBeenSet; }
    inline void SetCpuCoreCountPerNode(int value) { m_cpuCoreCountPerNodeHasBeenSet = true; m_cpuCoreCountPerNode = value; }
    inline CreateCloudAutonomousVmClusterRequest& WithCpuCoreCountPerNode(int value) { SetCpuCoreCountPerNode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of database servers to be used for the Autonomous VM cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDbServers() const { return m_dbServers; }
    inline bool DbServersHasBeenSet() const { return m_dbServersHasBeenSet; }
    template<typename DbServersT = Aws::Vector<Aws::String>>
    void SetDbServers(DbServersT&& value) { m_dbServersHasBeenSet = true; m_dbServers = std::forward<DbServersT>(value); }
    template<typename DbServersT = Aws::Vector<Aws::String>>
    CreateCloudAutonomousVmClusterRequest& WithDbServers(DbServersT&& value) { SetDbServers(std::forward<DbServersT>(value)); return *this;}
    template<typename DbServersT = Aws::String>
    CreateCloudAutonomousVmClusterRequest& AddDbServers(DbServersT&& value) { m_dbServersHasBeenSet = true; m_dbServers.emplace_back(std::forward<DbServersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A user-provided description of the Autonomous VM cluster.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateCloudAutonomousVmClusterRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable mutual TLS (mTLS) authentication for the
     * Autonomous VM cluster.</p>
     */
    inline bool GetIsMtlsEnabledVmCluster() const { return m_isMtlsEnabledVmCluster; }
    inline bool IsMtlsEnabledVmClusterHasBeenSet() const { return m_isMtlsEnabledVmClusterHasBeenSet; }
    inline void SetIsMtlsEnabledVmCluster(bool value) { m_isMtlsEnabledVmClusterHasBeenSet = true; m_isMtlsEnabledVmCluster = value; }
    inline CreateCloudAutonomousVmClusterRequest& WithIsMtlsEnabledVmCluster(bool value) { SetIsMtlsEnabledVmCluster(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Oracle license model to apply to the Autonomous VM cluster.</p>
     */
    inline LicenseModel GetLicenseModel() const { return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    inline void SetLicenseModel(LicenseModel value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }
    inline CreateCloudAutonomousVmClusterRequest& WithLicenseModel(LicenseModel value) { SetLicenseModel(value); return *this;}
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
    CreateCloudAutonomousVmClusterRequest& WithMaintenanceWindow(MaintenanceWindowT&& value) { SetMaintenanceWindow(std::forward<MaintenanceWindowT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of memory to be allocated per OCPU, in GB.</p>
     */
    inline int GetMemoryPerOracleComputeUnitInGBs() const { return m_memoryPerOracleComputeUnitInGBs; }
    inline bool MemoryPerOracleComputeUnitInGBsHasBeenSet() const { return m_memoryPerOracleComputeUnitInGBsHasBeenSet; }
    inline void SetMemoryPerOracleComputeUnitInGBs(int value) { m_memoryPerOracleComputeUnitInGBsHasBeenSet = true; m_memoryPerOracleComputeUnitInGBs = value; }
    inline CreateCloudAutonomousVmClusterRequest& WithMemoryPerOracleComputeUnitInGBs(int value) { SetMemoryPerOracleComputeUnitInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SCAN listener port for non-TLS (TCP) protocol.</p>
     */
    inline int GetScanListenerPortNonTls() const { return m_scanListenerPortNonTls; }
    inline bool ScanListenerPortNonTlsHasBeenSet() const { return m_scanListenerPortNonTlsHasBeenSet; }
    inline void SetScanListenerPortNonTls(int value) { m_scanListenerPortNonTlsHasBeenSet = true; m_scanListenerPortNonTls = value; }
    inline CreateCloudAutonomousVmClusterRequest& WithScanListenerPortNonTls(int value) { SetScanListenerPortNonTls(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SCAN listener port for TLS (TCP) protocol.</p>
     */
    inline int GetScanListenerPortTls() const { return m_scanListenerPortTls; }
    inline bool ScanListenerPortTlsHasBeenSet() const { return m_scanListenerPortTlsHasBeenSet; }
    inline void SetScanListenerPortTls(int value) { m_scanListenerPortTlsHasBeenSet = true; m_scanListenerPortTls = value; }
    inline CreateCloudAutonomousVmClusterRequest& WithScanListenerPortTls(int value) { SetScanListenerPortTls(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Free-form tags for this resource. Each tag is a key-value pair with no
     * predefined name, type, or namespace.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateCloudAutonomousVmClusterRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateCloudAutonomousVmClusterRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The time zone to use for the Autonomous VM cluster.</p>
     */
    inline const Aws::String& GetTimeZone() const { return m_timeZone; }
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }
    template<typename TimeZoneT = Aws::String>
    void SetTimeZone(TimeZoneT&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::forward<TimeZoneT>(value); }
    template<typename TimeZoneT = Aws::String>
    CreateCloudAutonomousVmClusterRequest& WithTimeZone(TimeZoneT&& value) { SetTimeZone(std::forward<TimeZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of Autonomous CDBs that you can create in the Autonomous VM
     * cluster.</p>
     */
    inline int GetTotalContainerDatabases() const { return m_totalContainerDatabases; }
    inline bool TotalContainerDatabasesHasBeenSet() const { return m_totalContainerDatabasesHasBeenSet; }
    inline void SetTotalContainerDatabases(int value) { m_totalContainerDatabasesHasBeenSet = true; m_totalContainerDatabases = value; }
    inline CreateCloudAutonomousVmClusterRequest& WithTotalContainerDatabases(int value) { SetTotalContainerDatabases(value); return *this;}
    ///@}
  private:

    Aws::String m_cloudExadataInfrastructureId;
    bool m_cloudExadataInfrastructureIdHasBeenSet = false;

    Aws::String m_odbNetworkId;
    bool m_odbNetworkIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    double m_autonomousDataStorageSizeInTBs{0.0};
    bool m_autonomousDataStorageSizeInTBsHasBeenSet = false;

    int m_cpuCoreCountPerNode{0};
    bool m_cpuCoreCountPerNodeHasBeenSet = false;

    Aws::Vector<Aws::String> m_dbServers;
    bool m_dbServersHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_isMtlsEnabledVmCluster{false};
    bool m_isMtlsEnabledVmClusterHasBeenSet = false;

    LicenseModel m_licenseModel{LicenseModel::NOT_SET};
    bool m_licenseModelHasBeenSet = false;

    MaintenanceWindow m_maintenanceWindow;
    bool m_maintenanceWindowHasBeenSet = false;

    int m_memoryPerOracleComputeUnitInGBs{0};
    bool m_memoryPerOracleComputeUnitInGBsHasBeenSet = false;

    int m_scanListenerPortNonTls{0};
    bool m_scanListenerPortNonTlsHasBeenSet = false;

    int m_scanListenerPortTls{0};
    bool m_scanListenerPortTlsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_timeZone;
    bool m_timeZoneHasBeenSet = false;

    int m_totalContainerDatabases{0};
    bool m_totalContainerDatabasesHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
