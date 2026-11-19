/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/EngagementSearchSummary.h>

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
 * <p>The response from the <code>SearchEngagements</code> operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/SearchEngagementsResponse">AWS
 * API Reference</a></p>
 */
class SearchEngagementsResult {
 public:
  AWS_PARTNERCENTRALSELLING_API SearchEngagementsResult() = default;
  AWS_PARTNERCENTRALSELLING_API SearchEngagementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALSELLING_API SearchEngagementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of summaries, one for each engagement that matches the request
   * criteria.</p>
   */
  inline const Aws::Vector<EngagementSearchSummary>& GetEngagementSearchSummaries() const { return m_engagementSearchSummaries; }
  template <typename EngagementSearchSummariesT = Aws::Vector<EngagementSearchSummary>>
  void SetEngagementSearchSummaries(EngagementSearchSummariesT&& value) {
    m_engagementSearchSummariesHasBeenSet = true;
    m_engagementSearchSummaries = std::forward<EngagementSearchSummariesT>(value);
  }
  template <typename EngagementSearchSummariesT = Aws::Vector<EngagementSearchSummary>>
  SearchEngagementsResult& WithEngagementSearchSummaries(EngagementSearchSummariesT&& value) {
    SetEngagementSearchSummaries(std::forward<EngagementSearchSummariesT>(value));
    return *this;
  }
  template <typename EngagementSearchSummariesT = EngagementSearchSummary>
  SearchEngagementsResult& AddEngagementSearchSummaries(EngagementSearchSummariesT&& value) {
    m_engagementSearchSummariesHasBeenSet = true;
    m_engagementSearchSummaries.emplace_back(std::forward<EngagementSearchSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token used to retrieve the next set of results in subsequent
   * calls. The response includes this token only when additional result pages are
   * available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  SearchEngagementsResult& WithNextToken(NextTokenT&& value) {
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
  SearchEngagementsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<EngagementSearchSummary> m_engagementSearchSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_engagementSearchSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
