/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhuborchestrator/model/WorkflowStepSummary.h>
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
  class ListWorkflowStepsResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API ListWorkflowStepsResult() = default;
    AWS_MIGRATIONHUBORCHESTRATOR_API ListWorkflowStepsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API ListWorkflowStepsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWorkflowStepsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary of steps in a migration workflow.</p>
     */
    inline const Aws::Vector<WorkflowStepSummary>& GetWorkflowStepsSummary() const { return m_workflowStepsSummary; }
    template<typename WorkflowStepsSummaryT = Aws::Vector<WorkflowStepSummary>>
    void SetWorkflowStepsSummary(WorkflowStepsSummaryT&& value) { m_workflowStepsSummaryHasBeenSet = true; m_workflowStepsSummary = std::forward<WorkflowStepsSummaryT>(value); }
    template<typename WorkflowStepsSummaryT = Aws::Vector<WorkflowStepSummary>>
    ListWorkflowStepsResult& WithWorkflowStepsSummary(WorkflowStepsSummaryT&& value) { SetWorkflowStepsSummary(std::forward<WorkflowStepsSummaryT>(value)); return *this;}
    template<typename WorkflowStepsSummaryT = WorkflowStepSummary>
    ListWorkflowStepsResult& AddWorkflowStepsSummary(WorkflowStepsSummaryT&& value) { m_workflowStepsSummaryHasBeenSet = true; m_workflowStepsSummary.emplace_back(std::forward<WorkflowStepsSummaryT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWorkflowStepsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<WorkflowStepSummary> m_workflowStepsSummary;
    bool m_workflowStepsSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
