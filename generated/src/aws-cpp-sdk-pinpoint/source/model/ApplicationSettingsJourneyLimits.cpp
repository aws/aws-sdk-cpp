/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/ApplicationSettingsJourneyLimits.h>
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

ApplicationSettingsJourneyLimits::ApplicationSettingsJourneyLimits() : 
    m_dailyCap(0),
    m_dailyCapHasBeenSet(false),
    m_timeframeCapHasBeenSet(false),
    m_totalCap(0),
    m_totalCapHasBeenSet(false)
{
}

ApplicationSettingsJourneyLimits::ApplicationSettingsJourneyLimits(JsonView jsonValue) : 
    m_dailyCap(0),
    m_dailyCapHasBeenSet(false),
    m_timeframeCapHasBeenSet(false),
    m_totalCap(0),
    m_totalCapHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationSettingsJourneyLimits& ApplicationSettingsJourneyLimits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DailyCap"))
  {
    m_dailyCap = jsonValue.GetInteger("DailyCap");

    m_dailyCapHasBeenSet = true;
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

JsonValue ApplicationSettingsJourneyLimits::Jsonize() const
{
  JsonValue payload;

  if(m_dailyCapHasBeenSet)
  {
   payload.WithInteger("DailyCap", m_dailyCap);

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
