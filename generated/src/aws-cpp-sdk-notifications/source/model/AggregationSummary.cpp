/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/notifications/model/AggregationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Notifications
{
namespace Model
{

AggregationSummary::AggregationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

AggregationSummary& AggregationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventCount"))
  {
    m_eventCount = jsonValue.GetInteger("eventCount");
    m_eventCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregatedBy"))
  {
    Aws::Utils::Array<JsonView> aggregatedByJsonList = jsonValue.GetArray("aggregatedBy");
    for(unsigned aggregatedByIndex = 0; aggregatedByIndex < aggregatedByJsonList.GetLength(); ++aggregatedByIndex)
    {
      m_aggregatedBy.push_back(aggregatedByJsonList[aggregatedByIndex].AsObject());
    }
    m_aggregatedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregatedAccounts"))
  {
    m_aggregatedAccounts = jsonValue.GetObject("aggregatedAccounts");
    m_aggregatedAccountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregatedRegions"))
  {
    m_aggregatedRegions = jsonValue.GetObject("aggregatedRegions");
    m_aggregatedRegionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregatedOrganizationalUnits"))
  {
    m_aggregatedOrganizationalUnits = jsonValue.GetObject("aggregatedOrganizationalUnits");
    m_aggregatedOrganizationalUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("additionalSummarizationDimensions"))
  {
    Aws::Utils::Array<JsonView> additionalSummarizationDimensionsJsonList = jsonValue.GetArray("additionalSummarizationDimensions");
    for(unsigned additionalSummarizationDimensionsIndex = 0; additionalSummarizationDimensionsIndex < additionalSummarizationDimensionsJsonList.GetLength(); ++additionalSummarizationDimensionsIndex)
    {
      m_additionalSummarizationDimensions.push_back(additionalSummarizationDimensionsJsonList[additionalSummarizationDimensionsIndex].AsObject());
    }
    m_additionalSummarizationDimensionsHasBeenSet = true;
  }
  return *this;
}

JsonValue AggregationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_eventCountHasBeenSet)
  {
   payload.WithInteger("eventCount", m_eventCount);

  }

  if(m_aggregatedByHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aggregatedByJsonList(m_aggregatedBy.size());
   for(unsigned aggregatedByIndex = 0; aggregatedByIndex < aggregatedByJsonList.GetLength(); ++aggregatedByIndex)
   {
     aggregatedByJsonList[aggregatedByIndex].AsObject(m_aggregatedBy[aggregatedByIndex].Jsonize());
   }
   payload.WithArray("aggregatedBy", std::move(aggregatedByJsonList));

  }

  if(m_aggregatedAccountsHasBeenSet)
  {
   payload.WithObject("aggregatedAccounts", m_aggregatedAccounts.Jsonize());

  }

  if(m_aggregatedRegionsHasBeenSet)
  {
   payload.WithObject("aggregatedRegions", m_aggregatedRegions.Jsonize());

  }

  if(m_aggregatedOrganizationalUnitsHasBeenSet)
  {
   payload.WithObject("aggregatedOrganizationalUnits", m_aggregatedOrganizationalUnits.Jsonize());

  }

  if(m_additionalSummarizationDimensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalSummarizationDimensionsJsonList(m_additionalSummarizationDimensions.size());
   for(unsigned additionalSummarizationDimensionsIndex = 0; additionalSummarizationDimensionsIndex < additionalSummarizationDimensionsJsonList.GetLength(); ++additionalSummarizationDimensionsIndex)
   {
     additionalSummarizationDimensionsJsonList[additionalSummarizationDimensionsIndex].AsObject(m_additionalSummarizationDimensions[additionalSummarizationDimensionsIndex].Jsonize());
   }
   payload.WithArray("additionalSummarizationDimensions", std::move(additionalSummarizationDimensionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Notifications
} // namespace Aws
