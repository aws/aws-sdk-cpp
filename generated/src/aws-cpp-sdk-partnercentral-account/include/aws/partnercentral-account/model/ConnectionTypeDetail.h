/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/ConnectionTypeStatus.h>
#include <aws/partnercentral-account/model/Participant.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralAccount {
namespace Model {

/**
 * <p>Detailed information about a specific connection type within a
 * connection.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/ConnectionTypeDetail">AWS
 * API Reference</a></p>
 */
class ConnectionTypeDetail {
 public:
  AWS_PARTNERCENTRALACCOUNT_API ConnectionTypeDetail() = default;
  AWS_PARTNERCENTRALACCOUNT_API ConnectionTypeDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API ConnectionTypeDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timestamp when this connection type was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ConnectionTypeDetail& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The email address of the person who initiated this connection type.</p>
   */
  inline const Aws::String& GetInviterEmail() const { return m_inviterEmail; }
  inline bool InviterEmailHasBeenSet() const { return m_inviterEmailHasBeenSet; }
  template <typename InviterEmailT = Aws::String>
  void SetInviterEmail(InviterEmailT&& value) {
    m_inviterEmailHasBeenSet = true;
    m_inviterEmail = std::forward<InviterEmailT>(value);
  }
  template <typename InviterEmailT = Aws::String>
  ConnectionTypeDetail& WithInviterEmail(InviterEmailT&& value) {
    SetInviterEmail(std::forward<InviterEmailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the person who initiated this connection type.</p>
   */
  inline const Aws::String& GetInviterName() const { return m_inviterName; }
  inline bool InviterNameHasBeenSet() const { return m_inviterNameHasBeenSet; }
  template <typename InviterNameT = Aws::String>
  void SetInviterName(InviterNameT&& value) {
    m_inviterNameHasBeenSet = true;
    m_inviterName = std::forward<InviterNameT>(value);
  }
  template <typename InviterNameT = Aws::String>
  ConnectionTypeDetail& WithInviterName(InviterNameT&& value) {
    SetInviterName(std::forward<InviterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of this connection type.</p>
   */
  inline ConnectionTypeStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ConnectionTypeStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ConnectionTypeDetail& WithStatus(ConnectionTypeStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when this connection type was cancelled, if applicable.</p>
   */
  inline const Aws::Utils::DateTime& GetCanceledAt() const { return m_canceledAt; }
  inline bool CanceledAtHasBeenSet() const { return m_canceledAtHasBeenSet; }
  template <typename CanceledAtT = Aws::Utils::DateTime>
  void SetCanceledAt(CanceledAtT&& value) {
    m_canceledAtHasBeenSet = true;
    m_canceledAt = std::forward<CanceledAtT>(value);
  }
  template <typename CanceledAtT = Aws::Utils::DateTime>
  ConnectionTypeDetail& WithCanceledAt(CanceledAtT&& value) {
    SetCanceledAt(std::forward<CanceledAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID of the participant who cancelled this connection type.</p>
   */
  inline const Aws::String& GetCanceledBy() const { return m_canceledBy; }
  inline bool CanceledByHasBeenSet() const { return m_canceledByHasBeenSet; }
  template <typename CanceledByT = Aws::String>
  void SetCanceledBy(CanceledByT&& value) {
    m_canceledByHasBeenSet = true;
    m_canceledBy = std::forward<CanceledByT>(value);
  }
  template <typename CanceledByT = Aws::String>
  ConnectionTypeDetail& WithCanceledBy(CanceledByT&& value) {
    SetCanceledBy(std::forward<CanceledByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the other participant in this connection type.</p>
   */
  inline const Participant& GetOtherParticipant() const { return m_otherParticipant; }
  inline bool OtherParticipantHasBeenSet() const { return m_otherParticipantHasBeenSet; }
  template <typename OtherParticipantT = Participant>
  void SetOtherParticipant(OtherParticipantT&& value) {
    m_otherParticipantHasBeenSet = true;
    m_otherParticipant = std::forward<OtherParticipantT>(value);
  }
  template <typename OtherParticipantT = Participant>
  ConnectionTypeDetail& WithOtherParticipant(OtherParticipantT&& value) {
    SetOtherParticipant(std::forward<OtherParticipantT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::String m_inviterEmail;
  bool m_inviterEmailHasBeenSet = false;

  Aws::String m_inviterName;
  bool m_inviterNameHasBeenSet = false;

  ConnectionTypeStatus m_status{ConnectionTypeStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::Utils::DateTime m_canceledAt{};
  bool m_canceledAtHasBeenSet = false;

  Aws::String m_canceledBy;
  bool m_canceledByHasBeenSet = false;

  Participant m_otherParticipant;
  bool m_otherParticipantHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
