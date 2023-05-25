/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resourcegroupstaggingapi/model/GetTagValuesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResourceGroupsTaggingAPI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTagValuesRequest::GetTagValuesRequest() : 
    m_paginationTokenHasBeenSet(false),
    m_keyHasBeenSet(false)
{
}

Aws::String GetTagValuesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_paginationTokenHasBeenSet)
  {
   payload.WithString("PaginationToken", m_paginationToken);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetTagValuesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ResourceGroupsTaggingAPI_20170126.GetTagValues"));
  return headers;

}




