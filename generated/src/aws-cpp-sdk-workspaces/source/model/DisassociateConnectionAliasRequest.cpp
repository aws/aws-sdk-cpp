/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DisassociateConnectionAliasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateConnectionAliasRequest::DisassociateConnectionAliasRequest() : 
    m_aliasIdHasBeenSet(false)
{
}

Aws::String DisassociateConnectionAliasRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_aliasIdHasBeenSet)
  {
   payload.WithString("AliasId", m_aliasId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateConnectionAliasRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.DisassociateConnectionAlias"));
  return headers;

}




