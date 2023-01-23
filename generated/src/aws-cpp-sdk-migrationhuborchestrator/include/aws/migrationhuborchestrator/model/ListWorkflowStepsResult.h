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
    AWS_MIGRATIONHUBORCHESTRATOR_API ListWorkflowStepsResult();
    AWS_MIGRATIONHUBORCHESTRATOR_API ListWorkflowStepsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API ListWorkflowStepsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline ListWorkflowStepsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListWorkflowStepsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListWorkflowStepsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The summary of steps in a migration workflow.</p>
     */
    inline const Aws::Vector<WorkflowStepSummary>& GetWorkflowStepsSummary() const{ return m_workflowStepsSummary; }

    /**
     * <p>The summary of steps in a migration workflow.</p>
     */
    inline void SetWorkflowStepsSummary(const Aws::Vector<WorkflowStepSummary>& value) { m_workflowStepsSummary = value; }

    /**
     * <p>The summary of steps in a migration workflow.</p>
     */
    inline void SetWorkflowStepsSummary(Aws::Vector<WorkflowStepSummary>&& value) { m_workflowStepsSummary = std::move(value); }

    /**
     * <p>The summary of steps in a migration workflow.</p>
     */
    inline ListWorkflowStepsResult& WithWorkflowStepsSummary(const Aws::Vector<WorkflowStepSummary>& value) { SetWorkflowStepsSummary(value); return *this;}

    /**
     * <p>The summary of steps in a migration workflow.</p>
     */
    inline ListWorkflowStepsResult& WithWorkflowStepsSummary(Aws::Vector<WorkflowStepSummary>&& value) { SetWorkflowStepsSummary(std::move(value)); return *this;}

    /**
     * <p>The summary of steps in a migration workflow.</p>
     */
    inline ListWorkflowStepsResult& AddWorkflowStepsSummary(const WorkflowStepSummary& value) { m_workflowStepsSummary.push_back(value); return *this; }

    /**
     * <p>The summary of steps in a migration workflow.</p>
     */
    inline ListWorkflowStepsResult& AddWorkflowStepsSummary(WorkflowStepSummary&& value) { m_workflowStepsSummary.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<WorkflowStepSummary> m_workflowStepsSummary;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
