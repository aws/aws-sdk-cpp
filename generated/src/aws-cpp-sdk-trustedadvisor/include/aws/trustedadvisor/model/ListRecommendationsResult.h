/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/trustedadvisor/model/RecommendationSummary.h>
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
namespace TrustedAdvisor
{
namespace Model
{
  class ListRecommendationsResult
  {
  public:
    AWS_TRUSTEDADVISOR_API ListRecommendationsResult();
    AWS_TRUSTEDADVISOR_API ListRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRUSTEDADVISOR_API ListRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline ListRecommendationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline ListRecommendationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline ListRecommendationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of Recommendations</p>
     */
    inline const Aws::Vector<RecommendationSummary>& GetRecommendationSummaries() const{ return m_recommendationSummaries; }

    /**
     * <p>The list of Recommendations</p>
     */
    inline void SetRecommendationSummaries(const Aws::Vector<RecommendationSummary>& value) { m_recommendationSummaries = value; }

    /**
     * <p>The list of Recommendations</p>
     */
    inline void SetRecommendationSummaries(Aws::Vector<RecommendationSummary>&& value) { m_recommendationSummaries = std::move(value); }

    /**
     * <p>The list of Recommendations</p>
     */
    inline ListRecommendationsResult& WithRecommendationSummaries(const Aws::Vector<RecommendationSummary>& value) { SetRecommendationSummaries(value); return *this;}

    /**
     * <p>The list of Recommendations</p>
     */
    inline ListRecommendationsResult& WithRecommendationSummaries(Aws::Vector<RecommendationSummary>&& value) { SetRecommendationSummaries(std::move(value)); return *this;}

    /**
     * <p>The list of Recommendations</p>
     */
    inline ListRecommendationsResult& AddRecommendationSummaries(const RecommendationSummary& value) { m_recommendationSummaries.push_back(value); return *this; }

    /**
     * <p>The list of Recommendations</p>
     */
    inline ListRecommendationsResult& AddRecommendationSummaries(RecommendationSummary&& value) { m_recommendationSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListRecommendationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListRecommendationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListRecommendationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<RecommendationSummary> m_recommendationSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
