/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/RemovePermissionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SQS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemovePermissionRequest::RemovePermissionRequest() : 
    m_queueUrlHasBeenSet(false),
    m_labelHasBeenSet(false)
{
}

Aws::String RemovePermissionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queueUrlHasBeenSet)
  {
   payload.WithString("QueueUrl", m_queueUrl);

  }

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", m_label);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RemovePermissionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSQS.RemovePermission"));
  return headers;

}




