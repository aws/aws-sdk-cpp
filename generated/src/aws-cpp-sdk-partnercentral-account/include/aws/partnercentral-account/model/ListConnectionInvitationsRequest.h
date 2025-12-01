/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-account/PartnerCentralAccountRequest.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/ConnectionType.h>
#include <aws/partnercentral-account/model/InvitationStatus.h>
#include <aws/partnercentral-account/model/ParticipantType.h>

#include <utility>

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

/**
 */
class ListConnectionInvitationsRequest : public PartnerCentralAccountRequest {
 public:
  AWS_PARTNERCENTRALACCOUNT_API ListConnectionInvitationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListConnectionInvitations"; }

  AWS_PARTNERCENTRALACCOUNT_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALACCOUNT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog identifier for the partner account.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  ListConnectionInvitationsRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for retrieving the next page of results in paginated responses.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListConnectionInvitationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results by connection type (e.g., reseller, distributor, technology
   * partner).</p>
   */
  inline ConnectionType GetConnectionType() const { return m_connectionType; }
  inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
  inline void SetConnectionType(ConnectionType value) {
    m_connectionTypeHasBeenSet = true;
    m_connectionType = value;
  }
  inline ListConnectionInvitationsRequest& WithConnectionType(ConnectionType value) {
    SetConnectionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of connection invitations to return in a single
   * response.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListConnectionInvitationsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results by specific participant identifiers.</p>
   */
  inline const Aws::Vector<Aws::String>& GetOtherParticipantIdentifiers() const { return m_otherParticipantIdentifiers; }
  inline bool OtherParticipantIdentifiersHasBeenSet() const { return m_otherParticipantIdentifiersHasBeenSet; }
  template <typename OtherParticipantIdentifiersT = Aws::Vector<Aws::String>>
  void SetOtherParticipantIdentifiers(OtherParticipantIdentifiersT&& value) {
    m_otherParticipantIdentifiersHasBeenSet = true;
    m_otherParticipantIdentifiers = std::forward<OtherParticipantIdentifiersT>(value);
  }
  template <typename OtherParticipantIdentifiersT = Aws::Vector<Aws::String>>
  ListConnectionInvitationsRequest& WithOtherParticipantIdentifiers(OtherParticipantIdentifiersT&& value) {
    SetOtherParticipantIdentifiers(std::forward<OtherParticipantIdentifiersT>(value));
    return *this;
  }
  template <typename OtherParticipantIdentifiersT = Aws::String>
  ListConnectionInvitationsRequest& AddOtherParticipantIdentifiers(OtherParticipantIdentifiersT&& value) {
    m_otherParticipantIdentifiersHasBeenSet = true;
    m_otherParticipantIdentifiers.emplace_back(std::forward<OtherParticipantIdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results by participant type (inviter or invitee).</p>
   */
  inline ParticipantType GetParticipantType() const { return m_participantType; }
  inline bool ParticipantTypeHasBeenSet() const { return m_participantTypeHasBeenSet; }
  inline void SetParticipantType(ParticipantType value) {
    m_participantTypeHasBeenSet = true;
    m_participantType = value;
  }
  inline ListConnectionInvitationsRequest& WithParticipantType(ParticipantType value) {
    SetParticipantType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results by invitation status (pending, accepted, rejected, canceled,
   * expired).</p>
   */
  inline InvitationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(InvitationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListConnectionInvitationsRequest& WithStatus(InvitationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;
  bool m_catalogHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  ConnectionType m_connectionType{ConnectionType::NOT_SET};
  bool m_connectionTypeHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;

  Aws::Vector<Aws::String> m_otherParticipantIdentifiers;
  bool m_otherParticipantIdentifiersHasBeenSet = false;

  ParticipantType m_participantType{ParticipantType::NOT_SET};
  bool m_participantTypeHasBeenSet = false;

  InvitationStatus m_status{InvitationStatus::NOT_SET};
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
