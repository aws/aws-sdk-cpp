/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resourcegroupstaggingapi/model/GetTagKeysRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResourceGroupsTaggingAPI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetTagKeysRequest::GetTagKeysRequest() : 
    m_paginationTokenHasBeenSet(false)
{
}

Aws::String GetTagKeysRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_paginationTokenHasBeenSet)
  {
   payload.WithString("PaginationToken", m_paginationToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetTagKeysRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ResourceGroupsTaggingAPI_20170126.GetTagKeys"));
  return headers;

}




