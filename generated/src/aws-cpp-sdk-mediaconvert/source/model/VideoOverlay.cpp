/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/VideoOverlay.h>
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

VideoOverlay::VideoOverlay(JsonView jsonValue)
{
  *this = jsonValue;
}

VideoOverlay& VideoOverlay::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("crop"))
  {
    m_crop = jsonValue.GetObject("crop");
    m_cropHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endTimecode"))
  {
    m_endTimecode = jsonValue.GetString("endTimecode");
    m_endTimecodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("initialPosition"))
  {
    m_initialPosition = jsonValue.GetObject("initialPosition");
    m_initialPositionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetObject("input");
    m_inputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("playback"))
  {
    m_playback = VideoOverlayPlayBackModeMapper::GetVideoOverlayPlayBackModeForName(jsonValue.GetString("playback"));
    m_playbackHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTimecode"))
  {
    m_startTimecode = jsonValue.GetString("startTimecode");
    m_startTimecodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("transitions"))
  {
    Aws::Utils::Array<JsonView> transitionsJsonList = jsonValue.GetArray("transitions");
    for(unsigned transitionsIndex = 0; transitionsIndex < transitionsJsonList.GetLength(); ++transitionsIndex)
    {
      m_transitions.push_back(transitionsJsonList[transitionsIndex].AsObject());
    }
    m_transitionsHasBeenSet = true;
  }
  return *this;
}

JsonValue VideoOverlay::Jsonize() const
{
  JsonValue payload;

  if(m_cropHasBeenSet)
  {
   payload.WithObject("crop", m_crop.Jsonize());

  }

  if(m_endTimecodeHasBeenSet)
  {
   payload.WithString("endTimecode", m_endTimecode);

  }

  if(m_initialPositionHasBeenSet)
  {
   payload.WithObject("initialPosition", m_initialPosition.Jsonize());

  }

  if(m_inputHasBeenSet)
  {
   payload.WithObject("input", m_input.Jsonize());

  }

  if(m_playbackHasBeenSet)
  {
   payload.WithString("playback", VideoOverlayPlayBackModeMapper::GetNameForVideoOverlayPlayBackMode(m_playback));
  }

  if(m_startTimecodeHasBeenSet)
  {
   payload.WithString("startTimecode", m_startTimecode);

  }

  if(m_transitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> transitionsJsonList(m_transitions.size());
   for(unsigned transitionsIndex = 0; transitionsIndex < transitionsJsonList.GetLength(); ++transitionsIndex)
   {
     transitionsJsonList[transitionsIndex].AsObject(m_transitions[transitionsIndex].Jsonize());
   }
   payload.WithArray("transitions", std::move(transitionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
