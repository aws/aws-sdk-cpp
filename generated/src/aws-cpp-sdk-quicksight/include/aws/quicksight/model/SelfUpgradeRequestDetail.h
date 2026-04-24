/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SelfUpgradeRequestStatus.h>
#include <aws/quicksight/model/UserRole.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>Details of a self-upgrade request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SelfUpgradeRequestDetail">AWS
 * API Reference</a></p>
 */
class SelfUpgradeRequestDetail {
 public:
  AWS_QUICKSIGHT_API SelfUpgradeRequestDetail() = default;
  AWS_QUICKSIGHT_API SelfUpgradeRequestDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API SelfUpgradeRequestDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the self-upgrade request.</p>
   */
  inline const Aws::String& GetUpgradeRequestId() const { return m_upgradeRequestId; }
  inline bool UpgradeRequestIdHasBeenSet() const { return m_upgradeRequestIdHasBeenSet; }
  template <typename UpgradeRequestIdT = Aws::String>
  void SetUpgradeRequestId(UpgradeRequestIdT&& value) {
    m_upgradeRequestIdHasBeenSet = true;
    m_upgradeRequestId = std::forward<UpgradeRequestIdT>(value);
  }
  template <typename UpgradeRequestIdT = Aws::String>
  SelfUpgradeRequestDetail& WithUpgradeRequestId(UpgradeRequestIdT&& value) {
    SetUpgradeRequestId(std::forward<UpgradeRequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The username of the user who initiated the self-upgrade request.</p>
   */
  inline const Aws::String& GetUserName() const { return m_userName; }
  inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
  template <typename UserNameT = Aws::String>
  void SetUserName(UserNameT&& value) {
    m_userNameHasBeenSet = true;
    m_userName = std::forward<UserNameT>(value);
  }
  template <typename UserNameT = Aws::String>
  SelfUpgradeRequestDetail& WithUserName(UserNameT&& value) {
    SetUserName(std::forward<UserNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The original role of the user before the upgrade.</p>
   */
  inline UserRole GetOriginalRole() const { return m_originalRole; }
  inline bool OriginalRoleHasBeenSet() const { return m_originalRoleHasBeenSet; }
  inline void SetOriginalRole(UserRole value) {
    m_originalRoleHasBeenSet = true;
    m_originalRole = value;
  }
  inline SelfUpgradeRequestDetail& WithOriginalRole(UserRole value) {
    SetOriginalRole(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The role that the user is requesting to upgrade to.</p>
   */
  inline UserRole GetRequestedRole() const { return m_requestedRole; }
  inline bool RequestedRoleHasBeenSet() const { return m_requestedRoleHasBeenSet; }
  inline void SetRequestedRole(UserRole value) {
    m_requestedRoleHasBeenSet = true;
    m_requestedRole = value;
  }
  inline SelfUpgradeRequestDetail& WithRequestedRole(UserRole value) {
    SetRequestedRole(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional note explaining the reason for the self-upgrade request.</p>
   */
  inline const Aws::String& GetRequestNote() const { return m_requestNote; }
  inline bool RequestNoteHasBeenSet() const { return m_requestNoteHasBeenSet; }
  template <typename RequestNoteT = Aws::String>
  void SetRequestNote(RequestNoteT&& value) {
    m_requestNoteHasBeenSet = true;
    m_requestNote = std::forward<RequestNoteT>(value);
  }
  template <typename RequestNoteT = Aws::String>
  SelfUpgradeRequestDetail& WithRequestNote(RequestNoteT&& value) {
    SetRequestNote(std::forward<RequestNoteT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the self-upgrade request was created.</p>
   */
  inline long long GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  inline void SetCreationTime(long long value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = value;
  }
  inline SelfUpgradeRequestDetail& WithCreationTime(long long value) {
    SetCreationTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the self-upgrade request.</p>
   */
  inline SelfUpgradeRequestStatus GetRequestStatus() const { return m_requestStatus; }
  inline bool RequestStatusHasBeenSet() const { return m_requestStatusHasBeenSet; }
  inline void SetRequestStatus(SelfUpgradeRequestStatus value) {
    m_requestStatusHasBeenSet = true;
    m_requestStatus = value;
  }
  inline SelfUpgradeRequestDetail& WithRequestStatus(SelfUpgradeRequestStatus value) {
    SetRequestStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time of the last update attempt for the self-upgrade request.</p>
   */
  inline long long GetLastUpdateAttemptTime() const { return m_lastUpdateAttemptTime; }
  inline bool LastUpdateAttemptTimeHasBeenSet() const { return m_lastUpdateAttemptTimeHasBeenSet; }
  inline void SetLastUpdateAttemptTime(long long value) {
    m_lastUpdateAttemptTimeHasBeenSet = true;
    m_lastUpdateAttemptTime = value;
  }
  inline SelfUpgradeRequestDetail& WithLastUpdateAttemptTime(long long value) {
    SetLastUpdateAttemptTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the last update failure, if applicable.</p>
   */
  inline const Aws::String& GetLastUpdateFailureReason() const { return m_lastUpdateFailureReason; }
  inline bool LastUpdateFailureReasonHasBeenSet() const { return m_lastUpdateFailureReasonHasBeenSet; }
  template <typename LastUpdateFailureReasonT = Aws::String>
  void SetLastUpdateFailureReason(LastUpdateFailureReasonT&& value) {
    m_lastUpdateFailureReasonHasBeenSet = true;
    m_lastUpdateFailureReason = std::forward<LastUpdateFailureReasonT>(value);
  }
  template <typename LastUpdateFailureReasonT = Aws::String>
  SelfUpgradeRequestDetail& WithLastUpdateFailureReason(LastUpdateFailureReasonT&& value) {
    SetLastUpdateFailureReason(std::forward<LastUpdateFailureReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_upgradeRequestId;

  Aws::String m_userName;

  UserRole m_originalRole{UserRole::NOT_SET};

  UserRole m_requestedRole{UserRole::NOT_SET};

  Aws::String m_requestNote;

  long long m_creationTime{0};

  SelfUpgradeRequestStatus m_requestStatus{SelfUpgradeRequestStatus::NOT_SET};

  long long m_lastUpdateAttemptTime{0};

  Aws::String m_lastUpdateFailureReason;
  bool m_upgradeRequestIdHasBeenSet = false;
  bool m_userNameHasBeenSet = false;
  bool m_originalRoleHasBeenSet = false;
  bool m_requestedRoleHasBeenSet = false;
  bool m_requestNoteHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_requestStatusHasBeenSet = false;
  bool m_lastUpdateAttemptTimeHasBeenSet = false;
  bool m_lastUpdateFailureReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
