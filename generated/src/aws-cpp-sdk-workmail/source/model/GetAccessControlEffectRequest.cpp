/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/GetAccessControlEffectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAccessControlEffectRequest::GetAccessControlEffectRequest() : 
    m_organizationIdHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_impersonationRoleIdHasBeenSet(false)
{
}

Aws::String GetAccessControlEffectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("IpAddress", m_ipAddress);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", m_action);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_impersonationRoleIdHasBeenSet)
  {
   payload.WithString("ImpersonationRoleId", m_impersonationRoleId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetAccessControlEffectRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkMailService.GetAccessControlEffect"));
  return headers;

}




