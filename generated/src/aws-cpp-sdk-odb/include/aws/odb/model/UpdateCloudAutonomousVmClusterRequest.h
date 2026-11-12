/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/OdbRequest.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/LicenseModel.h>
#include <aws/odb/model/MaintenanceWindow.h>

#include <utility>

namespace Aws {
namespace odb {
namespace Model {

/**
 */
class UpdateCloudAutonomousVmClusterRequest : public OdbRequest {
 public:
  AWS_ODB_API UpdateCloudAutonomousVmClusterRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateCloudAutonomousVmCluster"; }

  AWS_ODB_API Aws::String SerializePayload() const override;

  AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the Autonomous VM cluster to update.</p>
   */
  inline const Aws::String& GetCloudAutonomousVmClusterId() const { return m_cloudAutonomousVmClusterId; }
  inline bool CloudAutonomousVmClusterIdHasBeenSet() const { return m_cloudAutonomousVmClusterIdHasBeenSet; }
  template <typename CloudAutonomousVmClusterIdT = Aws::String>
  void SetCloudAutonomousVmClusterId(CloudAutonomousVmClusterIdT&& value) {
    m_cloudAutonomousVmClusterIdHasBeenSet = true;
    m_cloudAutonomousVmClusterId = std::forward<CloudAutonomousVmClusterIdT>(value);
  }
  template <typename CloudAutonomousVmClusterIdT = Aws::String>
  UpdateCloudAutonomousVmClusterRequest& WithCloudAutonomousVmClusterId(CloudAutonomousVmClusterIdT&& value) {
    SetCloudAutonomousVmClusterId(std::forward<CloudAutonomousVmClusterIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data storage size to allocate for Autonomous Databases in the Autonomous
   * VM cluster, in terabytes (TB).</p>
   */
  inline double GetAutonomousDataStorageSizeInTBs() const { return m_autonomousDataStorageSizeInTBs; }
  inline bool AutonomousDataStorageSizeInTBsHasBeenSet() const { return m_autonomousDataStorageSizeInTBsHasBeenSet; }
  inline void SetAutonomousDataStorageSizeInTBs(double value) {
    m_autonomousDataStorageSizeInTBsHasBeenSet = true;
    m_autonomousDataStorageSizeInTBs = value;
  }
  inline UpdateCloudAutonomousVmClusterRequest& WithAutonomousDataStorageSizeInTBs(double value) {
    SetAutonomousDataStorageSizeInTBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of CPU cores to enable per node in the Autonomous VM cluster. If
   * you don't specify a value, the existing number of CPU cores per node is
   * retained.</p>
   */
  inline int GetCpuCoreCountPerNode() const { return m_cpuCoreCountPerNode; }
  inline bool CpuCoreCountPerNodeHasBeenSet() const { return m_cpuCoreCountPerNodeHasBeenSet; }
  inline void SetCpuCoreCountPerNode(int value) {
    m_cpuCoreCountPerNodeHasBeenSet = true;
    m_cpuCoreCountPerNode = value;
  }
  inline UpdateCloudAutonomousVmClusterRequest& WithCpuCoreCountPerNode(int value) {
    SetCpuCoreCountPerNode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A user-provided description of the Autonomous VM cluster.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateCloudAutonomousVmClusterRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new user-friendly name for the Autonomous VM cluster.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  UpdateCloudAutonomousVmClusterRequest& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Oracle license model to apply to the Autonomous VM cluster.</p>
   */
  inline LicenseModel GetLicenseModel() const { return m_licenseModel; }
  inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
  inline void SetLicenseModel(LicenseModel value) {
    m_licenseModelHasBeenSet = true;
    m_licenseModel = value;
  }
  inline UpdateCloudAutonomousVmClusterRequest& WithLicenseModel(LicenseModel value) {
    SetLicenseModel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scheduling details for the maintenance window. Patching and system
   * updates take place during the maintenance window.</p>
   */
  inline const MaintenanceWindow& GetMaintenanceWindow() const { return m_maintenanceWindow; }
  inline bool MaintenanceWindowHasBeenSet() const { return m_maintenanceWindowHasBeenSet; }
  template <typename MaintenanceWindowT = MaintenanceWindow>
  void SetMaintenanceWindow(MaintenanceWindowT&& value) {
    m_maintenanceWindowHasBeenSet = true;
    m_maintenanceWindow = std::forward<MaintenanceWindowT>(value);
  }
  template <typename MaintenanceWindowT = MaintenanceWindow>
  UpdateCloudAutonomousVmClusterRequest& WithMaintenanceWindow(MaintenanceWindowT&& value) {
    SetMaintenanceWindow(std::forward<MaintenanceWindowT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of Autonomous Container Databases that can be created in the
   * Autonomous VM cluster.</p>
   */
  inline int GetTotalContainerDatabases() const { return m_totalContainerDatabases; }
  inline bool TotalContainerDatabasesHasBeenSet() const { return m_totalContainerDatabasesHasBeenSet; }
  inline void SetTotalContainerDatabases(int value) {
    m_totalContainerDatabasesHasBeenSet = true;
    m_totalContainerDatabases = value;
  }
  inline UpdateCloudAutonomousVmClusterRequest& WithTotalContainerDatabases(int value) {
    SetTotalContainerDatabases(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_cloudAutonomousVmClusterId;

  double m_autonomousDataStorageSizeInTBs{0.0};

  int m_cpuCoreCountPerNode{0};

  Aws::String m_description;

  Aws::String m_displayName;

  LicenseModel m_licenseModel{LicenseModel::NOT_SET};

  MaintenanceWindow m_maintenanceWindow;

  int m_totalContainerDatabases{0};
  bool m_cloudAutonomousVmClusterIdHasBeenSet = false;
  bool m_autonomousDataStorageSizeInTBsHasBeenSet = false;
  bool m_cpuCoreCountPerNodeHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_licenseModelHasBeenSet = false;
  bool m_maintenanceWindowHasBeenSet = false;
  bool m_totalContainerDatabasesHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
