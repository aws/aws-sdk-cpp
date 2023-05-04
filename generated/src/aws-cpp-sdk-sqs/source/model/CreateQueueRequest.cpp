/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/CreateQueueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SQS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateQueueRequest::CreateQueueRequest() : 
    m_queueNameHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateQueueRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queueNameHasBeenSet)
  {
   payload.WithString("QueueName", m_queueName);

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

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateQueueRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSQS.CreateQueue"));
  return headers;

}




