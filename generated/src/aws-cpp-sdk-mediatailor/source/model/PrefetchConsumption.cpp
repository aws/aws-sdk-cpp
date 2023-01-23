/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/PrefetchConsumption.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

PrefetchConsumption::PrefetchConsumption() : 
    m_availMatchingCriteriaHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

PrefetchConsumption::PrefetchConsumption(JsonView jsonValue) : 
    m_availMatchingCriteriaHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
  *this = jsonValue;
}

PrefetchConsumption& PrefetchConsumption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AvailMatchingCriteria"))
  {
    Aws::Utils::Array<JsonView> availMatchingCriteriaJsonList = jsonValue.GetArray("AvailMatchingCriteria");
    for(unsigned availMatchingCriteriaIndex = 0; availMatchingCriteriaIndex < availMatchingCriteriaJsonList.GetLength(); ++availMatchingCriteriaIndex)
    {
      m_availMatchingCriteria.push_back(availMatchingCriteriaJsonList[availMatchingCriteriaIndex].AsObject());
    }
    m_availMatchingCriteriaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue PrefetchConsumption::Jsonize() const
{
  JsonValue payload;

  if(m_availMatchingCriteriaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availMatchingCriteriaJsonList(m_availMatchingCriteria.size());
   for(unsigned availMatchingCriteriaIndex = 0; availMatchingCriteriaIndex < availMatchingCriteriaJsonList.GetLength(); ++availMatchingCriteriaIndex)
   {
     availMatchingCriteriaJsonList[availMatchingCriteriaIndex].AsObject(m_availMatchingCriteria[availMatchingCriteriaIndex].Jsonize());
   }
   payload.WithArray("AvailMatchingCriteria", std::move(availMatchingCriteriaJsonList));

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
