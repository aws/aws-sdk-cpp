/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/CloneToRefreshableConfiguration.h>
#include <aws/odb/model/CrossRegionDataGuardConfiguration.h>
#include <aws/odb/model/CrossRegionDisasterRecoveryConfiguration.h>
#include <aws/odb/model/DatabaseCloneConfiguration.h>
#include <aws/odb/model/PointInTimeRestoreConfiguration.h>
#include <aws/odb/model/RestoreFromBackupConfiguration.h>

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
 * <p>The configuration details for the source used to create an Autonomous
 * Database. This is a union, so only one of the following members can be
 * specified.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/SourceConfiguration">AWS
 * API Reference</a></p>
 */
class SourceConfiguration {
 public:
  AWS_ODB_API SourceConfiguration() = default;
  AWS_ODB_API SourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API SourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration for creating the Autonomous Database as a clone of an
   * existing database.</p>
   */
  inline const DatabaseCloneConfiguration& GetDatabaseClone() const { return m_databaseClone; }
  inline bool DatabaseCloneHasBeenSet() const { return m_databaseCloneHasBeenSet; }
  template <typename DatabaseCloneT = DatabaseCloneConfiguration>
  void SetDatabaseClone(DatabaseCloneT&& value) {
    m_databaseCloneHasBeenSet = true;
    m_databaseClone = std::forward<DatabaseCloneT>(value);
  }
  template <typename DatabaseCloneT = DatabaseCloneConfiguration>
  SourceConfiguration& WithDatabaseClone(DatabaseCloneT&& value) {
    SetDatabaseClone(std::forward<DatabaseCloneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for creating the Autonomous Database by restoring from a
   * backup.</p>
   */
  inline const RestoreFromBackupConfiguration& GetRestoreFromBackup() const { return m_restoreFromBackup; }
  inline bool RestoreFromBackupHasBeenSet() const { return m_restoreFromBackupHasBeenSet; }
  template <typename RestoreFromBackupT = RestoreFromBackupConfiguration>
  void SetRestoreFromBackup(RestoreFromBackupT&& value) {
    m_restoreFromBackupHasBeenSet = true;
    m_restoreFromBackup = std::forward<RestoreFromBackupT>(value);
  }
  template <typename RestoreFromBackupT = RestoreFromBackupConfiguration>
  SourceConfiguration& WithRestoreFromBackup(RestoreFromBackupT&& value) {
    SetRestoreFromBackup(std::forward<RestoreFromBackupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for creating the Autonomous Database by restoring to a
   * point in time.</p>
   */
  inline const PointInTimeRestoreConfiguration& GetPointInTimeRestore() const { return m_pointInTimeRestore; }
  inline bool PointInTimeRestoreHasBeenSet() const { return m_pointInTimeRestoreHasBeenSet; }
  template <typename PointInTimeRestoreT = PointInTimeRestoreConfiguration>
  void SetPointInTimeRestore(PointInTimeRestoreT&& value) {
    m_pointInTimeRestoreHasBeenSet = true;
    m_pointInTimeRestore = std::forward<PointInTimeRestoreT>(value);
  }
  template <typename PointInTimeRestoreT = PointInTimeRestoreConfiguration>
  SourceConfiguration& WithPointInTimeRestore(PointInTimeRestoreT&& value) {
    SetPointInTimeRestore(std::forward<PointInTimeRestoreT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for creating the Autonomous Database as a cross-Region
   * Oracle Data Guard peer.</p>
   */
  inline const CrossRegionDataGuardConfiguration& GetCrossRegionDataGuard() const { return m_crossRegionDataGuard; }
  inline bool CrossRegionDataGuardHasBeenSet() const { return m_crossRegionDataGuardHasBeenSet; }
  template <typename CrossRegionDataGuardT = CrossRegionDataGuardConfiguration>
  void SetCrossRegionDataGuard(CrossRegionDataGuardT&& value) {
    m_crossRegionDataGuardHasBeenSet = true;
    m_crossRegionDataGuard = std::forward<CrossRegionDataGuardT>(value);
  }
  template <typename CrossRegionDataGuardT = CrossRegionDataGuardConfiguration>
  SourceConfiguration& WithCrossRegionDataGuard(CrossRegionDataGuardT&& value) {
    SetCrossRegionDataGuard(std::forward<CrossRegionDataGuardT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for creating the Autonomous Database as a cross-Region
   * disaster recovery peer.</p>
   */
  inline const CrossRegionDisasterRecoveryConfiguration& GetCrossRegionDisasterRecovery() const { return m_crossRegionDisasterRecovery; }
  inline bool CrossRegionDisasterRecoveryHasBeenSet() const { return m_crossRegionDisasterRecoveryHasBeenSet; }
  template <typename CrossRegionDisasterRecoveryT = CrossRegionDisasterRecoveryConfiguration>
  void SetCrossRegionDisasterRecovery(CrossRegionDisasterRecoveryT&& value) {
    m_crossRegionDisasterRecoveryHasBeenSet = true;
    m_crossRegionDisasterRecovery = std::forward<CrossRegionDisasterRecoveryT>(value);
  }
  template <typename CrossRegionDisasterRecoveryT = CrossRegionDisasterRecoveryConfiguration>
  SourceConfiguration& WithCrossRegionDisasterRecovery(CrossRegionDisasterRecoveryT&& value) {
    SetCrossRegionDisasterRecovery(std::forward<CrossRegionDisasterRecoveryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for creating the Autonomous Database as a refreshable
   * clone.</p>
   */
  inline const CloneToRefreshableConfiguration& GetCloneToRefreshable() const { return m_cloneToRefreshable; }
  inline bool CloneToRefreshableHasBeenSet() const { return m_cloneToRefreshableHasBeenSet; }
  template <typename CloneToRefreshableT = CloneToRefreshableConfiguration>
  void SetCloneToRefreshable(CloneToRefreshableT&& value) {
    m_cloneToRefreshableHasBeenSet = true;
    m_cloneToRefreshable = std::forward<CloneToRefreshableT>(value);
  }
  template <typename CloneToRefreshableT = CloneToRefreshableConfiguration>
  SourceConfiguration& WithCloneToRefreshable(CloneToRefreshableT&& value) {
    SetCloneToRefreshable(std::forward<CloneToRefreshableT>(value));
    return *this;
  }
  ///@}
 private:
  DatabaseCloneConfiguration m_databaseClone;

  RestoreFromBackupConfiguration m_restoreFromBackup;

  PointInTimeRestoreConfiguration m_pointInTimeRestore;

  CrossRegionDataGuardConfiguration m_crossRegionDataGuard;

  CrossRegionDisasterRecoveryConfiguration m_crossRegionDisasterRecovery;

  CloneToRefreshableConfiguration m_cloneToRefreshable;
  bool m_databaseCloneHasBeenSet = false;
  bool m_restoreFromBackupHasBeenSet = false;
  bool m_pointInTimeRestoreHasBeenSet = false;
  bool m_crossRegionDataGuardHasBeenSet = false;
  bool m_crossRegionDisasterRecoveryHasBeenSet = false;
  bool m_cloneToRefreshableHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
