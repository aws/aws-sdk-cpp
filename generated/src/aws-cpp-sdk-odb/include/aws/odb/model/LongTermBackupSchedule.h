/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/RepeatCadence.h>

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
 * <p>The long-term backup schedule for an Autonomous Database.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/LongTermBackupSchedule">AWS
 * API Reference</a></p>
 */
class LongTermBackupSchedule {
 public:
  AWS_ODB_API LongTermBackupSchedule() = default;
  AWS_ODB_API LongTermBackupSchedule(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API LongTermBackupSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Indicates whether the long-term backup schedule is disabled.</p>
   */
  inline bool GetIsDisabled() const { return m_isDisabled; }
  inline bool IsDisabledHasBeenSet() const { return m_isDisabledHasBeenSet; }
  inline void SetIsDisabled(bool value) {
    m_isDisabledHasBeenSet = true;
    m_isDisabled = value;
  }
  inline LongTermBackupSchedule& WithIsDisabled(bool value) {
    SetIsDisabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cadence at which long-term backups are taken.</p>
   */
  inline RepeatCadence GetRepeatCadence() const { return m_repeatCadence; }
  inline bool RepeatCadenceHasBeenSet() const { return m_repeatCadenceHasBeenSet; }
  inline void SetRepeatCadence(RepeatCadence value) {
    m_repeatCadenceHasBeenSet = true;
    m_repeatCadence = value;
  }
  inline LongTermBackupSchedule& WithRepeatCadence(RepeatCadence value) {
    SetRepeatCadence(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The retention period, in days, for long-term backups.</p>
   */
  inline int GetRetentionPeriodInDays() const { return m_retentionPeriodInDays; }
  inline bool RetentionPeriodInDaysHasBeenSet() const { return m_retentionPeriodInDaysHasBeenSet; }
  inline void SetRetentionPeriodInDays(int value) {
    m_retentionPeriodInDaysHasBeenSet = true;
    m_retentionPeriodInDays = value;
  }
  inline LongTermBackupSchedule& WithRetentionPeriodInDays(int value) {
    SetRetentionPeriodInDays(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time at which the long-term backup is taken.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeOfBackup() const { return m_timeOfBackup; }
  inline bool TimeOfBackupHasBeenSet() const { return m_timeOfBackupHasBeenSet; }
  template <typename TimeOfBackupT = Aws::Utils::DateTime>
  void SetTimeOfBackup(TimeOfBackupT&& value) {
    m_timeOfBackupHasBeenSet = true;
    m_timeOfBackup = std::forward<TimeOfBackupT>(value);
  }
  template <typename TimeOfBackupT = Aws::Utils::DateTime>
  LongTermBackupSchedule& WithTimeOfBackup(TimeOfBackupT&& value) {
    SetTimeOfBackup(std::forward<TimeOfBackupT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_isDisabled{false};

  RepeatCadence m_repeatCadence{RepeatCadence::NOT_SET};

  int m_retentionPeriodInDays{0};

  Aws::Utils::DateTime m_timeOfBackup{};
  bool m_isDisabledHasBeenSet = false;
  bool m_repeatCadenceHasBeenSet = false;
  bool m_retentionPeriodInDaysHasBeenSet = false;
  bool m_timeOfBackupHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
