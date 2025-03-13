/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/ThumbnailDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

ThumbnailDetails::ThumbnailDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

ThumbnailDetails& ThumbnailDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("flowArn"))
  {
    m_flowArn = jsonValue.GetString("flowArn");
    m_flowArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("thumbnail"))
  {
    m_thumbnail = jsonValue.GetString("thumbnail");
    m_thumbnailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("thumbnailMessages"))
  {
    Aws::Utils::Array<JsonView> thumbnailMessagesJsonList = jsonValue.GetArray("thumbnailMessages");
    for(unsigned thumbnailMessagesIndex = 0; thumbnailMessagesIndex < thumbnailMessagesJsonList.GetLength(); ++thumbnailMessagesIndex)
    {
      m_thumbnailMessages.push_back(thumbnailMessagesJsonList[thumbnailMessagesIndex].AsObject());
    }
    m_thumbnailMessagesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timecode"))
  {
    m_timecode = jsonValue.GetString("timecode");
    m_timecodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetString("timestamp");
    m_timestampHasBeenSet = true;
  }
  return *this;
}

JsonValue ThumbnailDetails::Jsonize() const
{
  JsonValue payload;

  if(m_flowArnHasBeenSet)
  {
   payload.WithString("flowArn", m_flowArn);

  }

  if(m_thumbnailHasBeenSet)
  {
   payload.WithString("thumbnail", m_thumbnail);

  }

  if(m_thumbnailMessagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> thumbnailMessagesJsonList(m_thumbnailMessages.size());
   for(unsigned thumbnailMessagesIndex = 0; thumbnailMessagesIndex < thumbnailMessagesJsonList.GetLength(); ++thumbnailMessagesIndex)
   {
     thumbnailMessagesJsonList[thumbnailMessagesIndex].AsObject(m_thumbnailMessages[thumbnailMessagesIndex].Jsonize());
   }
   payload.WithArray("thumbnailMessages", std::move(thumbnailMessagesJsonList));

  }

  if(m_timecodeHasBeenSet)
  {
   payload.WithString("timecode", m_timecode);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithString("timestamp", m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
