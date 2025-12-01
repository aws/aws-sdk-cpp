/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/ConnectionType.h>
#include <aws/partnercentral-account/model/InvitationStatus.h>
#include <aws/partnercentral-account/model/ParticipantType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralAccount {
namespace Model {
class GetConnectionInvitationResult {
 public:
  AWS_PARTNERCENTRALACCOUNT_API GetConnectionInvitationResult() = default;
  AWS_PARTNERCENTRALACCOUNT_API GetConnectionInvitationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALACCOUNT_API GetConnectionInvitationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The catalog identifier where the connection invitation exists.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  GetConnectionInvitationResult& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the connection invitation.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  GetConnectionInvitationResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the connection invitation.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetConnectionInvitationResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the connection associated with this invitation.</p>
   */
  inline const Aws::String& GetConnectionId() const { return m_connectionId; }
  template <typename ConnectionIdT = Aws::String>
  void SetConnectionId(ConnectionIdT&& value) {
    m_connectionIdHasBeenSet = true;
    m_connectionId = std::forward<ConnectionIdT>(value);
  }
  template <typename ConnectionIdT = Aws::String>
  GetConnectionInvitationResult& WithConnectionId(ConnectionIdT&& value) {
    SetConnectionId(std::forward<ConnectionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of connection being requested in the invitation.</p>
   */
  inline ConnectionType GetConnectionType() const { return m_connectionType; }
  inline void SetConnectionType(ConnectionType value) {
    m_connectionTypeHasBeenSet = true;
    m_connectionType = value;
  }
  inline GetConnectionInvitationResult& WithConnectionType(ConnectionType value) {
    SetConnectionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the connection invitation was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetConnectionInvitationResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the connection invitation was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetConnectionInvitationResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the connection invitation will expire.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  GetConnectionInvitationResult& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the other participant in the connection invitation.</p>
   */
  inline const Aws::String& GetOtherParticipantIdentifier() const { return m_otherParticipantIdentifier; }
  template <typename OtherParticipantIdentifierT = Aws::String>
  void SetOtherParticipantIdentifier(OtherParticipantIdentifierT&& value) {
    m_otherParticipantIdentifierHasBeenSet = true;
    m_otherParticipantIdentifier = std::forward<OtherParticipantIdentifierT>(value);
  }
  template <typename OtherParticipantIdentifierT = Aws::String>
  GetConnectionInvitationResult& WithOtherParticipantIdentifier(OtherParticipantIdentifierT&& value) {
    SetOtherParticipantIdentifier(std::forward<OtherParticipantIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of participant (inviter or invitee) in the connection
   * invitation.</p>
   */
  inline ParticipantType GetParticipantType() const { return m_participantType; }
  inline void SetParticipantType(ParticipantType value) {
    m_participantTypeHasBeenSet = true;
    m_participantType = value;
  }
  inline GetConnectionInvitationResult& WithParticipantType(ParticipantType value) {
    SetParticipantType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the connection invitation.</p>
   */
  inline InvitationStatus GetStatus() const { return m_status; }
  inline void SetStatus(InvitationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetConnectionInvitationResult& WithStatus(InvitationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The custom message included with the connection invitation.</p>
   */
  inline const Aws::String& GetInvitationMessage() const { return m_invitationMessage; }
  template <typename InvitationMessageT = Aws::String>
  void SetInvitationMessage(InvitationMessageT&& value) {
    m_invitationMessageHasBeenSet = true;
    m_invitationMessage = std::forward<InvitationMessageT>(value);
  }
  template <typename InvitationMessageT = Aws::String>
  GetConnectionInvitationResult& WithInvitationMessage(InvitationMessageT&& value) {
    SetInvitationMessage(std::forward<InvitationMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The email address of the person who sent the connection invitation.</p>
   */
  inline const Aws::String& GetInviterEmail() const { return m_inviterEmail; }
  template <typename InviterEmailT = Aws::String>
  void SetInviterEmail(InviterEmailT&& value) {
    m_inviterEmailHasBeenSet = true;
    m_inviterEmail = std::forward<InviterEmailT>(value);
  }
  template <typename InviterEmailT = Aws::String>
  GetConnectionInvitationResult& WithInviterEmail(InviterEmailT&& value) {
    SetInviterEmail(std::forward<InviterEmailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the person who sent the connection invitation.</p>
   */
  inline const Aws::String& GetInviterName() const { return m_inviterName; }
  template <typename InviterNameT = Aws::String>
  void SetInviterName(InviterNameT&& value) {
    m_inviterNameHasBeenSet = true;
    m_inviterName = std::forward<InviterNameT>(value);
  }
  template <typename InviterNameT = Aws::String>
  GetConnectionInvitationResult& WithInviterName(InviterNameT&& value) {
    SetInviterName(std::forward<InviterNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetConnectionInvitationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;
  bool m_catalogHasBeenSet = false;

  Aws::String m_id;
  bool m_idHasBeenSet = false;

  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  Aws::String m_connectionId;
  bool m_connectionIdHasBeenSet = false;

  ConnectionType m_connectionType{ConnectionType::NOT_SET};
  bool m_connectionTypeHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_updatedAtHasBeenSet = false;

  Aws::Utils::DateTime m_expiresAt{};
  bool m_expiresAtHasBeenSet = false;

  Aws::String m_otherParticipantIdentifier;
  bool m_otherParticipantIdentifierHasBeenSet = false;

  ParticipantType m_participantType{ParticipantType::NOT_SET};
  bool m_participantTypeHasBeenSet = false;

  InvitationStatus m_status{InvitationStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_invitationMessage;
  bool m_invitationMessageHasBeenSet = false;

  Aws::String m_inviterEmail;
  bool m_inviterEmailHasBeenSet = false;

  Aws::String m_inviterName;
  bool m_inviterNameHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
