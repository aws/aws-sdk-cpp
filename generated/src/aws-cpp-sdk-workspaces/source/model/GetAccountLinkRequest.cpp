/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/GetAccountLinkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAccountLinkRequest::GetAccountLinkRequest() : 
    m_linkIdHasBeenSet(false),
    m_linkedAccountIdHasBeenSet(false)
{
}

Aws::String GetAccountLinkRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_linkIdHasBeenSet)
  {
   payload.WithString("LinkId", m_linkId);

  }

  if(m_linkedAccountIdHasBeenSet)
  {
   payload.WithString("LinkedAccountId", m_linkedAccountId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetAccountLinkRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.GetAccountLink"));
  return headers;

}




