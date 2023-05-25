/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DeleteConnectClientAddInRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteConnectClientAddInRequest::DeleteConnectClientAddInRequest() : 
    m_addInIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
}

Aws::String DeleteConnectClientAddInRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteConnectClientAddInRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.DeleteConnectClientAddIn"));
  return headers;

}




