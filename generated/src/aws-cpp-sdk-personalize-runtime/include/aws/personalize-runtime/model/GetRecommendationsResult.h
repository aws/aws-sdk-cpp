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
  class GetRecommendationsResult
  {
  public:
    AWS_PERSONALIZERUNTIME_API GetRecommendationsResult() = default;
    AWS_PERSONALIZERUNTIME_API GetRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZERUNTIME_API GetRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of recommendations sorted in descending order by prediction score.
     * There can be a maximum of 500 items in the list.</p>
     */
    inline const Aws::Vector<PredictedItem>& GetItemList() const { return m_itemList; }
    template<typename ItemListT = Aws::Vector<PredictedItem>>
    void SetItemList(ItemListT&& value) { m_itemListHasBeenSet = true; m_itemList = std::forward<ItemListT>(value); }
    template<typename ItemListT = Aws::Vector<PredictedItem>>
    GetRecommendationsResult& WithItemList(ItemListT&& value) { SetItemList(std::forward<ItemListT>(value)); return *this;}
    template<typename ItemListT = PredictedItem>
    GetRecommendationsResult& AddItemList(ItemListT&& value) { m_itemListHasBeenSet = true; m_itemList.emplace_back(std::forward<ItemListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
    template<typename RecommendationIdT = Aws::String>
    void SetRecommendationId(RecommendationIdT&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::forward<RecommendationIdT>(value); }
    template<typename RecommendationIdT = Aws::String>
    GetRecommendationsResult& WithRecommendationId(RecommendationIdT&& value) { SetRecommendationId(std::forward<RecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRecommendationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PredictedItem> m_itemList;
    bool m_itemListHasBeenSet = false;

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeRuntime
} // namespace Aws
