/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/personalize/model/CampaignConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Personalize {
namespace Model {

CampaignConfig::CampaignConfig(JsonView jsonValue) { *this = jsonValue; }

CampaignConfig& CampaignConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("itemExplorationConfig")) {
    Aws::Map<Aws::String, JsonView> itemExplorationConfigJsonMap = jsonValue.GetObject("itemExplorationConfig").GetAllObjects();
    for (auto& itemExplorationConfigItem : itemExplorationConfigJsonMap) {
      m_itemExplorationConfig[itemExplorationConfigItem.first] = itemExplorationConfigItem.second.AsString();
    }
    m_itemExplorationConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enableMetadataWithRecommendations")) {
    m_enableMetadataWithRecommendations = jsonValue.GetBool("enableMetadataWithRecommendations");
    m_enableMetadataWithRecommendationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("syncWithLatestSolutionVersion")) {
    m_syncWithLatestSolutionVersion = jsonValue.GetBool("syncWithLatestSolutionVersion");
    m_syncWithLatestSolutionVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rankingInfluence")) {
    Aws::Map<Aws::String, JsonView> rankingInfluenceJsonMap = jsonValue.GetObject("rankingInfluence").GetAllObjects();
    for (auto& rankingInfluenceItem : rankingInfluenceJsonMap) {
      m_rankingInfluence[RankingInfluenceTypeMapper::GetRankingInfluenceTypeForName(rankingInfluenceItem.first)] =
          rankingInfluenceItem.second.AsDouble();
    }
    m_rankingInfluenceHasBeenSet = true;
  }
  return *this;
}

JsonValue CampaignConfig::Jsonize() const {
  JsonValue payload;

  if (m_itemExplorationConfigHasBeenSet) {
    JsonValue itemExplorationConfigJsonMap;
    for (auto& itemExplorationConfigItem : m_itemExplorationConfig) {
      itemExplorationConfigJsonMap.WithString(itemExplorationConfigItem.first, itemExplorationConfigItem.second);
    }
    payload.WithObject("itemExplorationConfig", std::move(itemExplorationConfigJsonMap));
  }

  if (m_enableMetadataWithRecommendationsHasBeenSet) {
    payload.WithBool("enableMetadataWithRecommendations", m_enableMetadataWithRecommendations);
  }

  if (m_syncWithLatestSolutionVersionHasBeenSet) {
    payload.WithBool("syncWithLatestSolutionVersion", m_syncWithLatestSolutionVersion);
  }

  if (m_rankingInfluenceHasBeenSet) {
    JsonValue rankingInfluenceJsonMap;
    for (auto& rankingInfluenceItem : m_rankingInfluence) {
      rankingInfluenceJsonMap.WithDouble(RankingInfluenceTypeMapper::GetNameForRankingInfluenceType(rankingInfluenceItem.first),
                                         rankingInfluenceItem.second);
    }
    payload.WithObject("rankingInfluence", std::move(rankingInfluenceJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Personalize
}  // namespace Aws
