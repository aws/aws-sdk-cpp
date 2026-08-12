/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/OdbRequest.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/DataCollectionOptions.h>
#include <aws/odb/model/LicenseModel.h>
#include <aws/odb/model/ShapeAttribute.h>

#include <utility>

namespace Aws {
namespace odb {
namespace Model {

/**
 */
class CreateExadbVmClusterRequest : public OdbRequest {
 public:
  AWS_ODB_API CreateExadbVmClusterRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateExadbVmCluster"; }

  AWS_ODB_API Aws::String SerializePayload() const override;

  AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A user-friendly name for the Exascale VM cluster.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  CreateExadbVmClusterRequest& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of ECPUs to enable for the Exascale VM cluster.</p>
   */
  inline int GetEnabledEcpuCount() const { return m_enabledEcpuCount; }
  inline bool EnabledEcpuCountHasBeenSet() const { return m_enabledEcpuCountHasBeenSet; }
  inline void SetEnabledEcpuCount(int value) {
    m_enabledEcpuCountHasBeenSet = true;
    m_enabledEcpuCount = value;
  }
  inline CreateExadbVmClusterRequest& WithEnabledEcpuCount(int value) {
    SetEnabledEcpuCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the Exascale storage vault for this Exascale VM
   * cluster.</p>
   */
  inline const Aws::String& GetExascaleDbStorageVaultId() const { return m_exascaleDbStorageVaultId; }
  inline bool ExascaleDbStorageVaultIdHasBeenSet() const { return m_exascaleDbStorageVaultIdHasBeenSet; }
  template <typename ExascaleDbStorageVaultIdT = Aws::String>
  void SetExascaleDbStorageVaultId(ExascaleDbStorageVaultIdT&& value) {
    m_exascaleDbStorageVaultIdHasBeenSet = true;
    m_exascaleDbStorageVaultId = std::forward<ExascaleDbStorageVaultIdT>(value);
  }
  template <typename ExascaleDbStorageVaultIdT = Aws::String>
  CreateExadbVmClusterRequest& WithExascaleDbStorageVaultId(ExascaleDbStorageVaultIdT&& value) {
    SetExascaleDbStorageVaultId(std::forward<ExascaleDbStorageVaultIdT>(value));
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
  CreateExadbVmClusterRequest& WithGridImageId(GridImageIdT&& value) {
    SetGridImageId(std::forward<GridImageIdT>(value));
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
  CreateExadbVmClusterRequest& WithHostname(HostnameT&& value) {
    SetHostname(std::forward<HostnameT>(value));
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
  inline CreateExadbVmClusterRequest& WithNodeCount(int value) {
    SetNodeCount(value);
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
  CreateExadbVmClusterRequest& WithOdbNetworkId(OdbNetworkIdT&& value) {
    SetOdbNetworkId(std::forward<OdbNetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The shape of the Exascale VM cluster.</p>
   */
  inline const Aws::String& GetShape() const { return m_shape; }
  inline bool ShapeHasBeenSet() const { return m_shapeHasBeenSet; }
  template <typename ShapeT = Aws::String>
  void SetShape(ShapeT&& value) {
    m_shapeHasBeenSet = true;
    m_shape = std::forward<ShapeT>(value);
  }
  template <typename ShapeT = Aws::String>
  CreateExadbVmClusterRequest& WithShape(ShapeT&& value) {
    SetShape(std::forward<ShapeT>(value));
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
  CreateExadbVmClusterRequest& WithSshPublicKeys(SshPublicKeysT&& value) {
    SetSshPublicKeys(std::forward<SshPublicKeysT>(value));
    return *this;
  }
  template <typename SshPublicKeysT = Aws::String>
  CreateExadbVmClusterRequest& AddSshPublicKeys(SshPublicKeysT&& value) {
    m_sshPublicKeysHasBeenSet = true;
    m_sshPublicKeys.emplace_back(std::forward<SshPublicKeysT>(value));
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
  inline CreateExadbVmClusterRequest& WithTotalEcpuCount(int value) {
    SetTotalEcpuCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total amount of file system storage, in gigabytes (GB), for the Exascale
   * VM cluster.</p>
   */
  inline int GetVmFileSystemStorageTotalSizeInGBs() const { return m_vmFileSystemStorageTotalSizeInGBs; }
  inline bool VmFileSystemStorageTotalSizeInGBsHasBeenSet() const { return m_vmFileSystemStorageTotalSizeInGBsHasBeenSet; }
  inline void SetVmFileSystemStorageTotalSizeInGBs(int value) {
    m_vmFileSystemStorageTotalSizeInGBsHasBeenSet = true;
    m_vmFileSystemStorageTotalSizeInGBs = value;
  }
  inline CreateExadbVmClusterRequest& WithVmFileSystemStorageTotalSizeInGBs(int value) {
    SetVmFileSystemStorageTotalSizeInGBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A name for the Grid Infrastructure cluster. The name isn't case
   * sensitive.</p>
   */
  inline const Aws::String& GetClusterName() const { return m_clusterName; }
  inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
  template <typename ClusterNameT = Aws::String>
  void SetClusterName(ClusterNameT&& value) {
    m_clusterNameHasBeenSet = true;
    m_clusterName = std::forward<ClusterNameT>(value);
  }
  template <typename ClusterNameT = Aws::String>
  CreateExadbVmClusterRequest& WithClusterName(ClusterNameT&& value) {
    SetClusterName(std::forward<ClusterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The set of preferences for the various diagnostic collection options for the
   * Exascale VM cluster.</p>
   */
  inline const DataCollectionOptions& GetDataCollectionOptions() const { return m_dataCollectionOptions; }
  inline bool DataCollectionOptionsHasBeenSet() const { return m_dataCollectionOptionsHasBeenSet; }
  template <typename DataCollectionOptionsT = DataCollectionOptions>
  void SetDataCollectionOptions(DataCollectionOptionsT&& value) {
    m_dataCollectionOptionsHasBeenSet = true;
    m_dataCollectionOptions = std::forward<DataCollectionOptionsT>(value);
  }
  template <typename DataCollectionOptionsT = DataCollectionOptions>
  CreateExadbVmClusterRequest& WithDataCollectionOptions(DataCollectionOptionsT&& value) {
    SetDataCollectionOptions(std::forward<DataCollectionOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Oracle license model to apply to the Exascale VM cluster.</p>
   */
  inline LicenseModel GetLicenseModel() const { return m_licenseModel; }
  inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
  inline void SetLicenseModel(LicenseModel value) {
    m_licenseModelHasBeenSet = true;
    m_licenseModel = value;
  }
  inline CreateExadbVmClusterRequest& WithLicenseModel(LicenseModel value) {
    SetLicenseModel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port number for TCP connections to the single client access name (SCAN)
   * listener.</p>
   */
  inline int GetScanListenerPortTcp() const { return m_scanListenerPortTcp; }
  inline bool ScanListenerPortTcpHasBeenSet() const { return m_scanListenerPortTcpHasBeenSet; }
  inline void SetScanListenerPortTcp(int value) {
    m_scanListenerPortTcpHasBeenSet = true;
    m_scanListenerPortTcp = value;
  }
  inline CreateExadbVmClusterRequest& WithScanListenerPortTcp(int value) {
    SetScanListenerPortTcp(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port number for TCP connections with SSL to the single client access name
   * (SCAN) listener.</p>
   */
  inline int GetScanListenerPortTcpSsl() const { return m_scanListenerPortTcpSsl; }
  inline bool ScanListenerPortTcpSslHasBeenSet() const { return m_scanListenerPortTcpSslHasBeenSet; }
  inline void SetScanListenerPortTcpSsl(int value) {
    m_scanListenerPortTcpSslHasBeenSet = true;
    m_scanListenerPortTcpSsl = value;
  }
  inline CreateExadbVmClusterRequest& WithScanListenerPortTcpSsl(int value) {
    SetScanListenerPortTcpSsl(value);
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
  inline CreateExadbVmClusterRequest& WithShapeAttribute(ShapeAttribute value) {
    SetShapeAttribute(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the operating system of the image for the Exascale VM
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
  CreateExadbVmClusterRequest& WithSystemVersion(SystemVersionT&& value) {
    SetSystemVersion(std::forward<SystemVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of resource tags to apply to the Exascale VM cluster.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateExadbVmClusterRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateExadbVmClusterRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time zone for the Exascale VM cluster.</p>
   */
  inline const Aws::String& GetTimeZone() const { return m_timeZone; }
  inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }
  template <typename TimeZoneT = Aws::String>
  void SetTimeZone(TimeZoneT&& value) {
    m_timeZoneHasBeenSet = true;
    m_timeZone = std::forward<TimeZoneT>(value);
  }
  template <typename TimeZoneT = Aws::String>
  CreateExadbVmClusterRequest& WithTimeZone(TimeZoneT&& value) {
    SetTimeZone(std::forward<TimeZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If you don't specify a client token, the Amazon Web
   * Services SDK automatically generates one and uses it for the request to ensure
   * idempotency. The client token is valid for up to 24 hours after it's first
   * used.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateExadbVmClusterRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_displayName;

  int m_enabledEcpuCount{0};

  Aws::String m_exascaleDbStorageVaultId;

  Aws::String m_gridImageId;

  Aws::String m_hostname;

  int m_nodeCount{0};

  Aws::String m_odbNetworkId;

  Aws::String m_shape;

  Aws::Vector<Aws::String> m_sshPublicKeys;

  int m_totalEcpuCount{0};

  int m_vmFileSystemStorageTotalSizeInGBs{0};

  Aws::String m_clusterName;

  DataCollectionOptions m_dataCollectionOptions;

  LicenseModel m_licenseModel{LicenseModel::NOT_SET};

  int m_scanListenerPortTcp{0};

  int m_scanListenerPortTcpSsl{0};

  ShapeAttribute m_shapeAttribute{ShapeAttribute::NOT_SET};

  Aws::String m_systemVersion;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_timeZone;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_displayNameHasBeenSet = false;
  bool m_enabledEcpuCountHasBeenSet = false;
  bool m_exascaleDbStorageVaultIdHasBeenSet = false;
  bool m_gridImageIdHasBeenSet = false;
  bool m_hostnameHasBeenSet = false;
  bool m_nodeCountHasBeenSet = false;
  bool m_odbNetworkIdHasBeenSet = false;
  bool m_shapeHasBeenSet = false;
  bool m_sshPublicKeysHasBeenSet = false;
  bool m_totalEcpuCountHasBeenSet = false;
  bool m_vmFileSystemStorageTotalSizeInGBsHasBeenSet = false;
  bool m_clusterNameHasBeenSet = false;
  bool m_dataCollectionOptionsHasBeenSet = false;
  bool m_licenseModelHasBeenSet = false;
  bool m_scanListenerPortTcpHasBeenSet = false;
  bool m_scanListenerPortTcpSslHasBeenSet = false;
  bool m_shapeAttributeHasBeenSet = false;
  bool m_systemVersionHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_timeZoneHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
