/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/ChangeMessageVisibilityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SQS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ChangeMessageVisibilityRequest::ChangeMessageVisibilityRequest() : 
    m_queueUrlHasBeenSet(false),
    m_receiptHandleHasBeenSet(false),
    m_visibilityTimeout(0),
    m_visibilityTimeoutHasBeenSet(false)
{
}

Aws::String ChangeMessageVisibilityRequest::SerializePayload() const
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

  if(m_visibilityTimeoutHasBeenSet)
  {
   payload.WithInteger("VisibilityTimeout", m_visibilityTimeout);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ChangeMessageVisibilityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSQS.ChangeMessageVisibility"));
  return headers;

}




