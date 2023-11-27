/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-runtime/PersonalizeRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize-runtime/model/PredictedAction.h>
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
  class GetActionRecommendationsResult
  {
  public:
    AWS_PERSONALIZERUNTIME_API GetActionRecommendationsResult();
    AWS_PERSONALIZERUNTIME_API GetActionRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZERUNTIME_API GetActionRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of action recommendations sorted in descending order by prediction
     * score. There can be a maximum of 100 actions in the list. For information about
     * action scores, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/how-action-recommendation-scoring-works.html">How
     * action recommendation scoring works</a>.</p>
     */
    inline const Aws::Vector<PredictedAction>& GetActionList() const{ return m_actionList; }

    /**
     * <p>A list of action recommendations sorted in descending order by prediction
     * score. There can be a maximum of 100 actions in the list. For information about
     * action scores, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/how-action-recommendation-scoring-works.html">How
     * action recommendation scoring works</a>.</p>
     */
    inline void SetActionList(const Aws::Vector<PredictedAction>& value) { m_actionList = value; }

    /**
     * <p>A list of action recommendations sorted in descending order by prediction
     * score. There can be a maximum of 100 actions in the list. For information about
     * action scores, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/how-action-recommendation-scoring-works.html">How
     * action recommendation scoring works</a>.</p>
     */
    inline void SetActionList(Aws::Vector<PredictedAction>&& value) { m_actionList = std::move(value); }

    /**
     * <p>A list of action recommendations sorted in descending order by prediction
     * score. There can be a maximum of 100 actions in the list. For information about
     * action scores, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/how-action-recommendation-scoring-works.html">How
     * action recommendation scoring works</a>.</p>
     */
    inline GetActionRecommendationsResult& WithActionList(const Aws::Vector<PredictedAction>& value) { SetActionList(value); return *this;}

    /**
     * <p>A list of action recommendations sorted in descending order by prediction
     * score. There can be a maximum of 100 actions in the list. For information about
     * action scores, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/how-action-recommendation-scoring-works.html">How
     * action recommendation scoring works</a>.</p>
     */
    inline GetActionRecommendationsResult& WithActionList(Aws::Vector<PredictedAction>&& value) { SetActionList(std::move(value)); return *this;}

    /**
     * <p>A list of action recommendations sorted in descending order by prediction
     * score. There can be a maximum of 100 actions in the list. For information about
     * action scores, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/how-action-recommendation-scoring-works.html">How
     * action recommendation scoring works</a>.</p>
     */
    inline GetActionRecommendationsResult& AddActionList(const PredictedAction& value) { m_actionList.push_back(value); return *this; }

    /**
     * <p>A list of action recommendations sorted in descending order by prediction
     * score. There can be a maximum of 100 actions in the list. For information about
     * action scores, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/how-action-recommendation-scoring-works.html">How
     * action recommendation scoring works</a>.</p>
     */
    inline GetActionRecommendationsResult& AddActionList(PredictedAction&& value) { m_actionList.push_back(std::move(value)); return *this; }


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
    inline GetActionRecommendationsResult& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}

    /**
     * <p>The ID of the recommendation.</p>
     */
    inline GetActionRecommendationsResult& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the recommendation.</p>
     */
    inline GetActionRecommendationsResult& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetActionRecommendationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetActionRecommendationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetActionRecommendationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<PredictedAction> m_actionList;

    Aws::String m_recommendationId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PersonalizeRuntime
} // namespace Aws
