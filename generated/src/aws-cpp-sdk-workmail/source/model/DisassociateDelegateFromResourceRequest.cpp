/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/DisassociateDelegateFromResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateDelegateFromResourceRequest::DisassociateDelegateFromResourceRequest() : 
    m_organizationIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_entityIdHasBeenSet(false)
{
}

Aws::String DisassociateDelegateFromResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("EntityId", m_entityId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateDelegateFromResourceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkMailService.DisassociateDelegateFromResource"));
  return headers;

}




