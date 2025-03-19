/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhuborchestrator/model/TemplateStepGroupSummary.h>
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
  class ListTemplateStepGroupsResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API ListTemplateStepGroupsResult() = default;
    AWS_MIGRATIONHUBORCHESTRATOR_API ListTemplateStepGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API ListTemplateStepGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTemplateStepGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary of the step group in the template.</p>
     */
    inline const Aws::Vector<TemplateStepGroupSummary>& GetTemplateStepGroupSummary() const { return m_templateStepGroupSummary; }
    template<typename TemplateStepGroupSummaryT = Aws::Vector<TemplateStepGroupSummary>>
    void SetTemplateStepGroupSummary(TemplateStepGroupSummaryT&& value) { m_templateStepGroupSummaryHasBeenSet = true; m_templateStepGroupSummary = std::forward<TemplateStepGroupSummaryT>(value); }
    template<typename TemplateStepGroupSummaryT = Aws::Vector<TemplateStepGroupSummary>>
    ListTemplateStepGroupsResult& WithTemplateStepGroupSummary(TemplateStepGroupSummaryT&& value) { SetTemplateStepGroupSummary(std::forward<TemplateStepGroupSummaryT>(value)); return *this;}
    template<typename TemplateStepGroupSummaryT = TemplateStepGroupSummary>
    ListTemplateStepGroupsResult& AddTemplateStepGroupSummary(TemplateStepGroupSummaryT&& value) { m_templateStepGroupSummaryHasBeenSet = true; m_templateStepGroupSummary.emplace_back(std::forward<TemplateStepGroupSummaryT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTemplateStepGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<TemplateStepGroupSummary> m_templateStepGroupSummary;
    bool m_templateStepGroupSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
