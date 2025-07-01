/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/DeleteOdbNetworkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteOdbNetworkRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_odbNetworkIdHasBeenSet)
  {
   payload.WithString("odbNetworkId", m_odbNetworkId);

  }

  if(m_deleteAssociatedResourcesHasBeenSet)
  {
   payload.WithBool("deleteAssociatedResources", m_deleteAssociatedResources);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteOdbNetworkRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.DeleteOdbNetwork"));
  return headers;

}




