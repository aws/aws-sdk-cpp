/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/UpdateNodeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateNodeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("role", NodeRoleMapper::GetNameForNodeRole(m_role));
  }

  if(m_sdiSourceMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sdiSourceMappingsJsonList(m_sdiSourceMappings.size());
   for(unsigned sdiSourceMappingsIndex = 0; sdiSourceMappingsIndex < sdiSourceMappingsJsonList.GetLength(); ++sdiSourceMappingsIndex)
   {
     sdiSourceMappingsJsonList[sdiSourceMappingsIndex].AsObject(m_sdiSourceMappings[sdiSourceMappingsIndex].Jsonize());
   }
   payload.WithArray("sdiSourceMappings", std::move(sdiSourceMappingsJsonList));

  }

  return payload.View().WriteReadable();
}




