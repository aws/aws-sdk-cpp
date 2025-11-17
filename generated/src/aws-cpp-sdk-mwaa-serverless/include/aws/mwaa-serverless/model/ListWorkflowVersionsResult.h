/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>
#include <aws/mwaa-serverless/model/WorkflowVersionSummary.h>

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
class ListWorkflowVersionsResult {
 public:
  AWS_MWAASERVERLESS_API ListWorkflowVersionsResult() = default;
  AWS_MWAASERVERLESS_API ListWorkflowVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MWAASERVERLESS_API ListWorkflowVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of workflow version summaries for the specified workflow.</p>
   */
  inline const Aws::Vector<WorkflowVersionSummary>& GetWorkflowVersions() const { return m_workflowVersions; }
  template <typename WorkflowVersionsT = Aws::Vector<WorkflowVersionSummary>>
  void SetWorkflowVersions(WorkflowVersionsT&& value) {
    m_workflowVersionsHasBeenSet = true;
    m_workflowVersions = std::forward<WorkflowVersionsT>(value);
  }
  template <typename WorkflowVersionsT = Aws::Vector<WorkflowVersionSummary>>
  ListWorkflowVersionsResult& WithWorkflowVersions(WorkflowVersionsT&& value) {
    SetWorkflowVersions(std::forward<WorkflowVersionsT>(value));
    return *this;
  }
  template <typename WorkflowVersionsT = WorkflowVersionSummary>
  ListWorkflowVersionsResult& AddWorkflowVersions(WorkflowVersionsT&& value) {
    m_workflowVersionsHasBeenSet = true;
    m_workflowVersions.emplace_back(std::forward<WorkflowVersionsT>(value));
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
  ListWorkflowVersionsResult& WithNextToken(NextTokenT&& value) {
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
  ListWorkflowVersionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<WorkflowVersionSummary> m_workflowVersions;
  bool m_workflowVersionsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
