/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/DisasterRecoveryType.h>

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
 * <p>The disaster recovery configuration for an Autonomous Database.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DisasterRecoveryConfiguration">AWS
 * API Reference</a></p>
 */
class DisasterRecoveryConfiguration {
 public:
  AWS_ODB_API DisasterRecoveryConfiguration() = default;
  AWS_ODB_API DisasterRecoveryConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API DisasterRecoveryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of disaster recovery configured for the Autonomous Database.</p>
   */
  inline DisasterRecoveryType GetDisasterRecoveryType() const { return m_disasterRecoveryType; }
  inline bool DisasterRecoveryTypeHasBeenSet() const { return m_disasterRecoveryTypeHasBeenSet; }
  inline void SetDisasterRecoveryType(DisasterRecoveryType value) {
    m_disasterRecoveryTypeHasBeenSet = true;
    m_disasterRecoveryType = value;
  }
  inline DisasterRecoveryConfiguration& WithDisasterRecoveryType(DisasterRecoveryType value) {
    SetDisasterRecoveryType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether automatic backups are replicated to the disaster recovery
   * database.</p>
   */
  inline bool GetIsReplicateAutomaticBackups() const { return m_isReplicateAutomaticBackups; }
  inline bool IsReplicateAutomaticBackupsHasBeenSet() const { return m_isReplicateAutomaticBackupsHasBeenSet; }
  inline void SetIsReplicateAutomaticBackups(bool value) {
    m_isReplicateAutomaticBackupsHasBeenSet = true;
    m_isReplicateAutomaticBackups = value;
  }
  inline DisasterRecoveryConfiguration& WithIsReplicateAutomaticBackups(bool value) {
    SetIsReplicateAutomaticBackups(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the standby database is a snapshot standby.</p>
   */
  inline bool GetIsSnapshotStandby() const { return m_isSnapshotStandby; }
  inline bool IsSnapshotStandbyHasBeenSet() const { return m_isSnapshotStandbyHasBeenSet; }
  inline void SetIsSnapshotStandby(bool value) {
    m_isSnapshotStandbyHasBeenSet = true;
    m_isSnapshotStandby = value;
  }
  inline DisasterRecoveryConfiguration& WithIsSnapshotStandby(bool value) {
    SetIsSnapshotStandby(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time until which the snapshot standby database remains
   * enabled.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeSnapshotStandbyEnabledTill() const { return m_timeSnapshotStandbyEnabledTill; }
  inline bool TimeSnapshotStandbyEnabledTillHasBeenSet() const { return m_timeSnapshotStandbyEnabledTillHasBeenSet; }
  template <typename TimeSnapshotStandbyEnabledTillT = Aws::Utils::DateTime>
  void SetTimeSnapshotStandbyEnabledTill(TimeSnapshotStandbyEnabledTillT&& value) {
    m_timeSnapshotStandbyEnabledTillHasBeenSet = true;
    m_timeSnapshotStandbyEnabledTill = std::forward<TimeSnapshotStandbyEnabledTillT>(value);
  }
  template <typename TimeSnapshotStandbyEnabledTillT = Aws::Utils::DateTime>
  DisasterRecoveryConfiguration& WithTimeSnapshotStandbyEnabledTill(TimeSnapshotStandbyEnabledTillT&& value) {
    SetTimeSnapshotStandbyEnabledTill(std::forward<TimeSnapshotStandbyEnabledTillT>(value));
    return *this;
  }
  ///@}
 private:
  DisasterRecoveryType m_disasterRecoveryType{DisasterRecoveryType::NOT_SET};

  bool m_isReplicateAutomaticBackups{false};

  bool m_isSnapshotStandby{false};

  Aws::Utils::DateTime m_timeSnapshotStandbyEnabledTill{};
  bool m_disasterRecoveryTypeHasBeenSet = false;
  bool m_isReplicateAutomaticBackupsHasBeenSet = false;
  bool m_isSnapshotStandbyHasBeenSet = false;
  bool m_timeSnapshotStandbyEnabledTillHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
