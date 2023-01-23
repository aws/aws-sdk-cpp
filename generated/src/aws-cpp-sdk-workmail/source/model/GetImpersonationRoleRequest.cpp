/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/GetImpersonationRoleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetImpersonationRoleRequest::GetImpersonationRoleRequest() : 
    m_organizationIdHasBeenSet(false),
    m_impersonationRoleIdHasBeenSet(false)
{
}

Aws::String GetImpersonationRoleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_impersonationRoleIdHasBeenSet)
  {
   payload.WithString("ImpersonationRoleId", m_impersonationRoleId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetImpersonationRoleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkMailService.GetImpersonationRole"));
  return headers;

}




