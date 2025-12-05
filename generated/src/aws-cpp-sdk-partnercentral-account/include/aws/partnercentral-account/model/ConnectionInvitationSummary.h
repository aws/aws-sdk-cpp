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
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralAccount {
namespace Model {

/**
 * <p>A summary view of a connection invitation containing key information without
 * full details.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/ConnectionInvitationSummary">AWS
 * API Reference</a></p>
 */
class ConnectionInvitationSummary {
 public:
  AWS_PARTNERCENTRALACCOUNT_API ConnectionInvitationSummary() = default;
  AWS_PARTNERCENTRALACCOUNT_API ConnectionInvitationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API ConnectionInvitationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The catalog identifier where the connection invitation exists.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  ConnectionInvitationSummary& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the connection invitation.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  ConnectionInvitationSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the connection invitation.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  ConnectionInvitationSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the connection associated with this invitation.</p>
   */
  inline const Aws::String& GetConnectionId() const { return m_connectionId; }
  inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
  template <typename ConnectionIdT = Aws::String>
  void SetConnectionId(ConnectionIdT&& value) {
    m_connectionIdHasBeenSet = true;
    m_connectionId = std::forward<ConnectionIdT>(value);
  }
  template <typename ConnectionIdT = Aws::String>
  ConnectionInvitationSummary& WithConnectionId(ConnectionIdT&& value) {
    SetConnectionId(std::forward<ConnectionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of connection being requested in the invitation.</p>
   */
  inline ConnectionType GetConnectionType() const { return m_connectionType; }
  inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
  inline void SetConnectionType(ConnectionType value) {
    m_connectionTypeHasBeenSet = true;
    m_connectionType = value;
  }
  inline ConnectionInvitationSummary& WithConnectionType(ConnectionType value) {
    SetConnectionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the connection invitation was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ConnectionInvitationSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the connection invitation was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ConnectionInvitationSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the connection invitation will expire.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  ConnectionInvitationSummary& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the other participant in the connection invitation.</p>
   */
  inline const Aws::String& GetOtherParticipantIdentifier() const { return m_otherParticipantIdentifier; }
  inline bool OtherParticipantIdentifierHasBeenSet() const { return m_otherParticipantIdentifierHasBeenSet; }
  template <typename OtherParticipantIdentifierT = Aws::String>
  void SetOtherParticipantIdentifier(OtherParticipantIdentifierT&& value) {
    m_otherParticipantIdentifierHasBeenSet = true;
    m_otherParticipantIdentifier = std::forward<OtherParticipantIdentifierT>(value);
  }
  template <typename OtherParticipantIdentifierT = Aws::String>
  ConnectionInvitationSummary& WithOtherParticipantIdentifier(OtherParticipantIdentifierT&& value) {
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
  inline bool ParticipantTypeHasBeenSet() const { return m_participantTypeHasBeenSet; }
  inline void SetParticipantType(ParticipantType value) {
    m_participantTypeHasBeenSet = true;
    m_participantType = value;
  }
  inline ConnectionInvitationSummary& WithParticipantType(ParticipantType value) {
    SetParticipantType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the connection invitation.</p>
   */
  inline InvitationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(InvitationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ConnectionInvitationSummary& WithStatus(InvitationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::String m_id;

  Aws::String m_arn;

  Aws::String m_connectionId;

  ConnectionType m_connectionType{ConnectionType::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Utils::DateTime m_expiresAt{};

  Aws::String m_otherParticipantIdentifier;

  ParticipantType m_participantType{ParticipantType::NOT_SET};

  InvitationStatus m_status{InvitationStatus::NOT_SET};
  bool m_catalogHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_connectionIdHasBeenSet = false;
  bool m_connectionTypeHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
  bool m_otherParticipantIdentifierHasBeenSet = false;
  bool m_participantTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
