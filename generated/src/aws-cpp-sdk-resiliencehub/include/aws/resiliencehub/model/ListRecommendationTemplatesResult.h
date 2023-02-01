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
    AWS_RESILIENCEHUB_API ListRecommendationTemplatesResult();
    AWS_RESILIENCEHUB_API ListRecommendationTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListRecommendationTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListRecommendationTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListRecommendationTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListRecommendationTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The recommendation templates for the Resilience Hub applications.</p>
     */
    inline const Aws::Vector<RecommendationTemplate>& GetRecommendationTemplates() const{ return m_recommendationTemplates; }

    /**
     * <p>The recommendation templates for the Resilience Hub applications.</p>
     */
    inline void SetRecommendationTemplates(const Aws::Vector<RecommendationTemplate>& value) { m_recommendationTemplates = value; }

    /**
     * <p>The recommendation templates for the Resilience Hub applications.</p>
     */
    inline void SetRecommendationTemplates(Aws::Vector<RecommendationTemplate>&& value) { m_recommendationTemplates = std::move(value); }

    /**
     * <p>The recommendation templates for the Resilience Hub applications.</p>
     */
    inline ListRecommendationTemplatesResult& WithRecommendationTemplates(const Aws::Vector<RecommendationTemplate>& value) { SetRecommendationTemplates(value); return *this;}

    /**
     * <p>The recommendation templates for the Resilience Hub applications.</p>
     */
    inline ListRecommendationTemplatesResult& WithRecommendationTemplates(Aws::Vector<RecommendationTemplate>&& value) { SetRecommendationTemplates(std::move(value)); return *this;}

    /**
     * <p>The recommendation templates for the Resilience Hub applications.</p>
     */
    inline ListRecommendationTemplatesResult& AddRecommendationTemplates(const RecommendationTemplate& value) { m_recommendationTemplates.push_back(value); return *this; }

    /**
     * <p>The recommendation templates for the Resilience Hub applications.</p>
     */
    inline ListRecommendationTemplatesResult& AddRecommendationTemplates(RecommendationTemplate&& value) { m_recommendationTemplates.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<RecommendationTemplate> m_recommendationTemplates;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
