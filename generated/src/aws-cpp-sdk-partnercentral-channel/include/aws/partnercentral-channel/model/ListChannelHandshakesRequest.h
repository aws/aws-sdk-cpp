/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-channel/PartnerCentralChannelRequest.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/HandshakeStatus.h>
#include <aws/partnercentral-channel/model/HandshakeType.h>
#include <aws/partnercentral-channel/model/ListChannelHandshakesTypeFilters.h>
#include <aws/partnercentral-channel/model/ListChannelHandshakesTypeSort.h>
#include <aws/partnercentral-channel/model/ParticipantType.h>

#include <utility>

namespace Aws {
namespace PartnerCentralChannel {
namespace Model {

/**
 */
class ListChannelHandshakesRequest : public PartnerCentralChannelRequest {
 public:
  AWS_PARTNERCENTRALCHANNEL_API ListChannelHandshakesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListChannelHandshakes"; }

  AWS_PARTNERCENTRALCHANNEL_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALCHANNEL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Filter results by handshake type.</p>
   */
  inline HandshakeType GetHandshakeType() const { return m_handshakeType; }
  inline bool HandshakeTypeHasBeenSet() const { return m_handshakeTypeHasBeenSet; }
  inline void SetHandshakeType(HandshakeType value) {
    m_handshakeTypeHasBeenSet = true;
    m_handshakeType = value;
  }
  inline ListChannelHandshakesRequest& WithHandshakeType(HandshakeType value) {
    SetHandshakeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The catalog identifier to filter handshakes.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  ListChannelHandshakesRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by participant type (sender or receiver).</p>
   */
  inline ParticipantType GetParticipantType() const { return m_participantType; }
  inline bool ParticipantTypeHasBeenSet() const { return m_participantTypeHasBeenSet; }
  inline void SetParticipantType(ParticipantType value) {
    m_participantTypeHasBeenSet = true;
    m_participantType = value;
  }
  inline ListChannelHandshakesRequest& WithParticipantType(ParticipantType value) {
    SetParticipantType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single call.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListChannelHandshakesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results by handshake status.</p>
   */
  inline const Aws::Vector<HandshakeStatus>& GetStatuses() const { return m_statuses; }
  inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }
  template <typename StatusesT = Aws::Vector<HandshakeStatus>>
  void SetStatuses(StatusesT&& value) {
    m_statusesHasBeenSet = true;
    m_statuses = std::forward<StatusesT>(value);
  }
  template <typename StatusesT = Aws::Vector<HandshakeStatus>>
  ListChannelHandshakesRequest& WithStatuses(StatusesT&& value) {
    SetStatuses(std::forward<StatusesT>(value));
    return *this;
  }
  inline ListChannelHandshakesRequest& AddStatuses(HandshakeStatus value) {
    m_statusesHasBeenSet = true;
    m_statuses.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by associated resource identifiers.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAssociatedResourceIdentifiers() const { return m_associatedResourceIdentifiers; }
  inline bool AssociatedResourceIdentifiersHasBeenSet() const { return m_associatedResourceIdentifiersHasBeenSet; }
  template <typename AssociatedResourceIdentifiersT = Aws::Vector<Aws::String>>
  void SetAssociatedResourceIdentifiers(AssociatedResourceIdentifiersT&& value) {
    m_associatedResourceIdentifiersHasBeenSet = true;
    m_associatedResourceIdentifiers = std::forward<AssociatedResourceIdentifiersT>(value);
  }
  template <typename AssociatedResourceIdentifiersT = Aws::Vector<Aws::String>>
  ListChannelHandshakesRequest& WithAssociatedResourceIdentifiers(AssociatedResourceIdentifiersT&& value) {
    SetAssociatedResourceIdentifiers(std::forward<AssociatedResourceIdentifiersT>(value));
    return *this;
  }
  template <typename AssociatedResourceIdentifiersT = Aws::String>
  ListChannelHandshakesRequest& AddAssociatedResourceIdentifiers(AssociatedResourceIdentifiersT&& value) {
    m_associatedResourceIdentifiersHasBeenSet = true;
    m_associatedResourceIdentifiers.emplace_back(std::forward<AssociatedResourceIdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type-specific filters for handshakes.</p>
   */
  inline const ListChannelHandshakesTypeFilters& GetHandshakeTypeFilters() const { return m_handshakeTypeFilters; }
  inline bool HandshakeTypeFiltersHasBeenSet() const { return m_handshakeTypeFiltersHasBeenSet; }
  template <typename HandshakeTypeFiltersT = ListChannelHandshakesTypeFilters>
  void SetHandshakeTypeFilters(HandshakeTypeFiltersT&& value) {
    m_handshakeTypeFiltersHasBeenSet = true;
    m_handshakeTypeFilters = std::forward<HandshakeTypeFiltersT>(value);
  }
  template <typename HandshakeTypeFiltersT = ListChannelHandshakesTypeFilters>
  ListChannelHandshakesRequest& WithHandshakeTypeFilters(HandshakeTypeFiltersT&& value) {
    SetHandshakeTypeFilters(std::forward<HandshakeTypeFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type-specific sorting options for handshakes.</p>
   */
  inline const ListChannelHandshakesTypeSort& GetHandshakeTypeSort() const { return m_handshakeTypeSort; }
  inline bool HandshakeTypeSortHasBeenSet() const { return m_handshakeTypeSortHasBeenSet; }
  template <typename HandshakeTypeSortT = ListChannelHandshakesTypeSort>
  void SetHandshakeTypeSort(HandshakeTypeSortT&& value) {
    m_handshakeTypeSortHasBeenSet = true;
    m_handshakeTypeSort = std::forward<HandshakeTypeSortT>(value);
  }
  template <typename HandshakeTypeSortT = ListChannelHandshakesTypeSort>
  ListChannelHandshakesRequest& WithHandshakeTypeSort(HandshakeTypeSortT&& value) {
    SetHandshakeTypeSort(std::forward<HandshakeTypeSortT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for retrieving the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListChannelHandshakesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  HandshakeType m_handshakeType{HandshakeType::NOT_SET};
  bool m_handshakeTypeHasBeenSet = false;

  Aws::String m_catalog;
  bool m_catalogHasBeenSet = false;

  ParticipantType m_participantType{ParticipantType::NOT_SET};
  bool m_participantTypeHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;

  Aws::Vector<HandshakeStatus> m_statuses;
  bool m_statusesHasBeenSet = false;

  Aws::Vector<Aws::String> m_associatedResourceIdentifiers;
  bool m_associatedResourceIdentifiersHasBeenSet = false;

  ListChannelHandshakesTypeFilters m_handshakeTypeFilters;
  bool m_handshakeTypeFiltersHasBeenSet = false;

  ListChannelHandshakesTypeSort m_handshakeTypeSort;
  bool m_handshakeTypeSortHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
