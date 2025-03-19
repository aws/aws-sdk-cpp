/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/AssessmentSummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{
  class GetPortfolioSummaryResult
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetPortfolioSummaryResult() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetPortfolioSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetPortfolioSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An assessment summary for the portfolio including the number of servers to
     * rehost and the overall number of anti-patterns. </p>
     */
    inline const AssessmentSummary& GetAssessmentSummary() const { return m_assessmentSummary; }
    template<typename AssessmentSummaryT = AssessmentSummary>
    void SetAssessmentSummary(AssessmentSummaryT&& value) { m_assessmentSummaryHasBeenSet = true; m_assessmentSummary = std::forward<AssessmentSummaryT>(value); }
    template<typename AssessmentSummaryT = AssessmentSummary>
    GetPortfolioSummaryResult& WithAssessmentSummary(AssessmentSummaryT&& value) { SetAssessmentSummary(std::forward<AssessmentSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPortfolioSummaryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AssessmentSummary m_assessmentSummary;
    bool m_assessmentSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
