/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Track.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

Track::Track(JsonView jsonValue)
{
  *this = jsonValue;
}

Track& Track::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioProperties"))
  {
    m_audioProperties = jsonValue.GetObject("audioProperties");
    m_audioPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("codec"))
  {
    m_codec = CodecMapper::GetCodecForName(jsonValue.GetString("codec"));
    m_codecHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataProperties"))
  {
    m_dataProperties = jsonValue.GetObject("dataProperties");
    m_dataPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("duration"))
  {
    m_duration = jsonValue.GetDouble("duration");
    m_durationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("index"))
  {
    m_index = jsonValue.GetInteger("index");
    m_indexHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trackType"))
  {
    m_trackType = TrackTypeMapper::GetTrackTypeForName(jsonValue.GetString("trackType"));
    m_trackTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("videoProperties"))
  {
    m_videoProperties = jsonValue.GetObject("videoProperties");
    m_videoPropertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue Track::Jsonize() const
{
  JsonValue payload;

  if(m_audioPropertiesHasBeenSet)
  {
   payload.WithObject("audioProperties", m_audioProperties.Jsonize());

  }

  if(m_codecHasBeenSet)
  {
   payload.WithString("codec", CodecMapper::GetNameForCodec(m_codec));
  }

  if(m_dataPropertiesHasBeenSet)
  {
   payload.WithObject("dataProperties", m_dataProperties.Jsonize());

  }

  if(m_durationHasBeenSet)
  {
   payload.WithDouble("duration", m_duration);

  }

  if(m_indexHasBeenSet)
  {
   payload.WithInteger("index", m_index);

  }

  if(m_trackTypeHasBeenSet)
  {
   payload.WithString("trackType", TrackTypeMapper::GetNameForTrackType(m_trackType));
  }

  if(m_videoPropertiesHasBeenSet)
  {
   payload.WithObject("videoProperties", m_videoProperties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
