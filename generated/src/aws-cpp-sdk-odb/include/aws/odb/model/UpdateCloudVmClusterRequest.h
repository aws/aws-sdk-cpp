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

#include <utility>

namespace Aws {
namespace odb {
namespace Model {

/**
 */
class UpdateCloudVmClusterRequest : public OdbRequest {
 public:
  AWS_ODB_API UpdateCloudVmClusterRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateCloudVmCluster"; }

  AWS_ODB_API Aws::String SerializePayload() const override;

  AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the VM cluster to update.</p>
   */
  inline const Aws::String& GetCloudVmClusterId() const { return m_cloudVmClusterId; }
  inline bool CloudVmClusterIdHasBeenSet() const { return m_cloudVmClusterIdHasBeenSet; }
  template <typename CloudVmClusterIdT = Aws::String>
  void SetCloudVmClusterId(CloudVmClusterIdT&& value) {
    m_cloudVmClusterIdHasBeenSet = true;
    m_cloudVmClusterId = std::forward<CloudVmClusterIdT>(value);
  }
  template <typename CloudVmClusterIdT = Aws::String>
  UpdateCloudVmClusterRequest& WithCloudVmClusterId(CloudVmClusterIdT&& value) {
    SetCloudVmClusterId(std::forward<CloudVmClusterIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of CPU cores to enable on the VM cluster. If you don't specify a
   * value, the existing number of CPU cores is retained.</p>
   */
  inline int GetCpuCoreCount() const { return m_cpuCoreCount; }
  inline bool CpuCoreCountHasBeenSet() const { return m_cpuCoreCountHasBeenSet; }
  inline void SetCpuCoreCount(int value) {
    m_cpuCoreCountHasBeenSet = true;
    m_cpuCoreCount = value;
  }
  inline UpdateCloudVmClusterRequest& WithCpuCoreCount(int value) {
    SetCpuCoreCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The set of preferences for the diagnostic collection options for the VM
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
  UpdateCloudVmClusterRequest& WithDataCollectionOptions(DataCollectionOptionsT&& value) {
    SetDataCollectionOptions(std::forward<DataCollectionOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size of the data disk group, in terabytes (TB), to allocate for the VM
   * cluster.</p>
   */
  inline double GetDataStorageSizeInTBs() const { return m_dataStorageSizeInTBs; }
  inline bool DataStorageSizeInTBsHasBeenSet() const { return m_dataStorageSizeInTBsHasBeenSet; }
  inline void SetDataStorageSizeInTBs(double value) {
    m_dataStorageSizeInTBsHasBeenSet = true;
    m_dataStorageSizeInTBs = value;
  }
  inline UpdateCloudVmClusterRequest& WithDataStorageSizeInTBs(double value) {
    SetDataStorageSizeInTBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of local node storage, in gigabytes (GB), to allocate for the VM
   * cluster.</p>
   */
  inline int GetDbNodeStorageSizeInGBs() const { return m_dbNodeStorageSizeInGBs; }
  inline bool DbNodeStorageSizeInGBsHasBeenSet() const { return m_dbNodeStorageSizeInGBsHasBeenSet; }
  inline void SetDbNodeStorageSizeInGBs(int value) {
    m_dbNodeStorageSizeInGBsHasBeenSet = true;
    m_dbNodeStorageSizeInGBs = value;
  }
  inline UpdateCloudVmClusterRequest& WithDbNodeStorageSizeInGBs(int value) {
    SetDbNodeStorageSizeInGBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new user-friendly name for the VM cluster.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  UpdateCloudVmClusterRequest& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The public key portion of one or more key pairs used for SSH access to the VM
   * cluster.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSshPublicKeys() const { return m_sshPublicKeys; }
  inline bool SshPublicKeysHasBeenSet() const { return m_sshPublicKeysHasBeenSet; }
  template <typename SshPublicKeysT = Aws::Vector<Aws::String>>
  void SetSshPublicKeys(SshPublicKeysT&& value) {
    m_sshPublicKeysHasBeenSet = true;
    m_sshPublicKeys = std::forward<SshPublicKeysT>(value);
  }
  template <typename SshPublicKeysT = Aws::Vector<Aws::String>>
  UpdateCloudVmClusterRequest& WithSshPublicKeys(SshPublicKeysT&& value) {
    SetSshPublicKeys(std::forward<SshPublicKeysT>(value));
    return *this;
  }
  template <typename SshPublicKeysT = Aws::String>
  UpdateCloudVmClusterRequest& AddSshPublicKeys(SshPublicKeysT&& value) {
    m_sshPublicKeysHasBeenSet = true;
    m_sshPublicKeys.emplace_back(std::forward<SshPublicKeysT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Oracle license model to apply to the VM cluster.</p>
   */
  inline LicenseModel GetLicenseModel() const { return m_licenseModel; }
  inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
  inline void SetLicenseModel(LicenseModel value) {
    m_licenseModelHasBeenSet = true;
    m_licenseModel = value;
  }
  inline UpdateCloudVmClusterRequest& WithLicenseModel(LicenseModel value) {
    SetLicenseModel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of memory, in gigabytes (GB), to allocate for the VM cluster.</p>
   */
  inline int GetMemorySizeInGBs() const { return m_memorySizeInGBs; }
  inline bool MemorySizeInGBsHasBeenSet() const { return m_memorySizeInGBsHasBeenSet; }
  inline void SetMemorySizeInGBs(int value) {
    m_memorySizeInGBsHasBeenSet = true;
    m_memorySizeInGBs = value;
  }
  inline UpdateCloudVmClusterRequest& WithMemorySizeInGBs(int value) {
    SetMemorySizeInGBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of local node storage, in gigabytes (GB), to allocate to the VM
   * cluster.</p>
   */
  inline int GetStorageSizeInGBs() const { return m_storageSizeInGBs; }
  inline bool StorageSizeInGBsHasBeenSet() const { return m_storageSizeInGBsHasBeenSet; }
  inline void SetStorageSizeInGBs(int value) {
    m_storageSizeInGBsHasBeenSet = true;
    m_storageSizeInGBs = value;
  }
  inline UpdateCloudVmClusterRequest& WithStorageSizeInGBs(int value) {
    SetStorageSizeInGBs(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_cloudVmClusterId;

  int m_cpuCoreCount{0};

  DataCollectionOptions m_dataCollectionOptions;

  double m_dataStorageSizeInTBs{0.0};

  int m_dbNodeStorageSizeInGBs{0};

  Aws::String m_displayName;

  Aws::Vector<Aws::String> m_sshPublicKeys;

  LicenseModel m_licenseModel{LicenseModel::NOT_SET};

  int m_memorySizeInGBs{0};

  int m_storageSizeInGBs{0};
  bool m_cloudVmClusterIdHasBeenSet = false;
  bool m_cpuCoreCountHasBeenSet = false;
  bool m_dataCollectionOptionsHasBeenSet = false;
  bool m_dataStorageSizeInTBsHasBeenSet = false;
  bool m_dbNodeStorageSizeInGBsHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_sshPublicKeysHasBeenSet = false;
  bool m_licenseModelHasBeenSet = false;
  bool m_memorySizeInGBsHasBeenSet = false;
  bool m_storageSizeInGBsHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
