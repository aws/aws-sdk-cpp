/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/personalize/model/TrainingDataConfig.h>
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
     * second that Amazon Personalize will support. A high
     * <code>minRecommendationRequestsPerSecond</code> will increase your bill. We
     * recommend starting with 1 for <code>minRecommendationRequestsPerSecond</code>
     * (the default). Track your usage using Amazon CloudWatch metrics, and increase
     * the <code>minRecommendationRequestsPerSecond</code> as necessary.</p>
     */
    inline int GetMinRecommendationRequestsPerSecond() const{ return m_minRecommendationRequestsPerSecond; }

    /**
     * <p>Specifies the requested minimum provisioned recommendation requests per
     * second that Amazon Personalize will support. A high
     * <code>minRecommendationRequestsPerSecond</code> will increase your bill. We
     * recommend starting with 1 for <code>minRecommendationRequestsPerSecond</code>
     * (the default). Track your usage using Amazon CloudWatch metrics, and increase
     * the <code>minRecommendationRequestsPerSecond</code> as necessary.</p>
     */
    inline bool MinRecommendationRequestsPerSecondHasBeenSet() const { return m_minRecommendationRequestsPerSecondHasBeenSet; }

    /**
     * <p>Specifies the requested minimum provisioned recommendation requests per
     * second that Amazon Personalize will support. A high
     * <code>minRecommendationRequestsPerSecond</code> will increase your bill. We
     * recommend starting with 1 for <code>minRecommendationRequestsPerSecond</code>
     * (the default). Track your usage using Amazon CloudWatch metrics, and increase
     * the <code>minRecommendationRequestsPerSecond</code> as necessary.</p>
     */
    inline void SetMinRecommendationRequestsPerSecond(int value) { m_minRecommendationRequestsPerSecondHasBeenSet = true; m_minRecommendationRequestsPerSecond = value; }

    /**
     * <p>Specifies the requested minimum provisioned recommendation requests per
     * second that Amazon Personalize will support. A high
     * <code>minRecommendationRequestsPerSecond</code> will increase your bill. We
     * recommend starting with 1 for <code>minRecommendationRequestsPerSecond</code>
     * (the default). Track your usage using Amazon CloudWatch metrics, and increase
     * the <code>minRecommendationRequestsPerSecond</code> as necessary.</p>
     */
    inline RecommenderConfig& WithMinRecommendationRequestsPerSecond(int value) { SetMinRecommendationRequestsPerSecond(value); return *this;}


    /**
     * <p> Specifies the training data configuration to use when creating a domain
     * recommender. </p>
     */
    inline const TrainingDataConfig& GetTrainingDataConfig() const{ return m_trainingDataConfig; }

    /**
     * <p> Specifies the training data configuration to use when creating a domain
     * recommender. </p>
     */
    inline bool TrainingDataConfigHasBeenSet() const { return m_trainingDataConfigHasBeenSet; }

    /**
     * <p> Specifies the training data configuration to use when creating a domain
     * recommender. </p>
     */
    inline void SetTrainingDataConfig(const TrainingDataConfig& value) { m_trainingDataConfigHasBeenSet = true; m_trainingDataConfig = value; }

    /**
     * <p> Specifies the training data configuration to use when creating a domain
     * recommender. </p>
     */
    inline void SetTrainingDataConfig(TrainingDataConfig&& value) { m_trainingDataConfigHasBeenSet = true; m_trainingDataConfig = std::move(value); }

    /**
     * <p> Specifies the training data configuration to use when creating a domain
     * recommender. </p>
     */
    inline RecommenderConfig& WithTrainingDataConfig(const TrainingDataConfig& value) { SetTrainingDataConfig(value); return *this;}

    /**
     * <p> Specifies the training data configuration to use when creating a domain
     * recommender. </p>
     */
    inline RecommenderConfig& WithTrainingDataConfig(TrainingDataConfig&& value) { SetTrainingDataConfig(std::move(value)); return *this;}


    /**
     * <p>Whether metadata with recommendations is enabled for the recommender. If
     * enabled, you can specify the columns from your Items dataset in your request for
     * recommendations. Amazon Personalize returns this data for each item in the
     * recommendation response. For information about enabling metadata for a
     * recommender, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/creating-recommenders.html#create-recommender-return-metadata">Enabling
     * metadata in recommendations for a recommender</a>.</p> <p> If you enable
     * metadata in recommendations, you will incur additional costs. For more
     * information, see <a href="https://aws.amazon.com/personalize/pricing/">Amazon
     * Personalize pricing</a>. </p>
     */
    inline bool GetEnableMetadataWithRecommendations() const{ return m_enableMetadataWithRecommendations; }

    /**
     * <p>Whether metadata with recommendations is enabled for the recommender. If
     * enabled, you can specify the columns from your Items dataset in your request for
     * recommendations. Amazon Personalize returns this data for each item in the
     * recommendation response. For information about enabling metadata for a
     * recommender, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/creating-recommenders.html#create-recommender-return-metadata">Enabling
     * metadata in recommendations for a recommender</a>.</p> <p> If you enable
     * metadata in recommendations, you will incur additional costs. For more
     * information, see <a href="https://aws.amazon.com/personalize/pricing/">Amazon
     * Personalize pricing</a>. </p>
     */
    inline bool EnableMetadataWithRecommendationsHasBeenSet() const { return m_enableMetadataWithRecommendationsHasBeenSet; }

    /**
     * <p>Whether metadata with recommendations is enabled for the recommender. If
     * enabled, you can specify the columns from your Items dataset in your request for
     * recommendations. Amazon Personalize returns this data for each item in the
     * recommendation response. For information about enabling metadata for a
     * recommender, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/creating-recommenders.html#create-recommender-return-metadata">Enabling
     * metadata in recommendations for a recommender</a>.</p> <p> If you enable
     * metadata in recommendations, you will incur additional costs. For more
     * information, see <a href="https://aws.amazon.com/personalize/pricing/">Amazon
     * Personalize pricing</a>. </p>
     */
    inline void SetEnableMetadataWithRecommendations(bool value) { m_enableMetadataWithRecommendationsHasBeenSet = true; m_enableMetadataWithRecommendations = value; }

    /**
     * <p>Whether metadata with recommendations is enabled for the recommender. If
     * enabled, you can specify the columns from your Items dataset in your request for
     * recommendations. Amazon Personalize returns this data for each item in the
     * recommendation response. For information about enabling metadata for a
     * recommender, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/creating-recommenders.html#create-recommender-return-metadata">Enabling
     * metadata in recommendations for a recommender</a>.</p> <p> If you enable
     * metadata in recommendations, you will incur additional costs. For more
     * information, see <a href="https://aws.amazon.com/personalize/pricing/">Amazon
     * Personalize pricing</a>. </p>
     */
    inline RecommenderConfig& WithEnableMetadataWithRecommendations(bool value) { SetEnableMetadataWithRecommendations(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_itemExplorationConfig;
    bool m_itemExplorationConfigHasBeenSet = false;

    int m_minRecommendationRequestsPerSecond;
    bool m_minRecommendationRequestsPerSecondHasBeenSet = false;

    TrainingDataConfig m_trainingDataConfig;
    bool m_trainingDataConfigHasBeenSet = false;

    bool m_enableMetadataWithRecommendations;
    bool m_enableMetadataWithRecommendationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
