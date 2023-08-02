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
    AWS_RESILIENCEHUB_API ListAppAssessmentsResult();
    AWS_RESILIENCEHUB_API ListAppAssessmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListAppAssessmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The summaries for the specified assessments, returned as an object. This
     * object includes application versions, associated Amazon Resource Numbers (ARNs),
     * cost, messages, resiliency scores, and more.</p>
     */
    inline const Aws::Vector<AppAssessmentSummary>& GetAssessmentSummaries() const{ return m_assessmentSummaries; }

    /**
     * <p>The summaries for the specified assessments, returned as an object. This
     * object includes application versions, associated Amazon Resource Numbers (ARNs),
     * cost, messages, resiliency scores, and more.</p>
     */
    inline void SetAssessmentSummaries(const Aws::Vector<AppAssessmentSummary>& value) { m_assessmentSummaries = value; }

    /**
     * <p>The summaries for the specified assessments, returned as an object. This
     * object includes application versions, associated Amazon Resource Numbers (ARNs),
     * cost, messages, resiliency scores, and more.</p>
     */
    inline void SetAssessmentSummaries(Aws::Vector<AppAssessmentSummary>&& value) { m_assessmentSummaries = std::move(value); }

    /**
     * <p>The summaries for the specified assessments, returned as an object. This
     * object includes application versions, associated Amazon Resource Numbers (ARNs),
     * cost, messages, resiliency scores, and more.</p>
     */
    inline ListAppAssessmentsResult& WithAssessmentSummaries(const Aws::Vector<AppAssessmentSummary>& value) { SetAssessmentSummaries(value); return *this;}

    /**
     * <p>The summaries for the specified assessments, returned as an object. This
     * object includes application versions, associated Amazon Resource Numbers (ARNs),
     * cost, messages, resiliency scores, and more.</p>
     */
    inline ListAppAssessmentsResult& WithAssessmentSummaries(Aws::Vector<AppAssessmentSummary>&& value) { SetAssessmentSummaries(std::move(value)); return *this;}

    /**
     * <p>The summaries for the specified assessments, returned as an object. This
     * object includes application versions, associated Amazon Resource Numbers (ARNs),
     * cost, messages, resiliency scores, and more.</p>
     */
    inline ListAppAssessmentsResult& AddAssessmentSummaries(const AppAssessmentSummary& value) { m_assessmentSummaries.push_back(value); return *this; }

    /**
     * <p>The summaries for the specified assessments, returned as an object. This
     * object includes application versions, associated Amazon Resource Numbers (ARNs),
     * cost, messages, resiliency scores, and more.</p>
     */
    inline ListAppAssessmentsResult& AddAssessmentSummaries(AppAssessmentSummary&& value) { m_assessmentSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline ListAppAssessmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline ListAppAssessmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline ListAppAssessmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAppAssessmentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAppAssessmentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAppAssessmentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AppAssessmentSummary> m_assessmentSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
