/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/EngagementGroupSummary.h>

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
 * <p>The response from the <code>ListEngagementGroups</code>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ListEngagementGroupsResponse">AWS
 * API Reference</a></p>
 */
class ListEngagementGroupsResult {
 public:
  AWS_PARTNERCENTRALSELLING_API ListEngagementGroupsResult() = default;
  AWS_PARTNERCENTRALSELLING_API ListEngagementGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALSELLING_API ListEngagementGroupsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of engagement groups that are available to you in the specified
   * catalog. The array is empty when no groups are available.</p>
   */
  inline const Aws::Vector<EngagementGroupSummary>& GetEngagementGroupSummaries() const { return m_engagementGroupSummaries; }
  template <typename EngagementGroupSummariesT = Aws::Vector<EngagementGroupSummary>>
  void SetEngagementGroupSummaries(EngagementGroupSummariesT&& value) {
    m_engagementGroupSummariesHasBeenSet = true;
    m_engagementGroupSummaries = std::forward<EngagementGroupSummariesT>(value);
  }
  template <typename EngagementGroupSummariesT = Aws::Vector<EngagementGroupSummary>>
  ListEngagementGroupsResult& WithEngagementGroupSummaries(EngagementGroupSummariesT&& value) {
    SetEngagementGroupSummaries(std::forward<EngagementGroupSummariesT>(value));
    return *this;
  }
  template <typename EngagementGroupSummariesT = EngagementGroupSummary>
  ListEngagementGroupsResult& AddEngagementGroupSummaries(EngagementGroupSummariesT&& value) {
    m_engagementGroupSummariesHasBeenSet = true;
    m_engagementGroupSummaries.emplace_back(std::forward<EngagementGroupSummariesT>(value));
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
  ListEngagementGroupsResult& WithNextToken(NextTokenT&& value) {
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
  ListEngagementGroupsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<EngagementGroupSummary> m_engagementGroupSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_engagementGroupSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
