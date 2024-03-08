/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/CancelMessageMoveTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SQS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelMessageMoveTaskRequest::CancelMessageMoveTaskRequest() : 
    m_taskHandleHasBeenSet(false)
{
}

Aws::String CancelMessageMoveTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_taskHandleHasBeenSet)
  {
   payload.WithString("TaskHandle", m_taskHandle);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CancelMessageMoveTaskRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSQS.CancelMessageMoveTask"));
  return headers;

}




