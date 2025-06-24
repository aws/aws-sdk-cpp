/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/GetWorkspaceInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkspacesInstances::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetWorkspaceInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workspaceInstanceIdHasBeenSet)
  {
   payload.WithString("WorkspaceInstanceId", m_workspaceInstanceId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetWorkspaceInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "EUCMIFrontendAPIService.GetWorkspaceInstance"));
  return headers;

}




