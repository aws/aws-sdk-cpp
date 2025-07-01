/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/model/ResourceStatus.h>
#include <aws/odb/model/DataCollectionOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/model/DiskRedundancy.h>
#include <aws/odb/model/ExadataIormConfig.h>
#include <aws/odb/model/LicenseModel.h>
#include <aws/core/utils/DateTime.h>
#include <aws/odb/model/ComputeModel.h>
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
   * <p>Information about a VM cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/CloudVmCluster">AWS
   * API Reference</a></p>
   */
  class CloudVmCluster
  {
  public:
    AWS_ODB_API CloudVmCluster() = default;
    AWS_ODB_API CloudVmCluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API CloudVmCluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the VM cluster.</p>
     */
    inline const Aws::String& GetCloudVmClusterId() const { return m_cloudVmClusterId; }
    inline bool CloudVmClusterIdHasBeenSet() const { return m_cloudVmClusterIdHasBeenSet; }
    template<typename CloudVmClusterIdT = Aws::String>
    void SetCloudVmClusterId(CloudVmClusterIdT&& value) { m_cloudVmClusterIdHasBeenSet = true; m_cloudVmClusterId = std::forward<CloudVmClusterIdT>(value); }
    template<typename CloudVmClusterIdT = Aws::String>
    CloudVmCluster& WithCloudVmClusterId(CloudVmClusterIdT&& value) { SetCloudVmClusterId(std::forward<CloudVmClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-friendly name for the VM cluster.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CloudVmCluster& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the VM cluster.</p>
     */
    inline ResourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CloudVmCluster& WithStatus(ResourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the status of the VM cluster.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    CloudVmCluster& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the VM cluster.</p>
     */
    inline const Aws::String& GetCloudVmClusterArn() const { return m_cloudVmClusterArn; }
    inline bool CloudVmClusterArnHasBeenSet() const { return m_cloudVmClusterArnHasBeenSet; }
    template<typename CloudVmClusterArnT = Aws::String>
    void SetCloudVmClusterArn(CloudVmClusterArnT&& value) { m_cloudVmClusterArnHasBeenSet = true; m_cloudVmClusterArn = std::forward<CloudVmClusterArnT>(value); }
    template<typename CloudVmClusterArnT = Aws::String>
    CloudVmCluster& WithCloudVmClusterArn(CloudVmClusterArnT&& value) { SetCloudVmClusterArn(std::forward<CloudVmClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Exadata infrastructure that this VM cluster
     * belongs to.</p>
     */
    inline const Aws::String& GetCloudExadataInfrastructureId() const { return m_cloudExadataInfrastructureId; }
    inline bool CloudExadataInfrastructureIdHasBeenSet() const { return m_cloudExadataInfrastructureIdHasBeenSet; }
    template<typename CloudExadataInfrastructureIdT = Aws::String>
    void SetCloudExadataInfrastructureId(CloudExadataInfrastructureIdT&& value) { m_cloudExadataInfrastructureIdHasBeenSet = true; m_cloudExadataInfrastructureId = std::forward<CloudExadataInfrastructureIdT>(value); }
    template<typename CloudExadataInfrastructureIdT = Aws::String>
    CloudVmCluster& WithCloudExadataInfrastructureId(CloudExadataInfrastructureIdT&& value) { SetCloudExadataInfrastructureId(std::forward<CloudExadataInfrastructureIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Grid Infrastructure (GI) cluster.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    CloudVmCluster& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of CPU cores enabled on the VM cluster.</p>
     */
    inline int GetCpuCoreCount() const { return m_cpuCoreCount; }
    inline bool CpuCoreCountHasBeenSet() const { return m_cpuCoreCountHasBeenSet; }
    inline void SetCpuCoreCount(int value) { m_cpuCoreCountHasBeenSet = true; m_cpuCoreCount = value; }
    inline CloudVmCluster& WithCpuCoreCount(int value) { SetCpuCoreCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of diagnostic collection options enabled for the VM cluster.</p>
     */
    inline const DataCollectionOptions& GetDataCollectionOptions() const { return m_dataCollectionOptions; }
    inline bool DataCollectionOptionsHasBeenSet() const { return m_dataCollectionOptionsHasBeenSet; }
    template<typename DataCollectionOptionsT = DataCollectionOptions>
    void SetDataCollectionOptions(DataCollectionOptionsT&& value) { m_dataCollectionOptionsHasBeenSet = true; m_dataCollectionOptions = std::forward<DataCollectionOptionsT>(value); }
    template<typename DataCollectionOptionsT = DataCollectionOptions>
    CloudVmCluster& WithDataCollectionOptions(DataCollectionOptionsT&& value) { SetDataCollectionOptions(std::forward<DataCollectionOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the data disk group, in terabytes (TB), that's allocated for the
     * VM cluster.</p>
     */
    inline double GetDataStorageSizeInTBs() const { return m_dataStorageSizeInTBs; }
    inline bool DataStorageSizeInTBsHasBeenSet() const { return m_dataStorageSizeInTBsHasBeenSet; }
    inline void SetDataStorageSizeInTBs(double value) { m_dataStorageSizeInTBsHasBeenSet = true; m_dataStorageSizeInTBs = value; }
    inline CloudVmCluster& WithDataStorageSizeInTBs(double value) { SetDataStorageSizeInTBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of local node storage, in gigabytes (GB), that's allocated for the
     * VM cluster.</p>
     */
    inline int GetDbNodeStorageSizeInGBs() const { return m_dbNodeStorageSizeInGBs; }
    inline bool DbNodeStorageSizeInGBsHasBeenSet() const { return m_dbNodeStorageSizeInGBsHasBeenSet; }
    inline void SetDbNodeStorageSizeInGBs(int value) { m_dbNodeStorageSizeInGBsHasBeenSet = true; m_dbNodeStorageSizeInGBs = value; }
    inline CloudVmCluster& WithDbNodeStorageSizeInGBs(int value) { SetDbNodeStorageSizeInGBs(value); return *this;}
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
    CloudVmCluster& WithDbServers(DbServersT&& value) { SetDbServers(std::forward<DbServersT>(value)); return *this;}
    template<typename DbServersT = Aws::String>
    CloudVmCluster& AddDbServers(DbServersT&& value) { m_dbServersHasBeenSet = true; m_dbServers.emplace_back(std::forward<DbServersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of redundancy configured for the VM cluster. <code>NORMAL</code> is
     * 2-way redundancy. <code>HIGH</code> is 3-way redundancy.</p>
     */
    inline DiskRedundancy GetDiskRedundancy() const { return m_diskRedundancy; }
    inline bool DiskRedundancyHasBeenSet() const { return m_diskRedundancyHasBeenSet; }
    inline void SetDiskRedundancy(DiskRedundancy value) { m_diskRedundancyHasBeenSet = true; m_diskRedundancy = value; }
    inline CloudVmCluster& WithDiskRedundancy(DiskRedundancy value) { SetDiskRedundancy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The software version of the Oracle Grid Infrastructure (GI) for the VM
     * cluster.</p>
     */
    inline const Aws::String& GetGiVersion() const { return m_giVersion; }
    inline bool GiVersionHasBeenSet() const { return m_giVersionHasBeenSet; }
    template<typename GiVersionT = Aws::String>
    void SetGiVersion(GiVersionT&& value) { m_giVersionHasBeenSet = true; m_giVersion = std::forward<GiVersionT>(value); }
    template<typename GiVersionT = Aws::String>
    CloudVmCluster& WithGiVersion(GiVersionT&& value) { SetGiVersion(std::forward<GiVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The host name for the VM cluster.</p>
     */
    inline const Aws::String& GetHostname() const { return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    template<typename HostnameT = Aws::String>
    void SetHostname(HostnameT&& value) { m_hostnameHasBeenSet = true; m_hostname = std::forward<HostnameT>(value); }
    template<typename HostnameT = Aws::String>
    CloudVmCluster& WithHostname(HostnameT&& value) { SetHostname(std::forward<HostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ExadataIormConfig cache details for the VM cluster.</p>
     */
    inline const ExadataIormConfig& GetIormConfigCache() const { return m_iormConfigCache; }
    inline bool IormConfigCacheHasBeenSet() const { return m_iormConfigCacheHasBeenSet; }
    template<typename IormConfigCacheT = ExadataIormConfig>
    void SetIormConfigCache(IormConfigCacheT&& value) { m_iormConfigCacheHasBeenSet = true; m_iormConfigCache = std::forward<IormConfigCacheT>(value); }
    template<typename IormConfigCacheT = ExadataIormConfig>
    CloudVmCluster& WithIormConfigCache(IormConfigCacheT&& value) { SetIormConfigCache(std::forward<IormConfigCacheT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether database backups to local Exadata storage is enabled for
     * the VM cluster.</p>
     */
    inline bool GetIsLocalBackupEnabled() const { return m_isLocalBackupEnabled; }
    inline bool IsLocalBackupEnabledHasBeenSet() const { return m_isLocalBackupEnabledHasBeenSet; }
    inline void SetIsLocalBackupEnabled(bool value) { m_isLocalBackupEnabledHasBeenSet = true; m_isLocalBackupEnabled = value; }
    inline CloudVmCluster& WithIsLocalBackupEnabled(bool value) { SetIsLocalBackupEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the VM cluster is configured with a sparse disk group.</p>
     */
    inline bool GetIsSparseDiskgroupEnabled() const { return m_isSparseDiskgroupEnabled; }
    inline bool IsSparseDiskgroupEnabledHasBeenSet() const { return m_isSparseDiskgroupEnabledHasBeenSet; }
    inline void SetIsSparseDiskgroupEnabled(bool value) { m_isSparseDiskgroupEnabledHasBeenSet = true; m_isSparseDiskgroupEnabled = value; }
    inline CloudVmCluster& WithIsSparseDiskgroupEnabled(bool value) { SetIsSparseDiskgroupEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Oracle Cloud ID (OCID) of the last maintenance update history entry.</p>
     */
    inline const Aws::String& GetLastUpdateHistoryEntryId() const { return m_lastUpdateHistoryEntryId; }
    inline bool LastUpdateHistoryEntryIdHasBeenSet() const { return m_lastUpdateHistoryEntryIdHasBeenSet; }
    template<typename LastUpdateHistoryEntryIdT = Aws::String>
    void SetLastUpdateHistoryEntryId(LastUpdateHistoryEntryIdT&& value) { m_lastUpdateHistoryEntryIdHasBeenSet = true; m_lastUpdateHistoryEntryId = std::forward<LastUpdateHistoryEntryIdT>(value); }
    template<typename LastUpdateHistoryEntryIdT = Aws::String>
    CloudVmCluster& WithLastUpdateHistoryEntryId(LastUpdateHistoryEntryIdT&& value) { SetLastUpdateHistoryEntryId(std::forward<LastUpdateHistoryEntryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Oracle license model applied to the VM cluster.</p>
     */
    inline LicenseModel GetLicenseModel() const { return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    inline void SetLicenseModel(LicenseModel value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }
    inline CloudVmCluster& WithLicenseModel(LicenseModel value) { SetLicenseModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port number configured for the listener on the VM cluster.</p>
     */
    inline int GetListenerPort() const { return m_listenerPort; }
    inline bool ListenerPortHasBeenSet() const { return m_listenerPortHasBeenSet; }
    inline void SetListenerPort(int value) { m_listenerPortHasBeenSet = true; m_listenerPort = value; }
    inline CloudVmCluster& WithListenerPort(int value) { SetListenerPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of memory, in gigabytes (GB), that's allocated for the VM
     * cluster.</p>
     */
    inline int GetMemorySizeInGBs() const { return m_memorySizeInGBs; }
    inline bool MemorySizeInGBsHasBeenSet() const { return m_memorySizeInGBsHasBeenSet; }
    inline void SetMemorySizeInGBs(int value) { m_memorySizeInGBsHasBeenSet = true; m_memorySizeInGBs = value; }
    inline CloudVmCluster& WithMemorySizeInGBs(int value) { SetMemorySizeInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of nodes in the VM cluster.</p>
     */
    inline int GetNodeCount() const { return m_nodeCount; }
    inline bool NodeCountHasBeenSet() const { return m_nodeCountHasBeenSet; }
    inline void SetNodeCount(int value) { m_nodeCountHasBeenSet = true; m_nodeCount = value; }
    inline CloudVmCluster& WithNodeCount(int value) { SetNodeCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OCID of the VM cluster.</p>
     */
    inline const Aws::String& GetOcid() const { return m_ocid; }
    inline bool OcidHasBeenSet() const { return m_ocidHasBeenSet; }
    template<typename OcidT = Aws::String>
    void SetOcid(OcidT&& value) { m_ocidHasBeenSet = true; m_ocid = std::forward<OcidT>(value); }
    template<typename OcidT = Aws::String>
    CloudVmCluster& WithOcid(OcidT&& value) { SetOcid(std::forward<OcidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the OCI resource anchor for the VM cluster.</p>
     */
    inline const Aws::String& GetOciResourceAnchorName() const { return m_ociResourceAnchorName; }
    inline bool OciResourceAnchorNameHasBeenSet() const { return m_ociResourceAnchorNameHasBeenSet; }
    template<typename OciResourceAnchorNameT = Aws::String>
    void SetOciResourceAnchorName(OciResourceAnchorNameT&& value) { m_ociResourceAnchorNameHasBeenSet = true; m_ociResourceAnchorName = std::forward<OciResourceAnchorNameT>(value); }
    template<typename OciResourceAnchorNameT = Aws::String>
    CloudVmCluster& WithOciResourceAnchorName(OciResourceAnchorNameT&& value) { SetOciResourceAnchorName(std::forward<OciResourceAnchorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTPS link to the VM cluster in OCI.</p>
     */
    inline const Aws::String& GetOciUrl() const { return m_ociUrl; }
    inline bool OciUrlHasBeenSet() const { return m_ociUrlHasBeenSet; }
    template<typename OciUrlT = Aws::String>
    void SetOciUrl(OciUrlT&& value) { m_ociUrlHasBeenSet = true; m_ociUrl = std::forward<OciUrlT>(value); }
    template<typename OciUrlT = Aws::String>
    CloudVmCluster& WithOciUrl(OciUrlT&& value) { SetOciUrl(std::forward<OciUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain of the VM cluster.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    CloudVmCluster& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The FQDN of the DNS record for the Single Client Access Name (SCAN) IP
     * addresses that are associated with the VM cluster.</p>
     */
    inline const Aws::String& GetScanDnsName() const { return m_scanDnsName; }
    inline bool ScanDnsNameHasBeenSet() const { return m_scanDnsNameHasBeenSet; }
    template<typename ScanDnsNameT = Aws::String>
    void SetScanDnsName(ScanDnsNameT&& value) { m_scanDnsNameHasBeenSet = true; m_scanDnsName = std::forward<ScanDnsNameT>(value); }
    template<typename ScanDnsNameT = Aws::String>
    CloudVmCluster& WithScanDnsName(ScanDnsNameT&& value) { SetScanDnsName(std::forward<ScanDnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OCID of the DNS record for the SCAN IP addresses that are associated with
     * the VM cluster.</p>
     */
    inline const Aws::String& GetScanDnsRecordId() const { return m_scanDnsRecordId; }
    inline bool ScanDnsRecordIdHasBeenSet() const { return m_scanDnsRecordIdHasBeenSet; }
    template<typename ScanDnsRecordIdT = Aws::String>
    void SetScanDnsRecordId(ScanDnsRecordIdT&& value) { m_scanDnsRecordIdHasBeenSet = true; m_scanDnsRecordId = std::forward<ScanDnsRecordIdT>(value); }
    template<typename ScanDnsRecordIdT = Aws::String>
    CloudVmCluster& WithScanDnsRecordId(ScanDnsRecordIdT&& value) { SetScanDnsRecordId(std::forward<ScanDnsRecordIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OCID of the SCAN IP addresses that are associated with the VM
     * cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScanIpIds() const { return m_scanIpIds; }
    inline bool ScanIpIdsHasBeenSet() const { return m_scanIpIdsHasBeenSet; }
    template<typename ScanIpIdsT = Aws::Vector<Aws::String>>
    void SetScanIpIds(ScanIpIdsT&& value) { m_scanIpIdsHasBeenSet = true; m_scanIpIds = std::forward<ScanIpIdsT>(value); }
    template<typename ScanIpIdsT = Aws::Vector<Aws::String>>
    CloudVmCluster& WithScanIpIds(ScanIpIdsT&& value) { SetScanIpIds(std::forward<ScanIpIdsT>(value)); return *this;}
    template<typename ScanIpIdsT = Aws::String>
    CloudVmCluster& AddScanIpIds(ScanIpIdsT&& value) { m_scanIpIdsHasBeenSet = true; m_scanIpIds.emplace_back(std::forward<ScanIpIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The hardware model name of the Exadata infrastructure that's running the VM
     * cluster.</p>
     */
    inline const Aws::String& GetShape() const { return m_shape; }
    inline bool ShapeHasBeenSet() const { return m_shapeHasBeenSet; }
    template<typename ShapeT = Aws::String>
    void SetShape(ShapeT&& value) { m_shapeHasBeenSet = true; m_shape = std::forward<ShapeT>(value); }
    template<typename ShapeT = Aws::String>
    CloudVmCluster& WithShape(ShapeT&& value) { SetShape(std::forward<ShapeT>(value)); return *this;}
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
    CloudVmCluster& WithSshPublicKeys(SshPublicKeysT&& value) { SetSshPublicKeys(std::forward<SshPublicKeysT>(value)); return *this;}
    template<typename SshPublicKeysT = Aws::String>
    CloudVmCluster& AddSshPublicKeys(SshPublicKeysT&& value) { m_sshPublicKeysHasBeenSet = true; m_sshPublicKeys.emplace_back(std::forward<SshPublicKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The amount of local node storage, in gigabytes (GB), that's allocated to the
     * VM cluster.</p>
     */
    inline int GetStorageSizeInGBs() const { return m_storageSizeInGBs; }
    inline bool StorageSizeInGBsHasBeenSet() const { return m_storageSizeInGBsHasBeenSet; }
    inline void SetStorageSizeInGBs(int value) { m_storageSizeInGBsHasBeenSet = true; m_storageSizeInGBs = value; }
    inline CloudVmCluster& WithStorageSizeInGBs(int value) { SetStorageSizeInGBs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system version of the image chosen for the VM cluster.</p>
     */
    inline const Aws::String& GetSystemVersion() const { return m_systemVersion; }
    inline bool SystemVersionHasBeenSet() const { return m_systemVersionHasBeenSet; }
    template<typename SystemVersionT = Aws::String>
    void SetSystemVersion(SystemVersionT&& value) { m_systemVersionHasBeenSet = true; m_systemVersion = std::forward<SystemVersionT>(value); }
    template<typename SystemVersionT = Aws::String>
    CloudVmCluster& WithSystemVersion(SystemVersionT&& value) { SetSystemVersion(std::forward<SystemVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the VM cluster was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CloudVmCluster& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time zone of the VM cluster.</p>
     */
    inline const Aws::String& GetTimeZone() const { return m_timeZone; }
    inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }
    template<typename TimeZoneT = Aws::String>
    void SetTimeZone(TimeZoneT&& value) { m_timeZoneHasBeenSet = true; m_timeZone = std::forward<TimeZoneT>(value); }
    template<typename TimeZoneT = Aws::String>
    CloudVmCluster& WithTimeZone(TimeZoneT&& value) { SetTimeZone(std::forward<TimeZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual IP (VIP) addresses that are associated with the VM cluster.
     * Oracle's Cluster Ready Services (CRS) creates and maintains one VIP address for
     * each node in the VM cluster to enable failover. If one node fails, the VIP is
     * reassigned to another active node in the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVipIds() const { return m_vipIds; }
    inline bool VipIdsHasBeenSet() const { return m_vipIdsHasBeenSet; }
    template<typename VipIdsT = Aws::Vector<Aws::String>>
    void SetVipIds(VipIdsT&& value) { m_vipIdsHasBeenSet = true; m_vipIds = std::forward<VipIdsT>(value); }
    template<typename VipIdsT = Aws::Vector<Aws::String>>
    CloudVmCluster& WithVipIds(VipIdsT&& value) { SetVipIds(std::forward<VipIdsT>(value)); return *this;}
    template<typename VipIdsT = Aws::String>
    CloudVmCluster& AddVipIds(VipIdsT&& value) { m_vipIdsHasBeenSet = true; m_vipIds.emplace_back(std::forward<VipIdsT>(value)); return *this; }
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
    CloudVmCluster& WithOdbNetworkId(OdbNetworkIdT&& value) { SetOdbNetworkId(std::forward<OdbNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of progress made on the current operation on the VM cluster,
     * expressed as a percentage.</p>
     */
    inline double GetPercentProgress() const { return m_percentProgress; }
    inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }
    inline void SetPercentProgress(double value) { m_percentProgressHasBeenSet = true; m_percentProgress = value; }
    inline CloudVmCluster& WithPercentProgress(double value) { SetPercentProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OCI model compute model used when you create or clone an instance: ECPU
     * or OCPU. An ECPU is an abstracted measure of compute resources. ECPUs are based
     * on the number of cores elastically allocated from a pool of compute and storage
     * servers. An OCPU is a legacy physical measure of compute resources. OCPUs are
     * based on the physical core of a processor with hyper-threading enabled. </p>
     */
    inline ComputeModel GetComputeModel() const { return m_computeModel; }
    inline bool ComputeModelHasBeenSet() const { return m_computeModelHasBeenSet; }
    inline void SetComputeModel(ComputeModel value) { m_computeModelHasBeenSet = true; m_computeModel = value; }
    inline CloudVmCluster& WithComputeModel(ComputeModel value) { SetComputeModel(value); return *this;}
    ///@}
  private:

    Aws::String m_cloudVmClusterId;
    bool m_cloudVmClusterIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    ResourceStatus m_status{ResourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_cloudVmClusterArn;
    bool m_cloudVmClusterArnHasBeenSet = false;

    Aws::String m_cloudExadataInfrastructureId;
    bool m_cloudExadataInfrastructureIdHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    int m_cpuCoreCount{0};
    bool m_cpuCoreCountHasBeenSet = false;

    DataCollectionOptions m_dataCollectionOptions;
    bool m_dataCollectionOptionsHasBeenSet = false;

    double m_dataStorageSizeInTBs{0.0};
    bool m_dataStorageSizeInTBsHasBeenSet = false;

    int m_dbNodeStorageSizeInGBs{0};
    bool m_dbNodeStorageSizeInGBsHasBeenSet = false;

    Aws::Vector<Aws::String> m_dbServers;
    bool m_dbServersHasBeenSet = false;

    DiskRedundancy m_diskRedundancy{DiskRedundancy::NOT_SET};
    bool m_diskRedundancyHasBeenSet = false;

    Aws::String m_giVersion;
    bool m_giVersionHasBeenSet = false;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    ExadataIormConfig m_iormConfigCache;
    bool m_iormConfigCacheHasBeenSet = false;

    bool m_isLocalBackupEnabled{false};
    bool m_isLocalBackupEnabledHasBeenSet = false;

    bool m_isSparseDiskgroupEnabled{false};
    bool m_isSparseDiskgroupEnabledHasBeenSet = false;

    Aws::String m_lastUpdateHistoryEntryId;
    bool m_lastUpdateHistoryEntryIdHasBeenSet = false;

    LicenseModel m_licenseModel{LicenseModel::NOT_SET};
    bool m_licenseModelHasBeenSet = false;

    int m_listenerPort{0};
    bool m_listenerPortHasBeenSet = false;

    int m_memorySizeInGBs{0};
    bool m_memorySizeInGBsHasBeenSet = false;

    int m_nodeCount{0};
    bool m_nodeCountHasBeenSet = false;

    Aws::String m_ocid;
    bool m_ocidHasBeenSet = false;

    Aws::String m_ociResourceAnchorName;
    bool m_ociResourceAnchorNameHasBeenSet = false;

    Aws::String m_ociUrl;
    bool m_ociUrlHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_scanDnsName;
    bool m_scanDnsNameHasBeenSet = false;

    Aws::String m_scanDnsRecordId;
    bool m_scanDnsRecordIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_scanIpIds;
    bool m_scanIpIdsHasBeenSet = false;

    Aws::String m_shape;
    bool m_shapeHasBeenSet = false;

    Aws::Vector<Aws::String> m_sshPublicKeys;
    bool m_sshPublicKeysHasBeenSet = false;

    int m_storageSizeInGBs{0};
    bool m_storageSizeInGBsHasBeenSet = false;

    Aws::String m_systemVersion;
    bool m_systemVersionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_timeZone;
    bool m_timeZoneHasBeenSet = false;

    Aws::Vector<Aws::String> m_vipIds;
    bool m_vipIdsHasBeenSet = false;

    Aws::String m_odbNetworkId;
    bool m_odbNetworkIdHasBeenSet = false;

    double m_percentProgress{0.0};
    bool m_percentProgressHasBeenSet = false;

    ComputeModel m_computeModel{ComputeModel::NOT_SET};
    bool m_computeModelHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
