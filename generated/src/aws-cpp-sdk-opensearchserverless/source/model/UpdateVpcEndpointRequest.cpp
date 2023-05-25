/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/UpdateVpcEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateVpcEndpointRequest::UpdateVpcEndpointRequest() : 
    m_addSecurityGroupIdsHasBeenSet(false),
    m_addSubnetIdsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_idHasBeenSet(false),
    m_removeSecurityGroupIdsHasBeenSet(false),
    m_removeSubnetIdsHasBeenSet(false)
{
}

Aws::String UpdateVpcEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_addSecurityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addSecurityGroupIdsJsonList(m_addSecurityGroupIds.size());
   for(unsigned addSecurityGroupIdsIndex = 0; addSecurityGroupIdsIndex < addSecurityGroupIdsJsonList.GetLength(); ++addSecurityGroupIdsIndex)
   {
     addSecurityGroupIdsJsonList[addSecurityGroupIdsIndex].AsString(m_addSecurityGroupIds[addSecurityGroupIdsIndex]);
   }
   payload.WithArray("addSecurityGroupIds", std::move(addSecurityGroupIdsJsonList));

  }

  if(m_addSubnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addSubnetIdsJsonList(m_addSubnetIds.size());
   for(unsigned addSubnetIdsIndex = 0; addSubnetIdsIndex < addSubnetIdsJsonList.GetLength(); ++addSubnetIdsIndex)
   {
     addSubnetIdsJsonList[addSubnetIdsIndex].AsString(m_addSubnetIds[addSubnetIdsIndex]);
   }
   payload.WithArray("addSubnetIds", std::move(addSubnetIdsJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_removeSecurityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> removeSecurityGroupIdsJsonList(m_removeSecurityGroupIds.size());
   for(unsigned removeSecurityGroupIdsIndex = 0; removeSecurityGroupIdsIndex < removeSecurityGroupIdsJsonList.GetLength(); ++removeSecurityGroupIdsIndex)
   {
     removeSecurityGroupIdsJsonList[removeSecurityGroupIdsIndex].AsString(m_removeSecurityGroupIds[removeSecurityGroupIdsIndex]);
   }
   payload.WithArray("removeSecurityGroupIds", std::move(removeSecurityGroupIdsJsonList));

  }

  if(m_removeSubnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> removeSubnetIdsJsonList(m_removeSubnetIds.size());
   for(unsigned removeSubnetIdsIndex = 0; removeSubnetIdsIndex < removeSubnetIdsJsonList.GetLength(); ++removeSubnetIdsIndex)
   {
     removeSubnetIdsJsonList[removeSubnetIdsIndex].AsString(m_removeSubnetIds[removeSubnetIdsIndex]);
   }
   payload.WithArray("removeSubnetIds", std::move(removeSubnetIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateVpcEndpointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpenSearchServerless.UpdateVpcEndpoint"));
  return headers;

}




