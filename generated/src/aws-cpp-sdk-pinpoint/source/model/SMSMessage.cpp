/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/SMSMessage.h>
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

SMSMessage::SMSMessage() : 
    m_bodyHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_mediaUrlHasBeenSet(false),
    m_messageType(MessageType::NOT_SET),
    m_messageTypeHasBeenSet(false),
    m_originationNumberHasBeenSet(false),
    m_senderIdHasBeenSet(false),
    m_substitutionsHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_templateIdHasBeenSet(false)
{
}

SMSMessage::SMSMessage(JsonView jsonValue) : 
    m_bodyHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_mediaUrlHasBeenSet(false),
    m_messageType(MessageType::NOT_SET),
    m_messageTypeHasBeenSet(false),
    m_originationNumberHasBeenSet(false),
    m_senderIdHasBeenSet(false),
    m_substitutionsHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_templateIdHasBeenSet(false)
{
  *this = jsonValue;
}

SMSMessage& SMSMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Body"))
  {
    m_body = jsonValue.GetString("Body");

    m_bodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Keyword"))
  {
    m_keyword = jsonValue.GetString("Keyword");

    m_keywordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaUrl"))
  {
    m_mediaUrl = jsonValue.GetString("MediaUrl");

    m_mediaUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageType"))
  {
    m_messageType = MessageTypeMapper::GetMessageTypeForName(jsonValue.GetString("MessageType"));

    m_messageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OriginationNumber"))
  {
    m_originationNumber = jsonValue.GetString("OriginationNumber");

    m_originationNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SenderId"))
  {
    m_senderId = jsonValue.GetString("SenderId");

    m_senderIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("EntityId"))
  {
    m_entityId = jsonValue.GetString("EntityId");

    m_entityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateId"))
  {
    m_templateId = jsonValue.GetString("TemplateId");

    m_templateIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SMSMessage::Jsonize() const
{
  JsonValue payload;

  if(m_bodyHasBeenSet)
  {
   payload.WithString("Body", m_body);

  }

  if(m_keywordHasBeenSet)
  {
   payload.WithString("Keyword", m_keyword);

  }

  if(m_mediaUrlHasBeenSet)
  {
   payload.WithString("MediaUrl", m_mediaUrl);

  }

  if(m_messageTypeHasBeenSet)
  {
   payload.WithString("MessageType", MessageTypeMapper::GetNameForMessageType(m_messageType));
  }

  if(m_originationNumberHasBeenSet)
  {
   payload.WithString("OriginationNumber", m_originationNumber);

  }

  if(m_senderIdHasBeenSet)
  {
   payload.WithString("SenderId", m_senderId);

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

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("EntityId", m_entityId);

  }

  if(m_templateIdHasBeenSet)
  {
   payload.WithString("TemplateId", m_templateId);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
