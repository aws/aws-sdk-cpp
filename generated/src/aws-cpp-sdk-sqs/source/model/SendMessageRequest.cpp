/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/SendMessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SQS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SendMessageRequest::SendMessageRequest() : 
    m_queueUrlHasBeenSet(false),
    m_messageBodyHasBeenSet(false),
    m_delaySeconds(0),
    m_delaySecondsHasBeenSet(false),
    m_messageAttributesHasBeenSet(false),
    m_messageSystemAttributesHasBeenSet(false),
    m_messageDeduplicationIdHasBeenSet(false),
    m_messageGroupIdHasBeenSet(false)
{
}

Aws::String SendMessageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queueUrlHasBeenSet)
  {
   payload.WithString("QueueUrl", m_queueUrl);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SendMessageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSQS.SendMessage"));
  return headers;

}




