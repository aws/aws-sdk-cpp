/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize-runtime/PersonalizeRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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

  private:

    Aws::String m_itemId;
    bool m_itemIdHasBeenSet = false;

    double m_score;
    bool m_scoreHasBeenSet = false;

    Aws::String m_promotionName;
    bool m_promotionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace PersonalizeRuntime
} // namespace Aws
