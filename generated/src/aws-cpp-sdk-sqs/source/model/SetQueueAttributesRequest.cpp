/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/SetQueueAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SQS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetQueueAttributesRequest::SetQueueAttributesRequest() : 
    m_queueUrlHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

Aws::String SetQueueAttributesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queueUrlHasBeenSet)
  {
   payload.WithString("QueueUrl", m_queueUrl);

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(QueueAttributeNameMapper::GetNameForQueueAttributeName(attributesItem.first), attributesItem.second);
   }
   payload.WithObject("Attributes", std::move(attributesJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SetQueueAttributesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSQS.SetQueueAttributes"));
  return headers;

}




