/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/CreateWorldExportJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWorldExportJobRequest::CreateWorldExportJobRequest() : 
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_worldsHasBeenSet(false),
    m_outputLocationHasBeenSet(false),
    m_iamRoleHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateWorldExportJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_worldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> worldsJsonList(m_worlds.size());
   for(unsigned worldsIndex = 0; worldsIndex < worldsJsonList.GetLength(); ++worldsIndex)
   {
     worldsJsonList[worldsIndex].AsString(m_worlds[worldsIndex]);
   }
   payload.WithArray("worlds", std::move(worldsJsonList));

  }

  if(m_outputLocationHasBeenSet)
  {
   payload.WithObject("outputLocation", m_outputLocation.Jsonize());

  }

  if(m_iamRoleHasBeenSet)
  {
   payload.WithString("iamRole", m_iamRole);

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

  return payload.View().WriteReadable();
}




