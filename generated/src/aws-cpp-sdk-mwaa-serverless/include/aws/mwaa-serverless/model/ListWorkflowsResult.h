/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>
#include <aws/mwaa-serverless/model/WorkflowSummary.h>

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
class ListWorkflowsResult {
 public:
  AWS_MWAASERVERLESS_API ListWorkflowsResult() = default;
  AWS_MWAASERVERLESS_API ListWorkflowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MWAASERVERLESS_API ListWorkflowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of workflow summaries for all workflows in your account.</p>
   */
  inline const Aws::Vector<WorkflowSummary>& GetWorkflows() const { return m_workflows; }
  template <typename WorkflowsT = Aws::Vector<WorkflowSummary>>
  void SetWorkflows(WorkflowsT&& value) {
    m_workflowsHasBeenSet = true;
    m_workflows = std::forward<WorkflowsT>(value);
  }
  template <typename WorkflowsT = Aws::Vector<WorkflowSummary>>
  ListWorkflowsResult& WithWorkflows(WorkflowsT&& value) {
    SetWorkflows(std::forward<WorkflowsT>(value));
    return *this;
  }
  template <typename WorkflowsT = WorkflowSummary>
  ListWorkflowsResult& AddWorkflows(WorkflowsT&& value) {
    m_workflowsHasBeenSet = true;
    m_workflows.emplace_back(std::forward<WorkflowsT>(value));
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
  ListWorkflowsResult& WithNextToken(NextTokenT&& value) {
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
  ListWorkflowsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<WorkflowSummary> m_workflows;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_workflowsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
