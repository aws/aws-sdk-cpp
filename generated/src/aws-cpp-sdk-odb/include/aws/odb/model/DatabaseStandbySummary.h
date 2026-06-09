/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/AutonomousDatabaseResourceStatus.h>

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
 * <p>A summary of a standby Autonomous Database in an Oracle Data Guard
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DatabaseStandbySummary">AWS
 * API Reference</a></p>
 */
class DatabaseStandbySummary {
 public:
  AWS_ODB_API DatabaseStandbySummary() = default;
  AWS_ODB_API DatabaseStandbySummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API DatabaseStandbySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The availability domain of the standby Autonomous Database.</p>
   */
  inline const Aws::String& GetAvailabilityDomain() const { return m_availabilityDomain; }
  inline bool AvailabilityDomainHasBeenSet() const { return m_availabilityDomainHasBeenSet; }
  template <typename AvailabilityDomainT = Aws::String>
  void SetAvailabilityDomain(AvailabilityDomainT&& value) {
    m_availabilityDomainHasBeenSet = true;
    m_availabilityDomain = std::forward<AvailabilityDomainT>(value);
  }
  template <typename AvailabilityDomainT = Aws::String>
  DatabaseStandbySummary& WithAvailabilityDomain(AvailabilityDomainT&& value) {
    SetAvailabilityDomain(std::forward<AvailabilityDomainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time lag, in seconds, between the standby database and the primary
   * database.</p>
   */
  inline int GetLagTimeInSeconds() const { return m_lagTimeInSeconds; }
  inline bool LagTimeInSecondsHasBeenSet() const { return m_lagTimeInSecondsHasBeenSet; }
  inline void SetLagTimeInSeconds(int value) {
    m_lagTimeInSecondsHasBeenSet = true;
    m_lagTimeInSeconds = value;
  }
  inline DatabaseStandbySummary& WithLagTimeInSeconds(int value) {
    SetLagTimeInSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the standby Autonomous Database.</p>
   */
  inline AutonomousDatabaseResourceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AutonomousDatabaseResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DatabaseStandbySummary& WithStatus(AutonomousDatabaseResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the current status of the standby Autonomous
   * Database, if applicable.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  DatabaseStandbySummary& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The component on the standby Autonomous Database that the current maintenance
   * is being applied to.</p>
   */
  inline const Aws::String& GetMaintenanceTargetComponent() const { return m_maintenanceTargetComponent; }
  inline bool MaintenanceTargetComponentHasBeenSet() const { return m_maintenanceTargetComponentHasBeenSet; }
  template <typename MaintenanceTargetComponentT = Aws::String>
  void SetMaintenanceTargetComponent(MaintenanceTargetComponentT&& value) {
    m_maintenanceTargetComponentHasBeenSet = true;
    m_maintenanceTargetComponent = std::forward<MaintenanceTargetComponentT>(value);
  }
  template <typename MaintenanceTargetComponentT = Aws::String>
  DatabaseStandbySummary& WithMaintenanceTargetComponent(MaintenanceTargetComponentT&& value) {
    SetMaintenanceTargetComponent(std::forward<MaintenanceTargetComponentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the Oracle Data Guard role of the standby database
   * last changed.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeDataGuardRoleChanged() const { return m_timeDataGuardRoleChanged; }
  inline bool TimeDataGuardRoleChangedHasBeenSet() const { return m_timeDataGuardRoleChangedHasBeenSet; }
  template <typename TimeDataGuardRoleChangedT = Aws::Utils::DateTime>
  void SetTimeDataGuardRoleChanged(TimeDataGuardRoleChangedT&& value) {
    m_timeDataGuardRoleChangedHasBeenSet = true;
    m_timeDataGuardRoleChanged = std::forward<TimeDataGuardRoleChangedT>(value);
  }
  template <typename TimeDataGuardRoleChangedT = Aws::Utils::DateTime>
  DatabaseStandbySummary& WithTimeDataGuardRoleChanged(TimeDataGuardRoleChangedT&& value) {
    SetTimeDataGuardRoleChanged(std::forward<TimeDataGuardRoleChangedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the disaster recovery role of the standby database
   * last changed.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeDisasterRecoveryRoleChanged() const { return m_timeDisasterRecoveryRoleChanged; }
  inline bool TimeDisasterRecoveryRoleChangedHasBeenSet() const { return m_timeDisasterRecoveryRoleChangedHasBeenSet; }
  template <typename TimeDisasterRecoveryRoleChangedT = Aws::Utils::DateTime>
  void SetTimeDisasterRecoveryRoleChanged(TimeDisasterRecoveryRoleChangedT&& value) {
    m_timeDisasterRecoveryRoleChangedHasBeenSet = true;
    m_timeDisasterRecoveryRoleChanged = std::forward<TimeDisasterRecoveryRoleChangedT>(value);
  }
  template <typename TimeDisasterRecoveryRoleChangedT = Aws::Utils::DateTime>
  DatabaseStandbySummary& WithTimeDisasterRecoveryRoleChanged(TimeDisasterRecoveryRoleChangedT&& value) {
    SetTimeDisasterRecoveryRoleChanged(std::forward<TimeDisasterRecoveryRoleChangedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the next maintenance of the standby database
   * begins.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeMaintenanceBegin() const { return m_timeMaintenanceBegin; }
  inline bool TimeMaintenanceBeginHasBeenSet() const { return m_timeMaintenanceBeginHasBeenSet; }
  template <typename TimeMaintenanceBeginT = Aws::Utils::DateTime>
  void SetTimeMaintenanceBegin(TimeMaintenanceBeginT&& value) {
    m_timeMaintenanceBeginHasBeenSet = true;
    m_timeMaintenanceBegin = std::forward<TimeMaintenanceBeginT>(value);
  }
  template <typename TimeMaintenanceBeginT = Aws::Utils::DateTime>
  DatabaseStandbySummary& WithTimeMaintenanceBegin(TimeMaintenanceBeginT&& value) {
    SetTimeMaintenanceBegin(std::forward<TimeMaintenanceBeginT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the next maintenance of the standby database ends.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeMaintenanceEnd() const { return m_timeMaintenanceEnd; }
  inline bool TimeMaintenanceEndHasBeenSet() const { return m_timeMaintenanceEndHasBeenSet; }
  template <typename TimeMaintenanceEndT = Aws::Utils::DateTime>
  void SetTimeMaintenanceEnd(TimeMaintenanceEndT&& value) {
    m_timeMaintenanceEndHasBeenSet = true;
    m_timeMaintenanceEnd = std::forward<TimeMaintenanceEndT>(value);
  }
  template <typename TimeMaintenanceEndT = Aws::Utils::DateTime>
  DatabaseStandbySummary& WithTimeMaintenanceEnd(TimeMaintenanceEndT&& value) {
    SetTimeMaintenanceEnd(std::forward<TimeMaintenanceEndT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_availabilityDomain;

  int m_lagTimeInSeconds{0};

  AutonomousDatabaseResourceStatus m_status{AutonomousDatabaseResourceStatus::NOT_SET};

  Aws::String m_statusReason;

  Aws::String m_maintenanceTargetComponent;

  Aws::Utils::DateTime m_timeDataGuardRoleChanged{};

  Aws::Utils::DateTime m_timeDisasterRecoveryRoleChanged{};

  Aws::Utils::DateTime m_timeMaintenanceBegin{};

  Aws::Utils::DateTime m_timeMaintenanceEnd{};
  bool m_availabilityDomainHasBeenSet = false;
  bool m_lagTimeInSecondsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_maintenanceTargetComponentHasBeenSet = false;
  bool m_timeDataGuardRoleChangedHasBeenSet = false;
  bool m_timeDisasterRecoveryRoleChangedHasBeenSet = false;
  bool m_timeMaintenanceBeginHasBeenSet = false;
  bool m_timeMaintenanceEndHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
