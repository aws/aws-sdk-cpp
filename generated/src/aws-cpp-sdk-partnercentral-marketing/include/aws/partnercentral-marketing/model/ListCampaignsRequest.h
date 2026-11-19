/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketingRequest.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>
#include <aws/partnercentral-marketing/model/CampaignSort.h>
#include <aws/partnercentral-marketing/model/CampaignState.h>
#include <aws/partnercentral-marketing/model/Catalog.h>

#include <utility>

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {

/**
 * <p>Input for ListCampaigns operation.</p> <p>Filters combine with AND. Results
 * are eventually consistent: a campaign created, renamed or activated a moment ago
 * can take up to a second to appear with its current values.
 * <code>GetCampaign</code> is strongly consistent.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/ListCampaignsRequest">AWS
 * API Reference</a></p>
 */
class ListCampaignsRequest : public PartnerCentralMarketingRequest {
 public:
  AWS_PARTNERCENTRALMARKETING_API ListCampaignsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListCampaigns"; }

  AWS_PARTNERCENTRALMARKETING_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALMARKETING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The catalog (AWS or Sandbox).</p>
   */
  inline Catalog GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  inline void SetCatalog(Catalog value) {
    m_catalogHasBeenSet = true;
    m_catalog = value;
  }
  inline ListCampaignsRequest& WithCatalog(Catalog value) {
    SetCatalog(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Only these campaigns, each named by its id or its campaign ARN. A campaign
   * that does not exist, was deleted, or whose ARN names another account or catalog
   * is left out rather than refused.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCampaignIdentifiers() const { return m_campaignIdentifiers; }
  inline bool CampaignIdentifiersHasBeenSet() const { return m_campaignIdentifiersHasBeenSet; }
  template <typename CampaignIdentifiersT = Aws::Vector<Aws::String>>
  void SetCampaignIdentifiers(CampaignIdentifiersT&& value) {
    m_campaignIdentifiersHasBeenSet = true;
    m_campaignIdentifiers = std::forward<CampaignIdentifiersT>(value);
  }
  template <typename CampaignIdentifiersT = Aws::Vector<Aws::String>>
  ListCampaignsRequest& WithCampaignIdentifiers(CampaignIdentifiersT&& value) {
    SetCampaignIdentifiers(std::forward<CampaignIdentifiersT>(value));
    return *this;
  }
  template <typename CampaignIdentifiersT = Aws::String>
  ListCampaignsRequest& AddCampaignIdentifiers(CampaignIdentifiersT&& value) {
    m_campaignIdentifiersHasBeenSet = true;
    m_campaignIdentifiers.emplace_back(std::forward<CampaignIdentifiersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Only campaigns whose name contains this, compared case-insensitively.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ListCampaignsRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Only campaigns in one of these states.</p>
   */
  inline const Aws::Vector<CampaignState>& GetStates() const { return m_states; }
  inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }
  template <typename StatesT = Aws::Vector<CampaignState>>
  void SetStates(StatesT&& value) {
    m_statesHasBeenSet = true;
    m_states = std::forward<StatesT>(value);
  }
  template <typename StatesT = Aws::Vector<CampaignState>>
  ListCampaignsRequest& WithStates(StatesT&& value) {
    SetStates(std::forward<StatesT>(value));
    return *this;
  }
  inline ListCampaignsRequest& AddStates(CampaignState value) {
    m_statesHasBeenSet = true;
    m_states.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The order of the results. Default: <code>CREATED_AT</code>,
   * <code>DESCENDING</code>.</p>
   */
  inline const CampaignSort& GetSort() const { return m_sort; }
  inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
  template <typename SortT = CampaignSort>
  void SetSort(SortT&& value) {
    m_sortHasBeenSet = true;
    m_sort = std::forward<SortT>(value);
  }
  template <typename SortT = CampaignSort>
  ListCampaignsRequest& WithSort(SortT&& value) {
    SetSort(std::forward<SortT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum results per page.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListCampaignsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token. Bound to the filters and sort it was issued for: a request
   * that changes <code>CampaignIdentifiers</code>, <code>Name</code>,
   * <code>States</code> or <code>Sort</code> between pages is refused with
   * <code>ValidationException</code>. <code>MaxResults</code> may change.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListCampaignsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Catalog m_catalog{Catalog::NOT_SET};

  Aws::Vector<Aws::String> m_campaignIdentifiers;

  Aws::String m_name;

  Aws::Vector<CampaignState> m_states;

  CampaignSort m_sort;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_catalogHasBeenSet = false;
  bool m_campaignIdentifiersHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statesHasBeenSet = false;
  bool m_sortHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
