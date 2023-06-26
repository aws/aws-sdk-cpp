/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/CampaignConfig.h>
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

CampaignConfig::CampaignConfig() : 
    m_itemExplorationConfigHasBeenSet(false)
{
}

CampaignConfig::CampaignConfig(JsonView jsonValue) : 
    m_itemExplorationConfigHasBeenSet(false)
{
  *this = jsonValue;
}

CampaignConfig& CampaignConfig::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue CampaignConfig::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
