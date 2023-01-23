/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ConfigRecommendation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

ConfigRecommendation::ConfigRecommendation() : 
    m_appComponentNameHasBeenSet(false),
    m_complianceHasBeenSet(false),
    m_costHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_haArchitecture(HaArchitecture::NOT_SET),
    m_haArchitectureHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_optimizationType(ConfigRecommendationOptimizationType::NOT_SET),
    m_optimizationTypeHasBeenSet(false),
    m_recommendationComplianceHasBeenSet(false),
    m_referenceIdHasBeenSet(false),
    m_suggestedChangesHasBeenSet(false)
{
}

ConfigRecommendation::ConfigRecommendation(JsonView jsonValue) : 
    m_appComponentNameHasBeenSet(false),
    m_complianceHasBeenSet(false),
    m_costHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_haArchitecture(HaArchitecture::NOT_SET),
    m_haArchitectureHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_optimizationType(ConfigRecommendationOptimizationType::NOT_SET),
    m_optimizationTypeHasBeenSet(false),
    m_recommendationComplianceHasBeenSet(false),
    m_referenceIdHasBeenSet(false),
    m_suggestedChangesHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigRecommendation& ConfigRecommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appComponentName"))
  {
    m_appComponentName = jsonValue.GetString("appComponentName");

    m_appComponentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("compliance"))
  {
    Aws::Map<Aws::String, JsonView> complianceJsonMap = jsonValue.GetObject("compliance").GetAllObjects();
    for(auto& complianceItem : complianceJsonMap)
    {
      m_compliance[DisruptionTypeMapper::GetDisruptionTypeForName(complianceItem.first)] = complianceItem.second.AsObject();
    }
    m_complianceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cost"))
  {
    m_cost = jsonValue.GetObject("cost");

    m_costHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("haArchitecture"))
  {
    m_haArchitecture = HaArchitectureMapper::GetHaArchitectureForName(jsonValue.GetString("haArchitecture"));

    m_haArchitectureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("optimizationType"))
  {
    m_optimizationType = ConfigRecommendationOptimizationTypeMapper::GetConfigRecommendationOptimizationTypeForName(jsonValue.GetString("optimizationType"));

    m_optimizationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendationCompliance"))
  {
    Aws::Map<Aws::String, JsonView> recommendationComplianceJsonMap = jsonValue.GetObject("recommendationCompliance").GetAllObjects();
    for(auto& recommendationComplianceItem : recommendationComplianceJsonMap)
    {
      m_recommendationCompliance[DisruptionTypeMapper::GetDisruptionTypeForName(recommendationComplianceItem.first)] = recommendationComplianceItem.second.AsObject();
    }
    m_recommendationComplianceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("referenceId"))
  {
    m_referenceId = jsonValue.GetString("referenceId");

    m_referenceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("suggestedChanges"))
  {
    Aws::Utils::Array<JsonView> suggestedChangesJsonList = jsonValue.GetArray("suggestedChanges");
    for(unsigned suggestedChangesIndex = 0; suggestedChangesIndex < suggestedChangesJsonList.GetLength(); ++suggestedChangesIndex)
    {
      m_suggestedChanges.push_back(suggestedChangesJsonList[suggestedChangesIndex].AsString());
    }
    m_suggestedChangesHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigRecommendation::Jsonize() const
{
  JsonValue payload;

  if(m_appComponentNameHasBeenSet)
  {
   payload.WithString("appComponentName", m_appComponentName);

  }

  if(m_complianceHasBeenSet)
  {
   JsonValue complianceJsonMap;
   for(auto& complianceItem : m_compliance)
   {
     complianceJsonMap.WithObject(DisruptionTypeMapper::GetNameForDisruptionType(complianceItem.first), complianceItem.second.Jsonize());
   }
   payload.WithObject("compliance", std::move(complianceJsonMap));

  }

  if(m_costHasBeenSet)
  {
   payload.WithObject("cost", m_cost.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_haArchitectureHasBeenSet)
  {
   payload.WithString("haArchitecture", HaArchitectureMapper::GetNameForHaArchitecture(m_haArchitecture));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_optimizationTypeHasBeenSet)
  {
   payload.WithString("optimizationType", ConfigRecommendationOptimizationTypeMapper::GetNameForConfigRecommendationOptimizationType(m_optimizationType));
  }

  if(m_recommendationComplianceHasBeenSet)
  {
   JsonValue recommendationComplianceJsonMap;
   for(auto& recommendationComplianceItem : m_recommendationCompliance)
   {
     recommendationComplianceJsonMap.WithObject(DisruptionTypeMapper::GetNameForDisruptionType(recommendationComplianceItem.first), recommendationComplianceItem.second.Jsonize());
   }
   payload.WithObject("recommendationCompliance", std::move(recommendationComplianceJsonMap));

  }

  if(m_referenceIdHasBeenSet)
  {
   payload.WithString("referenceId", m_referenceId);

  }

  if(m_suggestedChangesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> suggestedChangesJsonList(m_suggestedChanges.size());
   for(unsigned suggestedChangesIndex = 0; suggestedChangesIndex < suggestedChangesJsonList.GetLength(); ++suggestedChangesIndex)
   {
     suggestedChangesJsonList[suggestedChangesIndex].AsString(m_suggestedChanges[suggestedChangesIndex]);
   }
   payload.WithArray("suggestedChanges", std::move(suggestedChangesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
