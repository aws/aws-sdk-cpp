/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-runtime/PersonalizeRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize-runtime/model/PredictedItem.h>
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
namespace PersonalizeRuntime
{
namespace Model
{
  class GetPersonalizedRankingResult
  {
  public:
    AWS_PERSONALIZERUNTIME_API GetPersonalizedRankingResult();
    AWS_PERSONALIZERUNTIME_API GetPersonalizedRankingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZERUNTIME_API GetPersonalizedRankingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of items in order of most likely interest to the user. The maximum is
     * 500.</p>
     */
    inline const Aws::Vector<PredictedItem>& GetPersonalizedRanking() const{ return m_personalizedRanking; }

    /**
     * <p>A list of items in order of most likely interest to the user. The maximum is
     * 500.</p>
     */
    inline void SetPersonalizedRanking(const Aws::Vector<PredictedItem>& value) { m_personalizedRanking = value; }

    /**
     * <p>A list of items in order of most likely interest to the user. The maximum is
     * 500.</p>
     */
    inline void SetPersonalizedRanking(Aws::Vector<PredictedItem>&& value) { m_personalizedRanking = std::move(value); }

    /**
     * <p>A list of items in order of most likely interest to the user. The maximum is
     * 500.</p>
     */
    inline GetPersonalizedRankingResult& WithPersonalizedRanking(const Aws::Vector<PredictedItem>& value) { SetPersonalizedRanking(value); return *this;}

    /**
     * <p>A list of items in order of most likely interest to the user. The maximum is
     * 500.</p>
     */
    inline GetPersonalizedRankingResult& WithPersonalizedRanking(Aws::Vector<PredictedItem>&& value) { SetPersonalizedRanking(std::move(value)); return *this;}

    /**
     * <p>A list of items in order of most likely interest to the user. The maximum is
     * 500.</p>
     */
    inline GetPersonalizedRankingResult& AddPersonalizedRanking(const PredictedItem& value) { m_personalizedRanking.push_back(value); return *this; }

    /**
     * <p>A list of items in order of most likely interest to the user. The maximum is
     * 500.</p>
     */
    inline GetPersonalizedRankingResult& AddPersonalizedRanking(PredictedItem&& value) { m_personalizedRanking.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }

    /**
     * <p>The ID of the recommendation.</p>
     */
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationId = value; }

    /**
     * <p>The ID of the recommendation.</p>
     */
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationId = std::move(value); }

    /**
     * <p>The ID of the recommendation.</p>
     */
    inline void SetRecommendationId(const char* value) { m_recommendationId.assign(value); }

    /**
     * <p>The ID of the recommendation.</p>
     */
    inline GetPersonalizedRankingResult& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}

    /**
     * <p>The ID of the recommendation.</p>
     */
    inline GetPersonalizedRankingResult& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the recommendation.</p>
     */
    inline GetPersonalizedRankingResult& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}

  private:

    Aws::Vector<PredictedItem> m_personalizedRanking;

    Aws::String m_recommendationId;
  };

} // namespace Model
} // namespace PersonalizeRuntime
} // namespace Aws
