/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/ComponentRecommendation.h>
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
  class ListAppComponentRecommendationsResult
  {
  public:
    AWS_RESILIENCEHUB_API ListAppComponentRecommendationsResult();
    AWS_RESILIENCEHUB_API ListAppComponentRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListAppComponentRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The recommendations for an Resilience Hub Application Component, returned as
     * an object. This object contains the names of the Application Components,
     * configuration recommendations, and recommendation statuses.</p>
     */
    inline const Aws::Vector<ComponentRecommendation>& GetComponentRecommendations() const{ return m_componentRecommendations; }

    /**
     * <p>The recommendations for an Resilience Hub Application Component, returned as
     * an object. This object contains the names of the Application Components,
     * configuration recommendations, and recommendation statuses.</p>
     */
    inline void SetComponentRecommendations(const Aws::Vector<ComponentRecommendation>& value) { m_componentRecommendations = value; }

    /**
     * <p>The recommendations for an Resilience Hub Application Component, returned as
     * an object. This object contains the names of the Application Components,
     * configuration recommendations, and recommendation statuses.</p>
     */
    inline void SetComponentRecommendations(Aws::Vector<ComponentRecommendation>&& value) { m_componentRecommendations = std::move(value); }

    /**
     * <p>The recommendations for an Resilience Hub Application Component, returned as
     * an object. This object contains the names of the Application Components,
     * configuration recommendations, and recommendation statuses.</p>
     */
    inline ListAppComponentRecommendationsResult& WithComponentRecommendations(const Aws::Vector<ComponentRecommendation>& value) { SetComponentRecommendations(value); return *this;}

    /**
     * <p>The recommendations for an Resilience Hub Application Component, returned as
     * an object. This object contains the names of the Application Components,
     * configuration recommendations, and recommendation statuses.</p>
     */
    inline ListAppComponentRecommendationsResult& WithComponentRecommendations(Aws::Vector<ComponentRecommendation>&& value) { SetComponentRecommendations(std::move(value)); return *this;}

    /**
     * <p>The recommendations for an Resilience Hub Application Component, returned as
     * an object. This object contains the names of the Application Components,
     * configuration recommendations, and recommendation statuses.</p>
     */
    inline ListAppComponentRecommendationsResult& AddComponentRecommendations(const ComponentRecommendation& value) { m_componentRecommendations.push_back(value); return *this; }

    /**
     * <p>The recommendations for an Resilience Hub Application Component, returned as
     * an object. This object contains the names of the Application Components,
     * configuration recommendations, and recommendation statuses.</p>
     */
    inline ListAppComponentRecommendationsResult& AddComponentRecommendations(ComponentRecommendation&& value) { m_componentRecommendations.push_back(std::move(value)); return *this; }


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
    inline ListAppComponentRecommendationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline ListAppComponentRecommendationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline ListAppComponentRecommendationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAppComponentRecommendationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAppComponentRecommendationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAppComponentRecommendationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ComponentRecommendation> m_componentRecommendations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
