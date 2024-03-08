/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/DeleteMessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SQS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteMessageRequest::DeleteMessageRequest() : 
    m_queueUrlHasBeenSet(false),
    m_receiptHandleHasBeenSet(false)
{
}

Aws::String DeleteMessageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queueUrlHasBeenSet)
  {
   payload.WithString("QueueUrl", m_queueUrl);

  }

  if(m_receiptHandleHasBeenSet)
  {
   payload.WithString("ReceiptHandle", m_receiptHandle);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteMessageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSQS.DeleteMessage"));
  return headers;

}




