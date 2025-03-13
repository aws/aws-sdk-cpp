/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/AppAssessmentSummary.h>
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
namespace ResilienceHub
{
namespace Model
{
  class ListAppAssessmentsResult
  {
  public:
    AWS_RESILIENCEHUB_API ListAppAssessmentsResult() = default;
    AWS_RESILIENCEHUB_API ListAppAssessmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListAppAssessmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summaries for the specified assessments, returned as an object. This
     * object includes application versions, associated Amazon Resource Numbers (ARNs),
     * cost, messages, resiliency scores, and more.</p>
     */
    inline const Aws::Vector<AppAssessmentSummary>& GetAssessmentSummaries() const { return m_assessmentSummaries; }
    template<typename AssessmentSummariesT = Aws::Vector<AppAssessmentSummary>>
    void SetAssessmentSummaries(AssessmentSummariesT&& value) { m_assessmentSummariesHasBeenSet = true; m_assessmentSummaries = std::forward<AssessmentSummariesT>(value); }
    template<typename AssessmentSummariesT = Aws::Vector<AppAssessmentSummary>>
    ListAppAssessmentsResult& WithAssessmentSummaries(AssessmentSummariesT&& value) { SetAssessmentSummaries(std::forward<AssessmentSummariesT>(value)); return *this;}
    template<typename AssessmentSummariesT = AppAssessmentSummary>
    ListAppAssessmentsResult& AddAssessmentSummaries(AssessmentSummariesT&& value) { m_assessmentSummariesHasBeenSet = true; m_assessmentSummaries.emplace_back(std::forward<AssessmentSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAppAssessmentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAppAssessmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AppAssessmentSummary> m_assessmentSummaries;
    bool m_assessmentSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
