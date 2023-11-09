/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sqs/model/GetQueueAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SQS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetQueueAttributesRequest::GetQueueAttributesRequest() : 
    m_queueUrlHasBeenSet(false),
    m_attributeNamesHasBeenSet(false)
{
}

Aws::String GetQueueAttributesRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetQueueAttributesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSQS.GetQueueAttributes"));
  return headers;

}




