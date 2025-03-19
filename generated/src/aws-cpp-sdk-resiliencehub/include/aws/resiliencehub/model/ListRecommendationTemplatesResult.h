/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/RecommendationTemplate.h>
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
  class ListRecommendationTemplatesResult
  {
  public:
    AWS_RESILIENCEHUB_API ListRecommendationTemplatesResult() = default;
    AWS_RESILIENCEHUB_API ListRecommendationTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListRecommendationTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRecommendationTemplatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommendation templates for the Resilience Hub applications.</p>
     */
    inline const Aws::Vector<RecommendationTemplate>& GetRecommendationTemplates() const { return m_recommendationTemplates; }
    template<typename RecommendationTemplatesT = Aws::Vector<RecommendationTemplate>>
    void SetRecommendationTemplates(RecommendationTemplatesT&& value) { m_recommendationTemplatesHasBeenSet = true; m_recommendationTemplates = std::forward<RecommendationTemplatesT>(value); }
    template<typename RecommendationTemplatesT = Aws::Vector<RecommendationTemplate>>
    ListRecommendationTemplatesResult& WithRecommendationTemplates(RecommendationTemplatesT&& value) { SetRecommendationTemplates(std::forward<RecommendationTemplatesT>(value)); return *this;}
    template<typename RecommendationTemplatesT = RecommendationTemplate>
    ListRecommendationTemplatesResult& AddRecommendationTemplates(RecommendationTemplatesT&& value) { m_recommendationTemplatesHasBeenSet = true; m_recommendationTemplates.emplace_back(std::forward<RecommendationTemplatesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRecommendationTemplatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RecommendationTemplate> m_recommendationTemplates;
    bool m_recommendationTemplatesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
