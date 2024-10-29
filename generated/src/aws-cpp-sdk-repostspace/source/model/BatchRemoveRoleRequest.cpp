﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/repostspace/model/BatchRemoveRoleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::repostspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchRemoveRoleRequest::BatchRemoveRoleRequest() : 
    m_accessorIdsHasBeenSet(false),
    m_role(Role::NOT_SET),
    m_roleHasBeenSet(false),
    m_spaceIdHasBeenSet(false)
{
}

Aws::String BatchRemoveRoleRequest::SerializePayload() const
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

  if(m_roleHasBeenSet)
  {
   payload.WithString("role", RoleMapper::GetNameForRole(m_role));
  }

  return payload.View().WriteReadable();
}




