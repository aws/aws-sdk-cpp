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

Aws::String ReceiveMessageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queueUrlHasBeenSet)
  {
   payload.WithString("QueueUrl", m_queueUrl);

  }

  if(m_messageSystemAttributeNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> messageSystemAttributeNamesJsonList(m_messageSystemAttributeNames.size());
   for(unsigned messageSystemAttributeNamesIndex = 0; messageSystemAttributeNamesIndex < messageSystemAttributeNamesJsonList.GetLength(); ++messageSystemAttributeNamesIndex)
   {
     messageSystemAttributeNamesJsonList[messageSystemAttributeNamesIndex].AsString(MessageSystemAttributeNameMapper::GetNameForMessageSystemAttributeName(m_messageSystemAttributeNames[messageSystemAttributeNamesIndex]));
   }
   payload.WithArray("MessageSystemAttributeNames", std::move(messageSystemAttributeNamesJsonList));

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




