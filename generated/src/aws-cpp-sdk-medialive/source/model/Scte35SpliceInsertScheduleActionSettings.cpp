/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Scte35SpliceInsertScheduleActionSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

Scte35SpliceInsertScheduleActionSettings::Scte35SpliceInsertScheduleActionSettings() : 
    m_duration(0),
    m_durationHasBeenSet(false),
    m_spliceEventId(0),
    m_spliceEventIdHasBeenSet(false)
{
}

Scte35SpliceInsertScheduleActionSettings::Scte35SpliceInsertScheduleActionSettings(JsonView jsonValue) : 
    m_duration(0),
    m_durationHasBeenSet(false),
    m_spliceEventId(0),
    m_spliceEventIdHasBeenSet(false)
{
  *this = jsonValue;
}

Scte35SpliceInsertScheduleActionSettings& Scte35SpliceInsertScheduleActionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("duration"))
  {
    m_duration = jsonValue.GetInt64("duration");

    m_durationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("spliceEventId"))
  {
    m_spliceEventId = jsonValue.GetInt64("spliceEventId");

    m_spliceEventIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Scte35SpliceInsertScheduleActionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_durationHasBeenSet)
  {
   payload.WithInt64("duration", m_duration);

  }

  if(m_spliceEventIdHasBeenSet)
  {
   payload.WithInt64("spliceEventId", m_spliceEventId);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
