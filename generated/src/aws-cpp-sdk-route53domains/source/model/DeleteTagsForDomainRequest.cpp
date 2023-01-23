/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53domains/model/DeleteTagsForDomainRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Domains::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteTagsForDomainRequest::DeleteTagsForDomainRequest() : 
    m_domainNameHasBeenSet(false),
    m_tagsToDeleteHasBeenSet(false)
{
}

Aws::String DeleteTagsForDomainRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_tagsToDeleteHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsToDeleteJsonList(m_tagsToDelete.size());
   for(unsigned tagsToDeleteIndex = 0; tagsToDeleteIndex < tagsToDeleteJsonList.GetLength(); ++tagsToDeleteIndex)
   {
     tagsToDeleteJsonList[tagsToDeleteIndex].AsString(m_tagsToDelete[tagsToDeleteIndex]);
   }
   payload.WithArray("TagsToDelete", std::move(tagsToDeleteJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteTagsForDomainRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Domains_v20140515.DeleteTagsForDomain"));
  return headers;

}




