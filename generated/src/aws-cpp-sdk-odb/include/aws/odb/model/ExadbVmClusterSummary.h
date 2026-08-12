/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/DataCollectionOptions.h>
#include <aws/odb/model/ExadataIormConfig.h>
#include <aws/odb/model/ExadbVmClusterStorageDetails.h>
#include <aws/odb/model/GridImageType.h>
#include <aws/odb/model/IamRole.h>
#include <aws/odb/model/LicenseModel.h>
#include <aws/odb/model/ResourceStatus.h>
#include <aws/odb/model/ShapeAttribute.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {

/**
 * <p>Summary information about an Exascale VM cluster.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ExadbVmClusterSummary">AWS
 * API Reference</a></p>
 */
class ExadbVmClusterSummary {
 public:
  AWS_ODB_API ExadbVmClusterSummary() = default;
  AWS_ODB_API ExadbVmClusterSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API ExadbVmClusterSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the Exascale VM cluster.</p>
   */
  inline const Aws::String& GetExadbVmClusterId() const { return m_exadbVmClusterId; }
  inline bool ExadbVmClusterIdHasBeenSet() const { return m_exadbVmClusterIdHasBeenSet; }
  template <typename ExadbVmClusterIdT = Aws::String>
  void SetExadbVmClusterId(ExadbVmClusterIdT&& value) {
    m_exadbVmClusterIdHasBeenSet = true;
    m_exadbVmClusterId = std::forward<ExadbVmClusterIdT>(value);
  }
  template <typename ExadbVmClusterIdT = Aws::String>
  ExadbVmClusterSummary& WithExadbVmClusterId(ExadbVmClusterIdT&& value) {
    SetExadbVmClusterId(std::forward<ExadbVmClusterIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Grid Infrastructure (GI) cluster.</p>
   */
  inline const Aws::String& GetClusterName() const { return m_clusterName; }
  inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
  template <typename ClusterNameT = Aws::String>
  void SetClusterName(ClusterNameT&& value) {
    m_clusterNameHasBeenSet = true;
    m_clusterName = std::forward<ClusterNameT>(value);
  }
  template <typename ClusterNameT = Aws::String>
  ExadbVmClusterSummary& WithClusterName(ClusterNameT&& value) {
    SetClusterName(std::forward<ClusterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the Exascale VM cluster was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ExadbVmClusterSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The set of diagnostic collection options enabled for the Exascale VM
   * cluster.</p>
   */
  inline const DataCollectionOptions& GetDataCollectionOptions() const { return m_dataCollectionOptions; }
  inline bool DataCollectionOptionsHasBeenSet() const { return m_dataCollectionOptionsHasBeenSet; }
  template <typename DataCollectionOptionsT = DataCollectionOptions>
  void SetDataCollectionOptions(DataCollectionOptionsT&& value) {
    m_dataCollectionOptionsHasBeenSet = true;
    m_dataCollectionOptions = std::forward<DataCollectionOptionsT>(value);
  }
  template <typename DataCollectionOptionsT = DataCollectionOptions>
  ExadbVmClusterSummary& WithDataCollectionOptions(DataCollectionOptionsT&& value) {
    SetDataCollectionOptions(std::forward<DataCollectionOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user-friendly name for the Exascale VM cluster.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  ExadbVmClusterSummary& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domain of the Exascale VM cluster.</p>
   */
  inline const Aws::String& GetDomain() const { return m_domain; }
  inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
  template <typename DomainT = Aws::String>
  void SetDomain(DomainT&& value) {
    m_domainHasBeenSet = true;
    m_domain = std::forward<DomainT>(value);
  }
  template <typename DomainT = Aws::String>
  ExadbVmClusterSummary& WithDomain(DomainT&& value) {
    SetDomain(std::forward<DomainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of elastic compute processing units (ECPUs) enabled on the
   * Exascale VM cluster.</p>
   */
  inline int GetEnabledEcpuCount() const { return m_enabledEcpuCount; }
  inline bool EnabledEcpuCountHasBeenSet() const { return m_enabledEcpuCountHasBeenSet; }
  inline void SetEnabledEcpuCount(int value) {
    m_enabledEcpuCountHasBeenSet = true;
    m_enabledEcpuCount = value;
  }
  inline ExadbVmClusterSummary& WithEnabledEcpuCount(int value) {
    SetEnabledEcpuCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Exascale VM cluster.</p>
   */
  inline const Aws::String& GetExadbVmClusterArn() const { return m_exadbVmClusterArn; }
  inline bool ExadbVmClusterArnHasBeenSet() const { return m_exadbVmClusterArnHasBeenSet; }
  template <typename ExadbVmClusterArnT = Aws::String>
  void SetExadbVmClusterArn(ExadbVmClusterArnT&& value) {
    m_exadbVmClusterArnHasBeenSet = true;
    m_exadbVmClusterArn = std::forward<ExadbVmClusterArnT>(value);
  }
  template <typename ExadbVmClusterArnT = Aws::String>
  ExadbVmClusterSummary& WithExadbVmClusterArn(ExadbVmClusterArnT&& value) {
    SetExadbVmClusterArn(std::forward<ExadbVmClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Exascale storage vault associated with
   * this Exascale VM cluster.</p>
   */
  inline const Aws::String& GetExascaleDbStorageVaultArn() const { return m_exascaleDbStorageVaultArn; }
  inline bool ExascaleDbStorageVaultArnHasBeenSet() const { return m_exascaleDbStorageVaultArnHasBeenSet; }
  template <typename ExascaleDbStorageVaultArnT = Aws::String>
  void SetExascaleDbStorageVaultArn(ExascaleDbStorageVaultArnT&& value) {
    m_exascaleDbStorageVaultArnHasBeenSet = true;
    m_exascaleDbStorageVaultArn = std::forward<ExascaleDbStorageVaultArnT>(value);
  }
  template <typename ExascaleDbStorageVaultArnT = Aws::String>
  ExadbVmClusterSummary& WithExascaleDbStorageVaultArn(ExascaleDbStorageVaultArnT&& value) {
    SetExascaleDbStorageVaultArn(std::forward<ExascaleDbStorageVaultArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the Exascale storage vault associated with this
   * Exascale VM cluster.</p>
   */
  inline const Aws::String& GetExascaleDbStorageVaultId() const { return m_exascaleDbStorageVaultId; }
  inline bool ExascaleDbStorageVaultIdHasBeenSet() const { return m_exascaleDbStorageVaultIdHasBeenSet; }
  template <typename ExascaleDbStorageVaultIdT = Aws::String>
  void SetExascaleDbStorageVaultId(ExascaleDbStorageVaultIdT&& value) {
    m_exascaleDbStorageVaultIdHasBeenSet = true;
    m_exascaleDbStorageVaultId = std::forward<ExascaleDbStorageVaultIdT>(value);
  }
  template <typename ExascaleDbStorageVaultIdT = Aws::String>
  ExadbVmClusterSummary& WithExascaleDbStorageVaultId(ExascaleDbStorageVaultIdT&& value) {
    SetExascaleDbStorageVaultId(std::forward<ExascaleDbStorageVaultIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The software version of the Oracle Grid Infrastructure (GI) for the Exascale
   * VM cluster.</p>
   */
  inline const Aws::String& GetGiVersion() const { return m_giVersion; }
  inline bool GiVersionHasBeenSet() const { return m_giVersionHasBeenSet; }
  template <typename GiVersionT = Aws::String>
  void SetGiVersion(GiVersionT&& value) {
    m_giVersionHasBeenSet = true;
    m_giVersion = std::forward<GiVersionT>(value);
  }
  template <typename GiVersionT = Aws::String>
  ExadbVmClusterSummary& WithGiVersion(GiVersionT&& value) {
    SetGiVersion(std::forward<GiVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Grid Infrastructure software image ID for the Exascale VM cluster.</p>
   */
  inline const Aws::String& GetGridImageId() const { return m_gridImageId; }
  inline bool GridImageIdHasBeenSet() const { return m_gridImageIdHasBeenSet; }
  template <typename GridImageIdT = Aws::String>
  void SetGridImageId(GridImageIdT&& value) {
    m_gridImageIdHasBeenSet = true;
    m_gridImageId = std::forward<GridImageIdT>(value);
  }
  template <typename GridImageIdT = Aws::String>
  ExadbVmClusterSummary& WithGridImageId(GridImageIdT&& value) {
    SetGridImageId(std::forward<GridImageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of Grid Infrastructure image for the Exascale VM cluster.</p>
   */
  inline GridImageType GetGridImageType() const { return m_gridImageType; }
  inline bool GridImageTypeHasBeenSet() const { return m_gridImageTypeHasBeenSet; }
  inline void SetGridImageType(GridImageType value) {
    m_gridImageTypeHasBeenSet = true;
    m_gridImageType = value;
  }
  inline ExadbVmClusterSummary& WithGridImageType(GridImageType value) {
    SetGridImageType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The host name for the Exascale VM cluster.</p>
   */
  inline const Aws::String& GetHostname() const { return m_hostname; }
  inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
  template <typename HostnameT = Aws::String>
  void SetHostname(HostnameT&& value) {
    m_hostnameHasBeenSet = true;
    m_hostname = std::forward<HostnameT>(value);
  }
  template <typename HostnameT = Aws::String>
  ExadbVmClusterSummary& WithHostname(HostnameT&& value) {
    SetHostname(std::forward<HostnameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Identity and Access Management (IAM) service roles
   * associated with the Exascale VM cluster.</p>
   */
  inline const Aws::Vector<IamRole>& GetIamRoles() const { return m_iamRoles; }
  inline bool IamRolesHasBeenSet() const { return m_iamRolesHasBeenSet; }
  template <typename IamRolesT = Aws::Vector<IamRole>>
  void SetIamRoles(IamRolesT&& value) {
    m_iamRolesHasBeenSet = true;
    m_iamRoles = std::forward<IamRolesT>(value);
  }
  template <typename IamRolesT = Aws::Vector<IamRole>>
  ExadbVmClusterSummary& WithIamRoles(IamRolesT&& value) {
    SetIamRoles(std::forward<IamRolesT>(value));
    return *this;
  }
  template <typename IamRolesT = IamRole>
  ExadbVmClusterSummary& AddIamRoles(IamRolesT&& value) {
    m_iamRolesHasBeenSet = true;
    m_iamRoles.emplace_back(std::forward<IamRolesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The I/O Resource Management (IORM) configuration cache details for the
   * Exascale VM cluster.</p>
   */
  inline const ExadataIormConfig& GetIormConfigCache() const { return m_iormConfigCache; }
  inline bool IormConfigCacheHasBeenSet() const { return m_iormConfigCacheHasBeenSet; }
  template <typename IormConfigCacheT = ExadataIormConfig>
  void SetIormConfigCache(IormConfigCacheT&& value) {
    m_iormConfigCacheHasBeenSet = true;
    m_iormConfigCache = std::forward<IormConfigCacheT>(value);
  }
  template <typename IormConfigCacheT = ExadataIormConfig>
  ExadbVmClusterSummary& WithIormConfigCache(IormConfigCacheT&& value) {
    SetIormConfigCache(std::forward<IormConfigCacheT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Oracle Cloud ID (OCID) of the last maintenance update history entry.</p>
   */
  inline const Aws::String& GetLastUpdateHistoryEntryId() const { return m_lastUpdateHistoryEntryId; }
  inline bool LastUpdateHistoryEntryIdHasBeenSet() const { return m_lastUpdateHistoryEntryIdHasBeenSet; }
  template <typename LastUpdateHistoryEntryIdT = Aws::String>
  void SetLastUpdateHistoryEntryId(LastUpdateHistoryEntryIdT&& value) {
    m_lastUpdateHistoryEntryIdHasBeenSet = true;
    m_lastUpdateHistoryEntryId = std::forward<LastUpdateHistoryEntryIdT>(value);
  }
  template <typename LastUpdateHistoryEntryIdT = Aws::String>
  ExadbVmClusterSummary& WithLastUpdateHistoryEntryId(LastUpdateHistoryEntryIdT&& value) {
    SetLastUpdateHistoryEntryId(std::forward<LastUpdateHistoryEntryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Oracle license model applied to the Exascale VM cluster.</p>
   */
  inline LicenseModel GetLicenseModel() const { return m_licenseModel; }
  inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
  inline void SetLicenseModel(LicenseModel value) {
    m_licenseModelHasBeenSet = true;
    m_licenseModel = value;
  }
  inline ExadbVmClusterSummary& WithLicenseModel(LicenseModel value) {
    SetLicenseModel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port number configured for the listener on the Exascale VM cluster.</p>
   */
  inline int GetListenerPort() const { return m_listenerPort; }
  inline bool ListenerPortHasBeenSet() const { return m_listenerPortHasBeenSet; }
  inline void SetListenerPort(int value) {
    m_listenerPortHasBeenSet = true;
    m_listenerPort = value;
  }
  inline ExadbVmClusterSummary& WithListenerPort(int value) {
    SetListenerPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of memory, in gigabytes (GB), that's allocated for the Exascale VM
   * cluster.</p>
   */
  inline int GetMemorySizeInGBs() const { return m_memorySizeInGBs; }
  inline bool MemorySizeInGBsHasBeenSet() const { return m_memorySizeInGBsHasBeenSet; }
  inline void SetMemorySizeInGBs(int value) {
    m_memorySizeInGBsHasBeenSet = true;
    m_memorySizeInGBs = value;
  }
  inline ExadbVmClusterSummary& WithMemorySizeInGBs(int value) {
    SetMemorySizeInGBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of nodes in the Exascale VM cluster.</p>
   */
  inline int GetNodeCount() const { return m_nodeCount; }
  inline bool NodeCountHasBeenSet() const { return m_nodeCountHasBeenSet; }
  inline void SetNodeCount(int value) {
    m_nodeCountHasBeenSet = true;
    m_nodeCount = value;
  }
  inline ExadbVmClusterSummary& WithNodeCount(int value) {
    SetNodeCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OCID of the Exascale VM cluster.</p>
   */
  inline const Aws::String& GetOcid() const { return m_ocid; }
  inline bool OcidHasBeenSet() const { return m_ocidHasBeenSet; }
  template <typename OcidT = Aws::String>
  void SetOcid(OcidT&& value) {
    m_ocidHasBeenSet = true;
    m_ocid = std::forward<OcidT>(value);
  }
  template <typename OcidT = Aws::String>
  ExadbVmClusterSummary& WithOcid(OcidT&& value) {
    SetOcid(std::forward<OcidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the OCI resource anchor for the Exascale VM cluster.</p>
   */
  inline const Aws::String& GetOciResourceAnchorName() const { return m_ociResourceAnchorName; }
  inline bool OciResourceAnchorNameHasBeenSet() const { return m_ociResourceAnchorNameHasBeenSet; }
  template <typename OciResourceAnchorNameT = Aws::String>
  void SetOciResourceAnchorName(OciResourceAnchorNameT&& value) {
    m_ociResourceAnchorNameHasBeenSet = true;
    m_ociResourceAnchorName = std::forward<OciResourceAnchorNameT>(value);
  }
  template <typename OciResourceAnchorNameT = Aws::String>
  ExadbVmClusterSummary& WithOciResourceAnchorName(OciResourceAnchorNameT&& value) {
    SetOciResourceAnchorName(std::forward<OciResourceAnchorNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTPS link to the Exascale VM cluster in Oracle Cloud Infrastructure
   * (OCI).</p>
   */
  inline const Aws::String& GetOciUrl() const { return m_ociUrl; }
  inline bool OciUrlHasBeenSet() const { return m_ociUrlHasBeenSet; }
  template <typename OciUrlT = Aws::String>
  void SetOciUrl(OciUrlT&& value) {
    m_ociUrlHasBeenSet = true;
    m_ociUrl = std::forward<OciUrlT>(value);
  }
  template <typename OciUrlT = Aws::String>
  ExadbVmClusterSummary& WithOciUrl(OciUrlT&& value) {
    SetOciUrl(std::forward<OciUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the ODB network associated with this
   * Exascale VM cluster.</p>
   */
  inline const Aws::String& GetOdbNetworkArn() const { return m_odbNetworkArn; }
  inline bool OdbNetworkArnHasBeenSet() const { return m_odbNetworkArnHasBeenSet; }
  template <typename OdbNetworkArnT = Aws::String>
  void SetOdbNetworkArn(OdbNetworkArnT&& value) {
    m_odbNetworkArnHasBeenSet = true;
    m_odbNetworkArn = std::forward<OdbNetworkArnT>(value);
  }
  template <typename OdbNetworkArnT = Aws::String>
  ExadbVmClusterSummary& WithOdbNetworkArn(OdbNetworkArnT&& value) {
    SetOdbNetworkArn(std::forward<OdbNetworkArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the ODB network for the Exascale VM cluster.</p>
   */
  inline const Aws::String& GetOdbNetworkId() const { return m_odbNetworkId; }
  inline bool OdbNetworkIdHasBeenSet() const { return m_odbNetworkIdHasBeenSet; }
  template <typename OdbNetworkIdT = Aws::String>
  void SetOdbNetworkId(OdbNetworkIdT&& value) {
    m_odbNetworkIdHasBeenSet = true;
    m_odbNetworkId = std::forward<OdbNetworkIdT>(value);
  }
  template <typename OdbNetworkIdT = Aws::String>
  ExadbVmClusterSummary& WithOdbNetworkId(OdbNetworkIdT&& value) {
    SetOdbNetworkId(std::forward<OdbNetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of progress made on the current operation on the Exascale VM
   * cluster, expressed as a percentage.</p>
   */
  inline double GetPercentProgress() const { return m_percentProgress; }
  inline bool PercentProgressHasBeenSet() const { return m_percentProgressHasBeenSet; }
  inline void SetPercentProgress(double value) {
    m_percentProgressHasBeenSet = true;
    m_percentProgress = value;
  }
  inline ExadbVmClusterSummary& WithPercentProgress(double value) {
    SetPercentProgress(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fully qualified domain name (FQDN) of the DNS record for the Single
   * Client Access Name (SCAN) IP addresses that are associated with the Exascale VM
   * cluster.</p>
   */
  inline const Aws::String& GetScanDnsName() const { return m_scanDnsName; }
  inline bool ScanDnsNameHasBeenSet() const { return m_scanDnsNameHasBeenSet; }
  template <typename ScanDnsNameT = Aws::String>
  void SetScanDnsName(ScanDnsNameT&& value) {
    m_scanDnsNameHasBeenSet = true;
    m_scanDnsName = std::forward<ScanDnsNameT>(value);
  }
  template <typename ScanDnsNameT = Aws::String>
  ExadbVmClusterSummary& WithScanDnsName(ScanDnsNameT&& value) {
    SetScanDnsName(std::forward<ScanDnsNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OCID of the DNS record for the SCAN IP addresses that are associated with
   * the Exascale VM cluster.</p>
   */
  inline const Aws::String& GetScanDnsRecordId() const { return m_scanDnsRecordId; }
  inline bool ScanDnsRecordIdHasBeenSet() const { return m_scanDnsRecordIdHasBeenSet; }
  template <typename ScanDnsRecordIdT = Aws::String>
  void SetScanDnsRecordId(ScanDnsRecordIdT&& value) {
    m_scanDnsRecordIdHasBeenSet = true;
    m_scanDnsRecordId = std::forward<ScanDnsRecordIdT>(value);
  }
  template <typename ScanDnsRecordIdT = Aws::String>
  ExadbVmClusterSummary& WithScanDnsRecordId(ScanDnsRecordIdT&& value) {
    SetScanDnsRecordId(std::forward<ScanDnsRecordIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OCID of the SCAN IP addresses that are associated with the Exascale VM
   * cluster.</p>
   */
  inline const Aws::Vector<Aws::String>& GetScanIpIds() const { return m_scanIpIds; }
  inline bool ScanIpIdsHasBeenSet() const { return m_scanIpIdsHasBeenSet; }
  template <typename ScanIpIdsT = Aws::Vector<Aws::String>>
  void SetScanIpIds(ScanIpIdsT&& value) {
    m_scanIpIdsHasBeenSet = true;
    m_scanIpIds = std::forward<ScanIpIdsT>(value);
  }
  template <typename ScanIpIdsT = Aws::Vector<Aws::String>>
  ExadbVmClusterSummary& WithScanIpIds(ScanIpIdsT&& value) {
    SetScanIpIds(std::forward<ScanIpIdsT>(value));
    return *this;
  }
  template <typename ScanIpIdsT = Aws::String>
  ExadbVmClusterSummary& AddScanIpIds(ScanIpIdsT&& value) {
    m_scanIpIdsHasBeenSet = true;
    m_scanIpIds.emplace_back(std::forward<ScanIpIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port number for TCP connections to the single client access name (SCAN)
   * listener for the Exascale VM cluster.</p>
   */
  inline int GetScanListenerPortTcp() const { return m_scanListenerPortTcp; }
  inline bool ScanListenerPortTcpHasBeenSet() const { return m_scanListenerPortTcpHasBeenSet; }
  inline void SetScanListenerPortTcp(int value) {
    m_scanListenerPortTcpHasBeenSet = true;
    m_scanListenerPortTcp = value;
  }
  inline ExadbVmClusterSummary& WithScanListenerPortTcp(int value) {
    SetScanListenerPortTcp(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port number for TCP connections with SSL to the single client access name
   * (SCAN) listener for the Exascale VM cluster.</p>
   */
  inline int GetScanListenerPortTcpSsl() const { return m_scanListenerPortTcpSsl; }
  inline bool ScanListenerPortTcpSslHasBeenSet() const { return m_scanListenerPortTcpSslHasBeenSet; }
  inline void SetScanListenerPortTcpSsl(int value) {
    m_scanListenerPortTcpSslHasBeenSet = true;
    m_scanListenerPortTcpSsl = value;
  }
  inline ExadbVmClusterSummary& WithScanListenerPortTcpSsl(int value) {
    SetScanListenerPortTcpSsl(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The hardware model name of the Exadata infrastructure that's running the
   * Exascale VM cluster.</p>
   */
  inline const Aws::String& GetShape() const { return m_shape; }
  inline bool ShapeHasBeenSet() const { return m_shapeHasBeenSet; }
  template <typename ShapeT = Aws::String>
  void SetShape(ShapeT&& value) {
    m_shapeHasBeenSet = true;
    m_shape = std::forward<ShapeT>(value);
  }
  template <typename ShapeT = Aws::String>
  ExadbVmClusterSummary& WithShape(ShapeT&& value) {
    SetShape(std::forward<ShapeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The shape attribute for the Exascale VM cluster.</p>
   */
  inline ShapeAttribute GetShapeAttribute() const { return m_shapeAttribute; }
  inline bool ShapeAttributeHasBeenSet() const { return m_shapeAttributeHasBeenSet; }
  inline void SetShapeAttribute(ShapeAttribute value) {
    m_shapeAttributeHasBeenSet = true;
    m_shapeAttribute = value;
  }
  inline ExadbVmClusterSummary& WithShapeAttribute(ShapeAttribute value) {
    SetShapeAttribute(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The snapshot file system storage details for the Exascale VM cluster.</p>
   */
  inline const ExadbVmClusterStorageDetails& GetSnapshotFileSystemStorage() const { return m_snapshotFileSystemStorage; }
  inline bool SnapshotFileSystemStorageHasBeenSet() const { return m_snapshotFileSystemStorageHasBeenSet; }
  template <typename SnapshotFileSystemStorageT = ExadbVmClusterStorageDetails>
  void SetSnapshotFileSystemStorage(SnapshotFileSystemStorageT&& value) {
    m_snapshotFileSystemStorageHasBeenSet = true;
    m_snapshotFileSystemStorage = std::forward<SnapshotFileSystemStorageT>(value);
  }
  template <typename SnapshotFileSystemStorageT = ExadbVmClusterStorageDetails>
  ExadbVmClusterSummary& WithSnapshotFileSystemStorage(SnapshotFileSystemStorageT&& value) {
    SetSnapshotFileSystemStorage(std::forward<SnapshotFileSystemStorageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The public key portion of one or more key pairs used for SSH access to the
   * Exascale VM cluster.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSshPublicKeys() const { return m_sshPublicKeys; }
  inline bool SshPublicKeysHasBeenSet() const { return m_sshPublicKeysHasBeenSet; }
  template <typename SshPublicKeysT = Aws::Vector<Aws::String>>
  void SetSshPublicKeys(SshPublicKeysT&& value) {
    m_sshPublicKeysHasBeenSet = true;
    m_sshPublicKeys = std::forward<SshPublicKeysT>(value);
  }
  template <typename SshPublicKeysT = Aws::Vector<Aws::String>>
  ExadbVmClusterSummary& WithSshPublicKeys(SshPublicKeysT&& value) {
    SetSshPublicKeys(std::forward<SshPublicKeysT>(value));
    return *this;
  }
  template <typename SshPublicKeysT = Aws::String>
  ExadbVmClusterSummary& AddSshPublicKeys(SshPublicKeysT&& value) {
    m_sshPublicKeysHasBeenSet = true;
    m_sshPublicKeys.emplace_back(std::forward<SshPublicKeysT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the Exascale VM cluster.</p>
   */
  inline ResourceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ExadbVmClusterSummary& WithStatus(ResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the status of the Exascale VM cluster.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  ExadbVmClusterSummary& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operating system version of the image chosen for the Exascale VM
   * cluster.</p>
   */
  inline const Aws::String& GetSystemVersion() const { return m_systemVersion; }
  inline bool SystemVersionHasBeenSet() const { return m_systemVersionHasBeenSet; }
  template <typename SystemVersionT = Aws::String>
  void SetSystemVersion(SystemVersionT&& value) {
    m_systemVersionHasBeenSet = true;
    m_systemVersion = std::forward<SystemVersionT>(value);
  }
  template <typename SystemVersionT = Aws::String>
  ExadbVmClusterSummary& WithSystemVersion(SystemVersionT&& value) {
    SetSystemVersion(std::forward<SystemVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time zone of the Exascale VM cluster.</p>
   */
  inline const Aws::String& GetTimeZone() const { return m_timeZone; }
  inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }
  template <typename TimeZoneT = Aws::String>
  void SetTimeZone(TimeZoneT&& value) {
    m_timeZoneHasBeenSet = true;
    m_timeZone = std::forward<TimeZoneT>(value);
  }
  template <typename TimeZoneT = Aws::String>
  ExadbVmClusterSummary& WithTimeZone(TimeZoneT&& value) {
    SetTimeZone(std::forward<TimeZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of ECPUs for the Exascale VM cluster.</p>
   */
  inline int GetTotalEcpuCount() const { return m_totalEcpuCount; }
  inline bool TotalEcpuCountHasBeenSet() const { return m_totalEcpuCountHasBeenSet; }
  inline void SetTotalEcpuCount(int value) {
    m_totalEcpuCountHasBeenSet = true;
    m_totalEcpuCount = value;
  }
  inline ExadbVmClusterSummary& WithTotalEcpuCount(int value) {
    SetTotalEcpuCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total file system storage details for the Exascale VM cluster.</p>
   */
  inline const ExadbVmClusterStorageDetails& GetTotalFileSystemStorage() const { return m_totalFileSystemStorage; }
  inline bool TotalFileSystemStorageHasBeenSet() const { return m_totalFileSystemStorageHasBeenSet; }
  template <typename TotalFileSystemStorageT = ExadbVmClusterStorageDetails>
  void SetTotalFileSystemStorage(TotalFileSystemStorageT&& value) {
    m_totalFileSystemStorageHasBeenSet = true;
    m_totalFileSystemStorage = std::forward<TotalFileSystemStorageT>(value);
  }
  template <typename TotalFileSystemStorageT = ExadbVmClusterStorageDetails>
  ExadbVmClusterSummary& WithTotalFileSystemStorage(TotalFileSystemStorageT&& value) {
    SetTotalFileSystemStorage(std::forward<TotalFileSystemStorageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The virtual IP (VIP) addresses associated with the Exascale VM cluster. One
   * VIP address is assigned per node to support failover. If a node fails, its VIP
   * is reassigned to another active node in the cluster.</p>
   */
  inline const Aws::Vector<Aws::String>& GetVipIds() const { return m_vipIds; }
  inline bool VipIdsHasBeenSet() const { return m_vipIdsHasBeenSet; }
  template <typename VipIdsT = Aws::Vector<Aws::String>>
  void SetVipIds(VipIdsT&& value) {
    m_vipIdsHasBeenSet = true;
    m_vipIds = std::forward<VipIdsT>(value);
  }
  template <typename VipIdsT = Aws::Vector<Aws::String>>
  ExadbVmClusterSummary& WithVipIds(VipIdsT&& value) {
    SetVipIds(std::forward<VipIdsT>(value));
    return *this;
  }
  template <typename VipIdsT = Aws::String>
  ExadbVmClusterSummary& AddVipIds(VipIdsT&& value) {
    m_vipIdsHasBeenSet = true;
    m_vipIds.emplace_back(std::forward<VipIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The VM file system storage details for the Exascale VM cluster.</p>
   */
  inline const ExadbVmClusterStorageDetails& GetVmFileSystemStorage() const { return m_vmFileSystemStorage; }
  inline bool VmFileSystemStorageHasBeenSet() const { return m_vmFileSystemStorageHasBeenSet; }
  template <typename VmFileSystemStorageT = ExadbVmClusterStorageDetails>
  void SetVmFileSystemStorage(VmFileSystemStorageT&& value) {
    m_vmFileSystemStorageHasBeenSet = true;
    m_vmFileSystemStorage = std::forward<VmFileSystemStorageT>(value);
  }
  template <typename VmFileSystemStorageT = ExadbVmClusterStorageDetails>
  ExadbVmClusterSummary& WithVmFileSystemStorage(VmFileSystemStorageT&& value) {
    SetVmFileSystemStorage(std::forward<VmFileSystemStorageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_exadbVmClusterId;

  Aws::String m_clusterName;

  Aws::Utils::DateTime m_createdAt{};

  DataCollectionOptions m_dataCollectionOptions;

  Aws::String m_displayName;

  Aws::String m_domain;

  int m_enabledEcpuCount{0};

  Aws::String m_exadbVmClusterArn;

  Aws::String m_exascaleDbStorageVaultArn;

  Aws::String m_exascaleDbStorageVaultId;

  Aws::String m_giVersion;

  Aws::String m_gridImageId;

  GridImageType m_gridImageType{GridImageType::NOT_SET};

  Aws::String m_hostname;

  Aws::Vector<IamRole> m_iamRoles;

  ExadataIormConfig m_iormConfigCache;

  Aws::String m_lastUpdateHistoryEntryId;

  LicenseModel m_licenseModel{LicenseModel::NOT_SET};

  int m_listenerPort{0};

  int m_memorySizeInGBs{0};

  int m_nodeCount{0};

  Aws::String m_ocid;

  Aws::String m_ociResourceAnchorName;

  Aws::String m_ociUrl;

  Aws::String m_odbNetworkArn;

  Aws::String m_odbNetworkId;

  double m_percentProgress{0.0};

  Aws::String m_scanDnsName;

  Aws::String m_scanDnsRecordId;

  Aws::Vector<Aws::String> m_scanIpIds;

  int m_scanListenerPortTcp{0};

  int m_scanListenerPortTcpSsl{0};

  Aws::String m_shape;

  ShapeAttribute m_shapeAttribute{ShapeAttribute::NOT_SET};

  ExadbVmClusterStorageDetails m_snapshotFileSystemStorage;

  Aws::Vector<Aws::String> m_sshPublicKeys;

  ResourceStatus m_status{ResourceStatus::NOT_SET};

  Aws::String m_statusReason;

  Aws::String m_systemVersion;

  Aws::String m_timeZone;

  int m_totalEcpuCount{0};

  ExadbVmClusterStorageDetails m_totalFileSystemStorage;

  Aws::Vector<Aws::String> m_vipIds;

  ExadbVmClusterStorageDetails m_vmFileSystemStorage;
  bool m_exadbVmClusterIdHasBeenSet = false;
  bool m_clusterNameHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_dataCollectionOptionsHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_domainHasBeenSet = false;
  bool m_enabledEcpuCountHasBeenSet = false;
  bool m_exadbVmClusterArnHasBeenSet = false;
  bool m_exascaleDbStorageVaultArnHasBeenSet = false;
  bool m_exascaleDbStorageVaultIdHasBeenSet = false;
  bool m_giVersionHasBeenSet = false;
  bool m_gridImageIdHasBeenSet = false;
  bool m_gridImageTypeHasBeenSet = false;
  bool m_hostnameHasBeenSet = false;
  bool m_iamRolesHasBeenSet = false;
  bool m_iormConfigCacheHasBeenSet = false;
  bool m_lastUpdateHistoryEntryIdHasBeenSet = false;
  bool m_licenseModelHasBeenSet = false;
  bool m_listenerPortHasBeenSet = false;
  bool m_memorySizeInGBsHasBeenSet = false;
  bool m_nodeCountHasBeenSet = false;
  bool m_ocidHasBeenSet = false;
  bool m_ociResourceAnchorNameHasBeenSet = false;
  bool m_ociUrlHasBeenSet = false;
  bool m_odbNetworkArnHasBeenSet = false;
  bool m_odbNetworkIdHasBeenSet = false;
  bool m_percentProgressHasBeenSet = false;
  bool m_scanDnsNameHasBeenSet = false;
  bool m_scanDnsRecordIdHasBeenSet = false;
  bool m_scanIpIdsHasBeenSet = false;
  bool m_scanListenerPortTcpHasBeenSet = false;
  bool m_scanListenerPortTcpSslHasBeenSet = false;
  bool m_shapeHasBeenSet = false;
  bool m_shapeAttributeHasBeenSet = false;
  bool m_snapshotFileSystemStorageHasBeenSet = false;
  bool m_sshPublicKeysHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_systemVersionHasBeenSet = false;
  bool m_timeZoneHasBeenSet = false;
  bool m_totalEcpuCountHasBeenSet = false;
  bool m_totalFileSystemStorageHasBeenSet = false;
  bool m_vipIdsHasBeenSet = false;
  bool m_vmFileSystemStorageHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
