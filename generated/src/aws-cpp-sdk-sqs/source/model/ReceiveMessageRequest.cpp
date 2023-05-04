/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/ReceiveMessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SQS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ReceiveMessageRequest::ReceiveMessageRequest() : 
    m_queueUrlHasBeenSet(false),
    m_attributeNamesHasBeenSet(false),
    m_messageAttributeNamesHasBeenSet(false),
    m_maxNumberOfMessages(0),
    m_maxNumberOfMessagesHasBeenSet(false),
    m_visibilityTimeout(0),
    m_visibilityTimeoutHasBeenSet(false),
    m_waitTimeSeconds(0),
    m_waitTimeSecondsHasBeenSet(false),
    m_receiveRequestAttemptIdHasBeenSet(false)
{
}

Aws::String ReceiveMessageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queueUrlHasBeenSet)
  {
   payload.WithString("QueueUrl", m_queueUrl);

  }

  if(m_attributeNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributeNamesJsonList(m_attributeNames.size());
   for(unsigned attributeNamesIndex = 0; attributeNamesIndex < attributeNamesJsonList.GetLength(); ++attributeNamesIndex)
   {
     attributeNamesJsonList[attributeNamesIndex].AsString(QueueAttributeNameMapper::GetNameForQueueAttributeName(m_attributeNames[attributeNamesIndex]));
   }
   payload.WithArray("AttributeNames", std::move(attributeNamesJsonList));

  }

  if(m_messageAttributeNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> messageAttributeNamesJsonList(m_messageAttributeNames.size());
   for(unsigned messageAttributeNamesIndex = 0; messageAttributeNamesIndex < messageAttributeNamesJsonList.GetLength(); ++messageAttributeNamesIndex)
   {
     messageAttributeNamesJsonList[messageAttributeNamesIndex].AsString(m_messageAttributeNames[messageAttributeNamesIndex]);
   }
   payload.WithArray("MessageAttributeNames", std::move(messageAttributeNamesJsonList));

  }

  if(m_maxNumberOfMessagesHasBeenSet)
  {
   payload.WithInteger("MaxNumberOfMessages", m_maxNumberOfMessages);

  }

  if(m_visibilityTimeoutHasBeenSet)
  {
   payload.WithInteger("VisibilityTimeout", m_visibilityTimeout);

  }

  if(m_waitTimeSecondsHasBeenSet)
  {
   payload.WithInteger("WaitTimeSeconds", m_waitTimeSeconds);

  }

  if(m_receiveRequestAttemptIdHasBeenSet)
  {
   payload.WithString("ReceiveRequestAttemptId", m_receiveRequestAttemptId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ReceiveMessageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSQS.ReceiveMessage"));
  return headers;

}




