/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-runtime/PersonalizeRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PersonalizeRuntime
{
namespace Model
{

  /**
   * <p>An object that identifies an item.</p> <p>The and APIs return a list of
   * <code>PredictedItem</code>s.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-runtime-2018-05-22/PredictedItem">AWS
   * API Reference</a></p>
   */
  class PredictedItem
  {
  public:
    AWS_PERSONALIZERUNTIME_API PredictedItem();
    AWS_PERSONALIZERUNTIME_API PredictedItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZERUNTIME_API PredictedItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZERUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The recommended item ID.</p>
     */
    inline const Aws::String& GetItemId() const{ return m_itemId; }

    /**
     * <p>The recommended item ID.</p>
     */
    inline bool ItemIdHasBeenSet() const { return m_itemIdHasBeenSet; }

    /**
     * <p>The recommended item ID.</p>
     */
    inline void SetItemId(const Aws::String& value) { m_itemIdHasBeenSet = true; m_itemId = value; }

    /**
     * <p>The recommended item ID.</p>
     */
    inline void SetItemId(Aws::String&& value) { m_itemIdHasBeenSet = true; m_itemId = std::move(value); }

    /**
     * <p>The recommended item ID.</p>
     */
    inline void SetItemId(const char* value) { m_itemIdHasBeenSet = true; m_itemId.assign(value); }

    /**
     * <p>The recommended item ID.</p>
     */
    inline PredictedItem& WithItemId(const Aws::String& value) { SetItemId(value); return *this;}

    /**
     * <p>The recommended item ID.</p>
     */
    inline PredictedItem& WithItemId(Aws::String&& value) { SetItemId(std::move(value)); return *this;}

    /**
     * <p>The recommended item ID.</p>
     */
    inline PredictedItem& WithItemId(const char* value) { SetItemId(value); return *this;}


    /**
     * <p>A numeric representation of the model's certainty that the item will be the
     * next user selection. For more information on scoring logic, see
     * <a>how-scores-work</a>.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>A numeric representation of the model's certainty that the item will be the
     * next user selection. For more information on scoring logic, see
     * <a>how-scores-work</a>.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>A numeric representation of the model's certainty that the item will be the
     * next user selection. For more information on scoring logic, see
     * <a>how-scores-work</a>.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>A numeric representation of the model's certainty that the item will be the
     * next user selection. For more information on scoring logic, see
     * <a>how-scores-work</a>.</p>
     */
    inline PredictedItem& WithScore(double value) { SetScore(value); return *this;}


    /**
     * <p>The name of the promotion that included the predicted item.</p>
     */
    inline const Aws::String& GetPromotionName() const{ return m_promotionName; }

    /**
     * <p>The name of the promotion that included the predicted item.</p>
     */
    inline bool PromotionNameHasBeenSet() const { return m_promotionNameHasBeenSet; }

    /**
     * <p>The name of the promotion that included the predicted item.</p>
     */
    inline void SetPromotionName(const Aws::String& value) { m_promotionNameHasBeenSet = true; m_promotionName = value; }

    /**
     * <p>The name of the promotion that included the predicted item.</p>
     */
    inline void SetPromotionName(Aws::String&& value) { m_promotionNameHasBeenSet = true; m_promotionName = std::move(value); }

    /**
     * <p>The name of the promotion that included the predicted item.</p>
     */
    inline void SetPromotionName(const char* value) { m_promotionNameHasBeenSet = true; m_promotionName.assign(value); }

    /**
     * <p>The name of the promotion that included the predicted item.</p>
     */
    inline PredictedItem& WithPromotionName(const Aws::String& value) { SetPromotionName(value); return *this;}

    /**
     * <p>The name of the promotion that included the predicted item.</p>
     */
    inline PredictedItem& WithPromotionName(Aws::String&& value) { SetPromotionName(std::move(value)); return *this;}

    /**
     * <p>The name of the promotion that included the predicted item.</p>
     */
    inline PredictedItem& WithPromotionName(const char* value) { SetPromotionName(value); return *this;}


    /**
     * <p>Metadata about the item from your Items dataset.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }

    /**
     * <p>Metadata about the item from your Items dataset.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>Metadata about the item from your Items dataset.</p>
     */
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>Metadata about the item from your Items dataset.</p>
     */
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>Metadata about the item from your Items dataset.</p>
     */
    inline PredictedItem& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}

    /**
     * <p>Metadata about the item from your Items dataset.</p>
     */
    inline PredictedItem& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>Metadata about the item from your Items dataset.</p>
     */
    inline PredictedItem& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }

    /**
     * <p>Metadata about the item from your Items dataset.</p>
     */
    inline PredictedItem& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata about the item from your Items dataset.</p>
     */
    inline PredictedItem& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata about the item from your Items dataset.</p>
     */
    inline PredictedItem& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata about the item from your Items dataset.</p>
     */
    inline PredictedItem& AddMetadata(const char* key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata about the item from your Items dataset.</p>
     */
    inline PredictedItem& AddMetadata(Aws::String&& key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata about the item from your Items dataset.</p>
     */
    inline PredictedItem& AddMetadata(const char* key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }


    /**
     * <p>If you use User-Personalization-v2, a list of reasons for why the item was
     * included in recommendations. Possible reasons include the following:</p> <ul>
     * <li> <p>Promoted item - Indicates the item was included as part of a promotion
     * that you applied in your recommendation request.</p> </li> <li> <p>Exploration -
     * Indicates the item was included with exploration. With exploration,
     * recommendations include items with less interactions data or relevance for the
     * user. For more information about exploration, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/use-case-recipe-features.html#about-exploration">Exploration</a>.</p>
     * </li> <li> <p> Popular item - Indicates the item was included as a placeholder
     * popular item. If you use a filter, depending on how many recommendations the
     * filter removes, Amazon Personalize might add placeholder items to meet the
     * <code>numResults</code> for your recommendation request. These items are popular
     * items, based on interactions data, that satisfy your filter criteria. They don't
     * have a relevance score for the user. </p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetReason() const{ return m_reason; }

    /**
     * <p>If you use User-Personalization-v2, a list of reasons for why the item was
     * included in recommendations. Possible reasons include the following:</p> <ul>
     * <li> <p>Promoted item - Indicates the item was included as part of a promotion
     * that you applied in your recommendation request.</p> </li> <li> <p>Exploration -
     * Indicates the item was included with exploration. With exploration,
     * recommendations include items with less interactions data or relevance for the
     * user. For more information about exploration, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/use-case-recipe-features.html#about-exploration">Exploration</a>.</p>
     * </li> <li> <p> Popular item - Indicates the item was included as a placeholder
     * popular item. If you use a filter, depending on how many recommendations the
     * filter removes, Amazon Personalize might add placeholder items to meet the
     * <code>numResults</code> for your recommendation request. These items are popular
     * items, based on interactions data, that satisfy your filter criteria. They don't
     * have a relevance score for the user. </p> </li> </ul>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>If you use User-Personalization-v2, a list of reasons for why the item was
     * included in recommendations. Possible reasons include the following:</p> <ul>
     * <li> <p>Promoted item - Indicates the item was included as part of a promotion
     * that you applied in your recommendation request.</p> </li> <li> <p>Exploration -
     * Indicates the item was included with exploration. With exploration,
     * recommendations include items with less interactions data or relevance for the
     * user. For more information about exploration, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/use-case-recipe-features.html#about-exploration">Exploration</a>.</p>
     * </li> <li> <p> Popular item - Indicates the item was included as a placeholder
     * popular item. If you use a filter, depending on how many recommendations the
     * filter removes, Amazon Personalize might add placeholder items to meet the
     * <code>numResults</code> for your recommendation request. These items are popular
     * items, based on interactions data, that satisfy your filter criteria. They don't
     * have a relevance score for the user. </p> </li> </ul>
     */
    inline void SetReason(const Aws::Vector<Aws::String>& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>If you use User-Personalization-v2, a list of reasons for why the item was
     * included in recommendations. Possible reasons include the following:</p> <ul>
     * <li> <p>Promoted item - Indicates the item was included as part of a promotion
     * that you applied in your recommendation request.</p> </li> <li> <p>Exploration -
     * Indicates the item was included with exploration. With exploration,
     * recommendations include items with less interactions data or relevance for the
     * user. For more information about exploration, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/use-case-recipe-features.html#about-exploration">Exploration</a>.</p>
     * </li> <li> <p> Popular item - Indicates the item was included as a placeholder
     * popular item. If you use a filter, depending on how many recommendations the
     * filter removes, Amazon Personalize might add placeholder items to meet the
     * <code>numResults</code> for your recommendation request. These items are popular
     * items, based on interactions data, that satisfy your filter criteria. They don't
     * have a relevance score for the user. </p> </li> </ul>
     */
    inline void SetReason(Aws::Vector<Aws::String>&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>If you use User-Personalization-v2, a list of reasons for why the item was
     * included in recommendations. Possible reasons include the following:</p> <ul>
     * <li> <p>Promoted item - Indicates the item was included as part of a promotion
     * that you applied in your recommendation request.</p> </li> <li> <p>Exploration -
     * Indicates the item was included with exploration. With exploration,
     * recommendations include items with less interactions data or relevance for the
     * user. For more information about exploration, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/use-case-recipe-features.html#about-exploration">Exploration</a>.</p>
     * </li> <li> <p> Popular item - Indicates the item was included as a placeholder
     * popular item. If you use a filter, depending on how many recommendations the
     * filter removes, Amazon Personalize might add placeholder items to meet the
     * <code>numResults</code> for your recommendation request. These items are popular
     * items, based on interactions data, that satisfy your filter criteria. They don't
     * have a relevance score for the user. </p> </li> </ul>
     */
    inline PredictedItem& WithReason(const Aws::Vector<Aws::String>& value) { SetReason(value); return *this;}

    /**
     * <p>If you use User-Personalization-v2, a list of reasons for why the item was
     * included in recommendations. Possible reasons include the following:</p> <ul>
     * <li> <p>Promoted item - Indicates the item was included as part of a promotion
     * that you applied in your recommendation request.</p> </li> <li> <p>Exploration -
     * Indicates the item was included with exploration. With exploration,
     * recommendations include items with less interactions data or relevance for the
     * user. For more information about exploration, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/use-case-recipe-features.html#about-exploration">Exploration</a>.</p>
     * </li> <li> <p> Popular item - Indicates the item was included as a placeholder
     * popular item. If you use a filter, depending on how many recommendations the
     * filter removes, Amazon Personalize might add placeholder items to meet the
     * <code>numResults</code> for your recommendation request. These items are popular
     * items, based on interactions data, that satisfy your filter criteria. They don't
     * have a relevance score for the user. </p> </li> </ul>
     */
    inline PredictedItem& WithReason(Aws::Vector<Aws::String>&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>If you use User-Personalization-v2, a list of reasons for why the item was
     * included in recommendations. Possible reasons include the following:</p> <ul>
     * <li> <p>Promoted item - Indicates the item was included as part of a promotion
     * that you applied in your recommendation request.</p> </li> <li> <p>Exploration -
     * Indicates the item was included with exploration. With exploration,
     * recommendations include items with less interactions data or relevance for the
     * user. For more information about exploration, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/use-case-recipe-features.html#about-exploration">Exploration</a>.</p>
     * </li> <li> <p> Popular item - Indicates the item was included as a placeholder
     * popular item. If you use a filter, depending on how many recommendations the
     * filter removes, Amazon Personalize might add placeholder items to meet the
     * <code>numResults</code> for your recommendation request. These items are popular
     * items, based on interactions data, that satisfy your filter criteria. They don't
     * have a relevance score for the user. </p> </li> </ul>
     */
    inline PredictedItem& AddReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason.push_back(value); return *this; }

    /**
     * <p>If you use User-Personalization-v2, a list of reasons for why the item was
     * included in recommendations. Possible reasons include the following:</p> <ul>
     * <li> <p>Promoted item - Indicates the item was included as part of a promotion
     * that you applied in your recommendation request.</p> </li> <li> <p>Exploration -
     * Indicates the item was included with exploration. With exploration,
     * recommendations include items with less interactions data or relevance for the
     * user. For more information about exploration, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/use-case-recipe-features.html#about-exploration">Exploration</a>.</p>
     * </li> <li> <p> Popular item - Indicates the item was included as a placeholder
     * popular item. If you use a filter, depending on how many recommendations the
     * filter removes, Amazon Personalize might add placeholder items to meet the
     * <code>numResults</code> for your recommendation request. These items are popular
     * items, based on interactions data, that satisfy your filter criteria. They don't
     * have a relevance score for the user. </p> </li> </ul>
     */
    inline PredictedItem& AddReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason.push_back(std::move(value)); return *this; }

    /**
     * <p>If you use User-Personalization-v2, a list of reasons for why the item was
     * included in recommendations. Possible reasons include the following:</p> <ul>
     * <li> <p>Promoted item - Indicates the item was included as part of a promotion
     * that you applied in your recommendation request.</p> </li> <li> <p>Exploration -
     * Indicates the item was included with exploration. With exploration,
     * recommendations include items with less interactions data or relevance for the
     * user. For more information about exploration, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/use-case-recipe-features.html#about-exploration">Exploration</a>.</p>
     * </li> <li> <p> Popular item - Indicates the item was included as a placeholder
     * popular item. If you use a filter, depending on how many recommendations the
     * filter removes, Amazon Personalize might add placeholder items to meet the
     * <code>numResults</code> for your recommendation request. These items are popular
     * items, based on interactions data, that satisfy your filter criteria. They don't
     * have a relevance score for the user. </p> </li> </ul>
     */
    inline PredictedItem& AddReason(const char* value) { m_reasonHasBeenSet = true; m_reason.push_back(value); return *this; }

  private:

    Aws::String m_itemId;
    bool m_itemIdHasBeenSet = false;

    double m_score;
    bool m_scoreHasBeenSet = false;

    Aws::String m_promotionName;
    bool m_promotionNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::Vector<Aws::String> m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeRuntime
} // namespace Aws
