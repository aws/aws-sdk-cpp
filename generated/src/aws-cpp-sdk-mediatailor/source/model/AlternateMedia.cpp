/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/AlternateMedia.h>
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

AlternateMedia::AlternateMedia(JsonView jsonValue)
{
  *this = jsonValue;
}

AlternateMedia& AlternateMedia::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceLocationName"))
  {
    m_sourceLocationName = jsonValue.GetString("SourceLocationName");
    m_sourceLocationNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LiveSourceName"))
  {
    m_liveSourceName = jsonValue.GetString("LiveSourceName");
    m_liveSourceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VodSourceName"))
  {
    m_vodSourceName = jsonValue.GetString("VodSourceName");
    m_vodSourceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClipRange"))
  {
    m_clipRange = jsonValue.GetObject("ClipRange");
    m_clipRangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScheduledStartTimeMillis"))
  {
    m_scheduledStartTimeMillis = jsonValue.GetInt64("ScheduledStartTimeMillis");
    m_scheduledStartTimeMillisHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AdBreaks"))
  {
    Aws::Utils::Array<JsonView> adBreaksJsonList = jsonValue.GetArray("AdBreaks");
    for(unsigned adBreaksIndex = 0; adBreaksIndex < adBreaksJsonList.GetLength(); ++adBreaksIndex)
    {
      m_adBreaks.push_back(adBreaksJsonList[adBreaksIndex].AsObject());
    }
    m_adBreaksHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DurationMillis"))
  {
    m_durationMillis = jsonValue.GetInt64("DurationMillis");
    m_durationMillisHasBeenSet = true;
  }
  return *this;
}

JsonValue AlternateMedia::Jsonize() const
{
  JsonValue payload;

  if(m_sourceLocationNameHasBeenSet)
  {
   payload.WithString("SourceLocationName", m_sourceLocationName);

  }

  if(m_liveSourceNameHasBeenSet)
  {
   payload.WithString("LiveSourceName", m_liveSourceName);

  }

  if(m_vodSourceNameHasBeenSet)
  {
   payload.WithString("VodSourceName", m_vodSourceName);

  }

  if(m_clipRangeHasBeenSet)
  {
   payload.WithObject("ClipRange", m_clipRange.Jsonize());

  }

  if(m_scheduledStartTimeMillisHasBeenSet)
  {
   payload.WithInt64("ScheduledStartTimeMillis", m_scheduledStartTimeMillis);

  }

  if(m_adBreaksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> adBreaksJsonList(m_adBreaks.size());
   for(unsigned adBreaksIndex = 0; adBreaksIndex < adBreaksJsonList.GetLength(); ++adBreaksIndex)
   {
     adBreaksJsonList[adBreaksIndex].AsObject(m_adBreaks[adBreaksIndex].Jsonize());
   }
   payload.WithArray("AdBreaks", std::move(adBreaksJsonList));

  }

  if(m_durationMillisHasBeenSet)
  {
   payload.WithInt64("DurationMillis", m_durationMillis);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
