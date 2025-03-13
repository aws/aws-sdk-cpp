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
    AWS_PERSONALIZERUNTIME_API GetActionRecommendationsResult() = default;
    AWS_PERSONALIZERUNTIME_API GetActionRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZERUNTIME_API GetActionRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of action recommendations sorted in descending order by prediction
     * score. There can be a maximum of 100 actions in the list. For information about
     * action scores, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/how-action-recommendation-scoring-works.html">How
     * action recommendation scoring works</a>.</p>
     */
    inline const Aws::Vector<PredictedAction>& GetActionList() const { return m_actionList; }
    template<typename ActionListT = Aws::Vector<PredictedAction>>
    void SetActionList(ActionListT&& value) { m_actionListHasBeenSet = true; m_actionList = std::forward<ActionListT>(value); }
    template<typename ActionListT = Aws::Vector<PredictedAction>>
    GetActionRecommendationsResult& WithActionList(ActionListT&& value) { SetActionList(std::forward<ActionListT>(value)); return *this;}
    template<typename ActionListT = PredictedAction>
    GetActionRecommendationsResult& AddActionList(ActionListT&& value) { m_actionListHasBeenSet = true; m_actionList.emplace_back(std::forward<ActionListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
    template<typename RecommendationIdT = Aws::String>
    void SetRecommendationId(RecommendationIdT&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::forward<RecommendationIdT>(value); }
    template<typename RecommendationIdT = Aws::String>
    GetActionRecommendationsResult& WithRecommendationId(RecommendationIdT&& value) { SetRecommendationId(std::forward<RecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetActionRecommendationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PredictedAction> m_actionList;
    bool m_actionListHasBeenSet = false;

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeRuntime
} // namespace Aws
