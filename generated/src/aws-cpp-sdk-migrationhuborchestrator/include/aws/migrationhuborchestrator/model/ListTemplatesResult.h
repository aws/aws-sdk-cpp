/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhuborchestrator/model/TemplateSummary.h>
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
  class ListTemplatesResult
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API ListTemplatesResult() = default;
    AWS_MIGRATIONHUBORCHESTRATOR_API ListTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBORCHESTRATOR_API ListTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTemplatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary of the template.</p>
     */
    inline const Aws::Vector<TemplateSummary>& GetTemplateSummary() const { return m_templateSummary; }
    template<typename TemplateSummaryT = Aws::Vector<TemplateSummary>>
    void SetTemplateSummary(TemplateSummaryT&& value) { m_templateSummaryHasBeenSet = true; m_templateSummary = std::forward<TemplateSummaryT>(value); }
    template<typename TemplateSummaryT = Aws::Vector<TemplateSummary>>
    ListTemplatesResult& WithTemplateSummary(TemplateSummaryT&& value) { SetTemplateSummary(std::forward<TemplateSummaryT>(value)); return *this;}
    template<typename TemplateSummaryT = TemplateSummary>
    ListTemplatesResult& AddTemplateSummary(TemplateSummaryT&& value) { m_templateSummaryHasBeenSet = true; m_templateSummary.emplace_back(std::forward<TemplateSummaryT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTemplatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<TemplateSummary> m_templateSummary;
    bool m_templateSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
