/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ModifyEndpointEncryptionModeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ModifyEndpointEncryptionModeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_endpointEncryptionModeHasBeenSet)
  {
   payload.WithString("EndpointEncryptionMode", EndpointEncryptionModeMapper::GetNameForEndpointEncryptionMode(m_endpointEncryptionMode));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyEndpointEncryptionModeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.ModifyEndpointEncryptionMode"));
  return headers;

}




