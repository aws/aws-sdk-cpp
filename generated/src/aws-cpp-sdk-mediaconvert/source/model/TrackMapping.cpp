/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/TrackMapping.h>
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

TrackMapping::TrackMapping(JsonView jsonValue)
{
  *this = jsonValue;
}

TrackMapping& TrackMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioTrackIndexes"))
  {
    Aws::Utils::Array<JsonView> audioTrackIndexesJsonList = jsonValue.GetArray("audioTrackIndexes");
    for(unsigned audioTrackIndexesIndex = 0; audioTrackIndexesIndex < audioTrackIndexesJsonList.GetLength(); ++audioTrackIndexesIndex)
    {
      m_audioTrackIndexes.push_back(audioTrackIndexesJsonList[audioTrackIndexesIndex].AsInteger());
    }
    m_audioTrackIndexesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataTrackIndexes"))
  {
    Aws::Utils::Array<JsonView> dataTrackIndexesJsonList = jsonValue.GetArray("dataTrackIndexes");
    for(unsigned dataTrackIndexesIndex = 0; dataTrackIndexesIndex < dataTrackIndexesJsonList.GetLength(); ++dataTrackIndexesIndex)
    {
      m_dataTrackIndexes.push_back(dataTrackIndexesJsonList[dataTrackIndexesIndex].AsInteger());
    }
    m_dataTrackIndexesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("videoTrackIndexes"))
  {
    Aws::Utils::Array<JsonView> videoTrackIndexesJsonList = jsonValue.GetArray("videoTrackIndexes");
    for(unsigned videoTrackIndexesIndex = 0; videoTrackIndexesIndex < videoTrackIndexesJsonList.GetLength(); ++videoTrackIndexesIndex)
    {
      m_videoTrackIndexes.push_back(videoTrackIndexesJsonList[videoTrackIndexesIndex].AsInteger());
    }
    m_videoTrackIndexesHasBeenSet = true;
  }
  return *this;
}

JsonValue TrackMapping::Jsonize() const
{
  JsonValue payload;

  if(m_audioTrackIndexesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> audioTrackIndexesJsonList(m_audioTrackIndexes.size());
   for(unsigned audioTrackIndexesIndex = 0; audioTrackIndexesIndex < audioTrackIndexesJsonList.GetLength(); ++audioTrackIndexesIndex)
   {
     audioTrackIndexesJsonList[audioTrackIndexesIndex].AsInteger(m_audioTrackIndexes[audioTrackIndexesIndex]);
   }
   payload.WithArray("audioTrackIndexes", std::move(audioTrackIndexesJsonList));

  }

  if(m_dataTrackIndexesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataTrackIndexesJsonList(m_dataTrackIndexes.size());
   for(unsigned dataTrackIndexesIndex = 0; dataTrackIndexesIndex < dataTrackIndexesJsonList.GetLength(); ++dataTrackIndexesIndex)
   {
     dataTrackIndexesJsonList[dataTrackIndexesIndex].AsInteger(m_dataTrackIndexes[dataTrackIndexesIndex]);
   }
   payload.WithArray("dataTrackIndexes", std::move(dataTrackIndexesJsonList));

  }

  if(m_videoTrackIndexesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> videoTrackIndexesJsonList(m_videoTrackIndexes.size());
   for(unsigned videoTrackIndexesIndex = 0; videoTrackIndexesIndex < videoTrackIndexesJsonList.GetLength(); ++videoTrackIndexesIndex)
   {
     videoTrackIndexesJsonList[videoTrackIndexesIndex].AsInteger(m_videoTrackIndexes[videoTrackIndexesIndex]);
   }
   payload.WithArray("videoTrackIndexes", std::move(videoTrackIndexesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
