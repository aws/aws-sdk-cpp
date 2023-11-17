/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/trustedadvisor/model/RecommendationResourceSummary.h>
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
  class ListRecommendationResourcesResult
  {
  public:
    AWS_TRUSTEDADVISOR_API ListRecommendationResourcesResult();
    AWS_TRUSTEDADVISOR_API ListRecommendationResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRUSTEDADVISOR_API ListRecommendationResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListRecommendationResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline ListRecommendationResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline ListRecommendationResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of Recommendation Resources</p>
     */
    inline const Aws::Vector<RecommendationResourceSummary>& GetRecommendationResourceSummaries() const{ return m_recommendationResourceSummaries; }

    /**
     * <p>A list of Recommendation Resources</p>
     */
    inline void SetRecommendationResourceSummaries(const Aws::Vector<RecommendationResourceSummary>& value) { m_recommendationResourceSummaries = value; }

    /**
     * <p>A list of Recommendation Resources</p>
     */
    inline void SetRecommendationResourceSummaries(Aws::Vector<RecommendationResourceSummary>&& value) { m_recommendationResourceSummaries = std::move(value); }

    /**
     * <p>A list of Recommendation Resources</p>
     */
    inline ListRecommendationResourcesResult& WithRecommendationResourceSummaries(const Aws::Vector<RecommendationResourceSummary>& value) { SetRecommendationResourceSummaries(value); return *this;}

    /**
     * <p>A list of Recommendation Resources</p>
     */
    inline ListRecommendationResourcesResult& WithRecommendationResourceSummaries(Aws::Vector<RecommendationResourceSummary>&& value) { SetRecommendationResourceSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of Recommendation Resources</p>
     */
    inline ListRecommendationResourcesResult& AddRecommendationResourceSummaries(const RecommendationResourceSummary& value) { m_recommendationResourceSummaries.push_back(value); return *this; }

    /**
     * <p>A list of Recommendation Resources</p>
     */
    inline ListRecommendationResourcesResult& AddRecommendationResourceSummaries(RecommendationResourceSummary&& value) { m_recommendationResourceSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListRecommendationResourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListRecommendationResourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListRecommendationResourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<RecommendationResourceSummary> m_recommendationResourceSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
