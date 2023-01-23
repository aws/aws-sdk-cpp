/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/UpdatePrimaryEmailAddressRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePrimaryEmailAddressRequest::UpdatePrimaryEmailAddressRequest() : 
    m_organizationIdHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_emailHasBeenSet(false)
{
}

Aws::String UpdatePrimaryEmailAddressRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("EntityId", m_entityId);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("Email", m_email);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePrimaryEmailAddressRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkMailService.UpdatePrimaryEmailAddress"));
  return headers;

}




