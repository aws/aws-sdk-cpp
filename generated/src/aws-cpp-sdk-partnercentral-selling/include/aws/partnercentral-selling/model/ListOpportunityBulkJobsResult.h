/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/OpportunityBulkJobSummary.h>

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
 * <p>The opportunity bulk jobs that match the request.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ListOpportunityBulkJobsResponse">AWS
 * API Reference</a></p>
 */
class ListOpportunityBulkJobsResult {
 public:
  AWS_PARTNERCENTRALSELLING_API ListOpportunityBulkJobsResult() = default;
  AWS_PARTNERCENTRALSELLING_API ListOpportunityBulkJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALSELLING_API ListOpportunityBulkJobsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The bulk jobs that match the request, newest first.</p>
   */
  inline const Aws::Vector<OpportunityBulkJobSummary>& GetOpportunityBulkJobSummaries() const { return m_opportunityBulkJobSummaries; }
  template <typename OpportunityBulkJobSummariesT = Aws::Vector<OpportunityBulkJobSummary>>
  void SetOpportunityBulkJobSummaries(OpportunityBulkJobSummariesT&& value) {
    m_opportunityBulkJobSummariesHasBeenSet = true;
    m_opportunityBulkJobSummaries = std::forward<OpportunityBulkJobSummariesT>(value);
  }
  template <typename OpportunityBulkJobSummariesT = Aws::Vector<OpportunityBulkJobSummary>>
  ListOpportunityBulkJobsResult& WithOpportunityBulkJobSummaries(OpportunityBulkJobSummariesT&& value) {
    SetOpportunityBulkJobSummaries(std::forward<OpportunityBulkJobSummariesT>(value));
    return *this;
  }
  template <typename OpportunityBulkJobSummariesT = OpportunityBulkJobSummary>
  ListOpportunityBulkJobsResult& AddOpportunityBulkJobSummaries(OpportunityBulkJobSummariesT&& value) {
    m_opportunityBulkJobSummariesHasBeenSet = true;
    m_opportunityBulkJobSummaries.emplace_back(std::forward<OpportunityBulkJobSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token used to retrieve the next set of results in subsequent
   * calls. This token is included in the response only if there are additional
   * result pages available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListOpportunityBulkJobsResult& WithNextToken(NextTokenT&& value) {
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
  ListOpportunityBulkJobsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<OpportunityBulkJobSummary> m_opportunityBulkJobSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_opportunityBulkJobSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
