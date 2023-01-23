/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/PutInboundDmarcSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutInboundDmarcSettingsRequest::PutInboundDmarcSettingsRequest() : 
    m_organizationIdHasBeenSet(false),
    m_enforced(false),
    m_enforcedHasBeenSet(false)
{
}

Aws::String PutInboundDmarcSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_enforcedHasBeenSet)
  {
   payload.WithBool("Enforced", m_enforced);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutInboundDmarcSettingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkMailService.PutInboundDmarcSettings"));
  return headers;

}




