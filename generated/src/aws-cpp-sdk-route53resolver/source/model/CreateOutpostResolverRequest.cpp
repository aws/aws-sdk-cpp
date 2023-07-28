/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/CreateOutpostResolverRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateOutpostResolverRequest::CreateOutpostResolverRequest() : 
    m_creatorRequestIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_preferredInstanceTypeHasBeenSet(false),
    m_outpostArnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateOutpostResolverRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

  }

  if(m_preferredInstanceTypeHasBeenSet)
  {
   payload.WithString("PreferredInstanceType", m_preferredInstanceType);

  }

  if(m_outpostArnHasBeenSet)
  {
   payload.WithString("OutpostArn", m_outpostArn);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateOutpostResolverRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.CreateOutpostResolver"));
  return headers;

}




