/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworkscm/model/StartMaintenanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorksCM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartMaintenanceRequest::StartMaintenanceRequest() : 
    m_serverNameHasBeenSet(false),
    m_engineAttributesHasBeenSet(false)
{
}

Aws::String StartMaintenanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("ServerName", m_serverName);

  }

  if(m_engineAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> engineAttributesJsonList(m_engineAttributes.size());
   for(unsigned engineAttributesIndex = 0; engineAttributesIndex < engineAttributesJsonList.GetLength(); ++engineAttributesIndex)
   {
     engineAttributesJsonList[engineAttributesIndex].AsObject(m_engineAttributes[engineAttributesIndex].Jsonize());
   }
   payload.WithArray("EngineAttributes", std::move(engineAttributesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartMaintenanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorksCM_V2016_11_01.StartMaintenance"));
  return headers;

}




