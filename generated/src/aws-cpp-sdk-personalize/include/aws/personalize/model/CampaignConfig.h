﻿/**
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
   * <p>The configuration details of a campaign.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CampaignConfig">AWS
   * API Reference</a></p>
   */
  class CampaignConfig
  {
  public:
    AWS_PERSONALIZE_API CampaignConfig();
    AWS_PERSONALIZE_API CampaignConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API CampaignConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the exploration configuration hyperparameters, including
     * <code>explorationWeight</code> and <code>explorationItemAgeCutOff</code>, you
     * want to use to configure the amount of item exploration Amazon Personalize uses
     * when recommending items. Provide <code>itemExplorationConfig</code> data only if
     * your solution uses the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-new-item-USER_PERSONALIZATION.html">User-Personalization</a>
     * recipe.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetItemExplorationConfig() const{ return m_itemExplorationConfig; }
    inline bool ItemExplorationConfigHasBeenSet() const { return m_itemExplorationConfigHasBeenSet; }
    inline void SetItemExplorationConfig(const Aws::Map<Aws::String, Aws::String>& value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig = value; }
    inline void SetItemExplorationConfig(Aws::Map<Aws::String, Aws::String>&& value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig = std::move(value); }
    inline CampaignConfig& WithItemExplorationConfig(const Aws::Map<Aws::String, Aws::String>& value) { SetItemExplorationConfig(value); return *this;}
    inline CampaignConfig& WithItemExplorationConfig(Aws::Map<Aws::String, Aws::String>&& value) { SetItemExplorationConfig(std::move(value)); return *this;}
    inline CampaignConfig& AddItemExplorationConfig(const Aws::String& key, const Aws::String& value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig.emplace(key, value); return *this; }
    inline CampaignConfig& AddItemExplorationConfig(Aws::String&& key, const Aws::String& value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig.emplace(std::move(key), value); return *this; }
    inline CampaignConfig& AddItemExplorationConfig(const Aws::String& key, Aws::String&& value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig.emplace(key, std::move(value)); return *this; }
    inline CampaignConfig& AddItemExplorationConfig(Aws::String&& key, Aws::String&& value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig.emplace(std::move(key), std::move(value)); return *this; }
    inline CampaignConfig& AddItemExplorationConfig(const char* key, Aws::String&& value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig.emplace(key, std::move(value)); return *this; }
    inline CampaignConfig& AddItemExplorationConfig(Aws::String&& key, const char* value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig.emplace(std::move(key), value); return *this; }
    inline CampaignConfig& AddItemExplorationConfig(const char* key, const char* value) { m_itemExplorationConfigHasBeenSet = true; m_itemExplorationConfig.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether metadata with recommendations is enabled for the campaign. If
     * enabled, you can specify the columns from your Items dataset in your request for
     * recommendations. Amazon Personalize returns this data for each item in the
     * recommendation response. For information about enabling metadata for a campaign,
     * see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/campaigns.html#create-campaign-return-metadata">Enabling
     * metadata in recommendations for a campaign</a>.</p> <p> If you enable metadata
     * in recommendations, you will incur additional costs. For more information, see
     * <a href="https://aws.amazon.com/personalize/pricing/">Amazon Personalize
     * pricing</a>. </p>
     */
    inline bool GetEnableMetadataWithRecommendations() const{ return m_enableMetadataWithRecommendations; }
    inline bool EnableMetadataWithRecommendationsHasBeenSet() const { return m_enableMetadataWithRecommendationsHasBeenSet; }
    inline void SetEnableMetadataWithRecommendations(bool value) { m_enableMetadataWithRecommendationsHasBeenSet = true; m_enableMetadataWithRecommendations = value; }
    inline CampaignConfig& WithEnableMetadataWithRecommendations(bool value) { SetEnableMetadataWithRecommendations(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the campaign automatically updates to use the latest solution version
     * (trained model) of a solution. If you specify <code>True</code>, you must
     * specify the ARN of your <i>solution</i> for the <code>SolutionVersionArn</code>
     * parameter. It must be in <code>SolutionArn/$LATEST</code> format. The default is
     * <code>False</code> and you must manually update the campaign to deploy the
     * latest solution version. </p> <p> For more information about automatic campaign
     * updates, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/campaigns.html#create-campaign-automatic-latest-sv-update">Enabling
     * automatic campaign updates</a>. </p>
     */
    inline bool GetSyncWithLatestSolutionVersion() const{ return m_syncWithLatestSolutionVersion; }
    inline bool SyncWithLatestSolutionVersionHasBeenSet() const { return m_syncWithLatestSolutionVersionHasBeenSet; }
    inline void SetSyncWithLatestSolutionVersion(bool value) { m_syncWithLatestSolutionVersionHasBeenSet = true; m_syncWithLatestSolutionVersion = value; }
    inline CampaignConfig& WithSyncWithLatestSolutionVersion(bool value) { SetSyncWithLatestSolutionVersion(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_itemExplorationConfig;
    bool m_itemExplorationConfigHasBeenSet = false;

    bool m_enableMetadataWithRecommendations;
    bool m_enableMetadataWithRecommendationsHasBeenSet = false;

    bool m_syncWithLatestSolutionVersion;
    bool m_syncWithLatestSolutionVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
