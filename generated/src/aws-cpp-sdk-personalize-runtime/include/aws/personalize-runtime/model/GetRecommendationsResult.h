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
    AWS_PERSONALIZERUNTIME_API GetRecommendationsResult();
    AWS_PERSONALIZERUNTIME_API GetRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZERUNTIME_API GetRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of recommendations sorted in descending order by prediction score.
     * There can be a maximum of 500 items in the list.</p>
     */
    inline const Aws::Vector<PredictedItem>& GetItemList() const{ return m_itemList; }

    /**
     * <p>A list of recommendations sorted in descending order by prediction score.
     * There can be a maximum of 500 items in the list.</p>
     */
    inline void SetItemList(const Aws::Vector<PredictedItem>& value) { m_itemList = value; }

    /**
     * <p>A list of recommendations sorted in descending order by prediction score.
     * There can be a maximum of 500 items in the list.</p>
     */
    inline void SetItemList(Aws::Vector<PredictedItem>&& value) { m_itemList = std::move(value); }

    /**
     * <p>A list of recommendations sorted in descending order by prediction score.
     * There can be a maximum of 500 items in the list.</p>
     */
    inline GetRecommendationsResult& WithItemList(const Aws::Vector<PredictedItem>& value) { SetItemList(value); return *this;}

    /**
     * <p>A list of recommendations sorted in descending order by prediction score.
     * There can be a maximum of 500 items in the list.</p>
     */
    inline GetRecommendationsResult& WithItemList(Aws::Vector<PredictedItem>&& value) { SetItemList(std::move(value)); return *this;}

    /**
     * <p>A list of recommendations sorted in descending order by prediction score.
     * There can be a maximum of 500 items in the list.</p>
     */
    inline GetRecommendationsResult& AddItemList(const PredictedItem& value) { m_itemList.push_back(value); return *this; }

    /**
     * <p>A list of recommendations sorted in descending order by prediction score.
     * There can be a maximum of 500 items in the list.</p>
     */
    inline GetRecommendationsResult& AddItemList(PredictedItem&& value) { m_itemList.push_back(std::move(value)); return *this; }


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
    inline GetRecommendationsResult& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}

    /**
     * <p>The ID of the recommendation.</p>
     */
    inline GetRecommendationsResult& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the recommendation.</p>
     */
    inline GetRecommendationsResult& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}

  private:

    Aws::Vector<PredictedItem> m_itemList;

    Aws::String m_recommendationId;
  };

} // namespace Model
} // namespace PersonalizeRuntime
} // namespace Aws
