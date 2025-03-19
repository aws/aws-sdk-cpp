/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/GroupingRecommendation.h>
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

GroupingRecommendation::GroupingRecommendation(JsonView jsonValue)
{
  *this = jsonValue;
}

GroupingRecommendation& GroupingRecommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("confidenceLevel"))
  {
    m_confidenceLevel = GroupingRecommendationConfidenceLevelMapper::GetGroupingRecommendationConfidenceLevelForName(jsonValue.GetString("confidenceLevel"));
    m_confidenceLevelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("groupingAppComponent"))
  {
    m_groupingAppComponent = jsonValue.GetObject("groupingAppComponent");
    m_groupingAppComponentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("groupingRecommendationId"))
  {
    m_groupingRecommendationId = jsonValue.GetString("groupingRecommendationId");
    m_groupingRecommendationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recommendationReasons"))
  {
    Aws::Utils::Array<JsonView> recommendationReasonsJsonList = jsonValue.GetArray("recommendationReasons");
    for(unsigned recommendationReasonsIndex = 0; recommendationReasonsIndex < recommendationReasonsJsonList.GetLength(); ++recommendationReasonsIndex)
    {
      m_recommendationReasons.push_back(recommendationReasonsJsonList[recommendationReasonsIndex].AsString());
    }
    m_recommendationReasonsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rejectionReason"))
  {
    m_rejectionReason = GroupingRecommendationRejectionReasonMapper::GetGroupingRecommendationRejectionReasonForName(jsonValue.GetString("rejectionReason"));
    m_rejectionReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resources"))
  {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsObject());
    }
    m_resourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("score"))
  {
    m_score = jsonValue.GetDouble("score");
    m_scoreHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = GroupingRecommendationStatusTypeMapper::GetGroupingRecommendationStatusTypeForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue GroupingRecommendation::Jsonize() const
{
  JsonValue payload;

  if(m_confidenceLevelHasBeenSet)
  {
   payload.WithString("confidenceLevel", GroupingRecommendationConfidenceLevelMapper::GetNameForGroupingRecommendationConfidenceLevel(m_confidenceLevel));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_groupingAppComponentHasBeenSet)
  {
   payload.WithObject("groupingAppComponent", m_groupingAppComponent.Jsonize());

  }

  if(m_groupingRecommendationIdHasBeenSet)
  {
   payload.WithString("groupingRecommendationId", m_groupingRecommendationId);

  }

  if(m_recommendationReasonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recommendationReasonsJsonList(m_recommendationReasons.size());
   for(unsigned recommendationReasonsIndex = 0; recommendationReasonsIndex < recommendationReasonsJsonList.GetLength(); ++recommendationReasonsIndex)
   {
     recommendationReasonsJsonList[recommendationReasonsIndex].AsString(m_recommendationReasons[recommendationReasonsIndex]);
   }
   payload.WithArray("recommendationReasons", std::move(recommendationReasonsJsonList));

  }

  if(m_rejectionReasonHasBeenSet)
  {
   payload.WithString("rejectionReason", GroupingRecommendationRejectionReasonMapper::GetNameForGroupingRecommendationRejectionReason(m_rejectionReason));
  }

  if(m_resourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsObject(m_resources[resourcesIndex].Jsonize());
   }
   payload.WithArray("resources", std::move(resourcesJsonList));

  }

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("score", m_score);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", GroupingRecommendationStatusTypeMapper::GetNameForGroupingRecommendationStatusType(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
