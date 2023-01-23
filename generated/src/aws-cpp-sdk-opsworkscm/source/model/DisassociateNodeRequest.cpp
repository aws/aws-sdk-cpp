/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworkscm/model/DisassociateNodeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorksCM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateNodeRequest::DisassociateNodeRequest() : 
    m_serverNameHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_engineAttributesHasBeenSet(false)
{
}

Aws::String DisassociateNodeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("ServerName", m_serverName);

  }

  if(m_nodeNameHasBeenSet)
  {
   payload.WithString("NodeName", m_nodeName);

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

Aws::Http::HeaderValueCollection DisassociateNodeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorksCM_V2016_11_01.DisassociateNode"));
  return headers;

}




