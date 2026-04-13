/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscoveryRequest.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/SearchFilter.h>
#include <aws/marketplace-discovery/model/SearchListingsSortBy.h>
#include <aws/marketplace-discovery/model/SearchListingsSortOrder.h>

#include <utility>

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

/**
 */
class SearchListingsRequest : public MarketplaceDiscoveryRequest {
 public:
  AWS_MARKETPLACEDISCOVERY_API SearchListingsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SearchListings"; }

  AWS_MARKETPLACEDISCOVERY_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The search query text to find relevant listings.</p>
   */
  inline const Aws::String& GetSearchText() const { return m_searchText; }
  inline bool SearchTextHasBeenSet() const { return m_searchTextHasBeenSet; }
  template <typename SearchTextT = Aws::String>
  void SetSearchText(SearchTextT&& value) {
    m_searchTextHasBeenSet = true;
    m_searchText = std::forward<SearchTextT>(value);
  }
  template <typename SearchTextT = Aws::String>
  SearchListingsRequest& WithSearchText(SearchTextT&& value) {
    SetSearchText(std::forward<SearchTextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters to narrow search results. Multiple filters are combined with AND
   * logic. Multiple values within the same filter are combined with OR logic.</p>
   */
  inline const Aws::Vector<SearchFilter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<SearchFilter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<SearchFilter>>
  SearchListingsRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = SearchFilter>
  SearchListingsRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results that are returned per call. You can use
   * <code>nextToken</code> to get more results.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline SearchListingsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field to sort results by. Valid values are <code>RELEVANCE</code> and
   * <code>AVERAGE_CUSTOMER_RATING</code>.</p>
   */
  inline SearchListingsSortBy GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(SearchListingsSortBy value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline SearchListingsRequest& WithSortBy(SearchListingsSortBy value) {
    SetSortBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sort direction. Valid values are <code>DESCENDING</code> and
   * <code>ASCENDING</code>.</p>
   */
  inline SearchListingsSortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SearchListingsSortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline SearchListingsRequest& WithSortOrder(SearchListingsSortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If <code>nextToken</code> is returned, there are more results available. Make
   * the call again using the returned token to retrieve the next page.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  SearchListingsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_searchText;

  Aws::Vector<SearchFilter> m_filters;

  int m_maxResults{0};

  SearchListingsSortBy m_sortBy{SearchListingsSortBy::NOT_SET};

  SearchListingsSortOrder m_sortOrder{SearchListingsSortOrder::NOT_SET};

  Aws::String m_nextToken;
  bool m_searchTextHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_sortByHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
