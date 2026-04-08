/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/ListingFacet.h>
#include <aws/marketplace-discovery/model/SearchFacetType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {
class SearchFacetsResult {
 public:
  AWS_MARKETPLACEDISCOVERY_API SearchFacetsResult() = default;
  AWS_MARKETPLACEDISCOVERY_API SearchFacetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MARKETPLACEDISCOVERY_API SearchFacetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The total number of listings matching the search criteria.</p>
   */
  inline long long GetTotalResults() const { return m_totalResults; }
  inline void SetTotalResults(long long value) {
    m_totalResultsHasBeenSet = true;
    m_totalResults = value;
  }
  inline SearchFacetsResult& WithTotalResults(long long value) {
    SetTotalResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of facet types to their corresponding facet values. Each facet value
   * includes a display name, internal value, and count of matching listings.</p>
   */
  inline const Aws::Map<SearchFacetType, Aws::Vector<ListingFacet>>& GetListingFacets() const { return m_listingFacets; }
  template <typename ListingFacetsT = Aws::Map<SearchFacetType, Aws::Vector<ListingFacet>>>
  void SetListingFacets(ListingFacetsT&& value) {
    m_listingFacetsHasBeenSet = true;
    m_listingFacets = std::forward<ListingFacetsT>(value);
  }
  template <typename ListingFacetsT = Aws::Map<SearchFacetType, Aws::Vector<ListingFacet>>>
  SearchFacetsResult& WithListingFacets(ListingFacetsT&& value) {
    SetListingFacets(std::forward<ListingFacetsT>(value));
    return *this;
  }
  inline SearchFacetsResult& AddListingFacets(SearchFacetType key, Aws::Vector<ListingFacet> value) {
    m_listingFacetsHasBeenSet = true;
    m_listingFacets.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If <code>nextToken</code> is returned, there are more results available. Make
   * the call again using the returned token to retrieve the next page.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  SearchFacetsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  SearchFacetsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  long long m_totalResults{0};

  Aws::Map<SearchFacetType, Aws::Vector<ListingFacet>> m_listingFacets;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_totalResultsHasBeenSet = false;
  bool m_listingFacetsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
