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
    AWS_RESILIENCEHUB_API ListAppComponentRecommendationsResult() = default;
    AWS_RESILIENCEHUB_API ListAppComponentRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListAppComponentRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The recommendations for an Resilience Hub Application Component, returned as
     * an object. This object contains the names of the Application Components,
     * configuration recommendations, and recommendation statuses.</p>
     */
    inline const Aws::Vector<ComponentRecommendation>& GetComponentRecommendations() const { return m_componentRecommendations; }
    template<typename ComponentRecommendationsT = Aws::Vector<ComponentRecommendation>>
    void SetComponentRecommendations(ComponentRecommendationsT&& value) { m_componentRecommendationsHasBeenSet = true; m_componentRecommendations = std::forward<ComponentRecommendationsT>(value); }
    template<typename ComponentRecommendationsT = Aws::Vector<ComponentRecommendation>>
    ListAppComponentRecommendationsResult& WithComponentRecommendations(ComponentRecommendationsT&& value) { SetComponentRecommendations(std::forward<ComponentRecommendationsT>(value)); return *this;}
    template<typename ComponentRecommendationsT = ComponentRecommendation>
    ListAppComponentRecommendationsResult& AddComponentRecommendations(ComponentRecommendationsT&& value) { m_componentRecommendationsHasBeenSet = true; m_componentRecommendations.emplace_back(std::forward<ComponentRecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAppComponentRecommendationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAppComponentRecommendationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ComponentRecommendation> m_componentRecommendations;
    bool m_componentRecommendationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
