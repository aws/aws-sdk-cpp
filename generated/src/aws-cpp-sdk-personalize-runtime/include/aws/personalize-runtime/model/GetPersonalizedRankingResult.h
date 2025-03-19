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
    AWS_PERSONALIZERUNTIME_API GetPersonalizedRankingResult() = default;
    AWS_PERSONALIZERUNTIME_API GetPersonalizedRankingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZERUNTIME_API GetPersonalizedRankingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of items in order of most likely interest to the user. The maximum is
     * 500.</p>
     */
    inline const Aws::Vector<PredictedItem>& GetPersonalizedRanking() const { return m_personalizedRanking; }
    template<typename PersonalizedRankingT = Aws::Vector<PredictedItem>>
    void SetPersonalizedRanking(PersonalizedRankingT&& value) { m_personalizedRankingHasBeenSet = true; m_personalizedRanking = std::forward<PersonalizedRankingT>(value); }
    template<typename PersonalizedRankingT = Aws::Vector<PredictedItem>>
    GetPersonalizedRankingResult& WithPersonalizedRanking(PersonalizedRankingT&& value) { SetPersonalizedRanking(std::forward<PersonalizedRankingT>(value)); return *this;}
    template<typename PersonalizedRankingT = PredictedItem>
    GetPersonalizedRankingResult& AddPersonalizedRanking(PersonalizedRankingT&& value) { m_personalizedRankingHasBeenSet = true; m_personalizedRanking.emplace_back(std::forward<PersonalizedRankingT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
    template<typename RecommendationIdT = Aws::String>
    void SetRecommendationId(RecommendationIdT&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::forward<RecommendationIdT>(value); }
    template<typename RecommendationIdT = Aws::String>
    GetPersonalizedRankingResult& WithRecommendationId(RecommendationIdT&& value) { SetRecommendationId(std::forward<RecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPersonalizedRankingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PredictedItem> m_personalizedRanking;
    bool m_personalizedRankingHasBeenSet = false;

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeRuntime
} // namespace Aws
