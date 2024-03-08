/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/GetQueueUrlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SQS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetQueueUrlRequest::GetQueueUrlRequest() : 
    m_queueNameHasBeenSet(false),
    m_queueOwnerAWSAccountIdHasBeenSet(false)
{
}

Aws::String GetQueueUrlRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queueNameHasBeenSet)
  {
   payload.WithString("QueueName", m_queueName);

  }

  if(m_queueOwnerAWSAccountIdHasBeenSet)
  {
   payload.WithString("QueueOwnerAWSAccountId", m_queueOwnerAWSAccountId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetQueueUrlRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSQS.GetQueueUrl"));
  return headers;

}




