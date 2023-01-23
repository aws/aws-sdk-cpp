/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/APNSMessage.h>
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

APNSMessage::APNSMessage() : 
    m_aPNSPushTypeHasBeenSet(false),
    m_action(Action::NOT_SET),
    m_actionHasBeenSet(false),
    m_badge(0),
    m_badgeHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_collapseIdHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_mediaUrlHasBeenSet(false),
    m_preferredAuthenticationMethodHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_rawContentHasBeenSet(false),
    m_silentPush(false),
    m_silentPushHasBeenSet(false),
    m_soundHasBeenSet(false),
    m_substitutionsHasBeenSet(false),
    m_threadIdHasBeenSet(false),
    m_timeToLive(0),
    m_timeToLiveHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

APNSMessage::APNSMessage(JsonView jsonValue) : 
    m_aPNSPushTypeHasBeenSet(false),
    m_action(Action::NOT_SET),
    m_actionHasBeenSet(false),
    m_badge(0),
    m_badgeHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_collapseIdHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_mediaUrlHasBeenSet(false),
    m_preferredAuthenticationMethodHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_rawContentHasBeenSet(false),
    m_silentPush(false),
    m_silentPushHasBeenSet(false),
    m_soundHasBeenSet(false),
    m_substitutionsHasBeenSet(false),
    m_threadIdHasBeenSet(false),
    m_timeToLive(0),
    m_timeToLiveHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = jsonValue;
}

APNSMessage& APNSMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("APNSPushType"))
  {
    m_aPNSPushType = jsonValue.GetString("APNSPushType");

    m_aPNSPushTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Action"))
  {
    m_action = ActionMapper::GetActionForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Badge"))
  {
    m_badge = jsonValue.GetInteger("Badge");

    m_badgeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Body"))
  {
    m_body = jsonValue.GetString("Body");

    m_bodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Category"))
  {
    m_category = jsonValue.GetString("Category");

    m_categoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CollapseId"))
  {
    m_collapseId = jsonValue.GetString("CollapseId");

    m_collapseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Data"))
  {
    Aws::Map<Aws::String, JsonView> dataJsonMap = jsonValue.GetObject("Data").GetAllObjects();
    for(auto& dataItem : dataJsonMap)
    {
      m_data[dataItem.first] = dataItem.second.AsString();
    }
    m_dataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaUrl"))
  {
    m_mediaUrl = jsonValue.GetString("MediaUrl");

    m_mediaUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreferredAuthenticationMethod"))
  {
    m_preferredAuthenticationMethod = jsonValue.GetString("PreferredAuthenticationMethod");

    m_preferredAuthenticationMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetString("Priority");

    m_priorityHasBeenSet = true;
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

  if(jsonValue.ValueExists("Sound"))
  {
    m_sound = jsonValue.GetString("Sound");

    m_soundHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Substitutions"))
  {
    Aws::Map<Aws::String, JsonView> substitutionsJsonMap = jsonValue.GetObject("Substitutions").GetAllObjects();
    for(auto& substitutionsItem : substitutionsJsonMap)
    {
      Aws::Utils::Array<JsonView> listOf__stringJsonList = substitutionsItem.second.AsArray();
      Aws::Vector<Aws::String> listOf__stringList;
      listOf__stringList.reserve((size_t)listOf__stringJsonList.GetLength());
      for(unsigned listOf__stringIndex = 0; listOf__stringIndex < listOf__stringJsonList.GetLength(); ++listOf__stringIndex)
      {
        listOf__stringList.push_back(listOf__stringJsonList[listOf__stringIndex].AsString());
      }
      m_substitutions[substitutionsItem.first] = std::move(listOf__stringList);
    }
    m_substitutionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThreadId"))
  {
    m_threadId = jsonValue.GetString("ThreadId");

    m_threadIdHasBeenSet = true;
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

JsonValue APNSMessage::Jsonize() const
{
  JsonValue payload;

  if(m_aPNSPushTypeHasBeenSet)
  {
   payload.WithString("APNSPushType", m_aPNSPushType);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", ActionMapper::GetNameForAction(m_action));
  }

  if(m_badgeHasBeenSet)
  {
   payload.WithInteger("Badge", m_badge);

  }

  if(m_bodyHasBeenSet)
  {
   payload.WithString("Body", m_body);

  }

  if(m_categoryHasBeenSet)
  {
   payload.WithString("Category", m_category);

  }

  if(m_collapseIdHasBeenSet)
  {
   payload.WithString("CollapseId", m_collapseId);

  }

  if(m_dataHasBeenSet)
  {
   JsonValue dataJsonMap;
   for(auto& dataItem : m_data)
   {
     dataJsonMap.WithString(dataItem.first, dataItem.second);
   }
   payload.WithObject("Data", std::move(dataJsonMap));

  }

  if(m_mediaUrlHasBeenSet)
  {
   payload.WithString("MediaUrl", m_mediaUrl);

  }

  if(m_preferredAuthenticationMethodHasBeenSet)
  {
   payload.WithString("PreferredAuthenticationMethod", m_preferredAuthenticationMethod);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithString("Priority", m_priority);

  }

  if(m_rawContentHasBeenSet)
  {
   payload.WithString("RawContent", m_rawContent);

  }

  if(m_silentPushHasBeenSet)
  {
   payload.WithBool("SilentPush", m_silentPush);

  }

  if(m_soundHasBeenSet)
  {
   payload.WithString("Sound", m_sound);

  }

  if(m_substitutionsHasBeenSet)
  {
   JsonValue substitutionsJsonMap;
   for(auto& substitutionsItem : m_substitutions)
   {
     Aws::Utils::Array<JsonValue> listOf__stringJsonList(substitutionsItem.second.size());
     for(unsigned listOf__stringIndex = 0; listOf__stringIndex < listOf__stringJsonList.GetLength(); ++listOf__stringIndex)
     {
       listOf__stringJsonList[listOf__stringIndex].AsString(substitutionsItem.second[listOf__stringIndex]);
     }
     substitutionsJsonMap.WithArray(substitutionsItem.first, std::move(listOf__stringJsonList));
   }
   payload.WithObject("Substitutions", std::move(substitutionsJsonMap));

  }

  if(m_threadIdHasBeenSet)
  {
   payload.WithString("ThreadId", m_threadId);

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
