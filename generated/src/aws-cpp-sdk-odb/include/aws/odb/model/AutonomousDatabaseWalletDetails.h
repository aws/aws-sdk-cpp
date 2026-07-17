/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/AutonomousDatabaseWalletStatus.h>
#include <aws/odb/model/WalletPasswordSourceSummary.h>

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
 * <p>The wallet details for an Autonomous Database.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/AutonomousDatabaseWalletDetails">AWS
 * API Reference</a></p>
 */
class AutonomousDatabaseWalletDetails {
 public:
  AWS_ODB_API AutonomousDatabaseWalletDetails() = default;
  AWS_ODB_API AutonomousDatabaseWalletDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API AutonomousDatabaseWalletDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current status of the Autonomous Database wallet.</p>
   */
  inline AutonomousDatabaseWalletStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AutonomousDatabaseWalletStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AutonomousDatabaseWalletDetails& WithStatus(AutonomousDatabaseWalletStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the Autonomous Database wallet was last rotated.</p>
   */
  inline const Aws::Utils::DateTime& GetTimeRotated() const { return m_timeRotated; }
  inline bool TimeRotatedHasBeenSet() const { return m_timeRotatedHasBeenSet; }
  template <typename TimeRotatedT = Aws::Utils::DateTime>
  void SetTimeRotated(TimeRotatedT&& value) {
    m_timeRotatedHasBeenSet = true;
    m_timeRotated = std::forward<TimeRotatedT>(value);
  }
  template <typename TimeRotatedT = Aws::Utils::DateTime>
  AutonomousDatabaseWalletDetails& WithTimeRotated(TimeRotatedT&& value) {
    SetTimeRotated(std::forward<TimeRotatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The summary of the password source configuration for the Autonomous Database
   * wallet.</p>
   */
  inline const WalletPasswordSourceSummary& GetPasswordSourceSummary() const { return m_passwordSourceSummary; }
  inline bool PasswordSourceSummaryHasBeenSet() const { return m_passwordSourceSummaryHasBeenSet; }
  template <typename PasswordSourceSummaryT = WalletPasswordSourceSummary>
  void SetPasswordSourceSummary(PasswordSourceSummaryT&& value) {
    m_passwordSourceSummaryHasBeenSet = true;
    m_passwordSourceSummary = std::forward<PasswordSourceSummaryT>(value);
  }
  template <typename PasswordSourceSummaryT = WalletPasswordSourceSummary>
  AutonomousDatabaseWalletDetails& WithPasswordSourceSummary(PasswordSourceSummaryT&& value) {
    SetPasswordSourceSummary(std::forward<PasswordSourceSummaryT>(value));
    return *this;
  }
  ///@}
 private:
  AutonomousDatabaseWalletStatus m_status{AutonomousDatabaseWalletStatus::NOT_SET};

  Aws::Utils::DateTime m_timeRotated{};

  WalletPasswordSourceSummary m_passwordSourceSummary;
  bool m_statusHasBeenSet = false;
  bool m_timeRotatedHasBeenSet = false;
  bool m_passwordSourceSummaryHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
