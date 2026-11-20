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
   * <p>The preferred locale for response content, as a Best Current Practice 47 (BCP
   * 47) language tag or a comma-separated priority list of language tags. See
   * <code>Locale</code> for supported values, constraints, fallback behavior, and
   * the default locale. If you omit this field, the service returns content in the
   * default locale.</p>
   */
  inline const Aws::String& GetLocale() const { return m_locale; }
  inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
  template <typename LocaleT = Aws::String>
  void SetLocale(LocaleT&& value) {
    m_localeHasBeenSet = true;
    m_locale = std::forward<LocaleT>(value);
  }
  template <typename LocaleT = Aws::String>
  SearchListingsRequest& WithLocale(LocaleT&& value) {
    SetLocale(std::forward<LocaleT>(value));
    return *this;
  }
  ///@}

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
   * <p>Filters to narrow search results. A result must match every filter. Within
   * one filter, a result matches if it has any of the values.</p>
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
   * <p>The maximum number of listings to return in each call. If you omit this
   * field, the default is 25. Use <code>nextToken</code> to retrieve the next
   * page.</p>
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
   * <p>The field to sort results by. If you do not specify a value, the service
   * sorts by <code>RELEVANCE</code>. This field has one of the following values:</p>
   * <dl> <dt>AVERAGE_CUSTOMER_RATING</dt> <dd> <p>Sorts by average customer
   * rating.</p> </dd> <dt>RELEVANCE</dt> <dd> <p>Sorts by relevance to the search
   * query.</p> </dd> </dl>
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
   * <p>The sort direction. If you do not specify a value, the service sorts in
   * <code>DESCENDING</code> order. This field has one of the following values:</p>
   * <dl> <dt>ASCENDING</dt> <dd> <p>Sorts from lowest to highest.</p> </dd>
   * <dt>DESCENDING</dt> <dd> <p>Sorts from highest to lowest.</p> </dd> </dl>
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
   * <p>If the service returns <code>nextToken</code>, more results are available.
   * The value of <code>nextToken</code> is a unique pagination token for each page.
   * Make the call again with the returned token to retrieve the next page. Keep all
   * other arguments unchanged. Each pagination token expires after 24 hours. An
   * expired pagination token returns a <code>ValidationException</code>.</p>
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
  Aws::String m_locale;

  Aws::String m_searchText;

  Aws::Vector<SearchFilter> m_filters;

  int m_maxResults{0};

  SearchListingsSortBy m_sortBy{SearchListingsSortBy::NOT_SET};

  SearchListingsSortOrder m_sortOrder{SearchListingsSortOrder::NOT_SET};

  Aws::String m_nextToken;
  bool m_localeHasBeenSet = false;
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
