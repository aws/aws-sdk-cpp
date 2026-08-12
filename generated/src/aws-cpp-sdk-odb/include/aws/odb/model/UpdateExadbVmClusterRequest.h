/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/OdbRequest.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/DataCollectionOptions.h>
#include <aws/odb/model/LicenseModel.h>
#include <aws/odb/model/UpdateAction.h>

#include <utility>

namespace Aws {
namespace odb {
namespace Model {

/**
 */
class UpdateExadbVmClusterRequest : public OdbRequest {
 public:
  AWS_ODB_API UpdateExadbVmClusterRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateExadbVmCluster"; }

  AWS_ODB_API Aws::String SerializePayload() const override;

  AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the Exascale VM cluster to update.</p>
   */
  inline const Aws::String& GetExadbVmClusterId() const { return m_exadbVmClusterId; }
  inline bool ExadbVmClusterIdHasBeenSet() const { return m_exadbVmClusterIdHasBeenSet; }
  template <typename ExadbVmClusterIdT = Aws::String>
  void SetExadbVmClusterId(ExadbVmClusterIdT&& value) {
    m_exadbVmClusterIdHasBeenSet = true;
    m_exadbVmClusterId = std::forward<ExadbVmClusterIdT>(value);
  }
  template <typename ExadbVmClusterIdT = Aws::String>
  UpdateExadbVmClusterRequest& WithExadbVmClusterId(ExadbVmClusterIdT&& value) {
    SetExadbVmClusterId(std::forward<ExadbVmClusterIdT>(value));
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
  UpdateExadbVmClusterRequest& WithDataCollectionOptions(DataCollectionOptionsT&& value) {
    SetDataCollectionOptions(std::forward<DataCollectionOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new user-friendly name for the Exascale VM cluster.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  UpdateExadbVmClusterRequest& WithDisplayName(DisplayNameT&& value) {
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
  inline UpdateExadbVmClusterRequest& WithEnabledEcpuCount(int value) {
    SetEnabledEcpuCount(value);
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
  UpdateExadbVmClusterRequest& WithGridImageId(GridImageIdT&& value) {
    SetGridImageId(std::forward<GridImageIdT>(value));
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
  inline UpdateExadbVmClusterRequest& WithLicenseModel(LicenseModel value) {
    SetLicenseModel(value);
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
  UpdateExadbVmClusterRequest& WithSshPublicKeys(SshPublicKeysT&& value) {
    SetSshPublicKeys(std::forward<SshPublicKeysT>(value));
    return *this;
  }
  template <typename SshPublicKeysT = Aws::String>
  UpdateExadbVmClusterRequest& AddSshPublicKeys(SshPublicKeysT&& value) {
    m_sshPublicKeysHasBeenSet = true;
    m_sshPublicKeys.emplace_back(std::forward<SshPublicKeysT>(value));
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
  UpdateExadbVmClusterRequest& WithSystemVersion(SystemVersionT&& value) {
    SetSystemVersion(std::forward<SystemVersionT>(value));
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
  inline UpdateExadbVmClusterRequest& WithTotalEcpuCount(int value) {
    SetTotalEcpuCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The update action to perform on the Exascale VM cluster.</p>
   */
  inline UpdateAction GetUpdateAction() const { return m_updateAction; }
  inline bool UpdateActionHasBeenSet() const { return m_updateActionHasBeenSet; }
  inline void SetUpdateAction(UpdateAction value) {
    m_updateActionHasBeenSet = true;
    m_updateAction = value;
  }
  inline UpdateExadbVmClusterRequest& WithUpdateAction(UpdateAction value) {
    SetUpdateAction(value);
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
  inline UpdateExadbVmClusterRequest& WithVmFileSystemStorageTotalSizeInGBs(int value) {
    SetVmFileSystemStorageTotalSizeInGBs(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_exadbVmClusterId;

  DataCollectionOptions m_dataCollectionOptions;

  Aws::String m_displayName;

  int m_enabledEcpuCount{0};

  Aws::String m_gridImageId;

  LicenseModel m_licenseModel{LicenseModel::NOT_SET};

  Aws::Vector<Aws::String> m_sshPublicKeys;

  Aws::String m_systemVersion;

  int m_totalEcpuCount{0};

  UpdateAction m_updateAction{UpdateAction::NOT_SET};

  int m_vmFileSystemStorageTotalSizeInGBs{0};
  bool m_exadbVmClusterIdHasBeenSet = false;
  bool m_dataCollectionOptionsHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_enabledEcpuCountHasBeenSet = false;
  bool m_gridImageIdHasBeenSet = false;
  bool m_licenseModelHasBeenSet = false;
  bool m_sshPublicKeysHasBeenSet = false;
  bool m_systemVersionHasBeenSet = false;
  bool m_totalEcpuCountHasBeenSet = false;
  bool m_updateActionHasBeenSet = false;
  bool m_vmFileSystemStorageTotalSizeInGBsHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
