/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/timestream-influxdb/model/AutomatedDbBackupType.h>

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
 * <p>Contains the configuration and status for an automated backup
 * schedule.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/DbBackupConfigurationOutput">AWS
 * API Reference</a></p>
 */
class DbBackupConfigurationOutput {
 public:
  AWS_TIMESTREAMINFLUXDB_API DbBackupConfigurationOutput() = default;
  AWS_TIMESTREAMINFLUXDB_API DbBackupConfigurationOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_TIMESTREAMINFLUXDB_API DbBackupConfigurationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TIMESTREAMINFLUXDB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of automated backup schedule.</p>
   */
  inline AutomatedDbBackupType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(AutomatedDbBackupType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline DbBackupConfigurationOutput& WithType(AutomatedDbBackupType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of days automated backups are retained.</p>
   */
  inline int GetRetentionDays() const { return m_retentionDays; }
  inline bool RetentionDaysHasBeenSet() const { return m_retentionDaysHasBeenSet; }
  inline void SetRetentionDays(int value) {
    m_retentionDaysHasBeenSet = true;
    m_retentionDays = value;
  }
  inline DbBackupConfigurationOutput& WithRetentionDays(int value) {
    SetRetentionDays(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this backup configuration is enabled.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline DbBackupConfigurationOutput& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The custom cron schedule expression for the backup, if applicable.</p>
   */
  inline const Aws::String& GetCustomSchedule() const { return m_customSchedule; }
  inline bool CustomScheduleHasBeenSet() const { return m_customScheduleHasBeenSet; }
  template <typename CustomScheduleT = Aws::String>
  void SetCustomSchedule(CustomScheduleT&& value) {
    m_customScheduleHasBeenSet = true;
    m_customSchedule = std::forward<CustomScheduleT>(value);
  }
  template <typename CustomScheduleT = Aws::String>
  DbBackupConfigurationOutput& WithCustomSchedule(CustomScheduleT&& value) {
    SetCustomSchedule(std::forward<CustomScheduleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The next scheduled time for an automated backup to be taken.</p>
   */
  inline const Aws::Utils::DateTime& GetNextAutomatedBackupTime() const { return m_nextAutomatedBackupTime; }
  inline bool NextAutomatedBackupTimeHasBeenSet() const { return m_nextAutomatedBackupTimeHasBeenSet; }
  template <typename NextAutomatedBackupTimeT = Aws::Utils::DateTime>
  void SetNextAutomatedBackupTime(NextAutomatedBackupTimeT&& value) {
    m_nextAutomatedBackupTimeHasBeenSet = true;
    m_nextAutomatedBackupTime = std::forward<NextAutomatedBackupTimeT>(value);
  }
  template <typename NextAutomatedBackupTimeT = Aws::Utils::DateTime>
  DbBackupConfigurationOutput& WithNextAutomatedBackupTime(NextAutomatedBackupTimeT&& value) {
    SetNextAutomatedBackupTime(std::forward<NextAutomatedBackupTimeT>(value));
    return *this;
  }
  ///@}
 private:
  AutomatedDbBackupType m_type{AutomatedDbBackupType::NOT_SET};

  int m_retentionDays{0};

  bool m_enabled{false};

  Aws::String m_customSchedule;

  Aws::Utils::DateTime m_nextAutomatedBackupTime{};
  bool m_typeHasBeenSet = false;
  bool m_retentionDaysHasBeenSet = false;
  bool m_enabledHasBeenSet = false;
  bool m_customScheduleHasBeenSet = false;
  bool m_nextAutomatedBackupTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace TimestreamInfluxDB
}  // namespace Aws
