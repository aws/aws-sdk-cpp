/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/FindingSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {
/**
 * <p>Output for the ListFindings operation</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListFindingsOutput">AWS
 * API Reference</a></p>
 */
class ListFindingsResult {
 public:
  AWS_SECURITYAGENT_API ListFindingsResult() = default;
  AWS_SECURITYAGENT_API ListFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API ListFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of finding summaries matching the filter criteria</p>
   */
  inline const Aws::Vector<FindingSummary>& GetFindingsSummaries() const { return m_findingsSummaries; }
  template <typename FindingsSummariesT = Aws::Vector<FindingSummary>>
  void SetFindingsSummaries(FindingsSummariesT&& value) {
    m_findingsSummariesHasBeenSet = true;
    m_findingsSummaries = std::forward<FindingsSummariesT>(value);
  }
  template <typename FindingsSummariesT = Aws::Vector<FindingSummary>>
  ListFindingsResult& WithFindingsSummaries(FindingsSummariesT&& value) {
    SetFindingsSummaries(std::forward<FindingsSummariesT>(value));
    return *this;
  }
  template <typename FindingsSummariesT = FindingSummary>
  ListFindingsResult& AddFindingsSummaries(FindingsSummariesT&& value) {
    m_findingsSummariesHasBeenSet = true;
    m_findingsSummaries.emplace_back(std::forward<FindingsSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for pagination to retrieve the next set of results</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListFindingsResult& WithNextToken(NextTokenT&& value) {
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
  ListFindingsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<FindingSummary> m_findingsSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_findingsSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
