/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/StartMessageMoveTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SQS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartMessageMoveTaskRequest::StartMessageMoveTaskRequest() : 
    m_sourceArnHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_maxNumberOfMessagesPerSecond(0),
    m_maxNumberOfMessagesPerSecondHasBeenSet(false)
{
}

Aws::String StartMessageMoveTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("SourceArn", m_sourceArn);

  }

  if(m_destinationArnHasBeenSet)
  {
   payload.WithString("DestinationArn", m_destinationArn);

  }

  if(m_maxNumberOfMessagesPerSecondHasBeenSet)
  {
   payload.WithInteger("MaxNumberOfMessagesPerSecond", m_maxNumberOfMessagesPerSecond);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartMessageMoveTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSQS.StartMessageMoveTask"));
  return headers;

}




