/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/InsightSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

InsightSummary::InsightSummary() : 
    m_insightIdHasBeenSet(false),
    m_groupARNHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_rootCauseServiceIdHasBeenSet(false),
    m_categoriesHasBeenSet(false),
    m_state(InsightState::NOT_SET),
    m_stateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_clientRequestImpactStatisticsHasBeenSet(false),
    m_rootCauseServiceRequestImpactStatisticsHasBeenSet(false),
    m_topAnomalousServicesHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
}

InsightSummary::InsightSummary(JsonView jsonValue) : 
    m_insightIdHasBeenSet(false),
    m_groupARNHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_rootCauseServiceIdHasBeenSet(false),
    m_categoriesHasBeenSet(false),
    m_state(InsightState::NOT_SET),
    m_stateHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_clientRequestImpactStatisticsHasBeenSet(false),
    m_rootCauseServiceRequestImpactStatisticsHasBeenSet(false),
    m_topAnomalousServicesHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

InsightSummary& InsightSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InsightId"))
  {
    m_insightId = jsonValue.GetString("InsightId");

    m_insightIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupARN"))
  {
    m_groupARN = jsonValue.GetString("GroupARN");

    m_groupARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupName"))
  {
    m_groupName = jsonValue.GetString("GroupName");

    m_groupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RootCauseServiceId"))
  {
    m_rootCauseServiceId = jsonValue.GetObject("RootCauseServiceId");

    m_rootCauseServiceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Categories"))
  {
    Aws::Utils::Array<JsonView> categoriesJsonList = jsonValue.GetArray("Categories");
    for(unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex)
    {
      m_categories.push_back(InsightCategoryMapper::GetInsightCategoryForName(categoriesJsonList[categoriesIndex].AsString()));
    }
    m_categoriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = InsightStateMapper::GetInsightStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
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

  if(jsonValue.ValueExists("Summary"))
  {
    m_summary = jsonValue.GetString("Summary");

    m_summaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientRequestImpactStatistics"))
  {
    m_clientRequestImpactStatistics = jsonValue.GetObject("ClientRequestImpactStatistics");

    m_clientRequestImpactStatisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RootCauseServiceRequestImpactStatistics"))
  {
    m_rootCauseServiceRequestImpactStatistics = jsonValue.GetObject("RootCauseServiceRequestImpactStatistics");

    m_rootCauseServiceRequestImpactStatisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TopAnomalousServices"))
  {
    Aws::Utils::Array<JsonView> topAnomalousServicesJsonList = jsonValue.GetArray("TopAnomalousServices");
    for(unsigned topAnomalousServicesIndex = 0; topAnomalousServicesIndex < topAnomalousServicesJsonList.GetLength(); ++topAnomalousServicesIndex)
    {
      m_topAnomalousServices.push_back(topAnomalousServicesJsonList[topAnomalousServicesIndex].AsObject());
    }
    m_topAnomalousServicesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("LastUpdateTime");

    m_lastUpdateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue InsightSummary::Jsonize() const
{
  JsonValue payload;

  if(m_insightIdHasBeenSet)
  {
   payload.WithString("InsightId", m_insightId);

  }

  if(m_groupARNHasBeenSet)
  {
   payload.WithString("GroupARN", m_groupARN);

  }

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  if(m_rootCauseServiceIdHasBeenSet)
  {
   payload.WithObject("RootCauseServiceId", m_rootCauseServiceId.Jsonize());

  }

  if(m_categoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> categoriesJsonList(m_categories.size());
   for(unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex)
   {
     categoriesJsonList[categoriesIndex].AsString(InsightCategoryMapper::GetNameForInsightCategory(m_categories[categoriesIndex]));
   }
   payload.WithArray("Categories", std::move(categoriesJsonList));

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", InsightStateMapper::GetNameForInsightState(m_state));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_summaryHasBeenSet)
  {
   payload.WithString("Summary", m_summary);

  }

  if(m_clientRequestImpactStatisticsHasBeenSet)
  {
   payload.WithObject("ClientRequestImpactStatistics", m_clientRequestImpactStatistics.Jsonize());

  }

  if(m_rootCauseServiceRequestImpactStatisticsHasBeenSet)
  {
   payload.WithObject("RootCauseServiceRequestImpactStatistics", m_rootCauseServiceRequestImpactStatistics.Jsonize());

  }

  if(m_topAnomalousServicesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> topAnomalousServicesJsonList(m_topAnomalousServices.size());
   for(unsigned topAnomalousServicesIndex = 0; topAnomalousServicesIndex < topAnomalousServicesJsonList.GetLength(); ++topAnomalousServicesIndex)
   {
     topAnomalousServicesJsonList[topAnomalousServicesIndex].AsObject(m_topAnomalousServices[topAnomalousServicesIndex].Jsonize());
   }
   payload.WithArray("TopAnomalousServices", std::move(topAnomalousServicesJsonList));

  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
