﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/ActivateGatewayRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ActivateGatewayRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_activationKeyHasBeenSet)
  {
   payload.WithString("ActivationKey", m_activationKey);

  }

  if(m_gatewayNameHasBeenSet)
  {
   payload.WithString("GatewayName", m_gatewayName);

  }

  if(m_gatewayTimezoneHasBeenSet)
  {
   payload.WithString("GatewayTimezone", m_gatewayTimezone);

  }

  if(m_gatewayRegionHasBeenSet)
  {
   payload.WithString("GatewayRegion", m_gatewayRegion);

  }

  if(m_gatewayTypeHasBeenSet)
  {
   payload.WithString("GatewayType", m_gatewayType);

  }

  if(m_tapeDriveTypeHasBeenSet)
  {
   payload.WithString("TapeDriveType", m_tapeDriveType);

  }

  if(m_mediumChangerTypeHasBeenSet)
  {
   payload.WithString("MediumChangerType", m_mediumChangerType);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ActivateGatewayRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.ActivateGateway"));
  return headers;

}




