/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscoveryRequest.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/SearchFacetType.h>
#include <aws/marketplace-discovery/model/SearchFilter.h>

#include <utility>

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

/**
 */
class SearchFacetsRequest : public MarketplaceDiscoveryRequest {
 public:
  AWS_MARKETPLACEDISCOVERY_API SearchFacetsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SearchFacets"; }

  AWS_MARKETPLACEDISCOVERY_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The search query text to filter listings before retrieving facets.</p>
   */
  inline const Aws::String& GetSearchText() const { return m_searchText; }
  inline bool SearchTextHasBeenSet() const { return m_searchTextHasBeenSet; }
  template <typename SearchTextT = Aws::String>
  void SetSearchText(SearchTextT&& value) {
    m_searchTextHasBeenSet = true;
    m_searchText = std::forward<SearchTextT>(value);
  }
  template <typename SearchTextT = Aws::String>
  SearchFacetsRequest& WithSearchText(SearchTextT&& value) {
    SetSearchText(std::forward<SearchTextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters to apply before retrieving facets. Multiple filters are combined with
   * AND logic. Multiple values within the same filter are combined with OR
   * logic.</p>
   */
  inline const Aws::Vector<SearchFilter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<SearchFilter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<SearchFilter>>
  SearchFacetsRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = SearchFilter>
  SearchFacetsRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of specific facet types to retrieve. If empty or null, all available
   * facets are returned.</p>
   */
  inline const Aws::Vector<SearchFacetType>& GetFacetTypes() const { return m_facetTypes; }
  inline bool FacetTypesHasBeenSet() const { return m_facetTypesHasBeenSet; }
  template <typename FacetTypesT = Aws::Vector<SearchFacetType>>
  void SetFacetTypes(FacetTypesT&& value) {
    m_facetTypesHasBeenSet = true;
    m_facetTypes = std::forward<FacetTypesT>(value);
  }
  template <typename FacetTypesT = Aws::Vector<SearchFacetType>>
  SearchFacetsRequest& WithFacetTypes(FacetTypesT&& value) {
    SetFacetTypes(std::forward<FacetTypesT>(value));
    return *this;
  }
  inline SearchFacetsRequest& AddFacetTypes(SearchFacetType value) {
    m_facetTypesHasBeenSet = true;
    m_facetTypes.push_back(value);
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
  SearchFacetsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_searchText;

  Aws::Vector<SearchFilter> m_filters;

  Aws::Vector<SearchFacetType> m_facetTypes;

  Aws::String m_nextToken;
  bool m_searchTextHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_facetTypesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
