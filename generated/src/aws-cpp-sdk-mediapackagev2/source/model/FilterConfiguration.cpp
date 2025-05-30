﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/FilterConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

FilterConfiguration::FilterConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

FilterConfiguration& FilterConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ManifestFilter"))
  {
    m_manifestFilter = jsonValue.GetString("ManifestFilter");
    m_manifestFilterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Start"))
  {
    m_start = jsonValue.GetDouble("Start");
    m_startHasBeenSet = true;
  }
  if(jsonValue.ValueExists("End"))
  {
    m_end = jsonValue.GetDouble("End");
    m_endHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeDelaySeconds"))
  {
    m_timeDelaySeconds = jsonValue.GetInteger("TimeDelaySeconds");
    m_timeDelaySecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClipStartTime"))
  {
    m_clipStartTime = jsonValue.GetDouble("ClipStartTime");
    m_clipStartTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue FilterConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_manifestFilterHasBeenSet)
  {
   payload.WithString("ManifestFilter", m_manifestFilter);

  }

  if(m_startHasBeenSet)
  {
   payload.WithDouble("Start", m_start.SecondsWithMSPrecision());
  }

  if(m_endHasBeenSet)
  {
   payload.WithDouble("End", m_end.SecondsWithMSPrecision());
  }

  if(m_timeDelaySecondsHasBeenSet)
  {
   payload.WithInteger("TimeDelaySeconds", m_timeDelaySeconds);

  }

  if(m_clipStartTimeHasBeenSet)
  {
   payload.WithDouble("ClipStartTime", m_clipStartTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
