/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/ListTagsForResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListTagsForResourceRequest::ListTagsForResourceRequest() : 
    m_nextMarkerHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_resourceARNHasBeenSet(false)
{
}

Aws::String ListTagsForResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextMarkerHasBeenSet)
  {
   payload.WithString("NextMarker", m_nextMarker);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_resourceARNHasBeenSet)
  {
   payload.WithString("ResourceARN", m_resourceARN);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListTagsForResourceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSWAF_20150824.ListTagsForResource"));
  return headers;

}




