/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>The configuration details of the recommender.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/RecommenderConfig">AWS
   * API Reference</a></p>
   */
  class RecommenderConfig
  {
  public:
    AWS_PERSONALIZE_API RecommenderConfig();
    AWS_PERSONALIZE_API RecommenderConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API RecommenderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the exploration configuration hyperparameters, including
     * <code>explorationWeight</code> and <code>explorationItemAgeCutOff</code>, you
     * want to use to configure the amount of item exploration Amazon Personalize uses
     * when recommending items. Provide <code>itemExplorationConfig</code> data only if
     * your recommenders generate personalized recommendations for a user (not popular
     * items or similar items).</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetItemExplorationConfig() const{ return m_itemExplorationConfig; }

    /**
     * <p>Specifies the exploration configuration hyperparameters, including
     * <code>explorationWeight</code> and <code>explorationItemAgeCutOff</code>, you
     * want to use to configure the amount of item exploration Amazon Personalize uses
     * when recommending items. Provide <code>itemExplorationConfig</code> data only if
     * your recommenders generate personalized recommendations for a user (not popular
     * items or similar items).</p>
     */
    inline bool ItemExplorationConfigHasBeenSet() const { return m_itemExplorationConfigHasBeenSet; }

    /**
     * <p>Specifies the exploration configuration hyperparameters, including
     * <code>explorationWeight</code> and <code>explorationItemAgeCutOff</code>, you
     * want to use to configure the amount of item exploration Amazon Personalize uses
     * when recommending items. Provide <code>itemExplorationConfig</code> data only if
     * your recommenders generate personalized recommendations for a user (not popular
     * items or similar items).</p>
     */
    inline void SetItemExplorationConfig(const Aws::Map<Aws::String, Aws::String>& value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig = value; }

    /**
     * <p>Specifies the exploration configuration hyperparameters, including
     * <code>explorationWeight</code> and <code>explorationItemAgeCutOff</code>, you
     * want to use to configure the amount of item exploration Amazon Personalize uses
     * when recommending items. Provide <code>itemExplorationConfig</code> data only if
     * your recommenders generate personalized recommendations for a user (not popular
     * items or similar items).</p>
     */
    inline void SetItemExplorationConfig(Aws::Map<Aws::String, Aws::String>&& value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig = std::move(value); }

    /**
     * <p>Specifies the exploration configuration hyperparameters, including
     * <code>explorationWeight</code> and <code>explorationItemAgeCutOff</code>, you
     * want to use to configure the amount of item exploration Amazon Personalize uses
     * when recommending items. Provide <code>itemExplorationConfig</code> data only if
     * your recommenders generate personalized recommendations for a user (not popular
     * items or similar items).</p>
     */
    inline RecommenderConfig& WithItemExplorationConfig(const Aws::Map<Aws::String, Aws::String>& value) { SetItemExplorationConfig(value); return *this;}

    /**
     * <p>Specifies the exploration configuration hyperparameters, including
     * <code>explorationWeight</code> and <code>explorationItemAgeCutOff</code>, you
     * want to use to configure the amount of item exploration Amazon Personalize uses
     * when recommending items. Provide <code>itemExplorationConfig</code> data only if
     * your recommenders generate personalized recommendations for a user (not popular
     * items or similar items).</p>
     */
    inline RecommenderConfig& WithItemExplorationConfig(Aws::Map<Aws::String, Aws::String>&& value) { SetItemExplorationConfig(std::move(value)); return *this;}

    /**
     * <p>Specifies the exploration configuration hyperparameters, including
     * <code>explorationWeight</code> and <code>explorationItemAgeCutOff</code>, you
     * want to use to configure the amount of item exploration Amazon Personalize uses
     * when recommending items. Provide <code>itemExplorationConfig</code> data only if
     * your recommenders generate personalized recommendations for a user (not popular
     * items or similar items).</p>
     */
    inline RecommenderConfig& AddItemExplorationConfig(const Aws::String& key, const Aws::String& value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig.emplace(key, value); return *this; }

    /**
     * <p>Specifies the exploration configuration hyperparameters, including
     * <code>explorationWeight</code> and <code>explorationItemAgeCutOff</code>, you
     * want to use to configure the amount of item exploration Amazon Personalize uses
     * when recommending items. Provide <code>itemExplorationConfig</code> data only if
     * your recommenders generate personalized recommendations for a user (not popular
     * items or similar items).</p>
     */
    inline RecommenderConfig& AddItemExplorationConfig(Aws::String&& key, const Aws::String& value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the exploration configuration hyperparameters, including
     * <code>explorationWeight</code> and <code>explorationItemAgeCutOff</code>, you
     * want to use to configure the amount of item exploration Amazon Personalize uses
     * when recommending items. Provide <code>itemExplorationConfig</code> data only if
     * your recommenders generate personalized recommendations for a user (not popular
     * items or similar items).</p>
     */
    inline RecommenderConfig& AddItemExplorationConfig(const Aws::String& key, Aws::String&& value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the exploration configuration hyperparameters, including
     * <code>explorationWeight</code> and <code>explorationItemAgeCutOff</code>, you
     * want to use to configure the amount of item exploration Amazon Personalize uses
     * when recommending items. Provide <code>itemExplorationConfig</code> data only if
     * your recommenders generate personalized recommendations for a user (not popular
     * items or similar items).</p>
     */
    inline RecommenderConfig& AddItemExplorationConfig(Aws::String&& key, Aws::String&& value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies the exploration configuration hyperparameters, including
     * <code>explorationWeight</code> and <code>explorationItemAgeCutOff</code>, you
     * want to use to configure the amount of item exploration Amazon Personalize uses
     * when recommending items. Provide <code>itemExplorationConfig</code> data only if
     * your recommenders generate personalized recommendations for a user (not popular
     * items or similar items).</p>
     */
    inline RecommenderConfig& AddItemExplorationConfig(const char* key, Aws::String&& value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the exploration configuration hyperparameters, including
     * <code>explorationWeight</code> and <code>explorationItemAgeCutOff</code>, you
     * want to use to configure the amount of item exploration Amazon Personalize uses
     * when recommending items. Provide <code>itemExplorationConfig</code> data only if
     * your recommenders generate personalized recommendations for a user (not popular
     * items or similar items).</p>
     */
    inline RecommenderConfig& AddItemExplorationConfig(Aws::String&& key, const char* value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the exploration configuration hyperparameters, including
     * <code>explorationWeight</code> and <code>explorationItemAgeCutOff</code>, you
     * want to use to configure the amount of item exploration Amazon Personalize uses
     * when recommending items. Provide <code>itemExplorationConfig</code> data only if
     * your recommenders generate personalized recommendations for a user (not popular
     * items or similar items).</p>
     */
    inline RecommenderConfig& AddItemExplorationConfig(const char* key, const char* value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig.emplace(key, value); return *this; }


    /**
     * <p>Specifies the requested minimum provisioned recommendation requests per
     * second that Amazon Personalize will support.</p>
     */
    inline int GetMinRecommendationRequestsPerSecond() const{ return m_minRecommendationRequestsPerSecond; }

    /**
     * <p>Specifies the requested minimum provisioned recommendation requests per
     * second that Amazon Personalize will support.</p>
     */
    inline bool MinRecommendationRequestsPerSecondHasBeenSet() const { return m_minRecommendationRequestsPerSecondHasBeenSet; }

    /**
     * <p>Specifies the requested minimum provisioned recommendation requests per
     * second that Amazon Personalize will support.</p>
     */
    inline void SetMinRecommendationRequestsPerSecond(int value) { m_minRecommendationRequestsPerSecondHasBeenSet = true; m_minRecommendationRequestsPerSecond = value; }

    /**
     * <p>Specifies the requested minimum provisioned recommendation requests per
     * second that Amazon Personalize will support.</p>
     */
    inline RecommenderConfig& WithMinRecommendationRequestsPerSecond(int value) { SetMinRecommendationRequestsPerSecond(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_itemExplorationConfig;
    bool m_itemExplorationConfigHasBeenSet = false;

    int m_minRecommendationRequestsPerSecond;
    bool m_minRecommendationRequestsPerSecondHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
