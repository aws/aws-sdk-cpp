/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworkscm/model/ExportServerEngineAttributeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorksCM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExportServerEngineAttributeRequest::ExportServerEngineAttributeRequest() : 
    m_exportAttributeNameHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_inputAttributesHasBeenSet(false)
{
}

Aws::String ExportServerEngineAttributeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_exportAttributeNameHasBeenSet)
  {
   payload.WithString("ExportAttributeName", m_exportAttributeName);

  }

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("ServerName", m_serverName);

  }

  if(m_inputAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputAttributesJsonList(m_inputAttributes.size());
   for(unsigned inputAttributesIndex = 0; inputAttributesIndex < inputAttributesJsonList.GetLength(); ++inputAttributesIndex)
   {
     inputAttributesJsonList[inputAttributesIndex].AsObject(m_inputAttributes[inputAttributesIndex].Jsonize());
   }
   payload.WithArray("InputAttributes", std::move(inputAttributesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ExportServerEngineAttributeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorksCM_V2016_11_01.ExportServerEngineAttribute"));
  return headers;

}




