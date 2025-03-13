/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhuborchestrator/model/WorkflowStepGroupSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MigrationHubOrchestrator
{
namespace Model
{
  class ListWorkflowStepGroupsResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API ListWorkflowStepGroupsResult() = default;
    AWS_MIGRATIONHUBORCHESTRATOR_API ListWorkflowStepGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API ListWorkflowStepGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWorkflowStepGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary of step groups in a migration workflow.</p>
     */
    inline const Aws::Vector<WorkflowStepGroupSummary>& GetWorkflowStepGroupsSummary() const { return m_workflowStepGroupsSummary; }
    template<typename WorkflowStepGroupsSummaryT = Aws::Vector<WorkflowStepGroupSummary>>
    void SetWorkflowStepGroupsSummary(WorkflowStepGroupsSummaryT&& value) { m_workflowStepGroupsSummaryHasBeenSet = true; m_workflowStepGroupsSummary = std::forward<WorkflowStepGroupsSummaryT>(value); }
    template<typename WorkflowStepGroupsSummaryT = Aws::Vector<WorkflowStepGroupSummary>>
    ListWorkflowStepGroupsResult& WithWorkflowStepGroupsSummary(WorkflowStepGroupsSummaryT&& value) { SetWorkflowStepGroupsSummary(std::forward<WorkflowStepGroupsSummaryT>(value)); return *this;}
    template<typename WorkflowStepGroupsSummaryT = WorkflowStepGroupSummary>
    ListWorkflowStepGroupsResult& AddWorkflowStepGroupsSummary(WorkflowStepGroupsSummaryT&& value) { m_workflowStepGroupsSummaryHasBeenSet = true; m_workflowStepGroupsSummary.emplace_back(std::forward<WorkflowStepGroupsSummaryT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWorkflowStepGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<WorkflowStepGroupSummary> m_workflowStepGroupsSummary;
    bool m_workflowStepGroupsSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
