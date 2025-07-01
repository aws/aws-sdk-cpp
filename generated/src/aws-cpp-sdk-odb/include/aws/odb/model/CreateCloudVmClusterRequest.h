/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/OdbRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/model/DataCollectionOptions.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/odb/model/LicenseModel.h>
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
  class CreateCloudVmClusterRequest : public OdbRequest
  {
  public:
    AWS_ODB_API CreateCloudVmClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCloudVmCluster"; }

    AWS_ODB_API Aws::String SerializePayload() const override;

    AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the Exadata infrastructure for this VM cluster.</p>
     */
    inline const Aws::String& GetCloudExadataInfrastructureId() const { return m_cloudExadataInfrastructureId; }
    inline bool CloudExadataInfrastructureIdHasBeenSet() const { return m_cloudExadataInfrastructureIdHasBeenSet; }
    template<typename CloudExadataInfrastructureIdT = Aws::String>
    void SetCloudExadataInfrastructureId(CloudExadataInfrastructureIdT&& value) { m_cloudExadataInfrastructureIdHasBeenSet = true; m_cloudExadataInfrastructureId = std::forward<CloudExadataInfrastructureIdT>(value); }
    template<typename CloudExadataInfrastructureIdT = Aws::String>
    CreateCloudVmClusterRequest& WithCloudExadataInfrastructureId(CloudExadataInfrastructureIdT&& value) { SetCloudExadataInfrastructureId(std::forward<CloudExadataInfrastructureIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of CPU cores to enable on the VM cluster.</p>
     */
    inline int GetCpuCoreCount() const { return m_cpuCoreCount; }
    inline bool CpuCoreCountHasBeenSet() const { return m_cpuCoreCountHasBeenSet; }
    inline void SetCpuCoreCount(int value) { m_cpuCoreCountHasBeenSet = true; m_cpuCoreCount = value; }
    inline CreateCloudVmClusterRequest& WithCpuCoreCount(int value) { SetCpuCoreCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly name for the VM cluster.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CreateCloudVmClusterRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid software version of Oracle Grid Infrastructure (GI). To get the list
     * of valid values, use the <code>ListGiVersions</code> operation and specify the
     * shape of the Exadata infrastructure.</p> <p>Example: <code>19.0.0.0</code> </p>
     */
    inline const Aws::String& GetGiVersion() const { return m_giVersion; }
    inline bool GiVersionHasBeenSet() const { return m_giVersionHasBeenSet; }
    template<typename GiVersionT = Aws::String>
    void SetGiVersion(GiVersionT&& value) { m_giVersionHasBeenSet = true; m_giVersion = std::forward<GiVersionT>(value); }
    template<typename GiVersionT = Aws::String>
    CreateCloudVmClusterRequest& WithGiVersion(GiVersionT&& value) { SetGiVersion(std::forward<GiVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The host name for the VM cluster.</p> <p>Constraints:</p> <ul> <li> <p>Can't
     * be "localhost" or "hostname".</p> </li> <li> <p>Can't contain "-version".</p>
     * </li> <li> <p>The maximum length of the combined hostname and domain is 63
     * characters.</p> </li> <li> <p>The hostname must be unique within the subnet.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetHostname() const { return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    template<typename HostnameT = Aws::String>
    void SetHostname(HostnameT&& value) { m_hostnameHasBeenSet = true; m_hostname = std::forward<HostnameT>(value); }
    template<typename HostnameT = Aws::String>
    CreateCloudVmClusterRequest& WithHostname(HostnameT&& value) { SetHostname(std::forward<HostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public key portion of one or more key pairs used for SSH access to the VM
     * cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSshPublicKeys() const { return m_sshPublicKeys; }
    inline bool SshPublicKeysHasBeenSet() const { return m_sshPublicKeysHasBeenSet; }
    template<typename SshPublicKeysT = Aws::Vector<Aws::String>>
    void SetSshPublicKeys(SshPublicKeysT&& value) { m_sshPublicKeysHasBeenSet = true; m_sshPublicKeys = std::forward<SshPublicKeysT>(value); }
    template<typename SshPublicKeysT = Aws::Vector<Aws::String>>
    CreateCloudVmClusterRequest& WithSshPublicKeys(SshPublicKeysT&& value) { SetSshPublicKeys(std::forward<SshPublicKeysT>(value)); return *this;}
    template<typename SshPublicKeysT = Aws::String>
    CreateCloudVmClusterRequest& AddSshPublicKeys(SshPublicKeysT&& value) { m_sshPublicKeysHasBeenSet = true; m_sshPublicKeys.emplace_back(std::forward<SshPublicKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the ODB network for the VM cluster.</p>
     */
    inline const Aws::String& GetOdbNetworkId() const { return m_odbNetworkId; }
    inline bool OdbNetworkIdHasBeenSet() const { return m_odbNetworkIdHasBeenSet; }
    template<typename OdbNetworkIdT = Aws::String>
    void SetOdbNetworkId(OdbNetworkIdT&& value) { m_odbNetworkIdHasBeenSet = true; m_odbNetworkId = std::forward<OdbNetworkIdT>(value); }
    template<typename OdbNetworkIdT = Aws::String>
    CreateCloudVmClusterRequest& WithOdbNetworkId(OdbNetworkIdT&& value) { SetOdbNetworkId(std::forward<OdbNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the Grid Infrastructure cluster. The name isn't case
     * sensitive.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    CreateCloudVmClusterRequest& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of preferences for the various diagnostic collection options for the
     * VM cluster.</p>
     */
    inline const DataCollectionOptions& GetDataCollectionOptions() const { return m_dataCollectionOptions; }
    inline bool DataCollectionOptionsHasBeenSet() const { return m_dataCollectionOptionsHasBeenSet; }
    template<typename DataCollectionOptionsT = DataCollectionOptions>
    void SetDataCollectionOptions(DataCollectionOptionsT&& value) { m_dataCollectionOptionsHasBeenSet = true; m_dataCollectionOptions = std::forward<DataCollectionOptionsT>(value); }
    template<typename DataCollectionOptionsT = DataCollectionOptions>
    CreateCloudVmClusterRequest& WithDataCollectionOptions(DataCollectionOptionsT&& value) { SetDataCollectionOptions(std::forward<DataCollectionOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the data disk group, in terabytes (TBs), to allocate for the VM
     * cluster.</p>
     */
    inline double GetDataStorageSizeInTBs() const { return m_dataStorageSizeInTBs; }
    inline bool DataStorageSizeInTBsHasBeenSet() const { return m_dataStorageSizeInTBsHasBeenSet; }
    inline void SetDataStorageSizeInTBs(double value) { m_dataStorageSizeInTBsHasBeenSet = true; m_dataStorageSizeInTBs = value; }
    inline CreateCloudVmClusterRequest& WithDataStorageSizeInTBs(double value) { SetDataStorageSizeInTBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of local node storage, in gigabytes (GBs), to allocate for the VM
     * cluster.</p>
     */
    inline int GetDbNodeStorageSizeInGBs() const { return m_dbNodeStorageSizeInGBs; }
    inline bool DbNodeStorageSizeInGBsHasBeenSet() const { return m_dbNodeStorageSizeInGBsHasBeenSet; }
    inline void SetDbNodeStorageSizeInGBs(int value) { m_dbNodeStorageSizeInGBsHasBeenSet = true; m_dbNodeStorageSizeInGBs = value; }
    inline CreateCloudVmClusterRequest& WithDbNodeStorageSizeInGBs(int value) { SetDbNodeStorageSizeInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of database servers for the VM cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDbServers() const { return m_dbServers; }
    inline bool DbServersHasBeenSet() const { return m_dbServersHasBeenSet; }
    template<typename DbServersT = Aws::Vector<Aws::String>>
    void SetDbServers(DbServersT&& value) { m_dbServersHasBeenSet = true; m_dbServers = std::forward<DbServersT>(value); }
    template<typename DbServersT = Aws::Vector<Aws::String>>
    CreateCloudVmClusterRequest& WithDbServers(DbServersT&& value) { SetDbServers(std::forward<DbServersT>(value)); return *this;}
    template<typename DbServersT = Aws::String>
    CreateCloudVmClusterRequest& AddDbServers(DbServersT&& value) { m_dbServersHasBeenSet = true; m_dbServers.emplace_back(std::forward<DbServersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of resource tags to apply to the VM cluster.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateCloudVmClusterRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateCloudVmClusterRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies whether to enable database backups to local Exadata storage for the
     * VM cluster.</p>
     */
    inline bool GetIsLocalBackupEnabled() const { return m_isLocalBackupEnabled; }
    inline bool IsLocalBackupEnabledHasBeenSet() const { return m_isLocalBackupEnabledHasBeenSet; }
    inline void SetIsLocalBackupEnabled(bool value) { m_isLocalBackupEnabledHasBeenSet = true; m_isLocalBackupEnabled = value; }
    inline CreateCloudVmClusterRequest& WithIsLocalBackupEnabled(bool value) { SetIsLocalBackupEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to create a sparse disk group for the VM cluster.</p>
     */
    inline bool GetIsSparseDiskgroupEnabled() const { return m_isSparseDiskgroupEnabled; }
    inline bool IsSparseDiskgroupEnabledHasBeenSet() const { return m_isSparseDiskgroupEnabledHasBeenSet; }
    inline void SetIsSparseDiskgroupEnabled(bool value) { m_isSparseDiskgroupEnabledHasBeenSet = true; m_isSparseDiskgroupEnabled = value; }
    inline CreateCloudVmClusterRequest& WithIsSparseDiskgroupEnabled(bool value) { SetIsSparseDiskgroupEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Oracle license model to apply to the VM cluster.</p> <p>Default:
     * <code>LICENSE_INCLUDED</code> </p>
     */
    inline LicenseModel GetLicenseModel() const { return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    inline void SetLicenseModel(LicenseModel value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }
    inline CreateCloudVmClusterRequest& WithLicenseModel(LicenseModel value) { SetLicenseModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of memory, in gigabytes (GBs), to allocate for the VM cluster.</p>
     */
    inline int GetMemorySizeInGBs() const { return m_memorySizeInGBs; }
    inline bool MemorySizeInGBsHasBeenSet() const { return m_memorySizeInGBsHasBeenSet; }
    inline void SetMemorySizeInGBs(int value) { m_memorySizeInGBsHasBeenSet = true; m_memorySizeInGBs = value; }
    inline CreateCloudVmClusterRequest& WithMemorySizeInGBs(int value) { SetMemorySizeInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the operating system of the image for the VM cluster.</p>
     */
    inline const Aws::String& GetSystemVersion() const { return m_systemVersion; }
    inline bool SystemVersionHasBeenSet() const { return m_systemVersionHasBeenSet; }
    template<typename SystemVersionT = Aws::String>
    void SetSystemVersion(SystemVersionT&& value) { m_systemVersionHasBeenSet = true; m_systemVersion = std::forward<SystemVersionT>(value); }
    template<typename SystemVersionT = Aws::String>
    CreateCloudVmClusterRequest& WithSystemVersion(SystemVersionT&& value) { SetSystemVersion(std::forward<SystemVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone for the VM cluster. For a list of valid values for time zone,
     * you can check the options in the console.</p> <p>Default: UTC</p>
     */
    inline const Aws::String& GetTimeZone() const { return m_timeZone; }
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }
    template<typename TimeZoneT = Aws::String>
    void SetTimeZone(TimeZoneT&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::forward<TimeZoneT>(value); }
    template<typename TimeZoneT = Aws::String>
    CreateCloudVmClusterRequest& WithTimeZone(TimeZoneT&& value) { SetTimeZone(std::forward<TimeZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you don't specify a client token, the Amazon Web
     * Services SDK automatically generates a client token and uses it for the request
     * to ensure idempotency. The client token is valid for up to 24 hours after it's
     * first used.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateCloudVmClusterRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number for TCP connections to the single client access name (SCAN)
     * listener. </p> <p>Valid values: <code>1024–8999</code> with the following
     * exceptions: <code>2484</code>, <code>6100</code>, <code>6200</code>,
     * <code>7060</code>, <code>7070</code>, <code>7085</code>, and <code>7879</code>
     * </p> <p>Default: <code>1521</code> </p>
     */
    inline int GetScanListenerPortTcp() const { return m_scanListenerPortTcp; }
    inline bool ScanListenerPortTcpHasBeenSet() const { return m_scanListenerPortTcpHasBeenSet; }
    inline void SetScanListenerPortTcp(int value) { m_scanListenerPortTcpHasBeenSet = true; m_scanListenerPortTcp = value; }
    inline CreateCloudVmClusterRequest& WithScanListenerPortTcp(int value) { SetScanListenerPortTcp(value); return *this;}
    ///@}
  private:

    Aws::String m_cloudExadataInfrastructureId;
    bool m_cloudExadataInfrastructureIdHasBeenSet = false;

    int m_cpuCoreCount{0};
    bool m_cpuCoreCountHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_giVersion;
    bool m_giVersionHasBeenSet = false;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::Vector<Aws::String> m_sshPublicKeys;
    bool m_sshPublicKeysHasBeenSet = false;

    Aws::String m_odbNetworkId;
    bool m_odbNetworkIdHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    DataCollectionOptions m_dataCollectionOptions;
    bool m_dataCollectionOptionsHasBeenSet = false;

    double m_dataStorageSizeInTBs{0.0};
    bool m_dataStorageSizeInTBsHasBeenSet = false;

    int m_dbNodeStorageSizeInGBs{0};
    bool m_dbNodeStorageSizeInGBsHasBeenSet = false;

    Aws::Vector<Aws::String> m_dbServers;
    bool m_dbServersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_isLocalBackupEnabled{false};
    bool m_isLocalBackupEnabledHasBeenSet = false;

    bool m_isSparseDiskgroupEnabled{false};
    bool m_isSparseDiskgroupEnabledHasBeenSet = false;

    LicenseModel m_licenseModel{LicenseModel::NOT_SET};
    bool m_licenseModelHasBeenSet = false;

    int m_memorySizeInGBs{0};
    bool m_memorySizeInGBsHasBeenSet = false;

    Aws::String m_systemVersion;
    bool m_systemVersionHasBeenSet = false;

    Aws::String m_timeZone;
    bool m_timeZoneHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    int m_scanListenerPortTcp{0};
    bool m_scanListenerPortTcpHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
