/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworkscm/model/UpdateServerEngineAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorksCM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateServerEngineAttributesRequest::UpdateServerEngineAttributesRequest() : 
    m_serverNameHasBeenSet(false),
    m_attributeNameHasBeenSet(false),
    m_attributeValueHasBeenSet(false)
{
}

Aws::String UpdateServerEngineAttributesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("ServerName", m_serverName);

  }

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("AttributeName", m_attributeName);

  }

  if(m_attributeValueHasBeenSet)
  {
   payload.WithString("AttributeValue", m_attributeValue);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateServerEngineAttributesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorksCM_V2016_11_01.UpdateServerEngineAttributes"));
  return headers;

}




