/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/CreateCloudExadataInfrastructureRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateCloudExadataInfrastructureRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_shapeHasBeenSet)
  {
   payload.WithString("shape", m_shape);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_availabilityZoneIdHasBeenSet)
  {
   payload.WithString("availabilityZoneId", m_availabilityZoneId);

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

  if(m_computeCountHasBeenSet)
  {
   payload.WithInteger("computeCount", m_computeCount);

  }

  if(m_customerContactsToSendToOCIHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customerContactsToSendToOCIJsonList(m_customerContactsToSendToOCI.size());
   for(unsigned customerContactsToSendToOCIIndex = 0; customerContactsToSendToOCIIndex < customerContactsToSendToOCIJsonList.GetLength(); ++customerContactsToSendToOCIIndex)
   {
     customerContactsToSendToOCIJsonList[customerContactsToSendToOCIIndex].AsObject(m_customerContactsToSendToOCI[customerContactsToSendToOCIIndex].Jsonize());
   }
   payload.WithArray("customerContactsToSendToOCI", std::move(customerContactsToSendToOCIJsonList));

  }

  if(m_maintenanceWindowHasBeenSet)
  {
   payload.WithObject("maintenanceWindow", m_maintenanceWindow.Jsonize());

  }

  if(m_storageCountHasBeenSet)
  {
   payload.WithInteger("storageCount", m_storageCount);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_databaseServerTypeHasBeenSet)
  {
   payload.WithString("databaseServerType", m_databaseServerType);

  }

  if(m_storageServerTypeHasBeenSet)
  {
   payload.WithString("storageServerType", m_storageServerType);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateCloudExadataInfrastructureRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.CreateCloudExadataInfrastructure"));
  return headers;

}




