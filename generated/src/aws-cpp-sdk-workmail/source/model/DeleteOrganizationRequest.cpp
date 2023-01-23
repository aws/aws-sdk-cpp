/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/DeleteOrganizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteOrganizationRequest::DeleteOrganizationRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_organizationIdHasBeenSet(false),
    m_deleteDirectory(false),
    m_deleteDirectoryHasBeenSet(false)
{
}

Aws::String DeleteOrganizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_deleteDirectoryHasBeenSet)
  {
   payload.WithBool("DeleteDirectory", m_deleteDirectory);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteOrganizationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkMailService.DeleteOrganization"));
  return headers;

}




