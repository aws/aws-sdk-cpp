/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/ListPageResolutionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSMContacts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListPageResolutionsRequest::ListPageResolutionsRequest() : 
    m_nextTokenHasBeenSet(false),
    m_pageIdHasBeenSet(false)
{
}

Aws::String ListPageResolutionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_pageIdHasBeenSet)
  {
   payload.WithString("PageId", m_pageId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListPageResolutionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SSMContacts.ListPageResolutions"));
  return headers;

}




