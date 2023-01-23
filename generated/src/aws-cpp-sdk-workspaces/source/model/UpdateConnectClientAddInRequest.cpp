/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/UpdateConnectClientAddInRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateConnectClientAddInRequest::UpdateConnectClientAddInRequest() : 
    m_addInIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_uRLHasBeenSet(false)
{
}

Aws::String UpdateConnectClientAddInRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_addInIdHasBeenSet)
  {
   payload.WithString("AddInId", m_addInId);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_uRLHasBeenSet)
  {
   payload.WithString("URL", m_uRL);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateConnectClientAddInRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.UpdateConnectClientAddIn"));
  return headers;

}




