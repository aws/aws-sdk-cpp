/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhuborchestrator/model/TemplateStepSummary.h>
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
  class ListTemplateStepsResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API ListTemplateStepsResult() = default;
    AWS_MIGRATIONHUBORCHESTRATOR_API ListTemplateStepsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API ListTemplateStepsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTemplateStepsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of summaries of steps in a template.</p>
     */
    inline const Aws::Vector<TemplateStepSummary>& GetTemplateStepSummaryList() const { return m_templateStepSummaryList; }
    template<typename TemplateStepSummaryListT = Aws::Vector<TemplateStepSummary>>
    void SetTemplateStepSummaryList(TemplateStepSummaryListT&& value) { m_templateStepSummaryListHasBeenSet = true; m_templateStepSummaryList = std::forward<TemplateStepSummaryListT>(value); }
    template<typename TemplateStepSummaryListT = Aws::Vector<TemplateStepSummary>>
    ListTemplateStepsResult& WithTemplateStepSummaryList(TemplateStepSummaryListT&& value) { SetTemplateStepSummaryList(std::forward<TemplateStepSummaryListT>(value)); return *this;}
    template<typename TemplateStepSummaryListT = TemplateStepSummary>
    ListTemplateStepsResult& AddTemplateStepSummaryList(TemplateStepSummaryListT&& value) { m_templateStepSummaryListHasBeenSet = true; m_templateStepSummaryList.emplace_back(std::forward<TemplateStepSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTemplateStepsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<TemplateStepSummary> m_templateStepSummaryList;
    bool m_templateStepSummaryListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
