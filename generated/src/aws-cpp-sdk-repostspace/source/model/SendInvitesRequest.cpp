/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/repostspace/model/SendInvitesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::repostspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SendInvitesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accessorIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accessorIdsJsonList(m_accessorIds.size());
   for(unsigned accessorIdsIndex = 0; accessorIdsIndex < accessorIdsJsonList.GetLength(); ++accessorIdsIndex)
   {
     accessorIdsJsonList[accessorIdsIndex].AsString(m_accessorIds[accessorIdsIndex]);
   }
   payload.WithArray("accessorIds", std::move(accessorIdsJsonList));

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_bodyHasBeenSet)
  {
   payload.WithString("body", m_body);

  }

  return payload.View().WriteReadable();
}




