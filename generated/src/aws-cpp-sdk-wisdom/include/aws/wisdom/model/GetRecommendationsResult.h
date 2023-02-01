/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wisdom/model/RecommendationData.h>
#include <aws/wisdom/model/RecommendationTrigger.h>
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
namespace ConnectWisdomService
{
namespace Model
{
  class GetRecommendationsResult
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API GetRecommendationsResult();
    AWS_CONNECTWISDOMSERVICE_API GetRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTWISDOMSERVICE_API GetRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The recommendations.</p>
     */
    inline const Aws::Vector<RecommendationData>& GetRecommendations() const{ return m_recommendations; }

    /**
     * <p>The recommendations.</p>
     */
    inline void SetRecommendations(const Aws::Vector<RecommendationData>& value) { m_recommendations = value; }

    /**
     * <p>The recommendations.</p>
     */
    inline void SetRecommendations(Aws::Vector<RecommendationData>&& value) { m_recommendations = std::move(value); }

    /**
     * <p>The recommendations.</p>
     */
    inline GetRecommendationsResult& WithRecommendations(const Aws::Vector<RecommendationData>& value) { SetRecommendations(value); return *this;}

    /**
     * <p>The recommendations.</p>
     */
    inline GetRecommendationsResult& WithRecommendations(Aws::Vector<RecommendationData>&& value) { SetRecommendations(std::move(value)); return *this;}

    /**
     * <p>The recommendations.</p>
     */
    inline GetRecommendationsResult& AddRecommendations(const RecommendationData& value) { m_recommendations.push_back(value); return *this; }

    /**
     * <p>The recommendations.</p>
     */
    inline GetRecommendationsResult& AddRecommendations(RecommendationData&& value) { m_recommendations.push_back(std::move(value)); return *this; }


    /**
     * <p>The triggers corresponding to recommendations.</p>
     */
    inline const Aws::Vector<RecommendationTrigger>& GetTriggers() const{ return m_triggers; }

    /**
     * <p>The triggers corresponding to recommendations.</p>
     */
    inline void SetTriggers(const Aws::Vector<RecommendationTrigger>& value) { m_triggers = value; }

    /**
     * <p>The triggers corresponding to recommendations.</p>
     */
    inline void SetTriggers(Aws::Vector<RecommendationTrigger>&& value) { m_triggers = std::move(value); }

    /**
     * <p>The triggers corresponding to recommendations.</p>
     */
    inline GetRecommendationsResult& WithTriggers(const Aws::Vector<RecommendationTrigger>& value) { SetTriggers(value); return *this;}

    /**
     * <p>The triggers corresponding to recommendations.</p>
     */
    inline GetRecommendationsResult& WithTriggers(Aws::Vector<RecommendationTrigger>&& value) { SetTriggers(std::move(value)); return *this;}

    /**
     * <p>The triggers corresponding to recommendations.</p>
     */
    inline GetRecommendationsResult& AddTriggers(const RecommendationTrigger& value) { m_triggers.push_back(value); return *this; }

    /**
     * <p>The triggers corresponding to recommendations.</p>
     */
    inline GetRecommendationsResult& AddTriggers(RecommendationTrigger&& value) { m_triggers.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<RecommendationData> m_recommendations;

    Aws::Vector<RecommendationTrigger> m_triggers;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
