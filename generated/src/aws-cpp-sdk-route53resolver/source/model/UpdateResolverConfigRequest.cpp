/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/UpdateResolverConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Route53Resolver::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateResolverConfigRequest::UpdateResolverConfigRequest() : 
    m_resourceIdHasBeenSet(false),
    m_autodefinedReverseFlag(AutodefinedReverseFlag::NOT_SET),
    m_autodefinedReverseFlagHasBeenSet(false)
{
}

Aws::String UpdateResolverConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_autodefinedReverseFlagHasBeenSet)
  {
   payload.WithString("AutodefinedReverseFlag", AutodefinedReverseFlagMapper::GetNameForAutodefinedReverseFlag(m_autodefinedReverseFlag));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateResolverConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53Resolver.UpdateResolverConfig"));
  return headers;

}




