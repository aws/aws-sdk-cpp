/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/AssociateFileSystemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateFileSystemRequest::AssociateFileSystemRequest() : 
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_gatewayARNHasBeenSet(false),
    m_locationARNHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_auditDestinationARNHasBeenSet(false),
    m_cacheAttributesHasBeenSet(false),
    m_endpointNetworkConfigurationHasBeenSet(false)
{
}

Aws::String AssociateFileSystemRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_locationARNHasBeenSet)
  {
   payload.WithString("LocationARN", m_locationARN);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_auditDestinationARNHasBeenSet)
  {
   payload.WithString("AuditDestinationARN", m_auditDestinationARN);

  }

  if(m_cacheAttributesHasBeenSet)
  {
   payload.WithObject("CacheAttributes", m_cacheAttributes.Jsonize());

  }

  if(m_endpointNetworkConfigurationHasBeenSet)
  {
   payload.WithObject("EndpointNetworkConfiguration", m_endpointNetworkConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateFileSystemRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.AssociateFileSystem"));
  return headers;

}




