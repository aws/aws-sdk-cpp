/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/AutonomousDatabaseBackupStatus.h>
#include <aws/odb/model/AutonomousDatabaseBackupType.h>

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
 * <p>A summary of an Autonomous Database backup.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/AutonomousDatabaseBackupSummary">AWS
 * API Reference</a></p>
 */
class AutonomousDatabaseBackupSummary {
 public:
  AWS_ODB_API AutonomousDatabaseBackupSummary() = default;
  AWS_ODB_API AutonomousDatabaseBackupSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API AutonomousDatabaseBackupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the Autonomous Database backup.</p>
   */
  inline const Aws::String& GetAutonomousDatabaseBackupId() const { return m_autonomousDatabaseBackupId; }
  inline bool AutonomousDatabaseBackupIdHasBeenSet() const { return m_autonomousDatabaseBackupIdHasBeenSet; }
  template <typename AutonomousDatabaseBackupIdT = Aws::String>
  void SetAutonomousDatabaseBackupId(AutonomousDatabaseBackupIdT&& value) {
    m_autonomousDatabaseBackupIdHasBeenSet = true;
    m_autonomousDatabaseBackupId = std::forward<AutonomousDatabaseBackupIdT>(value);
  }
  template <typename AutonomousDatabaseBackupIdT = Aws::String>
  AutonomousDatabaseBackupSummary& WithAutonomousDatabaseBackupId(AutonomousDatabaseBackupIdT&& value) {
    SetAutonomousDatabaseBackupId(std::forward<AutonomousDatabaseBackupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Autonomous Database backup.</p>
   */
  inline const Aws::String& GetAutonomousDatabaseBackupArn() const { return m_autonomousDatabaseBackupArn; }
  inline bool AutonomousDatabaseBackupArnHasBeenSet() const { return m_autonomousDatabaseBackupArnHasBeenSet; }
  template <typename AutonomousDatabaseBackupArnT = Aws::String>
  void SetAutonomousDatabaseBackupArn(AutonomousDatabaseBackupArnT&& value) {
    m_autonomousDatabaseBackupArnHasBeenSet = true;
    m_autonomousDatabaseBackupArn = std::forward<AutonomousDatabaseBackupArnT>(value);
  }
  template <typename AutonomousDatabaseBackupArnT = Aws::String>
  AutonomousDatabaseBackupSummary& WithAutonomousDatabaseBackupArn(AutonomousDatabaseBackupArnT&& value) {
    SetAutonomousDatabaseBackupArn(std::forward<AutonomousDatabaseBackupArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the Autonomous Database that the backup was created
   * from.</p>
   */
  inline const Aws::String& GetAutonomousDatabaseId() const { return m_autonomousDatabaseId; }
  inline bool AutonomousDatabaseIdHasBeenSet() const { return m_autonomousDatabaseIdHasBeenSet; }
  template <typename AutonomousDatabaseIdT = Aws::String>
  void SetAutonomousDatabaseId(AutonomousDatabaseIdT&& value) {
    m_autonomousDatabaseIdHasBeenSet = true;
    m_autonomousDatabaseId = std::forward<AutonomousDatabaseIdT>(value);
  }
  template <typename AutonomousDatabaseIdT = Aws::String>
  AutonomousDatabaseBackupSummary& WithAutonomousDatabaseId(AutonomousDatabaseIdT&& value) {
    SetAutonomousDatabaseId(std::forward<AutonomousDatabaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Oracle Cloud Identifier (OCID) of the Autonomous Database backup.</p>
   */
  inline const Aws::String& GetOcid() const { return m_ocid; }
  inline bool OcidHasBeenSet() const { return m_ocidHasBeenSet; }
  template <typename OcidT = Aws::String>
  void SetOcid(OcidT&& value) {
    m_ocidHasBeenSet = true;
    m_ocid = std::forward<OcidT>(value);
  }
  template <typename OcidT = Aws::String>
  AutonomousDatabaseBackupSummary& WithOcid(OcidT&& value) {
    SetOcid(std::forward<OcidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user-friendly name of the Autonomous Database backup.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  AutonomousDatabaseBackupSummary& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Oracle Database software version of the Autonomous Database backup.</p>
   */
  inline const Aws::String& GetDbVersion() const { return m_dbVersion; }
  inline bool DbVersionHasBeenSet() const { return m_dbVersionHasBeenSet; }
  template <typename DbVersionT = Aws::String>
  void SetDbVersion(DbVersionT&& value) {
    m_dbVersionHasBeenSet = true;
    m_dbVersion = std::forward<DbVersionT>(value);
  }
  template <typename DbVersionT = Aws::String>
  AutonomousDatabaseBackupSummary& WithDbVersion(DbVersionT&& value) {
    SetDbVersion(std::forward<DbVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the Autonomous Database backup.</p>
   */
  inline AutonomousDatabaseBackupStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AutonomousDatabaseBackupStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AutonomousDatabaseBackupSummary& WithStatus(AutonomousDatabaseBackupStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the current status of the Autonomous Database
   * backup, if applicable.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  AutonomousDatabaseBackupSummary& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the backup was created automatically.</p>
   */
  inline bool GetIsAutomatic() const { return m_isAutomatic; }
  inline bool IsAutomaticHasBeenSet() const { return m_isAutomaticHasBeenSet; }
  inline void SetIsAutomatic(bool value) {
    m_isAutomaticHasBeenSet = true;
    m_isAutomatic = value;
  }
  inline AutonomousDatabaseBackupSummary& WithIsAutomatic(bool value) {
    SetIsAutomatic(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The retention period, in days, for the Autonomous Database backup.</p>
   */
  inline int GetRetentionPeriodInDays() const { return m_retentionPeriodInDays; }
  inline bool RetentionPeriodInDaysHasBeenSet() const { return m_retentionPeriodInDaysHasBeenSet; }
  inline void SetRetentionPeriodInDays(int value) {
    m_retentionPeriodInDaysHasBeenSet = true;
    m_retentionPeriodInDays = value;
  }
  inline AutonomousDatabaseBackupSummary& WithRetentionPeriodInDays(int value) {
    SetRetentionPeriodInDays(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size of the Autonomous Database backup, in terabytes (TB).</p>
   */
  inline double GetSizeInTBs() const { return m_sizeInTBs; }
  inline bool SizeInTBsHasBeenSet() const { return m_sizeInTBsHasBeenSet; }
  inline void SetSizeInTBs(double value) {
    m_sizeInTBsHasBeenSet = true;
    m_sizeInTBs = value;
  }
  inline AutonomousDatabaseBackupSummary& WithSizeInTBs(double value) {
    SetSizeInTBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time until which the Autonomous Database backup is available for
   * restore.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeAvailableTill() const { return m_timeAvailableTill; }
  inline bool TimeAvailableTillHasBeenSet() const { return m_timeAvailableTillHasBeenSet; }
  template <typename TimeAvailableTillT = Aws::Utils::DateTime>
  void SetTimeAvailableTill(TimeAvailableTillT&& value) {
    m_timeAvailableTillHasBeenSet = true;
    m_timeAvailableTill = std::forward<TimeAvailableTillT>(value);
  }
  template <typename TimeAvailableTillT = Aws::Utils::DateTime>
  AutonomousDatabaseBackupSummary& WithTimeAvailableTill(TimeAvailableTillT&& value) {
    SetTimeAvailableTill(std::forward<TimeAvailableTillT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the Autonomous Database backup started.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeStarted() const { return m_timeStarted; }
  inline bool TimeStartedHasBeenSet() const { return m_timeStartedHasBeenSet; }
  template <typename TimeStartedT = Aws::Utils::DateTime>
  void SetTimeStarted(TimeStartedT&& value) {
    m_timeStartedHasBeenSet = true;
    m_timeStarted = std::forward<TimeStartedT>(value);
  }
  template <typename TimeStartedT = Aws::Utils::DateTime>
  AutonomousDatabaseBackupSummary& WithTimeStarted(TimeStartedT&& value) {
    SetTimeStarted(std::forward<TimeStartedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the Autonomous Database backup ended.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeEnded() const { return m_timeEnded; }
  inline bool TimeEndedHasBeenSet() const { return m_timeEndedHasBeenSet; }
  template <typename TimeEndedT = Aws::Utils::DateTime>
  void SetTimeEnded(TimeEndedT&& value) {
    m_timeEndedHasBeenSet = true;
    m_timeEnded = std::forward<TimeEndedT>(value);
  }
  template <typename TimeEndedT = Aws::Utils::DateTime>
  AutonomousDatabaseBackupSummary& WithTimeEnded(TimeEndedT&& value) {
    SetTimeEnded(std::forward<TimeEndedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the Autonomous Database backup.</p>
   */
  inline AutonomousDatabaseBackupType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(AutonomousDatabaseBackupType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline AutonomousDatabaseBackupSummary& WithType(AutonomousDatabaseBackupType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_autonomousDatabaseBackupId;

  Aws::String m_autonomousDatabaseBackupArn;

  Aws::String m_autonomousDatabaseId;

  Aws::String m_ocid;

  Aws::String m_displayName;

  Aws::String m_dbVersion;

  AutonomousDatabaseBackupStatus m_status{AutonomousDatabaseBackupStatus::NOT_SET};

  Aws::String m_statusReason;

  bool m_isAutomatic{false};

  int m_retentionPeriodInDays{0};

  double m_sizeInTBs{0.0};

  Aws::Utils::DateTime m_timeAvailableTill{};

  Aws::Utils::DateTime m_timeStarted{};

  Aws::Utils::DateTime m_timeEnded{};

  AutonomousDatabaseBackupType m_type{AutonomousDatabaseBackupType::NOT_SET};
  bool m_autonomousDatabaseBackupIdHasBeenSet = false;
  bool m_autonomousDatabaseBackupArnHasBeenSet = false;
  bool m_autonomousDatabaseIdHasBeenSet = false;
  bool m_ocidHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_dbVersionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_isAutomaticHasBeenSet = false;
  bool m_retentionPeriodInDaysHasBeenSet = false;
  bool m_sizeInTBsHasBeenSet = false;
  bool m_timeAvailableTillHasBeenSet = false;
  bool m_timeStartedHasBeenSet = false;
  bool m_timeEndedHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
