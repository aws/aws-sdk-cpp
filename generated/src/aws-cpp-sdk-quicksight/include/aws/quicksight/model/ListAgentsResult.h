/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AgentSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {
class ListAgentsResult {
 public:
  AWS_QUICKSIGHT_API ListAgentsResult() = default;
  AWS_QUICKSIGHT_API ListAgentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API ListAgentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListAgentsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of agent summaries.</p>
   */
  inline const Aws::Vector<AgentSummary>& GetAgentSummaries() const { return m_agentSummaries; }
  template <typename AgentSummariesT = Aws::Vector<AgentSummary>>
  void SetAgentSummaries(AgentSummariesT&& value) {
    m_agentSummariesHasBeenSet = true;
    m_agentSummaries = std::forward<AgentSummariesT>(value);
  }
  template <typename AgentSummariesT = Aws::Vector<AgentSummary>>
  ListAgentsResult& WithAgentSummaries(AgentSummariesT&& value) {
    SetAgentSummaries(std::forward<AgentSummariesT>(value));
    return *this;
  }
  template <typename AgentSummariesT = AgentSummary>
  ListAgentsResult& AddAgentSummaries(AgentSummariesT&& value) {
    m_agentSummariesHasBeenSet = true;
    m_agentSummaries.emplace_back(std::forward<AgentSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results, or null if there are no more
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAgentsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_requestId;

  Aws::Vector<AgentSummary> m_agentSummaries;

  Aws::String m_nextToken;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_requestIdHasBeenSet = false;
  bool m_agentSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
