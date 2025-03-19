/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhuborchestrator/model/MigrationWorkflowSummary.h>
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
  class ListWorkflowsResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API ListWorkflowsResult() = default;
    AWS_MIGRATIONHUBORCHESTRATOR_API ListWorkflowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API ListWorkflowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWorkflowsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary of the migration workflow.</p>
     */
    inline const Aws::Vector<MigrationWorkflowSummary>& GetMigrationWorkflowSummary() const { return m_migrationWorkflowSummary; }
    template<typename MigrationWorkflowSummaryT = Aws::Vector<MigrationWorkflowSummary>>
    void SetMigrationWorkflowSummary(MigrationWorkflowSummaryT&& value) { m_migrationWorkflowSummaryHasBeenSet = true; m_migrationWorkflowSummary = std::forward<MigrationWorkflowSummaryT>(value); }
    template<typename MigrationWorkflowSummaryT = Aws::Vector<MigrationWorkflowSummary>>
    ListWorkflowsResult& WithMigrationWorkflowSummary(MigrationWorkflowSummaryT&& value) { SetMigrationWorkflowSummary(std::forward<MigrationWorkflowSummaryT>(value)); return *this;}
    template<typename MigrationWorkflowSummaryT = MigrationWorkflowSummary>
    ListWorkflowsResult& AddMigrationWorkflowSummary(MigrationWorkflowSummaryT&& value) { m_migrationWorkflowSummaryHasBeenSet = true; m_migrationWorkflowSummary.emplace_back(std::forward<MigrationWorkflowSummaryT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWorkflowsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<MigrationWorkflowSummary> m_migrationWorkflowSummary;
    bool m_migrationWorkflowSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
