/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ListResourcesForTagOptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListResourcesForTagOptionRequest::ListResourcesForTagOptionRequest() : 
    m_tagOptionIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_pageSize(0),
    m_pageSizeHasBeenSet(false),
    m_pageTokenHasBeenSet(false)
{
}

Aws::String ListResourcesForTagOptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tagOptionIdHasBeenSet)
  {
   payload.WithString("TagOptionId", m_tagOptionId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_pageSizeHasBeenSet)
  {
   payload.WithInteger("PageSize", m_pageSize);

  }

  if(m_pageTokenHasBeenSet)
  {
   payload.WithString("PageToken", m_pageToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListResourcesForTagOptionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWS242ServiceCatalogService.ListResourcesForTagOption"));
  return headers;

}




