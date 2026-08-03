/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/timestream-influxdb/model/ClusterConfiguration.h>
#include <aws/timestream-influxdb/model/DbBackupStatus.h>
#include <aws/timestream-influxdb/model/DbBackupType.h>
#include <aws/timestream-influxdb/model/DbInstanceType.h>
#include <aws/timestream-influxdb/model/DbStorageType.h>
#include <aws/timestream-influxdb/model/EngineType.h>
#include <aws/timestream-influxdb/model/FailoverMode.h>
#include <aws/timestream-influxdb/model/LogDeliveryConfiguration.h>
#include <aws/timestream-influxdb/model/MaintenanceSchedule.h>
#include <aws/timestream-influxdb/model/NetworkType.h>
#include <aws/timestream-influxdb/model/ResourceDeploymentType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace TimestreamInfluxDB {
namespace Model {
class CreateDbBackupResult {
 public:
  AWS_TIMESTREAMINFLUXDB_API CreateDbBackupResult() = default;
  AWS_TIMESTREAMINFLUXDB_API CreateDbBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_TIMESTREAMINFLUXDB_API CreateDbBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Service-generated unique identifier of the backup.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CreateDbBackupResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The customer-provided name of the backup.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateDbBackupResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the backup.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CreateDbBackupResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the backup.</p>
   */
  inline DbBackupStatus GetStatus() const { return m_status; }
  inline void SetStatus(DbBackupStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateDbBackupResult& WithStatus(DbBackupStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the backup was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CreateDbBackupResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date after which the backup will be automatically deleted.</p>
   */
  inline const Aws::String& GetExpiresAfter() const { return m_expiresAfter; }
  template <typename ExpiresAfterT = Aws::String>
  void SetExpiresAfter(ExpiresAfterT&& value) {
    m_expiresAfterHasBeenSet = true;
    m_expiresAfter = std::forward<ExpiresAfterT>(value);
  }
  template <typename ExpiresAfterT = Aws::String>
  CreateDbBackupResult& WithExpiresAfter(ExpiresAfterT&& value) {
    SetExpiresAfter(std::forward<ExpiresAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the DB resource that the backup was created from.</p>
   */
  inline const Aws::String& GetDbResourceId() const { return m_dbResourceId; }
  template <typename DbResourceIdT = Aws::String>
  void SetDbResourceId(DbResourceIdT&& value) {
    m_dbResourceIdHasBeenSet = true;
    m_dbResourceId = std::forward<DbResourceIdT>(value);
  }
  template <typename DbResourceIdT = Aws::String>
  CreateDbBackupResult& WithDbResourceId(DbResourceIdT&& value) {
    SetDbResourceId(std::forward<DbResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of backup.</p>
   */
  inline DbBackupType GetType() const { return m_type; }
  inline void SetType(DbBackupType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline CreateDbBackupResult& WithType(DbBackupType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The engine type of the resource that the backup was created from.</p>
   */
  inline EngineType GetEngineType() const { return m_engineType; }
  inline void SetEngineType(EngineType value) {
    m_engineTypeHasBeenSet = true;
    m_engineType = value;
  }
  inline CreateDbBackupResult& WithEngineType(EngineType value) {
    SetEngineType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The deployment type of the resource that the backup was created from.</p>
   */
  inline ResourceDeploymentType GetDeploymentType() const { return m_deploymentType; }
  inline void SetDeploymentType(ResourceDeploymentType value) {
    m_deploymentTypeHasBeenSet = true;
    m_deploymentType = value;
  }
  inline CreateDbBackupResult& WithDeploymentType(ResourceDeploymentType value) {
    SetDeploymentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services KMS key ARN used for encryption of the resource at
   * the time of backup.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  CreateDbBackupResult& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cluster configuration of the resource at the time of backup.</p>
   */
  inline const ClusterConfiguration& GetClusterConfiguration() const { return m_clusterConfiguration; }
  template <typename ClusterConfigurationT = ClusterConfiguration>
  void SetClusterConfiguration(ClusterConfigurationT&& value) {
    m_clusterConfigurationHasBeenSet = true;
    m_clusterConfiguration = std::forward<ClusterConfigurationT>(value);
  }
  template <typename ClusterConfigurationT = ClusterConfiguration>
  CreateDbBackupResult& WithClusterConfiguration(ClusterConfigurationT&& value) {
    SetClusterConfiguration(std::forward<ClusterConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the DB parameter group associated with the backup.</p>
   */
  inline const Aws::String& GetDbParameterGroupId() const { return m_dbParameterGroupId; }
  template <typename DbParameterGroupIdT = Aws::String>
  void SetDbParameterGroupId(DbParameterGroupIdT&& value) {
    m_dbParameterGroupIdHasBeenSet = true;
    m_dbParameterGroupId = std::forward<DbParameterGroupIdT>(value);
  }
  template <typename DbParameterGroupIdT = Aws::String>
  CreateDbBackupResult& WithDbParameterGroupId(DbParameterGroupIdT&& value) {
    SetDbParameterGroupId(std::forward<DbParameterGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DB instance type of the resource at the time of backup.</p>
   */
  inline DbInstanceType GetDbInstanceType() const { return m_dbInstanceType; }
  inline void SetDbInstanceType(DbInstanceType value) {
    m_dbInstanceTypeHasBeenSet = true;
    m_dbInstanceType = value;
  }
  inline CreateDbBackupResult& WithDbInstanceType(DbInstanceType value) {
    SetDbInstanceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The log delivery configuration of the resource at the time of backup.</p>
   */
  inline const LogDeliveryConfiguration& GetLogDeliveryConfiguration() const { return m_logDeliveryConfiguration; }
  template <typename LogDeliveryConfigurationT = LogDeliveryConfiguration>
  void SetLogDeliveryConfiguration(LogDeliveryConfigurationT&& value) {
    m_logDeliveryConfigurationHasBeenSet = true;
    m_logDeliveryConfiguration = std::forward<LogDeliveryConfigurationT>(value);
  }
  template <typename LogDeliveryConfigurationT = LogDeliveryConfiguration>
  CreateDbBackupResult& WithLogDeliveryConfiguration(LogDeliveryConfigurationT&& value) {
    SetLogDeliveryConfiguration(std::forward<LogDeliveryConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The failover mode of the resource at the time of backup.</p>
   */
  inline FailoverMode GetFailoverMode() const { return m_failoverMode; }
  inline void SetFailoverMode(FailoverMode value) {
    m_failoverModeHasBeenSet = true;
    m_failoverMode = value;
  }
  inline CreateDbBackupResult& WithFailoverMode(FailoverMode value) {
    SetFailoverMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The storage type of the resource at the time of backup.</p>
   */
  inline DbStorageType GetDbStorageType() const { return m_dbStorageType; }
  inline void SetDbStorageType(DbStorageType value) {
    m_dbStorageTypeHasBeenSet = true;
    m_dbStorageType = value;
  }
  inline CreateDbBackupResult& WithDbStorageType(DbStorageType value) {
    SetDbStorageType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The allocated storage of the resource at the time of backup, in GiB.</p>
   */
  inline int GetAllocatedStorage() const { return m_allocatedStorage; }
  inline void SetAllocatedStorage(int value) {
    m_allocatedStorageHasBeenSet = true;
    m_allocatedStorage = value;
  }
  inline CreateDbBackupResult& WithAllocatedStorage(int value) {
    SetAllocatedStorage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The VPC subnet IDs associated with the resource at the time of backup.</p>
   */
  inline const Aws::Vector<Aws::String>& GetVpcSubnetIds() const { return m_vpcSubnetIds; }
  template <typename VpcSubnetIdsT = Aws::Vector<Aws::String>>
  void SetVpcSubnetIds(VpcSubnetIdsT&& value) {
    m_vpcSubnetIdsHasBeenSet = true;
    m_vpcSubnetIds = std::forward<VpcSubnetIdsT>(value);
  }
  template <typename VpcSubnetIdsT = Aws::Vector<Aws::String>>
  CreateDbBackupResult& WithVpcSubnetIds(VpcSubnetIdsT&& value) {
    SetVpcSubnetIds(std::forward<VpcSubnetIdsT>(value));
    return *this;
  }
  template <typename VpcSubnetIdsT = Aws::String>
  CreateDbBackupResult& AddVpcSubnetIds(VpcSubnetIdsT&& value) {
    m_vpcSubnetIdsHasBeenSet = true;
    m_vpcSubnetIds.emplace_back(std::forward<VpcSubnetIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The VPC security group IDs associated with the resource at the time of
   * backup.</p>
   */
  inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const { return m_vpcSecurityGroupIds; }
  template <typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
  void SetVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) {
    m_vpcSecurityGroupIdsHasBeenSet = true;
    m_vpcSecurityGroupIds = std::forward<VpcSecurityGroupIdsT>(value);
  }
  template <typename VpcSecurityGroupIdsT = Aws::Vector<Aws::String>>
  CreateDbBackupResult& WithVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) {
    SetVpcSecurityGroupIds(std::forward<VpcSecurityGroupIdsT>(value));
    return *this;
  }
  template <typename VpcSecurityGroupIdsT = Aws::String>
  CreateDbBackupResult& AddVpcSecurityGroupIds(VpcSecurityGroupIdsT&& value) {
    m_vpcSecurityGroupIdsHasBeenSet = true;
    m_vpcSecurityGroupIds.emplace_back(std::forward<VpcSecurityGroupIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the resource was publicly accessible at the time of
   * backup.</p>
   */
  inline bool GetPubliclyAccessible() const { return m_publiclyAccessible; }
  inline void SetPubliclyAccessible(bool value) {
    m_publiclyAccessibleHasBeenSet = true;
    m_publiclyAccessible = value;
  }
  inline CreateDbBackupResult& WithPubliclyAccessible(bool value) {
    SetPubliclyAccessible(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port number of the resource at the time of backup.</p>
   */
  inline int GetPort() const { return m_port; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline CreateDbBackupResult& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network type of the resource at the time of backup.</p>
   */
  inline NetworkType GetNetworkType() const { return m_networkType; }
  inline void SetNetworkType(NetworkType value) {
    m_networkTypeHasBeenSet = true;
    m_networkType = value;
  }
  inline CreateDbBackupResult& WithNetworkType(NetworkType value) {
    SetNetworkType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Secrets Manager secret containing the InfluxDB auth
   * parameters.</p>
   */
  inline const Aws::String& GetInfluxAuthParametersSecretArn() const { return m_influxAuthParametersSecretArn; }
  template <typename InfluxAuthParametersSecretArnT = Aws::String>
  void SetInfluxAuthParametersSecretArn(InfluxAuthParametersSecretArnT&& value) {
    m_influxAuthParametersSecretArnHasBeenSet = true;
    m_influxAuthParametersSecretArn = std::forward<InfluxAuthParametersSecretArnT>(value);
  }
  template <typename InfluxAuthParametersSecretArnT = Aws::String>
  CreateDbBackupResult& WithInfluxAuthParametersSecretArn(InfluxAuthParametersSecretArnT&& value) {
    SetInfluxAuthParametersSecretArn(std::forward<InfluxAuthParametersSecretArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maintenance schedule of the resource at the time of backup.</p>
   */
  inline const MaintenanceSchedule& GetMaintenanceSchedule() const { return m_maintenanceSchedule; }
  template <typename MaintenanceScheduleT = MaintenanceSchedule>
  void SetMaintenanceSchedule(MaintenanceScheduleT&& value) {
    m_maintenanceScheduleHasBeenSet = true;
    m_maintenanceSchedule = std::forward<MaintenanceScheduleT>(value);
  }
  template <typename MaintenanceScheduleT = MaintenanceSchedule>
  CreateDbBackupResult& WithMaintenanceSchedule(MaintenanceScheduleT&& value) {
    SetMaintenanceSchedule(std::forward<MaintenanceScheduleT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  CreateDbBackupResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_id;

  Aws::String m_name;

  Aws::String m_arn;

  DbBackupStatus m_status{DbBackupStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_expiresAfter;

  Aws::String m_dbResourceId;

  DbBackupType m_type{DbBackupType::NOT_SET};

  EngineType m_engineType{EngineType::NOT_SET};

  ResourceDeploymentType m_deploymentType{ResourceDeploymentType::NOT_SET};

  Aws::String m_kmsKeyId;

  ClusterConfiguration m_clusterConfiguration;

  Aws::String m_dbParameterGroupId;

  DbInstanceType m_dbInstanceType{DbInstanceType::NOT_SET};

  LogDeliveryConfiguration m_logDeliveryConfiguration;

  FailoverMode m_failoverMode{FailoverMode::NOT_SET};

  DbStorageType m_dbStorageType{DbStorageType::NOT_SET};

  int m_allocatedStorage{0};

  Aws::Vector<Aws::String> m_vpcSubnetIds;

  Aws::Vector<Aws::String> m_vpcSecurityGroupIds;

  bool m_publiclyAccessible{false};

  int m_port{0};

  NetworkType m_networkType{NetworkType::NOT_SET};

  Aws::String m_influxAuthParametersSecretArn;

  MaintenanceSchedule m_maintenanceSchedule;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_expiresAfterHasBeenSet = false;
  bool m_dbResourceIdHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_engineTypeHasBeenSet = false;
  bool m_deploymentTypeHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_clusterConfigurationHasBeenSet = false;
  bool m_dbParameterGroupIdHasBeenSet = false;
  bool m_dbInstanceTypeHasBeenSet = false;
  bool m_logDeliveryConfigurationHasBeenSet = false;
  bool m_failoverModeHasBeenSet = false;
  bool m_dbStorageTypeHasBeenSet = false;
  bool m_allocatedStorageHasBeenSet = false;
  bool m_vpcSubnetIdsHasBeenSet = false;
  bool m_vpcSecurityGroupIdsHasBeenSet = false;
  bool m_publiclyAccessibleHasBeenSet = false;
  bool m_portHasBeenSet = false;
  bool m_networkTypeHasBeenSet = false;
  bool m_influxAuthParametersSecretArnHasBeenSet = false;
  bool m_maintenanceScheduleHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
