/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pi/model/UntagResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UntagResourceRequest::UntagResourceRequest() : 
    m_serviceType(ServiceType::NOT_SET),
    m_serviceTypeHasBeenSet(false),
    m_resourceARNHasBeenSet(false),
    m_tagKeysHasBeenSet(false)
{
}

Aws::String UntagResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceTypeHasBeenSet)
  {
   payload.WithString("ServiceType", ServiceTypeMapper::GetNameForServiceType(m_serviceType));
  }

  if(m_resourceARNHasBeenSet)
  {
   payload.WithString("ResourceARN", m_resourceARN);

  }

  if(m_tagKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagKeysJsonList(m_tagKeys.size());
   for(unsigned tagKeysIndex = 0; tagKeysIndex < tagKeysJsonList.GetLength(); ++tagKeysIndex)
   {
     tagKeysJsonList[tagKeysIndex].AsString(m_tagKeys[tagKeysIndex]);
   }
   payload.WithArray("TagKeys", std::move(tagKeysJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UntagResourceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PerformanceInsightsv20180227.UntagResource"));
  return headers;

}




