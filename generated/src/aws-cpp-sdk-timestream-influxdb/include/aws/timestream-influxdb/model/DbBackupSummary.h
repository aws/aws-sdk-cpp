/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/timestream-influxdb/model/DbBackupStatus.h>
#include <aws/timestream-influxdb/model/DbBackupType.h>
#include <aws/timestream-influxdb/model/EngineType.h>
#include <aws/timestream-influxdb/model/ResourceDeploymentType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace TimestreamInfluxDB {
namespace Model {

/**
 * <p>Contains a summary of a Timestream for InfluxDB backup.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/DbBackupSummary">AWS
 * API Reference</a></p>
 */
class DbBackupSummary {
 public:
  AWS_TIMESTREAMINFLUXDB_API DbBackupSummary() = default;
  AWS_TIMESTREAMINFLUXDB_API DbBackupSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_TIMESTREAMINFLUXDB_API DbBackupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TIMESTREAMINFLUXDB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Service-generated unique identifier of the backup.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  DbBackupSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The customer-provided name of the backup.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DbBackupSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the backup.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  DbBackupSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the backup. Valid values are IN_PROGRESS, COMPLETED, FAILED,
   * DELETING, and DELETED.</p>
   */
  inline DbBackupStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DbBackupStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DbBackupSummary& WithStatus(DbBackupStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the backup was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DbBackupSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date after which the backup will be automatically deleted.</p>
   */
  inline const Aws::String& GetExpiresAfter() const { return m_expiresAfter; }
  inline bool ExpiresAfterHasBeenSet() const { return m_expiresAfterHasBeenSet; }
  template <typename ExpiresAfterT = Aws::String>
  void SetExpiresAfter(ExpiresAfterT&& value) {
    m_expiresAfterHasBeenSet = true;
    m_expiresAfter = std::forward<ExpiresAfterT>(value);
  }
  template <typename ExpiresAfterT = Aws::String>
  DbBackupSummary& WithExpiresAfter(ExpiresAfterT&& value) {
    SetExpiresAfter(std::forward<ExpiresAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the DB resource that the backup was created from.</p>
   */
  inline const Aws::String& GetDbResourceId() const { return m_dbResourceId; }
  inline bool DbResourceIdHasBeenSet() const { return m_dbResourceIdHasBeenSet; }
  template <typename DbResourceIdT = Aws::String>
  void SetDbResourceId(DbResourceIdT&& value) {
    m_dbResourceIdHasBeenSet = true;
    m_dbResourceId = std::forward<DbResourceIdT>(value);
  }
  template <typename DbResourceIdT = Aws::String>
  DbBackupSummary& WithDbResourceId(DbResourceIdT&& value) {
    SetDbResourceId(std::forward<DbResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of backup. Valid values are HOURLY, DAILY, WEEKLY, MONTHLY,
   * CUSTOM_SCHEDULE, ON_DEMAND, and CONTINUOUS.</p>
   */
  inline DbBackupType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(DbBackupType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline DbBackupSummary& WithType(DbBackupType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The engine type of the resource that the backup was created from.</p>
   */
  inline EngineType GetEngineType() const { return m_engineType; }
  inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }
  inline void SetEngineType(EngineType value) {
    m_engineTypeHasBeenSet = true;
    m_engineType = value;
  }
  inline DbBackupSummary& WithEngineType(EngineType value) {
    SetEngineType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The deployment type of the resource that the backup was created from.</p>
   */
  inline ResourceDeploymentType GetDeploymentType() const { return m_deploymentType; }
  inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
  inline void SetDeploymentType(ResourceDeploymentType value) {
    m_deploymentTypeHasBeenSet = true;
    m_deploymentType = value;
  }
  inline DbBackupSummary& WithDeploymentType(ResourceDeploymentType value) {
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
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  DbBackupSummary& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}
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
};

}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
