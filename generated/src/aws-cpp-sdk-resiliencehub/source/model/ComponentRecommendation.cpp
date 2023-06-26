/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ComponentRecommendation.h>
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

ComponentRecommendation::ComponentRecommendation() : 
    m_appComponentNameHasBeenSet(false),
    m_configRecommendationsHasBeenSet(false),
    m_recommendationStatus(RecommendationComplianceStatus::NOT_SET),
    m_recommendationStatusHasBeenSet(false)
{
}

ComponentRecommendation::ComponentRecommendation(JsonView jsonValue) : 
    m_appComponentNameHasBeenSet(false),
    m_configRecommendationsHasBeenSet(false),
    m_recommendationStatus(RecommendationComplianceStatus::NOT_SET),
    m_recommendationStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentRecommendation& ComponentRecommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appComponentName"))
  {
    m_appComponentName = jsonValue.GetString("appComponentName");

    m_appComponentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configRecommendations"))
  {
    Aws::Utils::Array<JsonView> configRecommendationsJsonList = jsonValue.GetArray("configRecommendations");
    for(unsigned configRecommendationsIndex = 0; configRecommendationsIndex < configRecommendationsJsonList.GetLength(); ++configRecommendationsIndex)
    {
      m_configRecommendations.push_back(configRecommendationsJsonList[configRecommendationsIndex].AsObject());
    }
    m_configRecommendationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendationStatus"))
  {
    m_recommendationStatus = RecommendationComplianceStatusMapper::GetRecommendationComplianceStatusForName(jsonValue.GetString("recommendationStatus"));

    m_recommendationStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentRecommendation::Jsonize() const
{
  JsonValue payload;

  if(m_appComponentNameHasBeenSet)
  {
   payload.WithString("appComponentName", m_appComponentName);

  }

  if(m_configRecommendationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configRecommendationsJsonList(m_configRecommendations.size());
   for(unsigned configRecommendationsIndex = 0; configRecommendationsIndex < configRecommendationsJsonList.GetLength(); ++configRecommendationsIndex)
   {
     configRecommendationsJsonList[configRecommendationsIndex].AsObject(m_configRecommendations[configRecommendationsIndex].Jsonize());
   }
   payload.WithArray("configRecommendations", std::move(configRecommendationsJsonList));

  }

  if(m_recommendationStatusHasBeenSet)
  {
   payload.WithString("recommendationStatus", RecommendationComplianceStatusMapper::GetNameForRecommendationComplianceStatus(m_recommendationStatus));
  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
