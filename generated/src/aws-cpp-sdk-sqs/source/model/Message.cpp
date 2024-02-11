/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/Message.h>
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

Message::Message() : 
    m_messageIdHasBeenSet(false),
    m_receiptHandleHasBeenSet(false),
    m_mD5OfBodyHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_mD5OfMessageAttributesHasBeenSet(false),
    m_messageAttributesHasBeenSet(false)
{
}

Message::Message(JsonView jsonValue) : 
    m_messageIdHasBeenSet(false),
    m_receiptHandleHasBeenSet(false),
    m_mD5OfBodyHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_mD5OfMessageAttributesHasBeenSet(false),
    m_messageAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

Message& Message::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MessageId"))
  {
    m_messageId = jsonValue.GetString("MessageId");

    m_messageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReceiptHandle"))
  {
    m_receiptHandle = jsonValue.GetString("ReceiptHandle");

    m_receiptHandleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MD5OfBody"))
  {
    m_mD5OfBody = jsonValue.GetString("MD5OfBody");

    m_mD5OfBodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Body"))
  {
    m_body = jsonValue.GetString("Body");

    m_bodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("Attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[MessageSystemAttributeNameMapper::GetMessageSystemAttributeNameForName(attributesItem.first)] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MD5OfMessageAttributes"))
  {
    m_mD5OfMessageAttributes = jsonValue.GetString("MD5OfMessageAttributes");

    m_mD5OfMessageAttributesHasBeenSet = true;
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

  return *this;
}

JsonValue Message::Jsonize() const
{
  JsonValue payload;

  if(m_messageIdHasBeenSet)
  {
   payload.WithString("MessageId", m_messageId);

  }

  if(m_receiptHandleHasBeenSet)
  {
   payload.WithString("ReceiptHandle", m_receiptHandle);

  }

  if(m_mD5OfBodyHasBeenSet)
  {
   payload.WithString("MD5OfBody", m_mD5OfBody);

  }

  if(m_bodyHasBeenSet)
  {
   payload.WithString("Body", m_body);

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(MessageSystemAttributeNameMapper::GetNameForMessageSystemAttributeName(attributesItem.first), attributesItem.second);
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  if(m_mD5OfMessageAttributesHasBeenSet)
  {
   payload.WithString("MD5OfMessageAttributes", m_mD5OfMessageAttributes);

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

  return payload;
}

} // namespace Model
} // namespace SQS
} // namespace Aws
