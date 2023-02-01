/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/CreateTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SnowDeviceManagement::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTaskRequest::CreateTaskRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_commandHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_targetsHasBeenSet(false)
{
}

Aws::String CreateTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_commandHasBeenSet)
  {
   payload.WithObject("command", m_command.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_targetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsString(m_targets[targetsIndex]);
   }
   payload.WithArray("targets", std::move(targetsJsonList));

  }

  return payload.View().WriteReadable();
}




