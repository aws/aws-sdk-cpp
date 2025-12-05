/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/WorkflowRunSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NovaAct {
namespace Model {
class ListWorkflowRunsResult {
 public:
  AWS_NOVAACT_API ListWorkflowRunsResult() = default;
  AWS_NOVAACT_API ListWorkflowRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NOVAACT_API ListWorkflowRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of summary information for workflow runs.</p>
   */
  inline const Aws::Vector<WorkflowRunSummary>& GetWorkflowRunSummaries() const { return m_workflowRunSummaries; }
  template <typename WorkflowRunSummariesT = Aws::Vector<WorkflowRunSummary>>
  void SetWorkflowRunSummaries(WorkflowRunSummariesT&& value) {
    m_workflowRunSummariesHasBeenSet = true;
    m_workflowRunSummaries = std::forward<WorkflowRunSummariesT>(value);
  }
  template <typename WorkflowRunSummariesT = Aws::Vector<WorkflowRunSummary>>
  ListWorkflowRunsResult& WithWorkflowRunSummaries(WorkflowRunSummariesT&& value) {
    SetWorkflowRunSummaries(std::forward<WorkflowRunSummariesT>(value));
    return *this;
  }
  template <typename WorkflowRunSummariesT = WorkflowRunSummary>
  ListWorkflowRunsResult& AddWorkflowRunSummaries(WorkflowRunSummariesT&& value) {
    m_workflowRunSummariesHasBeenSet = true;
    m_workflowRunSummaries.emplace_back(std::forward<WorkflowRunSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for retrieving the next page of results, if available.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListWorkflowRunsResult& WithNextToken(NextTokenT&& value) {
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
  ListWorkflowRunsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<WorkflowRunSummary> m_workflowRunSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_workflowRunSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
