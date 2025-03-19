/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/CreateNodeRegistrationScriptRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateNodeRegistrationScriptRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_nodeInterfaceMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nodeInterfaceMappingsJsonList(m_nodeInterfaceMappings.size());
   for(unsigned nodeInterfaceMappingsIndex = 0; nodeInterfaceMappingsIndex < nodeInterfaceMappingsJsonList.GetLength(); ++nodeInterfaceMappingsIndex)
   {
     nodeInterfaceMappingsJsonList[nodeInterfaceMappingsIndex].AsObject(m_nodeInterfaceMappings[nodeInterfaceMappingsIndex].Jsonize());
   }
   payload.WithArray("nodeInterfaceMappings", std::move(nodeInterfaceMappingsJsonList));

  }

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("requestId", m_requestId);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("role", NodeRoleMapper::GetNameForNodeRole(m_role));
  }

  return payload.View().WriteReadable();
}




