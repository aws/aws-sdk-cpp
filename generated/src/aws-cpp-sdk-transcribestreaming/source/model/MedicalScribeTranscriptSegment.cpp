/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/MedicalScribeTranscriptSegment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

MedicalScribeTranscriptSegment::MedicalScribeTranscriptSegment(JsonView jsonValue)
{
  *this = jsonValue;
}

MedicalScribeTranscriptSegment& MedicalScribeTranscriptSegment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SegmentId"))
  {
    m_segmentId = jsonValue.GetString("SegmentId");
    m_segmentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BeginAudioTime"))
  {
    m_beginAudioTime = jsonValue.GetDouble("BeginAudioTime");
    m_beginAudioTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndAudioTime"))
  {
    m_endAudioTime = jsonValue.GetDouble("EndAudioTime");
    m_endAudioTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");
    m_contentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Items"))
  {
    Aws::Utils::Array<JsonView> itemsJsonList = jsonValue.GetArray("Items");
    for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
    {
      m_items.push_back(itemsJsonList[itemsIndex].AsObject());
    }
    m_itemsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsPartial"))
  {
    m_isPartial = jsonValue.GetBool("IsPartial");
    m_isPartialHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ChannelId"))
  {
    m_channelId = jsonValue.GetString("ChannelId");
    m_channelIdHasBeenSet = true;
  }
  return *this;
}

JsonValue MedicalScribeTranscriptSegment::Jsonize() const
{
  JsonValue payload;

  if(m_segmentIdHasBeenSet)
  {
   payload.WithString("SegmentId", m_segmentId);

  }

  if(m_beginAudioTimeHasBeenSet)
  {
   payload.WithDouble("BeginAudioTime", m_beginAudioTime);

  }

  if(m_endAudioTimeHasBeenSet)
  {
   payload.WithDouble("EndAudioTime", m_endAudioTime);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_itemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> itemsJsonList(m_items.size());
   for(unsigned itemsIndex = 0; itemsIndex < itemsJsonList.GetLength(); ++itemsIndex)
   {
     itemsJsonList[itemsIndex].AsObject(m_items[itemsIndex].Jsonize());
   }
   payload.WithArray("Items", std::move(itemsJsonList));

  }

  if(m_isPartialHasBeenSet)
  {
   payload.WithBool("IsPartial", m_isPartial);

  }

  if(m_channelIdHasBeenSet)
  {
   payload.WithString("ChannelId", m_channelId);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
