/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/OpportunitySearchFilter.h>
#include <aws/partnercentral-selling/model/OpportunitySearchSort.h>

#include <utility>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>Contains the request parameters for the <code>SearchOpportunities</code>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/SearchOpportunitiesRequest">AWS
 * API Reference</a></p>
 */
class SearchOpportunitiesRequest : public PartnerCentralSellingRequest {
 public:
  AWS_PARTNERCENTRALSELLING_API SearchOpportunitiesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SearchOpportunities"; }

  AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies the catalog in which you run the search. Use <code>AWS</code> to
   * search production opportunities, or use <code>Sandbox</code> to search
   * opportunities in a testing environment.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  SearchOpportunitiesRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single call. Use this value to
   * control pagination together with <code>NextToken</code>. If you omit this
   * parameter, the service applies a default page size and returns the remaining
   * results on subsequent pages.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline SearchOpportunitiesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token returned by a previous call. Pass it in a subsequent call
   * to retrieve the next page of results. Omit it on the first call.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  SearchOpportunitiesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional free-text query string matched against opportunity fields. When
   * provided together with <code>Filter</code>, both narrow the result set.</p>
   */
  inline const Aws::String& GetKeyword() const { return m_keyword; }
  inline bool KeywordHasBeenSet() const { return m_keywordHasBeenSet; }
  template <typename KeywordT = Aws::String>
  void SetKeyword(KeywordT&& value) {
    m_keywordHasBeenSet = true;
    m_keyword = std::forward<KeywordT>(value);
  }
  template <typename KeywordT = Aws::String>
  SearchOpportunitiesRequest& WithKeyword(KeywordT&& value) {
    SetKeyword(std::forward<KeywordT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A recursive, structured filter tree. Each node is either a boolean combinator
   * (<code>AndAllFilters</code>, <code>OrAllFilters</code>, or
   * <code>NotFilter</code>) or a leaf predicate (a single comparison such as
   * <code>EqualsTo</code>). When provided together with <code>Keyword</code>, both
   * narrow the result set.</p>
   */
  inline const OpportunitySearchFilter& GetFilter() const { return m_filter; }
  inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
  template <typename FilterT = OpportunitySearchFilter>
  void SetFilter(FilterT&& value) {
    m_filterHasBeenSet = true;
    m_filter = std::forward<FilterT>(value);
  }
  template <typename FilterT = OpportunitySearchFilter>
  SearchOpportunitiesRequest& WithFilter(FilterT&& value) {
    SetFilter(std::forward<FilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the field and direction used to sort the search results.</p>
   */
  inline const OpportunitySearchSort& GetSort() const { return m_sort; }
  inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
  template <typename SortT = OpportunitySearchSort>
  void SetSort(SortT&& value) {
    m_sortHasBeenSet = true;
    m_sort = std::forward<SortT>(value);
  }
  template <typename SortT = OpportunitySearchSort>
  SearchOpportunitiesRequest& WithSort(SortT&& value) {
    SetSort(std::forward<SortT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  int m_maxResults{0};

  Aws::String m_nextToken;

  Aws::String m_keyword;

  OpportunitySearchFilter m_filter;

  OpportunitySearchSort m_sort;
  bool m_catalogHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_keywordHasBeenSet = false;
  bool m_filterHasBeenSet = false;
  bool m_sortHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
