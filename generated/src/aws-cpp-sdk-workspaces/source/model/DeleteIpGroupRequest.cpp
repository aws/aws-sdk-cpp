/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DeleteIpGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteIpGroupRequest::DeleteIpGroupRequest() : 
    m_groupIdHasBeenSet(false)
{
}

Aws::String DeleteIpGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_groupIdHasBeenSet)
  {
   payload.WithString("GroupId", m_groupId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteIpGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.DeleteIpGroup"));
  return headers;

}




