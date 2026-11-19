/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/OpportunitySearchSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {
/**
 * <p>Contains the response that the <code>SearchOpportunities</code> action
 * returns.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/SearchOpportunitiesResponse">AWS
 * API Reference</a></p>
 */
class SearchOpportunitiesResult {
 public:
  AWS_PARTNERCENTRALSELLING_API SearchOpportunitiesResult() = default;
  AWS_PARTNERCENTRALSELLING_API SearchOpportunitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALSELLING_API SearchOpportunitiesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of curated summary views, one for each opportunity that matches the
   * request criteria.</p>
   */
  inline const Aws::Vector<OpportunitySearchSummary>& GetOpportunitySearchSummaries() const { return m_opportunitySearchSummaries; }
  template <typename OpportunitySearchSummariesT = Aws::Vector<OpportunitySearchSummary>>
  void SetOpportunitySearchSummaries(OpportunitySearchSummariesT&& value) {
    m_opportunitySearchSummariesHasBeenSet = true;
    m_opportunitySearchSummaries = std::forward<OpportunitySearchSummariesT>(value);
  }
  template <typename OpportunitySearchSummariesT = Aws::Vector<OpportunitySearchSummary>>
  SearchOpportunitiesResult& WithOpportunitySearchSummaries(OpportunitySearchSummariesT&& value) {
    SetOpportunitySearchSummaries(std::forward<OpportunitySearchSummariesT>(value));
    return *this;
  }
  template <typename OpportunitySearchSummariesT = OpportunitySearchSummary>
  SearchOpportunitiesResult& AddOpportunitySearchSummaries(OpportunitySearchSummariesT&& value) {
    m_opportunitySearchSummariesHasBeenSet = true;
    m_opportunitySearchSummaries.emplace_back(std::forward<OpportunitySearchSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token for retrieving the next set of results. Pass this token in
   * a subsequent call to get the next page. The response includes this token only
   * when additional result pages are available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  SearchOpportunitiesResult& WithNextToken(NextTokenT&& value) {
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
  SearchOpportunitiesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<OpportunitySearchSummary> m_opportunitySearchSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_opportunitySearchSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
