/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/ListingSummary.h>

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
class SearchListingsResult {
 public:
  AWS_MARKETPLACEDISCOVERY_API SearchListingsResult() = default;
  AWS_MARKETPLACEDISCOVERY_API SearchListingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MARKETPLACEDISCOVERY_API SearchListingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The total number of listings matching the search criteria.</p>
   */
  inline long long GetTotalResults() const { return m_totalResults; }
  inline void SetTotalResults(long long value) {
    m_totalResultsHasBeenSet = true;
    m_totalResults = value;
  }
  inline SearchListingsResult& WithTotalResults(long long value) {
    SetTotalResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The listing summaries matching the search criteria. Each summary includes the
   * listing name, description, badges, categories, pricing models, reviews, and
   * associated products.</p>
   */
  inline const Aws::Vector<ListingSummary>& GetListingSummaries() const { return m_listingSummaries; }
  template <typename ListingSummariesT = Aws::Vector<ListingSummary>>
  void SetListingSummaries(ListingSummariesT&& value) {
    m_listingSummariesHasBeenSet = true;
    m_listingSummaries = std::forward<ListingSummariesT>(value);
  }
  template <typename ListingSummariesT = Aws::Vector<ListingSummary>>
  SearchListingsResult& WithListingSummaries(ListingSummariesT&& value) {
    SetListingSummaries(std::forward<ListingSummariesT>(value));
    return *this;
  }
  template <typename ListingSummariesT = ListingSummary>
  SearchListingsResult& AddListingSummaries(ListingSummariesT&& value) {
    m_listingSummariesHasBeenSet = true;
    m_listingSummaries.emplace_back(std::forward<ListingSummariesT>(value));
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
  SearchListingsResult& WithNextToken(NextTokenT&& value) {
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
  SearchListingsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  long long m_totalResults{0};

  Aws::Vector<ListingSummary> m_listingSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_totalResultsHasBeenSet = false;
  bool m_listingSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
