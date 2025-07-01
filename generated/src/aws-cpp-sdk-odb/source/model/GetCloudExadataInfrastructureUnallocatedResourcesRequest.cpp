/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/odb/model/GetCloudExadataInfrastructureUnallocatedResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetCloudExadataInfrastructureUnallocatedResourcesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_cloudExadataInfrastructureIdHasBeenSet)
  {
   payload.WithString("cloudExadataInfrastructureId", m_cloudExadataInfrastructureId);

  }

  if(m_dbServersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dbServersJsonList(m_dbServers.size());
   for(unsigned dbServersIndex = 0; dbServersIndex < dbServersJsonList.GetLength(); ++dbServersIndex)
   {
     dbServersJsonList[dbServersIndex].AsString(m_dbServers[dbServersIndex]);
   }
   payload.WithArray("dbServers", std::move(dbServersJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetCloudExadataInfrastructureUnallocatedResourcesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.GetCloudExadataInfrastructureUnallocatedResources"));
  return headers;

}




