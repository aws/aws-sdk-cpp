/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/WorkflowDefinitionSummary.h>

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
class ListWorkflowDefinitionsResult {
 public:
  AWS_NOVAACT_API ListWorkflowDefinitionsResult() = default;
  AWS_NOVAACT_API ListWorkflowDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NOVAACT_API ListWorkflowDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of summary information for workflow definitions.</p>
   */
  inline const Aws::Vector<WorkflowDefinitionSummary>& GetWorkflowDefinitionSummaries() const { return m_workflowDefinitionSummaries; }
  template <typename WorkflowDefinitionSummariesT = Aws::Vector<WorkflowDefinitionSummary>>
  void SetWorkflowDefinitionSummaries(WorkflowDefinitionSummariesT&& value) {
    m_workflowDefinitionSummariesHasBeenSet = true;
    m_workflowDefinitionSummaries = std::forward<WorkflowDefinitionSummariesT>(value);
  }
  template <typename WorkflowDefinitionSummariesT = Aws::Vector<WorkflowDefinitionSummary>>
  ListWorkflowDefinitionsResult& WithWorkflowDefinitionSummaries(WorkflowDefinitionSummariesT&& value) {
    SetWorkflowDefinitionSummaries(std::forward<WorkflowDefinitionSummariesT>(value));
    return *this;
  }
  template <typename WorkflowDefinitionSummariesT = WorkflowDefinitionSummary>
  ListWorkflowDefinitionsResult& AddWorkflowDefinitionSummaries(WorkflowDefinitionSummariesT&& value) {
    m_workflowDefinitionSummariesHasBeenSet = true;
    m_workflowDefinitionSummaries.emplace_back(std::forward<WorkflowDefinitionSummariesT>(value));
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
  ListWorkflowDefinitionsResult& WithNextToken(NextTokenT&& value) {
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
  ListWorkflowDefinitionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<WorkflowDefinitionSummary> m_workflowDefinitionSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_workflowDefinitionSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
