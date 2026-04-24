/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-account/PartnerCentralAccountRequest.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>

#include <utility>

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

/**
 */
class ListConnectionsRequest : public PartnerCentralAccountRequest {
 public:
  AWS_PARTNERCENTRALACCOUNT_API ListConnectionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListConnections"; }

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
  ListConnectionsRequest& WithCatalog(CatalogT&& value) {
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
  ListConnectionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results by connection type (e.g., reseller, distributor, technology
   * partner).</p>
   */
  inline const Aws::String& GetConnectionType() const { return m_connectionType; }
  inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
  template <typename ConnectionTypeT = Aws::String>
  void SetConnectionType(ConnectionTypeT&& value) {
    m_connectionTypeHasBeenSet = true;
    m_connectionType = std::forward<ConnectionTypeT>(value);
  }
  template <typename ConnectionTypeT = Aws::String>
  ListConnectionsRequest& WithConnectionType(ConnectionTypeT&& value) {
    SetConnectionType(std::forward<ConnectionTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of connections to return in a single response.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListConnectionsRequest& WithMaxResults(int value) {
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
  ListConnectionsRequest& WithOtherParticipantIdentifiers(OtherParticipantIdentifiersT&& value) {
    SetOtherParticipantIdentifiers(std::forward<OtherParticipantIdentifiersT>(value));
    return *this;
  }
  template <typename OtherParticipantIdentifiersT = Aws::String>
  ListConnectionsRequest& AddOtherParticipantIdentifiers(OtherParticipantIdentifiersT&& value) {
    m_otherParticipantIdentifiersHasBeenSet = true;
    m_otherParticipantIdentifiers.emplace_back(std::forward<OtherParticipantIdentifiersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::String m_nextToken;

  Aws::String m_connectionType;

  int m_maxResults{0};

  Aws::Vector<Aws::String> m_otherParticipantIdentifiers;
  bool m_catalogHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_connectionTypeHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_otherParticipantIdentifiersHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
