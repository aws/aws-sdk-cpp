/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>
#include <aws/mwaa-serverless/model/WorkflowRunSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace MWAAServerless {
namespace Model {
class ListWorkflowRunsResult {
 public:
  AWS_MWAASERVERLESS_API ListWorkflowRunsResult() = default;
  AWS_MWAASERVERLESS_API ListWorkflowRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MWAASERVERLESS_API ListWorkflowRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of workflow run summaries for the specified workflow.</p>
   */
  inline const Aws::Vector<WorkflowRunSummary>& GetWorkflowRuns() const { return m_workflowRuns; }
  template <typename WorkflowRunsT = Aws::Vector<WorkflowRunSummary>>
  void SetWorkflowRuns(WorkflowRunsT&& value) {
    m_workflowRunsHasBeenSet = true;
    m_workflowRuns = std::forward<WorkflowRunsT>(value);
  }
  template <typename WorkflowRunsT = Aws::Vector<WorkflowRunSummary>>
  ListWorkflowRunsResult& WithWorkflowRuns(WorkflowRunsT&& value) {
    SetWorkflowRuns(std::forward<WorkflowRunsT>(value));
    return *this;
  }
  template <typename WorkflowRunsT = WorkflowRunSummary>
  ListWorkflowRunsResult& AddWorkflowRuns(WorkflowRunsT&& value) {
    m_workflowRunsHasBeenSet = true;
    m_workflowRuns.emplace_back(std::forward<WorkflowRunsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token you need to use to retrieve the next set of results.
   * This value is null if there are no more results.</p>
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
  Aws::Vector<WorkflowRunSummary> m_workflowRuns;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_workflowRunsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
