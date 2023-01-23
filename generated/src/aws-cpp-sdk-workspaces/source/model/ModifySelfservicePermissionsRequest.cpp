/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ModifySelfservicePermissionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ModifySelfservicePermissionsRequest::ModifySelfservicePermissionsRequest() : 
    m_resourceIdHasBeenSet(false),
    m_selfservicePermissionsHasBeenSet(false)
{
}

Aws::String ModifySelfservicePermissionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_selfservicePermissionsHasBeenSet)
  {
   payload.WithObject("SelfservicePermissions", m_selfservicePermissions.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ModifySelfservicePermissionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.ModifySelfservicePermissions"));
  return headers;

}




