/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/JourneyLimits.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

JourneyLimits::JourneyLimits() : 
    m_dailyCap(0),
    m_dailyCapHasBeenSet(false),
    m_endpointReentryCap(0),
    m_endpointReentryCapHasBeenSet(false),
    m_messagesPerSecond(0),
    m_messagesPerSecondHasBeenSet(false),
    m_endpointReentryIntervalHasBeenSet(false),
    m_timeframeCapHasBeenSet(false),
    m_totalCap(0),
    m_totalCapHasBeenSet(false)
{
}

JourneyLimits::JourneyLimits(JsonView jsonValue) : 
    m_dailyCap(0),
    m_dailyCapHasBeenSet(false),
    m_endpointReentryCap(0),
    m_endpointReentryCapHasBeenSet(false),
    m_messagesPerSecond(0),
    m_messagesPerSecondHasBeenSet(false),
    m_endpointReentryIntervalHasBeenSet(false),
    m_timeframeCapHasBeenSet(false),
    m_totalCap(0),
    m_totalCapHasBeenSet(false)
{
  *this = jsonValue;
}

JourneyLimits& JourneyLimits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DailyCap"))
  {
    m_dailyCap = jsonValue.GetInteger("DailyCap");

    m_dailyCapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointReentryCap"))
  {
    m_endpointReentryCap = jsonValue.GetInteger("EndpointReentryCap");

    m_endpointReentryCapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessagesPerSecond"))
  {
    m_messagesPerSecond = jsonValue.GetInteger("MessagesPerSecond");

    m_messagesPerSecondHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointReentryInterval"))
  {
    m_endpointReentryInterval = jsonValue.GetString("EndpointReentryInterval");

    m_endpointReentryIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeframeCap"))
  {
    m_timeframeCap = jsonValue.GetObject("TimeframeCap");

    m_timeframeCapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalCap"))
  {
    m_totalCap = jsonValue.GetInteger("TotalCap");

    m_totalCapHasBeenSet = true;
  }

  return *this;
}

JsonValue JourneyLimits::Jsonize() const
{
  JsonValue payload;

  if(m_dailyCapHasBeenSet)
  {
   payload.WithInteger("DailyCap", m_dailyCap);

  }

  if(m_endpointReentryCapHasBeenSet)
  {
   payload.WithInteger("EndpointReentryCap", m_endpointReentryCap);

  }

  if(m_messagesPerSecondHasBeenSet)
  {
   payload.WithInteger("MessagesPerSecond", m_messagesPerSecond);

  }

  if(m_endpointReentryIntervalHasBeenSet)
  {
   payload.WithString("EndpointReentryInterval", m_endpointReentryInterval);

  }

  if(m_timeframeCapHasBeenSet)
  {
   payload.WithObject("TimeframeCap", m_timeframeCap.Jsonize());

  }

  if(m_totalCapHasBeenSet)
  {
   payload.WithInteger("TotalCap", m_totalCap);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
