/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/Insight.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PI
{
namespace Model
{

Insight::Insight() : 
    m_insightIdHasBeenSet(false),
    m_insightTypeHasBeenSet(false),
    m_context(ContextType::NOT_SET),
    m_contextHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_severity(Severity::NOT_SET),
    m_severityHasBeenSet(false),
    m_supportingInsightsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_recommendationsHasBeenSet(false),
    m_insightDataHasBeenSet(false),
    m_baselineDataHasBeenSet(false)
{
}

Insight::Insight(JsonView jsonValue) : 
    m_insightIdHasBeenSet(false),
    m_insightTypeHasBeenSet(false),
    m_context(ContextType::NOT_SET),
    m_contextHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_severity(Severity::NOT_SET),
    m_severityHasBeenSet(false),
    m_supportingInsightsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_recommendationsHasBeenSet(false),
    m_insightDataHasBeenSet(false),
    m_baselineDataHasBeenSet(false)
{
  *this = jsonValue;
}

Insight& Insight::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InsightId"))
  {
    m_insightId = jsonValue.GetString("InsightId");

    m_insightIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InsightType"))
  {
    m_insightType = jsonValue.GetString("InsightType");

    m_insightTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Context"))
  {
    m_context = ContextTypeMapper::GetContextTypeForName(jsonValue.GetString("Context"));

    m_contextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = SeverityMapper::GetSeverityForName(jsonValue.GetString("Severity"));

    m_severityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportingInsights"))
  {
    Aws::Utils::Array<JsonView> supportingInsightsJsonList = jsonValue.GetArray("SupportingInsights");
    for(unsigned supportingInsightsIndex = 0; supportingInsightsIndex < supportingInsightsJsonList.GetLength(); ++supportingInsightsIndex)
    {
      m_supportingInsights.push_back(supportingInsightsJsonList[supportingInsightsIndex].AsObject());
    }
    m_supportingInsightsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Recommendations"))
  {
    Aws::Utils::Array<JsonView> recommendationsJsonList = jsonValue.GetArray("Recommendations");
    for(unsigned recommendationsIndex = 0; recommendationsIndex < recommendationsJsonList.GetLength(); ++recommendationsIndex)
    {
      m_recommendations.push_back(recommendationsJsonList[recommendationsIndex].AsObject());
    }
    m_recommendationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InsightData"))
  {
    Aws::Utils::Array<JsonView> insightDataJsonList = jsonValue.GetArray("InsightData");
    for(unsigned insightDataIndex = 0; insightDataIndex < insightDataJsonList.GetLength(); ++insightDataIndex)
    {
      m_insightData.push_back(insightDataJsonList[insightDataIndex].AsObject());
    }
    m_insightDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BaselineData"))
  {
    Aws::Utils::Array<JsonView> baselineDataJsonList = jsonValue.GetArray("BaselineData");
    for(unsigned baselineDataIndex = 0; baselineDataIndex < baselineDataJsonList.GetLength(); ++baselineDataIndex)
    {
      m_baselineData.push_back(baselineDataJsonList[baselineDataIndex].AsObject());
    }
    m_baselineDataHasBeenSet = true;
  }

  return *this;
}

JsonValue Insight::Jsonize() const
{
  JsonValue payload;

  if(m_insightIdHasBeenSet)
  {
   payload.WithString("InsightId", m_insightId);

  }

  if(m_insightTypeHasBeenSet)
  {
   payload.WithString("InsightType", m_insightType);

  }

  if(m_contextHasBeenSet)
  {
   payload.WithString("Context", ContextTypeMapper::GetNameForContextType(m_context));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("Severity", SeverityMapper::GetNameForSeverity(m_severity));
  }

  if(m_supportingInsightsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportingInsightsJsonList(m_supportingInsights.size());
   for(unsigned supportingInsightsIndex = 0; supportingInsightsIndex < supportingInsightsJsonList.GetLength(); ++supportingInsightsIndex)
   {
     supportingInsightsJsonList[supportingInsightsIndex].AsObject(m_supportingInsights[supportingInsightsIndex].Jsonize());
   }
   payload.WithArray("SupportingInsights", std::move(supportingInsightsJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_recommendationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recommendationsJsonList(m_recommendations.size());
   for(unsigned recommendationsIndex = 0; recommendationsIndex < recommendationsJsonList.GetLength(); ++recommendationsIndex)
   {
     recommendationsJsonList[recommendationsIndex].AsObject(m_recommendations[recommendationsIndex].Jsonize());
   }
   payload.WithArray("Recommendations", std::move(recommendationsJsonList));

  }

  if(m_insightDataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> insightDataJsonList(m_insightData.size());
   for(unsigned insightDataIndex = 0; insightDataIndex < insightDataJsonList.GetLength(); ++insightDataIndex)
   {
     insightDataJsonList[insightDataIndex].AsObject(m_insightData[insightDataIndex].Jsonize());
   }
   payload.WithArray("InsightData", std::move(insightDataJsonList));

  }

  if(m_baselineDataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> baselineDataJsonList(m_baselineData.size());
   for(unsigned baselineDataIndex = 0; baselineDataIndex < baselineDataJsonList.GetLength(); ++baselineDataIndex)
   {
     baselineDataJsonList[baselineDataIndex].AsObject(m_baselineData[baselineDataIndex].Jsonize());
   }
   payload.WithArray("BaselineData", std::move(baselineDataJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PI
} // namespace Aws
