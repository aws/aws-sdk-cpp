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
    AWS_PERSONALIZERUNTIME_API PredictedItem() = default;
    AWS_PERSONALIZERUNTIME_API PredictedItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZERUNTIME_API PredictedItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZERUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The recommended item ID.</p>
     */
    inline const Aws::String& GetItemId() const { return m_itemId; }
    inline bool ItemIdHasBeenSet() const { return m_itemIdHasBeenSet; }
    template<typename ItemIdT = Aws::String>
    void SetItemId(ItemIdT&& value) { m_itemIdHasBeenSet = true; m_itemId = std::forward<ItemIdT>(value); }
    template<typename ItemIdT = Aws::String>
    PredictedItem& WithItemId(ItemIdT&& value) { SetItemId(std::forward<ItemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A numeric representation of the model's certainty that the item will be the
     * next user selection. For more information on scoring logic, see
     * <a>how-scores-work</a>.</p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline PredictedItem& WithScore(double value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the promotion that included the predicted item.</p>
     */
    inline const Aws::String& GetPromotionName() const { return m_promotionName; }
    inline bool PromotionNameHasBeenSet() const { return m_promotionNameHasBeenSet; }
    template<typename PromotionNameT = Aws::String>
    void SetPromotionName(PromotionNameT&& value) { m_promotionNameHasBeenSet = true; m_promotionName = std::forward<PromotionNameT>(value); }
    template<typename PromotionNameT = Aws::String>
    PredictedItem& WithPromotionName(PromotionNameT&& value) { SetPromotionName(std::forward<PromotionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata about the item from your Items dataset.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::Map<Aws::String, Aws::String>>
    PredictedItem& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    template<typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
    PredictedItem& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
      m_metadataHasBeenSet = true; m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
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
    inline const Aws::Vector<Aws::String>& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::Vector<Aws::String>>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::Vector<Aws::String>>
    PredictedItem& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    template<typename ReasonT = Aws::String>
    PredictedItem& AddReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason.emplace_back(std::forward<ReasonT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_itemId;
    bool m_itemIdHasBeenSet = false;

    double m_score{0.0};
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
