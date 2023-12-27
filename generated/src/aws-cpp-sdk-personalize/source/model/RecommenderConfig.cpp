/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/RecommenderConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

RecommenderConfig::RecommenderConfig() : 
    m_itemExplorationConfigHasBeenSet(false),
    m_minRecommendationRequestsPerSecond(0),
    m_minRecommendationRequestsPerSecondHasBeenSet(false),
    m_trainingDataConfigHasBeenSet(false),
    m_enableMetadataWithRecommendations(false),
    m_enableMetadataWithRecommendationsHasBeenSet(false)
{
}

RecommenderConfig::RecommenderConfig(JsonView jsonValue) : 
    m_itemExplorationConfigHasBeenSet(false),
    m_minRecommendationRequestsPerSecond(0),
    m_minRecommendationRequestsPerSecondHasBeenSet(false),
    m_trainingDataConfigHasBeenSet(false),
    m_enableMetadataWithRecommendations(false),
    m_enableMetadataWithRecommendationsHasBeenSet(false)
{
  *this = jsonValue;
}

RecommenderConfig& RecommenderConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("itemExplorationConfig"))
  {
    Aws::Map<Aws::String, JsonView> itemExplorationConfigJsonMap = jsonValue.GetObject("itemExplorationConfig").GetAllObjects();
    for(auto& itemExplorationConfigItem : itemExplorationConfigJsonMap)
    {
      m_itemExplorationConfig[itemExplorationConfigItem.first] = itemExplorationConfigItem.second.AsString();
    }
    m_itemExplorationConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minRecommendationRequestsPerSecond"))
  {
    m_minRecommendationRequestsPerSecond = jsonValue.GetInteger("minRecommendationRequestsPerSecond");

    m_minRecommendationRequestsPerSecondHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trainingDataConfig"))
  {
    m_trainingDataConfig = jsonValue.GetObject("trainingDataConfig");

    m_trainingDataConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enableMetadataWithRecommendations"))
  {
    m_enableMetadataWithRecommendations = jsonValue.GetBool("enableMetadataWithRecommendations");

    m_enableMetadataWithRecommendationsHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommenderConfig::Jsonize() const
{
  JsonValue payload;

  if(m_itemExplorationConfigHasBeenSet)
  {
   JsonValue itemExplorationConfigJsonMap;
   for(auto& itemExplorationConfigItem : m_itemExplorationConfig)
   {
     itemExplorationConfigJsonMap.WithString(itemExplorationConfigItem.first, itemExplorationConfigItem.second);
   }
   payload.WithObject("itemExplorationConfig", std::move(itemExplorationConfigJsonMap));

  }

  if(m_minRecommendationRequestsPerSecondHasBeenSet)
  {
   payload.WithInteger("minRecommendationRequestsPerSecond", m_minRecommendationRequestsPerSecond);

  }

  if(m_trainingDataConfigHasBeenSet)
  {
   payload.WithObject("trainingDataConfig", m_trainingDataConfig.Jsonize());

  }

  if(m_enableMetadataWithRecommendationsHasBeenSet)
  {
   payload.WithBool("enableMetadataWithRecommendations", m_enableMetadataWithRecommendations);

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
