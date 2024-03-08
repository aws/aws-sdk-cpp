/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/SendMessageBatchRequestEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SQS
{
namespace Model
{

SendMessageBatchRequestEntry::SendMessageBatchRequestEntry() : 
    m_idHasBeenSet(false),
    m_messageBodyHasBeenSet(false),
    m_delaySeconds(0),
    m_delaySecondsHasBeenSet(false),
    m_messageAttributesHasBeenSet(false),
    m_messageSystemAttributesHasBeenSet(false),
    m_messageDeduplicationIdHasBeenSet(false),
    m_messageGroupIdHasBeenSet(false)
{
}

SendMessageBatchRequestEntry::SendMessageBatchRequestEntry(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_messageBodyHasBeenSet(false),
    m_delaySeconds(0),
    m_delaySecondsHasBeenSet(false),
    m_messageAttributesHasBeenSet(false),
    m_messageSystemAttributesHasBeenSet(false),
    m_messageDeduplicationIdHasBeenSet(false),
    m_messageGroupIdHasBeenSet(false)
{
  *this = jsonValue;
}

SendMessageBatchRequestEntry& SendMessageBatchRequestEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageBody"))
  {
    m_messageBody = jsonValue.GetString("MessageBody");

    m_messageBodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DelaySeconds"))
  {
    m_delaySeconds = jsonValue.GetInteger("DelaySeconds");

    m_delaySecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageAttributes"))
  {
    Aws::Map<Aws::String, JsonView> messageAttributesJsonMap = jsonValue.GetObject("MessageAttributes").GetAllObjects();
    for(auto& messageAttributesItem : messageAttributesJsonMap)
    {
      m_messageAttributes[messageAttributesItem.first] = messageAttributesItem.second.AsObject();
    }
    m_messageAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageSystemAttributes"))
  {
    Aws::Map<Aws::String, JsonView> messageSystemAttributesJsonMap = jsonValue.GetObject("MessageSystemAttributes").GetAllObjects();
    for(auto& messageSystemAttributesItem : messageSystemAttributesJsonMap)
    {
      m_messageSystemAttributes[MessageSystemAttributeNameForSendsMapper::GetMessageSystemAttributeNameForSendsForName(messageSystemAttributesItem.first)] = messageSystemAttributesItem.second.AsObject();
    }
    m_messageSystemAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageDeduplicationId"))
  {
    m_messageDeduplicationId = jsonValue.GetString("MessageDeduplicationId");

    m_messageDeduplicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageGroupId"))
  {
    m_messageGroupId = jsonValue.GetString("MessageGroupId");

    m_messageGroupIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SendMessageBatchRequestEntry::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_messageBodyHasBeenSet)
  {
   payload.WithString("MessageBody", m_messageBody);

  }

  if(m_delaySecondsHasBeenSet)
  {
   payload.WithInteger("DelaySeconds", m_delaySeconds);

  }

  if(m_messageAttributesHasBeenSet)
  {
   JsonValue messageAttributesJsonMap;
   for(auto& messageAttributesItem : m_messageAttributes)
   {
     messageAttributesJsonMap.WithObject(messageAttributesItem.first, messageAttributesItem.second.Jsonize());
   }
   payload.WithObject("MessageAttributes", std::move(messageAttributesJsonMap));

  }

  if(m_messageSystemAttributesHasBeenSet)
  {
   JsonValue messageSystemAttributesJsonMap;
   for(auto& messageSystemAttributesItem : m_messageSystemAttributes)
   {
     messageSystemAttributesJsonMap.WithObject(MessageSystemAttributeNameForSendsMapper::GetNameForMessageSystemAttributeNameForSends(messageSystemAttributesItem.first), messageSystemAttributesItem.second.Jsonize());
   }
   payload.WithObject("MessageSystemAttributes", std::move(messageSystemAttributesJsonMap));

  }

  if(m_messageDeduplicationIdHasBeenSet)
  {
   payload.WithString("MessageDeduplicationId", m_messageDeduplicationId);

  }

  if(m_messageGroupIdHasBeenSet)
  {
   payload.WithString("MessageGroupId", m_messageGroupId);

  }

  return payload;
}

} // namespace Model
} // namespace SQS
} // namespace Aws
