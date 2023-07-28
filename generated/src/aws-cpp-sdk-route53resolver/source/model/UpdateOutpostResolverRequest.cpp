/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/UpdateOutpostResolverRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateOutpostResolverRequest::UpdateOutpostResolverRequest() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_preferredInstanceTypeHasBeenSet(false)
{
}

Aws::String UpdateOutpostResolverRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateOutpostResolverRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.UpdateOutpostResolver"));
  return headers;

}




