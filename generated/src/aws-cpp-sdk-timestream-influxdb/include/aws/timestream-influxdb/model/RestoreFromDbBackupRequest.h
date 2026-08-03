/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-influxdb/TimestreamInfluxDBRequest.h>
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/timestream-influxdb/model/DbBackupConfiguration.h>
#include <aws/timestream-influxdb/model/LogDeliveryConfiguration.h>
#include <aws/timestream-influxdb/model/MaintenanceSchedule.h>
#include <aws/timestream-influxdb/model/NetworkType.h>
#include <aws/timestream-influxdb/model/ResourceDeploymentType.h>
#include <aws/timestream-influxdb/model/RestoreMode.h>

#include <utility>

namespace Aws {
namespace TimestreamInfluxDB {
namespace Model {

/**
 */
class RestoreFromDbBackupRequest : public TimestreamInfluxDBRequest {
 public:
  AWS_TIMESTREAMINFLUXDB_API RestoreFromDbBackupRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RestoreFromDbBackup"; }

  AWS_TIMESTREAMINFLUXDB_API Aws::String SerializePayload() const override;

  AWS_TIMESTREAMINFLUXDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the new resource to create from the restore. If restoring to an
   * existing resource, the name must match the existing resource name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  RestoreFromDbBackupRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the backup to restore from.</p>
   */
  inline const Aws::String& GetDbBackupId() const { return m_dbBackupId; }
  inline bool DbBackupIdHasBeenSet() const { return m_dbBackupIdHasBeenSet; }
  template <typename DbBackupIdT = Aws::String>
  void SetDbBackupId(DbBackupIdT&& value) {
    m_dbBackupIdHasBeenSet = true;
    m_dbBackupId = std::forward<DbBackupIdT>(value);
  }
  template <typename DbBackupIdT = Aws::String>
  RestoreFromDbBackupRequest& WithDbBackupId(DbBackupIdT&& value) {
    SetDbBackupId(std::forward<DbBackupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The point in time to restore to, for continuous backups. Must be within the
   * backup's retention window.</p>
   */
  inline const Aws::Utils::DateTime& GetRestoreToTime() const { return m_restoreToTime; }
  inline bool RestoreToTimeHasBeenSet() const { return m_restoreToTimeHasBeenSet; }
  template <typename RestoreToTimeT = Aws::Utils::DateTime>
  void SetRestoreToTime(RestoreToTimeT&& value) {
    m_restoreToTimeHasBeenSet = true;
    m_restoreToTime = std::forward<RestoreToTimeT>(value);
  }
  template <typename RestoreToTimeT = Aws::Utils::DateTime>
  RestoreFromDbBackupRequest& WithRestoreToTime(RestoreToTimeT&& value) {
    SetRestoreToTime(std::forward<RestoreToTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to restore to a new resource or replace the existing
   * resource. Valid values are NEW_RESOURCE (default) and REPLACE_EXISTING.</p>
   */
  inline RestoreMode GetRestoreMode() const { return m_restoreMode; }
  inline bool RestoreModeHasBeenSet() const { return m_restoreModeHasBeenSet; }
  inline void SetRestoreMode(RestoreMode value) {
    m_restoreModeHasBeenSet = true;
    m_restoreMode = value;
  }
  inline RestoreFromDbBackupRequest& WithRestoreMode(RestoreMode value) {
    SetRestoreMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of VPC subnet IDs for the restored resource. If not specified, the
   * restored resource uses the same subnets as the backup.</p>
   */
  inline const Aws::Vector<Aws::String>& GetVpcSubnetIds() const { return m_vpcSubnetIds; }
  inline bool VpcSubnetIdsHasBeenSet() const { return m_vpcSubnetIdsHasBeenSet; }
  template <typename VpcSubnetIdsT = Aws::Vector<Aws::String>>
  void SetVpcSubnetIds(VpcSubnetIdsT&& value) {
    m_vpcSubnetIdsHasBeenSet = true;
    m_vpcSubnetIds = std::forward<VpcSubnetIdsT>(value);
  }
  template <typename VpcSubnetIdsT = Aws::Vector<Aws::String>>
  RestoreFromDbBackupRequest& WithVpcSubnetIds(VpcSubnetIdsT&& value) {
    SetVpcSubnetIds(std::forward<VpcSubnetIdsT>(value));
    return *this;
  }
  template <typename VpcSubnetIdsT = Aws::String>
  RestoreFromDbBackupRequest& AddVpcSubnetIds(VpcSubnetIdsT&& value) {
    m_vpcSubnetIdsHasBeenSet = true;
    m_vpcSubnetIds.emplace_back(std::forward<VpcSubnetIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of VPC security group IDs for the restored resource. If not specified,
   * the restored resource uses the same security groups as the backup.</p>
   */
  inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const { return m_vpcSecurityGroupIds; }
  inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }
  template <typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
  void SetVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) {
    m_vpcSecurityGroupIdsHasBeenSet = true;
    m_vpcSecurityGroupIds = std::forward<VpcSecurityGroupIdsT>(value);
  }
  template <typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
  RestoreFromDbBackupRequest& WithVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) {
    SetVpcSecurityGroupIds(std::forward<VpcSecurityGroupIdsT>(value));
    return *this;
  }
  template <typename VpcSecurityGroupIdsT = Aws::String>
  RestoreFromDbBackupRequest& AddVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) {
    m_vpcSecurityGroupIdsHasBeenSet = true;
    m_vpcSecurityGroupIds.emplace_back(std::forward<VpcSecurityGroupIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the restored resource is publicly accessible.</p>
   */
  inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
  inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }
  inline void SetPubliclyAccessible(bool value) {
    m_publiclyAccessibleHasBeenSet = true;
    m_publiclyAccessible = value;
  }
  inline RestoreFromDbBackupRequest& WithPubliclyAccessible(bool value) {
    SetPubliclyAccessible(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration for sending InfluxDB engine logs to the specified S3 bucket for
   * the restored resource.</p>
   */
  inline const LogDeliveryConfiguration& GetLogDeliveryConfiguration() const { return m_logDeliveryConfiguration; }
  inline bool LogDeliveryConfigurationHasBeenSet() const { return m_logDeliveryConfigurationHasBeenSet; }
  template <typename LogDeliveryConfigurationT = LogDeliveryConfiguration>
  void SetLogDeliveryConfiguration(LogDeliveryConfigurationT&& value) {
    m_logDeliveryConfigurationHasBeenSet = true;
    m_logDeliveryConfiguration = std::forward<LogDeliveryConfigurationT>(value);
  }
  template <typename LogDeliveryConfigurationT = LogDeliveryConfiguration>
  RestoreFromDbBackupRequest& WithLogDeliveryConfiguration(LogDeliveryConfigurationT&& value) {
    SetLogDeliveryConfiguration(std::forward<LogDeliveryConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maintenance schedule for the restored resource.</p>
   */
  inline const MaintenanceSchedule& GetMaintenanceSchedule() const { return m_maintenanceSchedule; }
  inline bool MaintenanceScheduleHasBeenSet() const { return m_maintenanceScheduleHasBeenSet; }
  template <typename MaintenanceScheduleT = MaintenanceSchedule>
  void SetMaintenanceSchedule(MaintenanceScheduleT&& value) {
    m_maintenanceScheduleHasBeenSet = true;
    m_maintenanceSchedule = std::forward<MaintenanceScheduleT>(value);
  }
  template <typename MaintenanceScheduleT = MaintenanceSchedule>
  RestoreFromDbBackupRequest& WithMaintenanceSchedule(MaintenanceScheduleT&& value) {
    SetMaintenanceSchedule(std::forward<MaintenanceScheduleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of key-value pairs to associate with the restored resource.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  RestoreFromDbBackupRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  RestoreFromDbBackupRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port number on which the restored InfluxDB resource accepts
   * connections.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline RestoreFromDbBackupRequest& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the network type of the restored resource. Valid values are IPV4
   * and DUAL.</p>
   */
  inline NetworkType GetNetworkType() const { return m_networkType; }
  inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
  inline void SetNetworkType(NetworkType value) {
    m_networkTypeHasBeenSet = true;
    m_networkType = value;
  }
  inline RestoreFromDbBackupRequest& WithNetworkType(NetworkType value) {
    SetNetworkType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the deployment type of the restored resource. Valid values are
   * SINGLE_AZ, WITH_MULTIAZ_STANDBY, and MULTI_NODE_READ_REPLICAS.</p>
   */
  inline ResourceDeploymentType GetDeploymentType() const { return m_deploymentType; }
  inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
  inline void SetDeploymentType(ResourceDeploymentType value) {
    m_deploymentTypeHasBeenSet = true;
    m_deploymentType = value;
  }
  inline RestoreFromDbBackupRequest& WithDeploymentType(ResourceDeploymentType value) {
    SetDeploymentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of backup configurations to apply to the restored resource.</p>
   */
  inline const Aws::Vector<DbBackupConfiguration>& GetDbBackupConfigurations() const { return m_dbBackupConfigurations; }
  inline bool DbBackupConfigurationsHasBeenSet() const { return m_dbBackupConfigurationsHasBeenSet; }
  template <typename DbBackupConfigurationsT = Aws::Vector<DbBackupConfiguration>>
  void SetDbBackupConfigurations(DbBackupConfigurationsT&& value) {
    m_dbBackupConfigurationsHasBeenSet = true;
    m_dbBackupConfigurations = std::forward<DbBackupConfigurationsT>(value);
  }
  template <typename DbBackupConfigurationsT = Aws::Vector<DbBackupConfiguration>>
  RestoreFromDbBackupRequest& WithDbBackupConfigurations(DbBackupConfigurationsT&& value) {
    SetDbBackupConfigurations(std::forward<DbBackupConfigurationsT>(value));
    return *this;
  }
  template <typename DbBackupConfigurationsT = DbBackupConfiguration>
  RestoreFromDbBackupRequest& AddDbBackupConfigurations(DbBackupConfigurationsT&& value) {
    m_dbBackupConfigurationsHasBeenSet = true;
    m_dbBackupConfigurations.emplace_back(std::forward<DbBackupConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services KMS key identifier to use for encryption of the
   * restored resource. Can be a key ID, key ARN, alias name, or alias ARN.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  RestoreFromDbBackupRequest& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_dbBackupId;

  Aws::Utils::DateTime m_restoreToTime{};

  RestoreMode m_restoreMode{RestoreMode::NOT_SET};

  Aws::Vector<Aws::String> m_vpcSubnetIds;

  Aws::Vector<Aws::String> m_vpcSecurityGroupIds;

  bool m_publiclyAccessible{false};

  LogDeliveryConfiguration m_logDeliveryConfiguration;

  MaintenanceSchedule m_maintenanceSchedule;

  Aws::Map<Aws::String, Aws::String> m_tags;

  int m_port{0};

  NetworkType m_networkType{NetworkType::NOT_SET};

  ResourceDeploymentType m_deploymentType{ResourceDeploymentType::NOT_SET};

  Aws::Vector<DbBackupConfiguration> m_dbBackupConfigurations;

  Aws::String m_kmsKeyId;
  bool m_nameHasBeenSet = false;
  bool m_dbBackupIdHasBeenSet = false;
  bool m_restoreToTimeHasBeenSet = false;
  bool m_restoreModeHasBeenSet = false;
  bool m_vpcSubnetIdsHasBeenSet = false;
  bool m_vpcSecurityGroupIdsHasBeenSet = false;
  bool m_publiclyAccessibleHasBeenSet = false;
  bool m_logDeliveryConfigurationHasBeenSet = false;
  bool m_maintenanceScheduleHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_portHasBeenSet = false;
  bool m_networkTypeHasBeenSet = false;
  bool m_deploymentTypeHasBeenSet = false;
  bool m_dbBackupConfigurationsHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
