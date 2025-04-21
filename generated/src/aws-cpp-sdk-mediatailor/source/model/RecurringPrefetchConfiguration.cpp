/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/RecurringPrefetchConfiguration.h>
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

RecurringPrefetchConfiguration::RecurringPrefetchConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

RecurringPrefetchConfiguration& RecurringPrefetchConfiguration::operator =(JsonView jsonValue)
{
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
  if(jsonValue.ValueExists("RecurringConsumption"))
  {
    m_recurringConsumption = jsonValue.GetObject("RecurringConsumption");
    m_recurringConsumptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RecurringRetrieval"))
  {
    m_recurringRetrieval = jsonValue.GetObject("RecurringRetrieval");
    m_recurringRetrievalHasBeenSet = true;
  }
  return *this;
}

JsonValue RecurringPrefetchConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_recurringConsumptionHasBeenSet)
  {
   payload.WithObject("RecurringConsumption", m_recurringConsumption.Jsonize());

  }

  if(m_recurringRetrievalHasBeenSet)
  {
   payload.WithObject("RecurringRetrieval", m_recurringRetrieval.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
