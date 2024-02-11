/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/EmailInsights.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

EmailInsights::EmailInsights() : 
    m_destinationHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_eventsHasBeenSet(false)
{
}

EmailInsights::EmailInsights(JsonView jsonValue) : 
    m_destinationHasBeenSet(false),
    m_ispHasBeenSet(false),
    m_eventsHasBeenSet(false)
{
  *this = jsonValue;
}

EmailInsights& EmailInsights::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = jsonValue.GetString("Destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Isp"))
  {
    m_isp = jsonValue.GetString("Isp");

    m_ispHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Events"))
  {
    Aws::Utils::Array<JsonView> eventsJsonList = jsonValue.GetArray("Events");
    for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
    {
      m_events.push_back(eventsJsonList[eventsIndex].AsObject());
    }
    m_eventsHasBeenSet = true;
  }

  return *this;
}

JsonValue EmailInsights::Jsonize() const
{
  JsonValue payload;

  if(m_destinationHasBeenSet)
  {
   payload.WithString("Destination", m_destination);

  }

  if(m_ispHasBeenSet)
  {
   payload.WithString("Isp", m_isp);

  }

  if(m_eventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventsJsonList(m_events.size());
   for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
   {
     eventsJsonList[eventsIndex].AsObject(m_events[eventsIndex].Jsonize());
   }
   payload.WithArray("Events", std::move(eventsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
