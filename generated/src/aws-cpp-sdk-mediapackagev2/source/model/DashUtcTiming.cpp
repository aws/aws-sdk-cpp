/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/DashUtcTiming.h>
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

DashUtcTiming::DashUtcTiming() : 
    m_timingMode(DashUtcTimingMode::NOT_SET),
    m_timingModeHasBeenSet(false),
    m_timingSourceHasBeenSet(false)
{
}

DashUtcTiming::DashUtcTiming(JsonView jsonValue) : 
    m_timingMode(DashUtcTimingMode::NOT_SET),
    m_timingModeHasBeenSet(false),
    m_timingSourceHasBeenSet(false)
{
  *this = jsonValue;
}

DashUtcTiming& DashUtcTiming::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TimingMode"))
  {
    m_timingMode = DashUtcTimingModeMapper::GetDashUtcTimingModeForName(jsonValue.GetString("TimingMode"));

    m_timingModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimingSource"))
  {
    m_timingSource = jsonValue.GetString("TimingSource");

    m_timingSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue DashUtcTiming::Jsonize() const
{
  JsonValue payload;

  if(m_timingModeHasBeenSet)
  {
   payload.WithString("TimingMode", DashUtcTimingModeMapper::GetNameForDashUtcTimingMode(m_timingMode));
  }

  if(m_timingSourceHasBeenSet)
  {
   payload.WithString("TimingSource", m_timingSource);

  }

  return payload;
}

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
