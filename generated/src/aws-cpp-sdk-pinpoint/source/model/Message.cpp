/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/Message.h>
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

Message::Message() : 
    m_action(Action::NOT_SET),
    m_actionHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_imageIconUrlHasBeenSet(false),
    m_imageSmallIconUrlHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_jsonBodyHasBeenSet(false),
    m_mediaUrlHasBeenSet(false),
    m_rawContentHasBeenSet(false),
    m_silentPush(false),
    m_silentPushHasBeenSet(false),
    m_timeToLive(0),
    m_timeToLiveHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

Message::Message(JsonView jsonValue) : 
    m_action(Action::NOT_SET),
    m_actionHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_imageIconUrlHasBeenSet(false),
    m_imageSmallIconUrlHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_jsonBodyHasBeenSet(false),
    m_mediaUrlHasBeenSet(false),
    m_rawContentHasBeenSet(false),
    m_silentPush(false),
    m_silentPushHasBeenSet(false),
    m_timeToLive(0),
    m_timeToLiveHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

Message& Message::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = ActionMapper::GetActionForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Body"))
  {
    m_body = jsonValue.GetString("Body");

    m_bodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageIconUrl"))
  {
    m_imageIconUrl = jsonValue.GetString("ImageIconUrl");

    m_imageIconUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageSmallIconUrl"))
  {
    m_imageSmallIconUrl = jsonValue.GetString("ImageSmallIconUrl");

    m_imageSmallIconUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageUrl"))
  {
    m_imageUrl = jsonValue.GetString("ImageUrl");

    m_imageUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JsonBody"))
  {
    m_jsonBody = jsonValue.GetString("JsonBody");

    m_jsonBodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaUrl"))
  {
    m_mediaUrl = jsonValue.GetString("MediaUrl");

    m_mediaUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RawContent"))
  {
    m_rawContent = jsonValue.GetString("RawContent");

    m_rawContentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SilentPush"))
  {
    m_silentPush = jsonValue.GetBool("SilentPush");

    m_silentPushHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeToLive"))
  {
    m_timeToLive = jsonValue.GetInteger("TimeToLive");

    m_timeToLiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

    m_urlHasBeenSet = true;
  }

  return *this;
}

JsonValue Message::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ActionMapper::GetNameForAction(m_action));
  }

  if(m_bodyHasBeenSet)
  {
   payload.WithString("Body", m_body);

  }

  if(m_imageIconUrlHasBeenSet)
  {
   payload.WithString("ImageIconUrl", m_imageIconUrl);

  }

  if(m_imageSmallIconUrlHasBeenSet)
  {
   payload.WithString("ImageSmallIconUrl", m_imageSmallIconUrl);

  }

  if(m_imageUrlHasBeenSet)
  {
   payload.WithString("ImageUrl", m_imageUrl);

  }

  if(m_jsonBodyHasBeenSet)
  {
   payload.WithString("JsonBody", m_jsonBody);

  }

  if(m_mediaUrlHasBeenSet)
  {
   payload.WithString("MediaUrl", m_mediaUrl);

  }

  if(m_rawContentHasBeenSet)
  {
   payload.WithString("RawContent", m_rawContent);

  }

  if(m_silentPushHasBeenSet)
  {
   payload.WithBool("SilentPush", m_silentPush);

  }

  if(m_timeToLiveHasBeenSet)
  {
   payload.WithInteger("TimeToLive", m_timeToLive);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
