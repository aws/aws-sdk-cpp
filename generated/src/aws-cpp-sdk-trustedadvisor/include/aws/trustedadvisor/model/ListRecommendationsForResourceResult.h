/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/trustedadvisor/model/RecommendationForResourceSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace TrustedAdvisor {
namespace Model {
class ListRecommendationsForResourceResult {
 public:
  AWS_TRUSTEDADVISOR_API ListRecommendationsForResourceResult() = default;
  AWS_TRUSTEDADVISOR_API ListRecommendationsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_TRUSTEDADVISOR_API ListRecommendationsForResourceResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The token for the next set of results. Use the value returned in the previous
   * response in the next request to retrieve the next set of results. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRecommendationsForResourceResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of Trusted Advisor recommendations associated with the given AWS
   * resource</p>
   */
  inline const Aws::Vector<RecommendationForResourceSummary>& GetRecommendationForResourceSummaries() const {
    return m_recommendationForResourceSummaries;
  }
  template <typename RecommendationForResourceSummariesT = Aws::Vector<RecommendationForResourceSummary>>
  void SetRecommendationForResourceSummaries(RecommendationForResourceSummariesT&& value) {
    m_recommendationForResourceSummariesHasBeenSet = true;
    m_recommendationForResourceSummaries = std::forward<RecommendationForResourceSummariesT>(value);
  }
  template <typename RecommendationForResourceSummariesT = Aws::Vector<RecommendationForResourceSummary>>
  ListRecommendationsForResourceResult& WithRecommendationForResourceSummaries(RecommendationForResourceSummariesT&& value) {
    SetRecommendationForResourceSummaries(std::forward<RecommendationForResourceSummariesT>(value));
    return *this;
  }
  template <typename RecommendationForResourceSummariesT = RecommendationForResourceSummary>
  ListRecommendationsForResourceResult& AddRecommendationForResourceSummaries(RecommendationForResourceSummariesT&& value) {
    m_recommendationForResourceSummariesHasBeenSet = true;
    m_recommendationForResourceSummaries.emplace_back(std::forward<RecommendationForResourceSummariesT>(value));
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
  ListRecommendationsForResourceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<RecommendationForResourceSummary> m_recommendationForResourceSummaries;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_recommendationForResourceSummariesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace TrustedAdvisor
}  // namespace Aws
