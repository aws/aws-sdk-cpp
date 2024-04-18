/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/CreateAccountLinkInvitationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAccountLinkInvitationRequest::CreateAccountLinkInvitationRequest() : 
    m_targetAccountIdHasBeenSet(false),
    m_clientTokenHasBeenSet(false)
{
}

Aws::String CreateAccountLinkInvitationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetAccountIdHasBeenSet)
  {
   payload.WithString("TargetAccountId", m_targetAccountId);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAccountLinkInvitationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.CreateAccountLinkInvitation"));
  return headers;

}




