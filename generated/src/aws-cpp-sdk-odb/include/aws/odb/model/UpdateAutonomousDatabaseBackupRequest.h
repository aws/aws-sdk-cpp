/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/OdbRequest.h>
#include <aws/odb/Odb_EXPORTS.h>

#include <utility>

namespace Aws {
namespace odb {
namespace Model {

/**
 */
class UpdateAutonomousDatabaseBackupRequest : public OdbRequest {
 public:
  AWS_ODB_API UpdateAutonomousDatabaseBackupRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAutonomousDatabaseBackup"; }

  AWS_ODB_API Aws::String SerializePayload() const override;

  AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the Autonomous Database backup to update.</p>
   */
  inline const Aws::String& GetAutonomousDatabaseBackupId() const { return m_autonomousDatabaseBackupId; }
  inline bool AutonomousDatabaseBackupIdHasBeenSet() const { return m_autonomousDatabaseBackupIdHasBeenSet; }
  template <typename AutonomousDatabaseBackupIdT = Aws::String>
  void SetAutonomousDatabaseBackupId(AutonomousDatabaseBackupIdT&& value) {
    m_autonomousDatabaseBackupIdHasBeenSet = true;
    m_autonomousDatabaseBackupId = std::forward<AutonomousDatabaseBackupIdT>(value);
  }
  template <typename AutonomousDatabaseBackupIdT = Aws::String>
  UpdateAutonomousDatabaseBackupRequest& WithAutonomousDatabaseBackupId(AutonomousDatabaseBackupIdT&& value) {
    SetAutonomousDatabaseBackupId(std::forward<AutonomousDatabaseBackupIdT>(value));
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
  inline UpdateAutonomousDatabaseBackupRequest& WithRetentionPeriodInDays(int value) {
    SetRetentionPeriodInDays(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_autonomousDatabaseBackupId;

  int m_retentionPeriodInDays{0};
  bool m_autonomousDatabaseBackupIdHasBeenSet = false;
  bool m_retentionPeriodInDaysHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
